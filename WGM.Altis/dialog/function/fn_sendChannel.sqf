/*
	File: fn_sendChannel.sqf
	Author: alleskapot & Lifted
	Thanks again for all the help alleskapot!
	Description:
	Ermöglicht senden bzw. die Abfrage des Geschriebenen.

*/

private["_message"];
disableSerialization;

waitUntil {!isnull (findDisplay 9000)};

if ( life_cash < 50 ) exitWith { systemChat "Il vous faut 50 € pour envoyer un message à la Radio !"; }; // Hint if person haves no 6000 dollar
if !( life_channel_send ) exitWith { systemChat "Attendre 10 minutes avant d'envoyer un nouveau message!"; }; //Gives Player the Hint to Wait 10 mins
life_cash = life_cash - 50;

_message = ctrlText 9001;
[[3,format ["Le journaliste " %1 " a envoyé un communiqué de presse sur WGM News TV : %2     |     ",name player,_message]],"life_fnc_broadcast",true,false] call life_fnc_MP;

[] spawn
{
	sleep 600;
	life_channel_send = true;
};