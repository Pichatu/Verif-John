removeAllWeapons this; this allowDamage false; this enableSimulation false;
 this addAction["Dealeur",life_fnc_virt_menu,"drugdealer",0,false,false,"",' vehicle player == player && player distance _target < 5 && playerSide == civilian '];
 this addAction["Interroger Dealeur",life_fnc_questionDealer,"",0,false,false,"",' vehicle player == player && player distance _target < 5 && playerSide == west && !life_action_inUse '];