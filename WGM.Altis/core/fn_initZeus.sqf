/*
    File: fn_initZeus.sqf
    Author: John "Paratus" VanderZwet

    Description:
    Zeus Initialization file.
*/
#include <macro.h>

player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
[] spawn life_fnc_copMarkers;

if(FETCH_CONST(life_adminlevel) < 5) exitWith

{
    endMission "Loser";
};