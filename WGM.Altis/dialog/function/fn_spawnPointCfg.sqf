/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		//Avec licence giap
        if(license_cop_giap && playerSide == west) then {
        	_return = [
            ["cop_spawn_1","QG Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","QG Pyrgos","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","QG Athira","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","QG Aeroport","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Patrouille autoroute","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_zaros","QG de Campagne","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["giap_spawn_1","GIAP spawn","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
        };

        //Avec licence legion
        if(license_cop_legion && playerSide == west) then {
        	_return = [
            ["cop_spawn_1","QG Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","QG Pyrgos","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","QG Athira","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","QG Aeroport","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Patrouille autoroute","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_zaros","QG de Campagne","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["legion_spawn_1","Legion spawn","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
        };

        //Avec les deux licences
        if(license_cop_legion && license_cop_giap && playerSide == west) then {
        	_return = [
            ["cop_spawn_1","QG Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","QG Pyrgos","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","QG Athira","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","QG Aeroport","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Patrouille autoroute","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_zaros","QG de Campagne","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["legion_spawn_1","Legion spawn","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["giap_spawn_1","GIAP spawn","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
        };

        //zero licences
        if(!license_cop_legion && !license_cop_giap && playerSide == west) then {
        	_return = [
            ["cop_spawn_1","QG Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","QG Pyrgos","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","QG Athira","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","QG Aeroport","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Patrouille autoroute","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_zaros","QG de Campagne","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
        	];
		};
	};
	
	case civilian:
	{
		if(playerSide == civilian) then {
        	_return = [
            ["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
    };

	if(license_civ_milice && playerSide == civilian) then {
        	_return = [
            ["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["milice_spawn","Milice","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
    };
	
	if(license_civ_mafia && playerSide == civilian) then {
        	_return = [
            ["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["mafia_spawn","Mafia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
    };
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Athira Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;