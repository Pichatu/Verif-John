this allowDamage false; removeallWeapons this; this enableSimulation false;

  this addAction["Magasin de plongee",life_fnc_clothingMenu,"dive"];
  this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "dive" >> "displayName")),[(getNumber(missionConfigFile >> "Licenses" >> "dive" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"dive",0,false,false,"",' !license_civ_dive && playerSide == civilian '];
