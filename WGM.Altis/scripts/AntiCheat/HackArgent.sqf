waitUntil {!isNull player};
waitUntil {player == player};
waitUntil {!isNil "statsLoaded"};

sleep 5;

_uidSauter = ["76561198027387365"];
			 
if(getPlayerUID player in _uidSauter) exitWith {};
if (profileName == "John Dyruc") exitWith {};

sleep 15;
if((player getVariable "life_atmcash") > 10000000)then
{
	player setVariable["life_atmcash",10000000,true];	
	
	if (isnil "hackargent") then {hackargent = 0;};
	if (hackargent == 0) then 
	{
		hackargent = 1;
		hint "! Attention ! \n\n Nous avons detecté que vous avez beaucoup d'argent sur votre compte (+ de 10 000 000 Euros) ! \n\n Vous ne pourrez plus depasser cette somme ! \n\n Polar-Zone!";
		sleep 2;
		hint "! Attention ! \n\n Nous avons detecté que vous avez beaucoup d'argent sur votre compte (+ de 10 000 000 Euros) ! \n\n Vous ne pourrez plus depasser cette somme ! \n\n Polar-Zone!";
		sleep 2;
		hint "! Attention ! \n\n Nous avons detecté que vous avez beaucoup d'argent sur votre compte (+ de 10 000 000 Euros) ! \n\n Vous ne pourrez plus depasser cette somme ! \n\n Polar-Zone!";
	};
};

//execVM "Scripts\AntiCheat\HackArgent.sqf";