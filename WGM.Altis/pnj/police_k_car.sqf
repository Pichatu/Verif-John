this enableSimulation false; this allowDamage false;

this addAction["Concessionnaire",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_1","cop","Police de Kavala"]];
this addAction["Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] call life_fnc_MP;
 createDialog "Life_impound_menu";
 disableSerialization;
 ctrlSetText[2802,"Recherche du vehicule ..."];
 life_garage_sp = "cop_car_1";
 life_garage_type = "Car";
 },"",0,false,false,"",'playerSide == west'];
this addAction["Ranger vehicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];
this setVariable["realname","Concessionnaire Policier"];