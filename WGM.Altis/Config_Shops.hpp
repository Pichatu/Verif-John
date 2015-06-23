class WeaponShops {
    //Armory Shops
    class gun {
        name = "Armurerie";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
			{ "Trixie_M14_Black", "", 20000 },
			{ "Trixie_M14_Green", "", 20000 },
			{ "Trixie_M14", "", 20000 },
			{ "Trixie_M14DMR_Clean_Pink", "", 20000 },
			{ "Trixie_M14DMR_Clean_Black", "", 20000 },
			{ "Trixie_M14DMR_Clean", "", 20000 },
			{ "Trixie_M14DMR_NG_Black_Short", "", 20000 },
			{ "Trixie_M14DMR_NG_Short", "", 20000 },
			{ "Trixie_M14DMR_NG_Black", "", 20000 },
			{ "Trixie_M14DMR_NG", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_LRPS", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
			{ "Trixie_20x762_Mag", "", 50 },
			{ "Trixie_5x762_Mag", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Armurerie Rebelle";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
            { "arifle_Katiba_F", "", 30000 },
            { "srifle_DMR_01_F", "", 50000 },
            { "arifle_SDAR_F", "", 20000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
            { "30Rnd_9x21_Mag", "", 200 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "10Rnd_762x51_Mag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "V_HarnessOGL_brn", "Veste Kamikaze", 10000 }
        };
    };
    class gang {
        name = "Armement de gang";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
			{ "Trixie_M24_Black_Clean", "", 50 },
			{ "Trixie_M24_Clean", "", 50 },
			{ "Trixie_M24_Black", "", 50 },
			{ "Trixie_M24", "", 50 },
			{ "Trixie_M40A3_Clean", "", 50 },
			{ "Trixie_M40A3", "", 50 },
			{ "Trixie_M40A3_NG", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Armurerie Police";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ItemRadio", "Téléphone", 100 },
        	{ "R3F_M4S90", "Benneli M4", 20000 },
			{ "R3F_HK416M_DES", "HK416", 2000 },
			{ "R3F_HK416M_HG_DES", "HK16 Camo", 7500 },
            { "SMG_02_F", "Sting", 50 },
            { "DDOPP_X26", "Tazer", 125 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "Binocular", "Jumelles", 150 },
			{ "ItemGPS", "GPS", 100 },
			{ "ToolKit", "", 250 },
			{ "muzzle_snds_L", "ckwa?", 650 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 1000 },
			{ "R3F_7Rnd_M4S90", "Benneli M4 Munitions", 2000 },
            { "R3F_30Rnd_556x45_HK416", "HK416 Munitions", 2000 },
            { "30Rnd_65x39_caseless_mag", "MXC Munitions", 2000 },
            { "30Rnd_9x21_Mag", "Sting Munitions", 2000 },
            { "DDOPP_1Rnd_X26", "Tazer Munitions", 2000 },
            { "R3F_EOTECH", "Lunette Eotech", 2000 },
            { "acc_pointer_IR", "Pointeur Laser", 2000 },
            { "R3F_SILENCIEUX_HK416", "Silencieux HK416", 2000 },
            { "acc_flashlight", "Lampe Torche", 2000 },
            { "optic_Holosight", "Holosight", 2000 },
            { "muzzle_snds_H", "Silencieux MXC", 2000 },
            { "muzzle_snds_L", "Silencieux 9mm", 2000 }
        };
    };
    class cop_patrol {
        name = "Amurerie Police Patrol Officer";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Patrol Officer Rank!";
        items[] = {
        	{ "arifle_MX_F", "", 35000 },
			{ "SMG_02_ACO_F", "", 30000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "MineDetector", "", 1000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 }
        };
    };
    class cop_sergeant {
        name = "Amurerie Police Altis Sergeant";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
			{ "hgun_ACPC2_F", "", 17500 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "arifle_MXC_F", "", 30000 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_9x21_Mag", "", 60 },
			{ "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "Pharmacie";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };

    //Legion Shops
    class legion {
        name = "Legion";
        side = "cop";
        license = "legion";
        level = -1;
        items[] = {
            { "ItemGPS", "Legion", 100 },
            { "Binocular", "", 150 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "Medikit", "", 500 },
            { "NVGoggles", "", 1200 },
            { "R3F_Famas_F1_DES", "Famas F1 Camo", 0 },
            { "R3F_Famas_F1_M203_DES", "Famas F1 Camo M203", 0 },
            { "R3F_25Rnd_556x45_FAMAS", "Chargeur Famas", 0 },
            { "1Rnd_HE_Grenade_shell", "LG Grenade", 0 },
            { "R3F_FRF2_DES", "FRF2 Camo", 0 },
            { "R3F_10Rnd_762x51_FRF2", "FRF2 Munitions", 0 },
            { "R3F_PGM_Hecate_II_DES", "PGM Camo", 0 },
            { "R3F_7Rnd_127x99_PGM", "PGM Munitions", 0 },
            { "R3F_7Rnd_127x99_PGM", "PGM Munitions Explosives", 0 },
            { "R3F_Minimi_762", "Mini Para", 0 },
            { "R3F_100Rnd_762x51_MINIMI", "Mini Munitions", 0 },
            { "R3F_ERYX", "Eryx", 0 },
            { "R3F_ERYX_Mag", "Eryx Missile", 0 },
            { "R3F_AT4CS", "AT4", 0 },
            { "R3F_AT4CS_Mag", "AT4 Missile", 0 },
            { "R3F_PAMAS", "Pamas", 0 },
            { "R3F_15Rnd_9x19_PAMAS", "Pamas Munitions", 0 },
            { "R3F_LAMPE_SURB_DES", "Lampe Torche", 0 },
            { "R3F_J4_DES", "Lunette Famas", 0 },
            { "R3F_J8_MILDOT_DES", "Lunette Sniper", 0 },
            { "R3F_SILENCIEUX_FRF2_DES", "Silencieux FRF2", 0 },
            { "optic_Nightstalker", "NightStalker", 0 },
            { "R3F_OB50", "Lunette Mini PARA", 0 },
            { "R3F_JIM_LR_DES", "Télémètre", 0 },
            { "B_FieldPack_ocamo", "", 0 }
        };
    };

    //GIAP Shops
    class giap {
        name = "GIAP";
        side = "cop";
        license = "giap";
        level = -1;
        items[] = {
            { "ItemGPS", "GIAP", 100 },
            { "Binocular", "", 150 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "Medikit", "", 500 },
            { "NVGoggles", "", 1200 },
            { "B_FieldPack_ocamo", "", 3000 },
            { "Trixie_AS50", "AS50", 0 },
            { "Trixie_10x127_Mag", "AS50 Munitions", 0 },
            { "R3F_M107_DES", "M107", 0 },
            { "R3F_10Rnd_127x99_M107", "M107 Munitions", 0 },
            { "R3F_M4S90", "Benneli M4", 0 },
            { "R3F_7Rnd_M4S90", "Benneli M4 Munitions", 0 },
            { "R3F_Famas_F1", "Famas F1", 0 },
            { "R3F_Famas_F1_M203", "Famas F1 LG", 0 },
            { "R3F_25Rnd_556x45_FAMAS", "Famas F1 Munitions", 0 },
            { "1Rnd_HE_Grenade_shell", "Grenade LG", 0 },
            { "1Rnd_SmokeRed_Grenade_shell", "Grenade LG Rouge", 0 },
            { "1Rnd_SmokeGreen_Grenade_shell", "Grenade LG Vert", 0 },
            { "1Rnd_SmokeWhite_Grenade_shell", "Grenade LG Blanche", 0 },
            { "R3F_30Rnd_556x45_HK416", "HK416 Camo", 0 },
            { "R3F_HK416M_HG_DES", "HK416 LG Camo", 0 },
            { "R3F_HK416M_HG_DES", "HK416 Munitions", 0 },
            { "Trixie_M110_NG_Black", "M110 SAS Black", 0 },
            { "Trixie_M110", "M110 SAS Camo net", 0 },
            { "Trixie_20x762_Mag", "M110 Munitions", 0 },
            { "srifle_LRR_F", "M320 LRR", 0 },
            { "7Rnd_408_Mag", "M320 Munitions", 0 },
            { "srifle_EBR_F", "MK18", 0 },
            { "20Rnd_762x51_Mag", "MK18 Munitions", 0 },
            { "R3F_MP5SD", "MP5 SD", 0 },
            { "R3F_30Rnd_9x19_MP5", "MP5 Munitions", 0 },
            { "SMG_02_F", "Sting", 0 },
            { "30Rnd_9x21_Mag", "Sting Munitions", 0 },
            { "DDOPP_X26", "Tazer", 0 },
            { "DDOPP_1Rnd_X26", "Tazer Munitions", 0 },
            { "R3F_PAMAS", "Pamas", 0 },
            { "R3F_15Rnd_9x19_PAMAS", "Pamas Munitions", 0 },
            { "R3F_AT4CS", "AT4", 0 },
            { "R3F_AT4CS_Mag", "Missile AT4", 0 },
            { "R3F_ZEISS_DES", "Lunette Sniper ZEISS", 0 },
            { "optic_Nightstalker", "Nightstalker", 0 },
            { "R3F_LAMPE_SURB", "Lampe torche R3F", 0 },
            { "R3F_J4", "Lunette J4", 0 },
            { "R3F_SILENCIEUX_FAMAS", "Silencieux Famas", 0 },
            { "R3F_EOTECH", "Lunette Eotech", 0 },
            { "acc_pointer_IR", "Pointeur Laser", 0 },
            { "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
            { "acc_flashlight", "Lampe Torche", 0 },
            { "optic_Holosight", "Holosight", 0 },
            { "Trixie_Cyclone_Net", "Silencieux M110 Ghillie", 0 },
            { "Trixie_SB31250_Net", "Lunette sniper M110 Ghillie", 0 },
            { "optic_Arco", "Lunette ARCO", 0 },
            { "muzzle_snds_B", "Silencieux 7.62mm", 0 },
            { "muzzle_snds_L", "Silencieux 9mm", 0 },
            { "R3F_JIM_LR_DES", "Télémètre", 0 },
            { "B_FieldPack_ocamo", "", 0 }
        };
    };
	// milice shops
    class milice_armes{
        name = "Armurerie Milice";
        side = "civ";
        license = "milice";
        level = -1;
        msg = "";
        items[] = {
            { "launch_RPG7V", "", 0 }, //Arme
			{ "launch_RPG7V_F", "", 0 }, //Arme
            { "Cha_Pecheneg", "", 0 }, //Arme
            { "Cha_PK", "", 0 }, //Arme
            { "srifle_DMR_01_F", "", 0 }, //Arme
            { "hgun_ACPC2_F", "", 0 }, //Arme
            { "hgun_Pistol_heavy_02_F", "", 0 }, //Arme
            { "hgun_Rook40_F", "", 0 }, //Arme
            { "hgun_Pistol_Signal_F", "", 0 }, //Arme
			{ "hgun_Grach", "Grach", 0 }, //Arme
			{ "hgun_Pistol_Signal_F", "Pistolet d'alarme", 0 }, //Arme
			{ "hgun_Pistol_heavy_02_F", "Zubr", 0 }, //Arme
			{ "arifle_SUD_AK105", "", 0 }, //Arme
			{ "arifle_SUD_AK107_GL", "", 0 }, //Arme
			{ "arifle_SUD_AK74M", "", 0 }, //Arme
			{ "arifle_SUD_AK74M_GL", "", 0 }, //Arme
			{ "arifle_SUD_AK107", "", 0 }, //Arme
			{ "arifle_SUD_AKMS", "", 0 }, //Arme
			{ "arifle_SUD_AKMS_GL", "", 0 }, //Arme
			{ "LMG_SUD_Pecheneg_M", "", 0 }, //Arme
			{ "Cha_PK", "PK", 0 }, //Arme
			{ "srifle_SUD_SVD", "", 0 }, //Arme
			{ "srifle_SUD_SVDS", "", 0 }, //Arme
			{ "srifle_SUD_SVU107", "", 0 }, //Arme
			{ "arifle_SUD_VAL", "", 0 }, //Arme
			{ "srifle_SUD_VSS", "", 0 }, //Arme
			{ "LMG_SUD_RPK107", "", 0 }, //Arme
			{ "Cha_Pecheneg", "", 0 }, //Arme
			{ "arifle_SDAR_F", "", 0 }, //Arme
			{ "Trixie_AS50", "", 0 }, //Arme
			{ "Trixie_AWM338_Ghillie", "", 0 }, //Arme
			{ "Trixie_CZ750_Ghillie", "", 0 }, //Arme
			{ "Trixie_CZ750_Black", "", 0 }, //Arme
			{ "Trixie_CZ750", "", 0 }, //Arme
            { "Trixie_LSMARK4", "", 0 }, //Arme
			{ "Trixie_SB31250", "", 0 }, //Arme
			{ "Trixie_SB31250_Net", "", 0 }, //Arme
			{ "Trixie_LSMARK4", "", 0 }, //Arme
			{ "Trixie_LSMARK4_Delta_Camo", "", 0 }, //Arme
			{ "Trixie_LSMARK4_Net", "", 0 }, //Arme
			{ "Trixie_LSMARK4_Delta", "", 0 }, //Arme
			 { "NVGoggles", "", 0 }, //Arme
            { "NVGoggles_INDEP", "", 0 }, //Arme
            { "NVGoggles_OPFOR", "", 0 }, //Arme
            { "Binocular", "", 0 }, //Arme
            { "Rangefinder", "", 0 }, //Arme
            { "acc_flashlight", "", 0 },
            { "acc_pointer_IR", "", 0 },
            { "IEDLandBig_Remote_Mag", "", 0 }, //explosif
            { "IEDUrbanSmall_Remote_Mag", "", 0 }, //explosif
            { "IEDLandSmall_Remote_Mag", "", 0 }, //explosif
            { "APERSTripMine_Wire_Mag", "", 0 }, //explosif
            { "SmokeShell", "", 0 }, //explosif
            { "SmokeShellRed", "", 0 } //explosif
           
        };
    };
	
	class milice_viseurs {
        name = "Armurerie Milice";
        side = "civ";
        license = "milice";
        level = -1;
        msg = "";
        items[] = {
			{ "optic_Yorris", "", 0 }, //Viseur
			{ "optic_sud_1p29", "1P29_X4", 0 }, //Viseur
			{ "optic_sud_Cobra", "COBRA", 0 }, //Viseur
			{ "optic_sud_goshawk", "GOSHAWK", 0 }, //Viseur
			{ "optic_sud_Krechet", "KRECHET", 0 }, //Viseur
			{ "optic_sud_Krechet_M", "KRECHET_X4", 0 }, //Viseur
			{ "optic_sud_pso1", "PS0-1", 0 },
			{ "optic_sud_PSO4", "PS0-4", 0 },
			{ "optic_sud_pso4_camo", "PS0-4camo", 0 },
			{ "optic_Yorris", "Viseur Yorris_Zubr", 0 },
			{ "optic_NSPU_RPG", "NSPU", 0 }, //Viseur
			{ "optic_PGO7V", "PGO7V", 0 }, //Viseur
			{ "optic_PGO7V2", "PGO7V2", 0 }, //Viseur
			{ "optic_PGO7V3", "PGO7V3", 0 }, //Viseur
			{ "optic_NSPU_RPG", "", 0 }, //Viseur
            { "optic_PGO7V", "", 0 }, //Viseur
            { "optic_PGO7V2", "", 0 }, //Viseur
            { "optic_PGO7V3", "", 0 }, //Viseur
			{ "optic_Aco", "", 0 }, //Viseur
            { "optic_ACO_grn", "", 0 }, //Viseur
            { "optic_Aco_smg", "", 0 }, //Viseur
            { "optic_ACO_grn_smg", "", 0 }, //Viseur
            { "optic_Arco", "", 0 }, //Viseur
            { "optic_DMS", "", 0 }, //Viseur
            { "optic_LRPS", "", 0 }, //Viseur
            { "optic_MRCO", "", 0 }, //Viseur
            { "optic_Hamr", "", 0 }, //Viseur
            { "optic_SOS", "", 0 }, //Viseur
            { "optic_nvs", "", 0 }, //Viseur
			{ "Trixie_M68CCO", "", 0 }, //Viseur
			{ "muzzle_sud_tgp_a", "", 0 }, //Viseur
			{ "muzzle_sud_tgp_b", "", 0 } //Viseur
        };
    };
	
	class milice_silencieux {
        name = "Armurerie Milice";
        side = "civ";
        license = "milice";
        level = -1;
        msg = "";
        items[] = {
			{ "muzzle_snds_B", "", 0 }, //Silencieux
            { "muzzle_snds_L", "", 0 }, //Silencieux
            { "muzzle_snds_acp", "", 0 } //Silencieux
        };
    };
	
	class milice_munitions {
        name = "Armurerie Milice";
        side = "civ";
        license = "milice";
        level = -1;
        msg = "";
        items[] = {
			{ "Cha_100Rnd_762x54_PK", "", 0 }, //munition
            { "Cha_100Rnd_762x54_PK_T", "", 0 }, //munition
            { "10Rnd_762x51_Mag", "", 0 }, //munition
            { "6Rnd_45ACP_Cylinder", "", 0 }, //munition
            { "9Rnd_45ACP_Mag", "", 0 }, //munition
            { "16Rnd_9x21_Mag", "", 0 }, //munition
            { "RPG7_PG7VM", "", 0 }, //munition
            { "RPG7_PG7VL", "", 0 }, //munition
            { "RPG7_PG7VR", "", 0 }, //munition
            { "RPG7_PG7V", "", 0 }, //munition
            { "RPG7_OG7V", "", 0 }, //munition
            { "RPG7_TBG7V", "", 0 }, //munition
            { "RPG7_PG7V_AA", "", 0 }, //munition
            { "RPG7_PG7VM_AA", "", 0 }, //munition
            { "RPG7_PG7VL_AA", "", 0 }, //munition
            { "RPG7_PG7V_APERS", "", 0 }, //munition
            { "RPG7_PG7VM_APERS", "", 0 }, //munition
            { "RPG7_PG7VL_APERS", "", 0 }, //munition
            { "RPG7_PG7VL_APERS_AA", "", 0 }, //munition
            { "RPG7_PG7VM_APERS_AA", "", 0 }, //munition
            { "RPG7_PG7V_APERS_AA", "", 0 }, //munition
			{ "75Rnd_545x39_RPK107", "RPK-107drum", 0 }, //munition
			{ "30Rnd_545x39_AK107", "AK-107magazine", 0 }, //munition
			{ "10Rnd_762x54_SVU107", "SVU/SVDmagazine", 0 }, //munition
			{ "100Rnd_762x54_PK", "PECHENEG-Mmag", 0 }, //munition
			{ "Cha_100Rnd_762x54_PK", "PKM/PKP", 0 }, //munition
			{ "Cha_100Rnd_762x54_PK_T", "20Rnd_556x45_UW_mag", 0 }, //munition
			{ "16Rnd_9x21_Mag", "Chargeur 16 balles 9mm", 0 }, //munition
			{ "30Rnd_9x21_Mag", "Chargeur 30 balles 9mm", 0 }, //munition
			{ "6Rnd_GreenSignal_F", "Fusées_vertes", 0 }, //munition
			{ "6Rnd_RedSignal_F", "Fusées_rouges", 0 }, //munition
			{ "6Rnd_45ACP_Cylinder", "Cylindre 6 balles 45ACP", 0 }, //munition
			{ "PG7V_F", "PG7V", 0 }, //munition
			{ "20Rnd_9x39_VSS", "VSS/VALmagazine", 0 }, //munition
			{ "RPG7_OG7V", "", 0 }, //munition
			{ "RPG7_PG7V_APERS", "", 0 }, //munition
			{ "RPG7_PG7VM_AA", "", 0 }, //munition
			{ "RPG7_PG7VL_AA", "", 0 }, //munition
			{ "RPG7_PG7V_AA", "", 0 }, //munition
			{ "Trixie_10x127_HE_Mag", "", 0 }, //munition
			{ "Trixie_10x127_HEIAP_Mag", "", 0 }, //munition
			{ "30Rnd_762x39_AKM", "", 0 }, //munition
			{ "6Rnd_GreenSignal_F", "", 0 }, //munition
            { "6Rnd_RedSignal_F", "", 0 }, //munition
            { "IEDUrbanBig_Remote_Mag", "", 0 } //munition
        };
    };
	
	//Mafia Shops
class mafia_armes{
        name = "Armurerie Mafia";
        side = "civ";
        license = "mafia";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_SUD_AKMS", "", 0 },
			{ "Trixie_M14_Black", "", 0 },
			{ "Trixie_M14_Green", "", 0 },
			{ "Trixie_M14", "", 0 },
			{ "Trixie_M14DMR_Clean_Pink", "", 0 },
			{ "Trixie_M14DMR_Clean_Black", "", 0 },
			{ "Trixie_M14DMR_Clean", "", 0 },
			{ "Trixie_M14DMR_NG_Black_Short", "", 0 },
			{ "Trixie_M14DMR_NG_Short", "", 0 },
			{ "Trixie_M14DMR_NG_Black", "", 0 },
			{ "Trixie_M14DMR_NG", "", 0 },
			{ "Trixie_M24_Black_Clean", "", 0 },
			{ "Trixie_M24_Clean", "", 0 },
			{ "Trixie_M24_Black", "", 0 },
			{ "Trixie_M24", "", 0 },
			{ "Trixie_M40A3_Clean", "", 0 },
			{ "Trixie_M40A3", "", 0 },
			{ "Trixie_M40A3_NG", "", 0 },
			{ "hgun_PDW2000_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "SMG_01_F", "", 0 },
			{ "arifle_TRG20_F", "", 0 },
			{ "arifle_Mk20C_plain_F", "", 0 },
			{ "arifle_Katiba_C_F", "", 0 },
			{ "arifle_MXC_Black_F", "", 0 },
			{ "hgun_Rook40_F", "", 0 },
			{ "hgun_Pistol_heavy_02_F", "", 0 },
			{ "hgun_ACPC2_F", "", 0 }
			
           
        };
    };
	
	class mafia_viseurs {
        name = "Armurerie Mafia";
        side = "civ";
        license = "mafia";
        level = -1;
        msg = "";
        items[] = {
			{ "optic_Yorris", "", 0 },
			{ "optic_Aco", "", 0 },
			{ "optic_ACO_grn", "", 0 },
			{ "optic_Aco_smg", "", 0 },
			{ "optic_ACO_grn_smg", "", 0 },
			{ "optic_Arco", "", 0 },
			{ "Trixie_LSMARK4", "", 0 },
			{ "Trixie_LSMARK4_Delta_Camo", "", 0 }
        };
    };
	
	class mafia_munitions {
        name = "Armurerie Mafia";
        side = "civ";
        license = "mafia";
        level = -1;
        msg = "";
        items[] = {
			{ "30Rnd_762x39_AKM", "", 0 },
			{ "30rnd_556x45_stanag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_green", "", 0 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 0 },
			{ "6Rnd_45ACP_Cylinder", "", 0 },
			{ "Trixie_20x762_Mag", "", 0 },
			{ "9Rnd_45ACP_Mag", "", 0 }
        };
    };
	
	
	//Basic Shops
    class genstore {
        name = "Castorama";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 },
            { "ItemRadio", "Téléphone", 100 }
        };
    };


};
