#include <macro.h>

StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\msgBienvenue.sqf";
[] execVM "scripts\teargas.sqf";
[] execVM "scripts\fieldRandom.sqf";
[] execVM "scripts\AntiCheat\HackArgent.sqf";
[] execVM "scripts\statusbar\statusBar.sqf";
[] execVM "scripts\AntiCheat\Anticheat.sqf";
[] execVM "scripts\fastrope.sqf";
[] execVM "scripts\Chair\init.sqf";

BipBipOn=true;
publicVariable "BipBipOn";

StartProgress = true;

if(FETCH_CONST(life_coplevel) > 0 && FETCH_CONST(life_adminlevel) == 0) then {
	{_x setMarkerAlphaLocal 0} forEach ["turle_dealer","turle_dealer_1","turle_dealer_2","turtle_1_name_1","turtle_1_name_2","turtle_1_name_3","cocaine processing","Weed_p_1","heroin_p","Dealer_1","Dealer_2","Dealer_3","weed_1","cocaine_1","heroin_1","gang_area_1","gang_area_2","gang_area_3","Rebelop","Rebelop_1","Rebelop_2"];
};

enableRadio false;