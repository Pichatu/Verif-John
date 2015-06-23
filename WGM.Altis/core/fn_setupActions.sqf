#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case west:
	{

		//Allumer les girophares
        life_actions = life_actions + [player addAction["<t color='#75F75A'>Gyrophares</t>",{
            [vehicle player] call life_fnc_sirenLights;
        },"",0,false,false,"",' vehicle player != player && ((typeOf vehicle player) in ["I_Quadbike_01_F","C_Offroad_01_F","C_SUV_01_F","B_MRAP_01_F","C_Hatchback_01_sport_F","I_MRAP_03_F","B_Heli_Light_01_F","B_Heli_Transport_03_unarmed_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F","B_Heli_Transport_01_F"]) && !isNil {vehicle player getVariable "lights"} && ((driver vehicle player) == player) && !(vehicle player getVariable ["lights", false]) ']];

        //Allumer sirene
        life_actions = [player addAction["<t color='#EBEE3E'>Sirene Courte</t>",{
            _veh = vehicle player;
            titleText [localize "STR_MISC_SirensON","PLAIN"];
            _veh setVariable["siren",true,true];
            [[_veh],"life_fnc_copSiren1",nil,true] spawn life_fnc_MP;
        },"",0,false,false,"",' vehicle player != player && !isNil {vehicle player getVariable "lights"} && !(vehicle player getVariable ["lights", false]) ']];
        
        //Allumer sirene
        life_actions = [player addAction["<t color='#E18B22'>Sirene Controle</t>",{
            _veh = vehicle player;
            titleText [localize "STR_MISC_SirensON","PLAIN"];
            _veh setVariable["siren",true,true];
            [[_veh],"life_fnc_copSiren2",nil,true] spawn life_fnc_MP;
        },"",0,false,false,"",' vehicle player != player && ((driver vehicle player) == player) ']];

        //Allumer sirene
        life_actions = [player addAction["<t color='#E14C22'>Sirene Sommation</t>",{
            _veh = vehicle player;
            titleText [localize "STR_MISC_SirensON","PLAIN"];
            _veh setVariable["siren",true,true];
            [[_veh],"life_fnc_copSiren3",nil,true] spawn life_fnc_MP;
        },"",0,false,false,"",' vehicle player != player && ((driver vehicle player) == player) ']];


        //Eteindre tout
        life_actions = life_actions + [player addAction["<t color='#E14C22'>Eteindre</t>",{
            _veh = vehicle player;
            _veh setVariable["lights",false,true];
            _veh setVariable["siren",false,true];
        },"",0,false,false,"",' vehicle player != player && ((driver vehicle player) == player) ']];

        //Entrer dans un vehicule meme verouillé
        life_actions = life_actions + [player addAction["<t color='#000000'>Monter en conducteur</t>",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
        life_actions = life_actions + [player addAction["<t color='#000000'>Monter en passager</t>",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']]; 
        life_actions = life_actions + [player addAction["<t color='#000000'>Descendre</t>",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];

        //Saisir les objets au sol
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Saisir les objets au sol</t>",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'(count(nearestObjects [player,["weaponholder"],3])>0)']];
	};

	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		
        //Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && ((animationState cursorTarget == "Incapacitated") OR (animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon")) && !(cursorTarget GVAR["robbed",FALSE]) ']];
        
        // Suicide Bomb
        life_actions = life_actions + [player addAction["Activer Veste Explosive",life_fnc_suicideBomb,"",0,false,false,"",
        'vest player == "V_HarnessOGL_brn" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];

        // Suicide Bomb2
        life_actions = life_actions + [player addAction["Active explosive vest",life_fnc_suicideBomb2,"",0,false,false,"",
        'vest player == "Specter_MBSS_PACA_l_WTF" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
        
	};
};
