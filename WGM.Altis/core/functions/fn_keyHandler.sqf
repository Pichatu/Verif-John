#include <macro.h>
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys","_player","_Automobile","_VitesseX"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;
_player = player;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {219} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do {
	//Space key for Jumping
	case 57: {
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[[player,false],"life_fnc_jumpFnc",nil,FALSE] call life_fnc_MP; //Global execution 
			_handled = true;
		};
	};
	
	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
		};
	};
	
	//Holster / recall weapon.
	case 35:
	{
		if(_shift && !_ctrlKey && (currentWeapon player == "")) then {
			[0] call life_fnc_holsterWeapon;
		};
		
		if(!_shift && _ctrlKey && (currentWeapon player != "")) then {
			[1] call life_fnc_holsterWeapon;
		};	
	};
	
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};
	
	//Restraining or robbing (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			[] call life_fnc_restrainAction;
			if("ItemRadio" in assignedItems cursorTarget) then {
			cursorTarget removeweapon "ItemRadio";
			hint "Son iDaube est tombée au sol, ramasse le avant qu'il n'appelle la Police !";
			_defenceplace1 = "Item_ItemRadio" createVehicle (player modelToWorld[0,0,0]);}

			else { hint "Ce pauvre a pas de téléphone, jette le et tire toi, perds pas ton temps !"};
		};
		
		//Robbing
		if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then
		{
			if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == RIFLE OR currentWeapon player == PISTOL) && currentWeapon player != "" && !life_knockout && !(player GVAR["restrained",false]) && !life_istazed && !(player GVAR["surrender",false])) then
			{
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
			_handled = true;
		};
	};
	
	//Tab (surrender)
	case 15:
	{
		if (vehicle player == player && !(player GVAR ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
		{
			if (player GVAR ["surrender", false]) then
			{
				player SVAR ["surrender", false, true];
			} else
			{
				[] spawn life_fnc_surrender;
			};
		};
	};
	
	//T Key (Trunk)
	case 20: {
		if(!_alt && !_ctrlKey && !life_is_processing) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["landVehicle","Air","Ship","House_F"];
				if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget}) then {
					if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then {
						[cursorTarget] call life_fnc_openInventory;
					};
				};
			};
		};
	};

	//Touche S BipBip camion
	case 31:
	{
		if ((BipBipOn) and (vehicle player != player && (typeOf vehicle player) in ["C_Van_01_transport_F"])) then {
			_Automobile = [vehicle player,0] call BIS_fnc_param;
			_VitesseX = speed _Automobile;
			
			if (_VitesseX < 0) then {
				BipBipOn = false;
				publicVariable "BipBipOn";
				[[_Automobile,1],"life_fnc_BipBipCamion"] call life_fnc_MP;
			};
		};
	};

	//L Key?
	case 38: {
		//If cop run checks for turning lights on.
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player && (typeOf vehicle player) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F"]) then {
				if(!isNil {vehicle player GVAR "lights"}) then {
					if(playerSide == west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};
		
		//if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};

	case 15:
	{
	if (!_alt && !_ctrlKey && playerSide == west) then
		{
			[] call life_fnc_radar;
		};
	};
	
	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && !life_is_processing) then {
			[] call life_fnc_p_openMenu;
		};
	};
	
	//F Key
	case 33: {
		if(playerSide in [west,independent] && {vehicle player != player} && {!life_siren_active} && {((driver vehicle player) == player)}) then {
			[] spawn {
				life_siren_active = true;
				sleep 4.7;
				life_siren_active = false;
			};
			
			_veh = vehicle player;
			if(isNil {_veh GVAR "siren"}) then {_veh SVAR ["siren",false,true];};
			if((_veh GVAR "siren")) then {
				titleText [localize "STR_MISC_SirensOFF","PLAIN"];
				_veh SVAR ["siren",false,true];
			} else {
				titleText [localize "STR_MISC_SirensON","PLAIN"];
				_veh SVAR ["siren",true,true];
				if(playerSide == west) then {
					[[_veh],"life_fnc_copSiren",nil,true] call life_fnc_MP;
				};
				if(playerSide == independent) then {
					[[_veh],"life_fnc_medicSiren",nil,true] call life_fnc_MP;
				}
			};
		};
	};
	
	//U Key
	case 22: {
		if(!_alt && !_ctrlKey) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};
			
			if(_veh isKindOf "House_F" && {playerSide == civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 8) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(EQUAL(_door,0)) exitWith {hint localize "STR_House_Door_NotNear"};
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];
					
					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						hint composeText [ image "icons\lock.paa", localize "STR_House_Door_Lock" ];
						player say3D "car_lock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						hint composeText [ image "icons\unlock.paa", localize "STR_House_Door_Unlock" ];
						player say3D "car_unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if(EQUAL(_locked,2)) then {
						if(local _veh) then {
							_veh lock 0;
						} else {
							[[_veh,0],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
						};
						hint composeText [ image "icons\unlock.paa", localize "STR_House_Door_Unlock" ];
						player say3D "car_unlock";
					} else {
						if(local _veh) then {
							_veh lock 2;
						} else {
							[[_veh,2],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
						};	
						hint composeText [ image "icons\lock.paa", localize "STR_House_Door_Lock" ];
						player say3D "car_lock";
					};
				};
			};
		};
	};



	// ANTI ALT + F4
	 case 62:
{
    if(_alt && !_shift) then 
	{
	SOCK_fnc_updateRequest;
    diag_log format ["WGM : %1 utilise ALT+F4 (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]];
    [[1,format["WGM : %1 utilise ALT+F4 (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	SOCK_fnc_updateRequest;
    };
};
	
// ANTI CTRL + ALT + DEL
    case 211:
{
    if(_ctrlKey && _alt)  then 
    {
	SOCK_fnc_updateRequest;
    diag_log format ["WGM : %1 utilise CTRL + ALT + DEL (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]];
    [[1,format["WGM : %1 utilise CTRL + ALT + DEL  (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
	SOCK_fnc_updateRequest;
    };
};
	
// ANTI CTRL + ESC
    case 1:
{
    if( _ctrlKey )  then 
	{
	SOCK_fnc_updateRequest;
    diag_log format ["WGM : %1 utilise CTRL + ESC (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]];
    [[1,format["WGM : %1 utilise CTRL + ESC (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
       SOCK_fnc_updateRequest;
	};
};	

// ANTI ALT + ESC
    case 1:
{
    if( _alt )  then 
	{
	SOCK_fnc_updateRequest;
    diag_log format ["WGM : %1 utilise CTRL + ESC (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]];
    [[1,format["WGM : %1 utilise CTRL + ESC (Prenez une capture et signalez le sur le Forum)",_player getVariable["realname",name _player]]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
       SOCK_fnc_updateRequest;
	};
};

// F3 pour mettre ou retirer les boules quiès
// appuyer sur le shift droit du clavier ou changer de touche, car en conflit avec le message du DLC Arma
	case 61:
	{
		if(!_alt && !_ctrlKey) then {
			switch (player getVariable["boulequies",0]) do {
				case 0: {hintSilent "Bouchons d'oreilles enfoncés à 80%"; 1 fadeSound 0.2; player setVariable ["boulequies", 10]; };
				case 10: {hintSilent "Bouchons d'oreilles enfoncés à 50%"; 1 fadeSound 0.5; player setVariable ["boulequies", 40]; };
				case 40: {hintSilent "Bouchons d'oreilles enfoncés à 20%"; 1 fadeSound 0.8; player setVariable ["boulequies", 70]; };
				case 70: {hintSilent "Bouchons d'oreilles enlevés"; 1 fadeSound 1; player setVariable ["boulequies", 0]; };
			};
		};
	};

};

_handled;
