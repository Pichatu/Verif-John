this enableSimulation false; this allowDamage false;

this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "mAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "mAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"mAir",0,false,false,"",' !license_med_mAir && playerSide == independent '];
this addAction["Equipements",life_fnc_weaponShopMenu,"med_basic"];
this addAction["Ranger vehicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];