this enableSimulation false;
  this addAction["Equipements",life_fnc_virt_menu,"cop"];
  this allowDamage false;
  this addAction["Pressing",life_fnc_clothingMenu,"cop"];
  this addAction["Armurerie",life_fnc_weaponShopMenu,"cop_basic"];
  this addAction["Patrol Officer Armurerie",life_fnc_weaponShopMenu,"cop_patrol"];
  this addAction["Sergeant Armurerie",life_fnc_weaponShopMenu,"cop_sergeant"];
  this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "cAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cAir",0,false,false,"",' !license_cop_cAir && playerSide == west '];
  this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "coastguard" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "coastguard" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"coastguard",0,false,false,"",' !license_cop_cg && playerSide == west '];
