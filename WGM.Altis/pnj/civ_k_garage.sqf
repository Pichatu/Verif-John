this enableSimulation false; this allowDamage false;

 this addAction["Garage Vehicules",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] call life_fnc_MP;
 life_garage_type = "Car";
   createDialog "Life_impound_menu";
   disableSerialization;
   ctrlSetText[2802,"Recherche du vehicule ..."];
   life_garage_sp = "car_g_1";
  }];
  this addAction["Ranger le vehicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];