#include <macro.h>
/*
    File: fn_adminGodMode.sqf
    Author: Tobias 'Xetoxyc' Sittenauer

    Description: Enables God mode for Admin
*/

if((FETCH_CONST(life_adminlevel) < 3 )) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
while {dialog} do {
closeDialog 0;
sleep 0.01;
};
};

if(life_god) then {
    life_god = false;
    titleText ["Mode Dieu activé","PLAIN"]; titleFadeOut 2;
    player allowDamage true;
} else {
    life_god = true;
    titleText ["Mode Dieu désactivé","PLAIN"]; titleFadeOut 2;
    player allowDamage false;
}; 