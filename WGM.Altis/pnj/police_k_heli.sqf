this enableSimulation false; this allowDamage false;

this addAction["Hélicoptères",life_fnc_vehicleShopMenu,["cop_air",west,"cop_air_1","cop","Police de Kavala"]];
this addAction["Garage",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] call life_fnc_MP;
 createDialog "Life_impound_menu";
 disableSerialization;
 ctrlSetText[2802,"Recherche de l'helicoptere ..."];
 life_garage_sp = "cop_air_1";
 life_garage_type = "Air";
 },"",0,false,false,"",'playerSide == west'];
this addAction["Ranger l'helicoptere'",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];