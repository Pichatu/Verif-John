/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "BIG_mcam", "", 250, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "", 250, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 250, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 250, { "", "", -1 } },
			{ "U_C_Driver_2", "", 125, { "", "", -1 } },
			{ "U_C_Driver_1", "", 350, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 250, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 650, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 735, { "", "", -1 } },
			{ "U_C_Driver_3", "", 1200, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 2500, { "", "", -1 } },
			{ "U_C_Driver_4", "", 1100, { "", "", -1 } },
			{ "DRW_Dal_mcam", "", 250, { "", "", -1 } },
			{ "DEX_Aff_mcam", "", 250, { "", "", -1 } },
			{ "DEX_BN_mcam", "", 250, { "", "", -1 } },
			{ "DRW_UK_mcam", "", 250, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "", 250, { "", "", -1 } },
			{ "MainDuRoi_mcam", "", 250, { "", "", -1 } },
			{ "FUT2_mcam", "", 250, { "", "", -1 } },
			{ "REV1_civil1", "", 250, { "", "", -1 } },
			{ "REV1_civil2", "", 250, { "", "", -1 } },
			{ "ALE_CivilLacoste_B", "", 250, { "", "", -1 } },
			{ "ALE_CivilLacoste_Bl", "", 250, { "", "", -1 } },
			{ "ALE_CivilLacoste_O", "", 250, { "", "", -1 } },
			{ "ALE_CivilLacoste_V", "", 250, { "", "", -1 } },
			{ "ALE_CivilALE", "", 250, { "", "", -1 } },
			{ "ALE_CivilDayZ", "", 250, { "", "", -1 } },
			{ "ALE_CivilVincent_1", "", 250, { "", "", -1 } },
			{ "ALE_CivilFuckMe", "", 250, { "", "", -1 } },
			{ "ALE_CivilGrisNoir", "", 250, { "", "", -1 } },
			{ "ALE_CivilImWithStupid", "", 250, { "", "", -1 } },
			{ "ALE_CivilManLegend", "", 250, { "", "", -1 } },
			{ "ALE_CivilMickey", "", 250, { "", "", -1 } },
			{ "ALE_CivilOM", "", 250, { "", "", -1 } },
			{ "ALE_CivilPorsche", "", 250, { "", "", -1 } },
			{ "ALE_CivilPSG", "", 250, { "", "", -1 } },
			{ "ALE_CivilRougeBlanc", "", 250, { "", "", -1 } },
			{ "ALE_CivilVioletJaune", "", 250, { "", "", -1 } },
			{ "ALE_CivilAveng", "", 250, { "", "", -1 } },
			{ "ALE_CivilEleven", "", 250, { "", "", -1 } },
			{ "Frank_mcam", "", 250, { "", "", -1 } },
			{ "ALE_CivilObey", "", 250, { "", "", -1 } },
			{ "ALE_CivilSkull", "", 250, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 250, { "", "", -1 } },
			{ "U_BasicBodyICE123", "", 250, { "", "", -1 } },
			{ "ALE_Worker", "", 250, { "", "", -1 } },
			{ "U_BG_Guerilla2_2", "", 250, { "", "", -1 } },
			{ "U_BG_Guerilla2_3", "", 250, { "", "", -1 } },
			{ "U_BG_Guerilla2_1", "", 250, { "", "", -1 } },
			{ "U_OrestesBody", "", 250, { "", "", -1 } },
			{ "U_C_Poor_1", "", 250, { "", "", -1 } },
			{ "fut1_mcam", "", 250, { "", "", -1 } },
			{ "U_Marshal", "", 250, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Cop Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_survival_uniform", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_worn", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "police_GL_uniform", "Sous Officier", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "police_officer_uniform", "Officier", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "police_man_uniform", "Recrue", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "security_uniform", "Sécurité", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "ALE_GendUniform", "Gendarme", 0, { "life_coplevel", "SCALAR", 2 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "ALE_H_Calot", "Calot Gendarme", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "police_beret", "Beret Police", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "police_cap", "Casquette Police", 100, { "life_coplevel", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "police_belt", "Ceinture Police", 0, { "", "", -1 } },
			{ "security_vest", "Sécurité", 0, { "", "", -1 } },
			{ "ALE_GendVest", "Gendarmerie", 1500, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_HarnessOGL_brn", "Veste Kamikaze", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l_WTF", "Veste Kamikaze v2", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "SupprimerSupprimer Sac", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } }
		};
	};

	class legion {
		title = "Shop legion";
		license = "legion";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Retirer Uniforme", 0, { "", "", -1 } },
			{ "REV1_uniform_f1", "1ere Classe", 0, { "", "", -1 } },
			{ "REV1_uniform_fma", "Recrue", 0, { "", "", -1 } },
			{ "REV1_uniform_f1_serg", "Officier", 0, { "", "", -1 } },
			{ "REV1_uniform_fpara_serg", "Caporal Chef", 0, { "", "", -1 } },
			{ "REV1_uniform_pi", "Pilote", 0, { "", "", -1 } },
			{ "REV1_uniform_survet", "Survet de sport", 0, { "", "", -1 } },
			{ "JF_Uniforme_M", "Medic", 0, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "REV1_Beret", "Beret Vert", 0, { "", "", -1 } },
			{ "REV1_spectra", "Casque Combat", 0, { "", "", -1 } },
			{ "JF_Casque_Pilote_Heli", "Casque Pilote", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "REV1_vest_ce", "Veste Modulable", 0, { "", "", -1 } },
			{ "JF_veste_legere_02", "Veste Medic", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } },
			{ "B_Carryall_jf", "Sac Multifonctions Medic", 0, { "", "", -1 } },
			{ "Sac_moyen_jf", "Sac Tactique", 0, { "", "", -1 } },
			{ "Sac_Medic_jf", "Sac Medic", 0, { "", "", -1 } }
		};
	};

	class giap {
		title = "Shop giap";
		license = "giap";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "gign_uniform", "GIGN", 0, { "", "", -1 } },
			{ "rpima_uniform", "RPIMA", 0, { "", "", -1 } },
			{ "U_bombsuit", "Deminage", 0, { "", "", -1 } },
			{ "swat_officer_uniform", "Officier", 0, { "", "", -1 } },
			{ "swat_unit_uniform", "GIAP", 0, { "", "", -1 } },
			{ "JackFrench_Ghillie", "Ghillie Suit", 0, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "ALE_H_Calot", "Calot Gendarme", 0, { "", "", -1 } },
			{ "gign_Balaclava", "GIAP Opérateur", 0, { "", "", -1 } },
			{ "gign_helm", "Casque GIAP", 0, { "", "", -1 } },
			{ "ATHhelm_Balaclava2", "Casque RPIMA", 0, { "", "", -1 } },
			{ "H_Bombsuit_Helmet", "Casque Démineur", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "gign_HeavyVest", "GIAP Veste Lourde", 0, { "", "", -1 } },
			{ "gign_BlackVest", "GIAP Veste Légère", 0, { "", "", -1 } },
			{ "RPIMA_vest", "RPIMA Veste Lourde", 0, { "", "", -1 } },
			{ "rpima_Vest_light", "RPIMA Veste Légère", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } }
		};
	};

	class milice {
		title = "Shop Milice";
		license = "milice";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Supprimer Uniforme", 0, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 0, { "", "", -1 } },
			{ "U_I_Wetsuit", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Surpat_Sniper", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Digi_Sniper", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Digi_Uniform02", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Digi_Uniform01", "", 0, { "", "", -1 } },
			{ "U_RU_Pilot_Suit", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Surpat_Uniform02", "", 0, { "", "", -1 } },
			{ "U_SUD_RU_Surpat_Uniform01", "", 0, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 0, { "", "", -1 } }		
		};

		headgear[] = {
			{ "NONE", "Supprimer Chapeau", 0, { "", "", -1 } },
			{ "H_Bandanna_khk_hs", "", 0, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 0, { "", "", -1 } },
			{ "H_Watchcap_cbr", "", 0, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 0, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 0, { "", "", -1 } },
			{ "H_HelmetCrew_I", "", 0, { "", "", -1 } },
			{ "H_Cap_oli_hs", "", 0, { "", "", -1 } },
			{ "H_Cap_blk_Raven", "", 0, { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 0, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "", 0, { "", "", -1 } },
			{ "H_MilCap_dgtl", "", 0, { "", "", -1 } },
			{ "H_MilCap_ocamo", "", 0, { "", "", -1 } },
			{ "H_Cap_headphones", "", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 0, { "", "", -1 } },
			{ "H_Shemag_olive", "", 0, { "", "", -1 } },
			{ "H_Shemag_olive_hs", "", 0, { "", "", -1 } },
			{ "H_Titan_Helmet", "", 0, { "", "", -1 } },
			{ "H_Titan_Helmet_O", "", 0, { "", "", -1 } },
			{ "H_SUD_6b27", "", 0, { "", "", -1 } },
			{ "H_SUD_6b27_v2", "", 0, { "", "", -1 } },
			{ "H_SUD_6b27_surpat", "", 0, { "", "", -1 } },
			{ "H_SUD_6b27_v2_Surpat", "", 0, { "", "", -1 } },
			{ "H_Beret_Colonel", "", 0, { "", "", -1 } },
			{ "H_Bandanna_sand", "", 0, { "", "", -1 } },
			{ "H_Bandanna_surfer_grn", "", 0, { "", "", -1 } },
			{ "H_Bandanna_surfer_blk", "", 0, { "", "", -1 } },
			{ "H_Booniehat_RU_DIGI", "", 0, { "", "", -1 } },
			{ "H_Booniehat_RU_SURPAT", "", 0, { "", "", -1 } },
			{ "H_Milcap_RU_DIGI", "", 0, { "", "", -1 } },
			{ "H_Milcap_RU_SURPAT", "", 0, { "", "", -1 } },
			{ "max_mask", "", 0, { "", "", -1 } },
			{ "H_RU_Pilot_Helmet", "", 0, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 0, { "", "", -1 } }

			
			
		};

		goggles[] = {
			{ "NONE", "Supprimer Lunettes", 0, { "", "", -1 } },
			{ "L_Shemagh_Gry", "", 0, { "", "", -1 } },
			{ "L_Shemagh_OD", "", 0, { "", "", -1 } },
			{ "L_Shemagh_Red", "", 0, { "", "", -1 } },
			{ "L_Shemagh_Tan", "", 0, { "", "", -1 } },
			{ "L_shemagh_white", "", 0, { "", "", -1 } },
			{ "LBG_Shemagh_Gry", "", 0, { "", "", -1 } },
			{ "LBG_Shemagh_OD", "", 0, { "", "", -1 } },
			{ "LBG_Shemagh_Tan", "", 0, { "", "", -1 } },
			{ "LBG_Shemagh_White", "", 0, { "", "", -1 } },
			{ "LCG_Shemagh_Gry", "", 0, { "", "", -1 } },
			{ "LOG_Shemagh_White", "", 0, { "", "", -1 } },
			{ "LOG_Shemagh_OD", "", 0, { "", "", -1 } },
			{ "LOG_Shemagh_Tan", "", 0, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 0, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 0, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 0, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 0, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 0, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 0, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 0, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 0, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 0, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 0, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 0, { "", "", -1 } },
			{ "G_Bandanna_sport", "", 0, { "", "", -1 } },
			{ "G_Combat", "", 0, { "", "", -1 } },
			{ "G_Aviator", "", 0, { "", "", -1 } },
			{ "G_Lowprofile", "", 0, { "", "", -1 } },
			{ "Mask_M40", "", 0, { "", "", -1 } },
			{ "LCG_Shemagh_OD", "", 0, { "", "", -1 } },
			{ "LCG_Shemagh_Tan", "", 0, { "", "", -1 } },
			{ "LOG_Shemagh_Gry", "", 0, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 0, { "", "", -1 } },
			{ "G_Tactical_Black", "", 0, { "", "", -1 } },
			{ "G_Tactical_Clear", "", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 0, { "", "", -1 } },
			{ "G_Shades_Blue", "", 0, { "", "", -1 } },
			{ "G_Shades_Red", "", 0, { "", "", -1 } },
			{ "G_Squares", "", 0, { "", "", -1 } },
			{ "G_I_Diving", "", 0, { "", "", -1 } },
			{ "Mask_M40_OD", "", 0, { "", "", -1 } }		
		};

		vests[] = {
			{ "NONE", "Supprimer Veste", 0, { "", "", -1 } },
			{ "Specter_MBSS_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_TAN", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_TAN", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l_TAN", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_light_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_light", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_light_TAN", "", 0, { "", "", -1 } },
			{ "Specter_RAV_BLK", "", 0, { "", "", -1 } },
			{ "Specter_RAV", "", 0, { "", "", -1 } },
			{ "V_HarnessOGL_brn", "Veste Kamikaze", 0, { "", "", -1 } },
			{ "V_SUD_6b33", "", 0, { "", "", -1 } },
			{ "V_RebreatherIA", "", 0, { "", "", -1 } },
			{ "V_ArmorVest_RU", "", 0, { "", "", -1 } },
			{ "V_ArmorVest2_RU", "", 0, { "", "", -1 } },
			{ "V_TacVest_RU", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l_WTF", "Veste Kamikaze v2", 0, { "", "", -1 } }		
		};

		backpacks[] = {
			{ "NONE", "Supprimer Sac", 0, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "", 0, { "", "", -1 } },
			{ "B_AssaultPack_ocamo", "", 0, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 0, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 0, { "", "", -1 } },
			{ "B_FieldPack_oli", "", 0, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 0, { "", "", -1 } },
			{ "B_Carryall_oli", "", 0, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 0, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 0, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 0, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 0, { "", "", -1 } },
			{ "B_FieldPack_khk", "", 0, { "", "", -1 } },
			{ "B_Carryall_khk", "", 0, { "", "", -1 } }
		};
	};
	class mafia {
		title = "Shop Mafia";
		license = "mafia";
		side = "civ";

		uniforms[] = {
			{ "REV1_civil1", "", 0, { "", "", -1 } },
			{ "REV1_civil2", "", 0, { "", "", -1 } },
			{ "U_Marshal", "", 0, { "", "", -1 } },
			{ "ALE_CivilLacoste_B", "", 0, { "", "", -1 } },
			{ "ALE_CivilLacoste_Bl", "", 0, { "", "", -1 } },
			{ "ALE_CivilLacoste_O", "", 0, { "", "", -1 } },
			{ "ALE_CivilLacoste_V", "", 0, { "", "", -1 } },
			{ "ALE_CivilGrisNoir", "", 0, { "", "", -1 } },
			{ "ALE_CivilRougeBlanc", "", 0, { "", "", -1 } },
			{ "ALE_CivilVioletJaune", "", 0, { "", "", -1 } },
			{ "heavy_clothes", "", 0, { "", "", -1 } },
			{ "robber_clothes", "", 0, { "", "", -1 } },
			{ "sniper_clothes", "", 0, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 0, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 0, { "", "", -1 } },
			{ "B_Fem_SPEC_Oakes", "", 0, { "", "", -1 } },
			{ "B_Fem_SPEC_Mason", "", 0, { "", "", -1 } }
		};

		headgear[] = {
			{ "H_Beret_blk", "", 0, { "", "", -1 } },
			{ "H_Bandanna_blu", "", 0, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 0, { "", "", -1 } },
			{ "H_Bandanna_khk", "", 0, { "", "", -1 } },
			{ "H_Bandanna_gry", "", 0, { "", "", -1 } },
			{ "H_Bandanna_sand", "", 0, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 0, { "", "", -1 } },
			{ "H_Bandanna_khk_hs", "", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 0, { "", "", -1 } },
			{ "H_Bandanna_sgg", "", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 0, { "", "", -1 } },
			{ "H_Shemag_olive", "", 0, { "", "", -1 } },
			{ "H_Shemag_olive_hs", "", 0, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 0, { "", "", -1 } },
			{ "H_Bandanna_surfer_blk", "", 0, { "", "", -1 } },
			{ "H_Bandanna_surfer_grn", "", 0, { "", "", -1 } },
			{ "H_Cap_blk", "", 0, { "", "", -1 } },
			{ "H_Cap_blk_Raven", "", 0, { "", "", -1 } },
			{ "H_Cap_tan_specops_US", "", 0, { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 0, { "", "", -1 } },
			{ "H_Hat_blue", "", 0, { "", "", -1 } },
			{ "H_Hat_checker", "", 0, { "", "", -1 } },
			{ "H_Hat_grey", "", 0, { "", "", -1 } },
			{ "H_Hat_tan", "", 0, { "", "", -1 } },
			{ "H_Hat_brown", "", 0, { "", "", -1 } },
			{ "H_StrawHat", "", 0, { "", "", -1 } },
			{ "H_StrawHat_dark", "", 0, { "", "", -1 } },
			{ "H_MilCap_blue", "", 0, { "", "", -1 } },
			{ "H_MilCap_gry", "", 0, { "", "", -1 } },
			{ "H_MilCap_mcamo", "", 0, { "", "", -1 }
		};

		goggles[] = {
		};

		vests[] = {
			{ "V_BandollierB_khk", "", 0, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 0, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 0, { "", "", -1 } },
			{ "V_BandollierB_rgr", "", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 0, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 0, { "", "", -1 } },
			{ "V_TacVest_blk", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_PACA_l_BLK", "", 0, { "", "", -1 } },
			{ "Specter_MBSS_light_BLK", "", 0, { "", "", -1 } },
			{ "Specter_RAV_BLK", "", 0, { "", "", -1 } }
		};
		backpacks[] = {
			{ "B_AssaultPack_blk", "", 0, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 0, { "", "", -1 } }
		};
	};
};