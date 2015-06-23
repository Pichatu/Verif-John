/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
	Traduit et édité par : Johnny
    
    DESCRIPTION:
    Tue joueur tirant dans une zone safe
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES    [ ["safekavala", 400],["safepyrgos", 400],["safeathira", 400],["safesofia", 400] ] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "Tu es mort car tu as tiré dans une safe zone"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case civilian:
	{


     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
			 titleText [MESSAGE, "PLAIN", 3];
			 player setDamage ((getDammage player) + 0.2); //Pan t'es mort
			 hint parseText format["<t color='#01B0F0'><t size ='2.5'<t align='center'>Safe Zone<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de tirs<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de vols<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de braquage<br/><t"];
			 };
        }];  
	};
};