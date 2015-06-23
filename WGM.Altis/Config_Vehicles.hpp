class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "cl3_dbs_volanteyellow", 0, "driver" },
			{ "cl3_dbs_volanteblack", 0, "driver" },
			{ "cl3_dbs_volanteblue", 0, "driver" },
			{ "cl3_dbs_volanteaqua", 0, "driver" },
			{ "cl3_dbs_volantebabyblue", 0, "driver" },
			{ "cl3_dbs_volantebabypink", 0, "driver" },
			{ "cl3_dbs_volantered", 0, "driver" },
			{ "cl3_dbs_volanteburgundy", 0, "driver" },
			{ "cl3_dbs_volantecardinal", 0, "driver" },
			{ "cl3_dbs_volantedark_green", 0, "driver" },
			{ "cl3_dbs_volantegold", 0, "driver" },
			{ "cl3_dbs_volantegreen", 0, "driver" },
			{ "cl3_dbs_volantegrey", 0, "driver" },
			{ "cl3_dbs_volantelavender", 0, "driver" },
			{ "cl3_dbs_volantelight_blue", 0, "driver" },
			{ "cl3_dbs_volantelight_yellow", 0, "driver" },
			{ "cl3_dbs_volantelime", 0, "driver" },
			{ "cl3_dbs_volantemarina_blue", 0, "driver" },
			{ "cl3_dbs_volantenavy_blue", 0, "driver" },
			{ "cl3_dbs_volanteorange", 0, "driver" },
			{ "cl3_dbs_volantepurple", 0, "driver" },
			{ "cl3_dbs_volantesand", 0, "driver" },
			{ "cl3_dbs_volantesilver", 0, "driver" },
			{ "cl3_dbs_volantecamo", 0, "driver" },
			{ "cl3_dbs_volantecamo_urban", 0, "driver" },
			{ "cl3_dbs_volantewhite", 0, "driver" },
			{ "cl3_dbs_volanteviolet", 0, "driver" },
			{ "cl3_dbs_volanteflame", 0, "driver" },
			{ "cl3_dbs_volanteflame1", 0, "driver" },
			{ "cl3_dbs_volanteflame2", 0, "driver" },
			{ "cl3_dbs_volante2tone1", 0, "driver" },
			{ "cl3_dbs_volante2tone2", 0, "driver" },
			{ "cl3_dbs_volante2tone3", 0, "driver" },
			{ "cl3_dbs_volante2tone4", 0, "driver" },
			{ "cl3_dbs_volante2tone5", 0, "driver" },
			{ "cl3_q7_yellow", 0, "driver" }, //audi Q7
			{ "cl3_q7_black", 0, "driver" }, //audi Q7
			{ "cl3_q7_blue", 0, "driver" }, //audi Q7
			{ "cl3_q7_aqua", 0, "driver" }, //audi Q7
			{ "cl3_q7_babyblue", 0, "driver" }, //audi Q7
			{ "cl3_q7_babypink", 0, "driver" }, //audi Q7
			{ "cl3_q7_red", 0, "driver" }, //audi Q7
			{ "cl3_q7_burgundy", 0, "driver" }, //audi Q7
			{ "cl3_q7_cardinal", 0, "driver" }, //audi Q7
			{ "cl3_q7_dark_green", 0, "driver" }, //audi Q7
			{ "cl3_q7_gold", 0, "driver" }, //audi Q7
			{ "cl3_q7_green", 0, "driver" }, //audi Q7
			{ "cl3_q7_grey", 0, "driver" }, //audi Q7
			{ "cl3_q7_lavender", 0, "driver" }, //audi Q7
			{ "cl3_q7_light_blue", 0, "driver" }, //audi Q7
			{ "cl3_q7_light_yellow", 0, "driver" }, //audi Q7
			{ "cl3_q7_lime", 0, "driver" }, //audi Q7
			{ "cl3_q7_marina_blue", 0, "driver" }, //audi Q7
			{ "cl3_q7_navy_blue", 0, "driver" }, //audi Q7
			{ "cl3_q7_orange", 0, "driver" }, //audi Q7
			{ "cl3_q7_purple", 0, "driver" }, //audi Q7
			{ "cl3_q7_sand", 0, "driver" }, //audi Q7
			{ "cl3_q7_silver", 0, "driver" }, //audi Q7
			{ "cl3_q7_camo", 0, "driver" }, //audi Q7
			{ "cl3_q7_camo_urban", 0, "driver" }, //audi Q7
			{ "cl3_q7_white", 0, "driver" }, //audi Q7
			{ "cl3_q7_violet", 0, "driver" }, //audi Q7
			{ "cl3_q7_flame", 0, "driver" }, //audi Q7
			{ "cl3_q7_flame1", 0, "driver" }, //audi Q7
			{ "cl3_q7_flame2", 0, "driver" }, //audi Q7
			{ "cl3_q7_2tone1", 0, "driver" }, //audi Q7 
			{ "cl3_q7_2tone2", 0, "driver" }, //audi Q7
			{ "cl3_q7_2tone3", 0, "driver" }, //audi Q7
			{ "cl3_q7_2tone4", 0, "driver" }, //audi Q7
			{ "cl3_q7_2tone5", 0, "driver" }, //audi Q7
			{ "cl3_e60_m5_yellow", 0, "driver" },
			{ "cl3_e60_m5_black", 0, "driver" },
			{ "cl3_e60_m5_blue", 0, "driver" },
			{ "cl3_e60_m5_aqua", 0, "driver" },
			{ "cl3_e60_m5_babyblue", 0, "driver" },
			{ "cl3_e60_m5_babypink", 0, "driver" },
			{ "cl3_e60_m5_red", 0, "driver" },
			{ "cl3_e60_m5_burgundy", 0, "driver" },
			{ "cl3_e60_m5_cardinal", 0, "driver" },
			{ "cl3_e60_m5_dark_green", 0, "driver" },
			{ "cl3_e60_m5_gold", 0, "driver" },
			{ "cl3_e60_m5_green", 0, "driver" },
			{ "cl3_e60_m5_grey", 0, "driver" },
			{ "cl3_e60_m5_lavender", 0, "driver" },
			{ "cl3_e60_m5_light_blue", 0, "driver" },
			{ "cl3_e60_m5_light_yellow", 0, "driver" },
			{ "cl3_e60_m5_lime", 0, "driver" },
			{ "cl3_e60_m5_marina_blue", 0, "driver" },
			{ "cl3_e60_m5_navy_blue", 0, "driver" },
			{ "cl3_e60_m5_orange", 0, "driver" },
			{ "cl3_e60_m5_purple", 0, "driver" },
			{ "cl3_e60_m5_sand", 0, "driver" },
			{ "cl3_e60_m5_silver", 0, "driver" },
			{ "cl3_e60_m5_camo", 0, "driver" },
			{ "cl3_e60_m5_camo_urban", 0, "driver" },
			{ "cl3_e60_m5_white", 0, "driver" },
			{ "cl3_e60_m5_violet", 0, "driver" },
			{ "cl3_e60_m5_flame", 0, "driver" },
			{ "cl3_e60_m5_flame1", 0, "driver" },
			{ "cl3_e60_m5_flame2", 0, "driver" },
			{ "cl3_e60_m5_2tone1", 0, "driver" },
			{ "cl3_e60_m5_2tone2", 0, "driver" },
			{ "cl3_e60_m5_2tone3", 0, "driver" },
			{ "cl3_e60_m5_2tone4", 0, "driver" },
			{ "cl3_e60_m5_2tone5", 0, "driver" },
			{ "cl3_z4_2008_yellow", 0, "driver" },
			{ "cl3_z4_2008_black", 0, "driver" },
			{ "cl3_z4_2008_blue", 0, "driver" },
			{ "cl3_z4_2008_aqua", 0, "driver" },
			{ "cl3_z4_2008_babyblue", 0, "driver" },
			{ "cl3_z4_2008_babypink", 0, "driver" },
			{ "cl3_z4_2008_red", 0, "driver" },
			{ "cl3_z4_2008_burgundy", 0, "driver" },
			{ "cl3_z4_2008_cardinal", 0, "driver" },
			{ "cl3_z4_2008_dark_green", 0, "driver" },
			{ "cl3_z4_2008_gold", 0, "driver" },
			{ "cl3_z4_2008_green", 0, "driver" },
			{ "cl3_z4_2008_grey", 0, "driver" },
			{ "cl3_z4_2008_lavender", 0, "driver" },
			{ "cl3_z4_2008_light_blue", 0, "driver" },
			{ "cl3_z4_2008_light_yellow", 0, "driver" },
			{ "cl3_z4_2008_lime", 0, "driver" },
			{ "cl3_z4_2008_marina_blue", 0, "driver" },
			{ "cl3_z4_2008_navy_blue", 0, "driver" },
			{ "cl3_z4_2008_orange", 0, "driver" },
			{ "cl3_z4_2008_purple", 0, "driver" },
			{ "cl3_z4_2008_sand", 0, "driver" },
			{ "cl3_z4_2008_silver", 0, "driver" },
			{ "cl3_z4_2008_camo", 0, "driver" },
			{ "cl3_z4_2008_camo_urban", 0, "driver" },
			{ "cl3_z4_2008_white", 0, "driver" },
			{ "cl3_z4_2008_violet", 0, "driver" },
			{ "cl3_z4_2008_flame", 0, "driver" },
			{ "cl3_z4_2008_flame1", 0, "driver" },
			{ "cl3_z4_2008_flame2", 0, "driver" },
			{ "cl3_z4_2008_2tone1", 0, "driver" },
			{ "cl3_z4_2008_2tone2", 0, "driver" },
			{ "cl3_z4_2008_2tone3", 0, "driver" },
			{ "cl3_z4_2008_2tone4", 0, "driver" },
			{ "cl3_z4_2008_2tone5", 0, "driver" },
			{ "cl3_taurus_yellow", 0, "driver" },
			{ "cl3_taurus_black", 0, "driver" },
			{ "cl3_taurus_blue", 0, "driver" },
			{ "cl3_taurus_aqua", 0, "driver" },
			{ "cl3_taurus_babyblue", 0, "driver" },
			{ "cl3_taurus_babypink", 0, "driver" },
			{ "cl3_taurus_red", 0, "driver" },
			{ "cl3_taurus_burgundy", 0, "driver" },
			{ "cl3_taurus_cardinal", 0, "driver" },
			{ "cl3_taurus_dark_green", 0, "driver" },
			{ "cl3_taurus_gold", 0, "driver" },
			{ "cl3_taurus_green", 0, "driver" },
			{ "cl3_taurus_grey", 0, "driver" },
			{ "cl3_taurus_lavender", 0, "driver" },
			{ "cl3_taurus_light_blue", 0, "driver" },
			{ "cl3_taurus_light_yellow", 0, "driver" },
			{ "cl3_taurus_lime", 0, "driver" },
			{ "cl3_taurus_marina_blue", 0, "driver" },
			{ "cl3_taurus_navy_blue", 0, "driver" },
			{ "cl3_taurus_orange", 0, "driver" },
			{ "cl3_taurus_purple", 0, "driver" },
			{ "cl3_taurus_sand", 0, "driver" },
			{ "cl3_taurus_silver", 0, "driver" },
			{ "cl3_taurus_camo", 0, "driver" },
			{ "cl3_taurus_camo_urban", 0, "driver" },
			{ "cl3_taurus_white", 0, "driver" },
			{ "cl3_taurus_violet", 0, "driver" },
			{ "cl3_taurus_flame", 0, "driver" },
			{ "cl3_taurus_flame1", 0, "driver" },
			{ "cl3_taurus_flame2", 0, "driver" },
			{ "cl3_taurus_2tone1", 0, "driver" },
			{ "cl3_taurus_2tone2", 0, "driver" },
			{ "cl3_taurus_2tone3", 0, "driver" },
			{ "cl3_taurus_2tone4", 0, "driver" },
			{ "cl3_taurus_2tone5", 0, "driver" },
			{ "cl3_civic_vti_yellow", 0, "driver" },
			{ "cl3_civic_vti_black", 0, "driver" },
			{ "cl3_civic_vti_blue", 0, "driver" },
			{ "cl3_civic_vti_aqua", 0, "driver" },
			{ "cl3_civic_vti_babyblue", 0, "driver" },
			{ "cl3_civic_vti_babypink", 0, "driver" },
			{ "cl3_civic_vti_red", 0, "driver" },
			{ "cl3_civic_vti_burgundy", 0, "driver" },
			{ "cl3_civic_vti_cardinal", 0, "driver" },
			{ "cl3_civic_vti_dark_green", 0, "driver" },
			{ "cl3_civic_vti_gold", 0, "driver" },
			{ "cl3_civic_vti_green", 0, "driver" },
			{ "cl3_civic_vti_grey", 0, "driver" },
			{ "cl3_civic_vti_lavender", 0, "driver" },
			{ "cl3_civic_vti_light_blue", 0, "driver" },
			{ "cl3_civic_vti_light_yellow", 0, "driver" },
			{ "cl3_civic_vti_lime", 0, "driver" },
			{ "cl3_civic_vti_marina_blue", 0, "driver" },
			{ "cl3_civic_vti_navy_blue", 0, "driver" },
			{ "cl3_civic_vti_orange", 0, "driver" },
			{ "cl3_civic_vti_purple", 0, "driver" },
			{ "cl3_civic_vti_sand", 0, "driver" },
			{ "cl3_civic_vti_silver", 0, "driver" },
			{ "cl3_civic_vti_camo", 0, "driver" },
			{ "cl3_civic_vti_camo_urban", 0, "driver" },
			{ "cl3_civic_vti_white", 0, "driver" },
			{ "cl3_civic_vti_violet", 0, "driver" },
			{ "cl3_civic_vti_flame", 0, "driver" },
			{ "cl3_civic_vti_flame1", 0, "driver" },
			{ "cl3_civic_vti_flame2", 0, "driver" },
			{ "cl3_civic_vti_2tone1", 0, "driver" },
			{ "cl3_civic_vti_2tone2", 0, "driver" },
			{ "cl3_civic_vti_2tone3", 0, "driver" },
			{ "cl3_civic_vti_2tone4", 0, "driver" },
			{ "cl3_civic_vti_2tone5", 0, "driver" },
			{ "cl3_e63_amg_yellow", 0, "driver" },
			{ "cl3_e63_amg_black", 0, "driver" },
			{ "cl3_e63_amg_blue", 0, "driver" },
			{ "cl3_e63_amg_aqua", 0, "driver" },
			{ "cl3_e63_amg_babyblue", 0, "driver" },
			{ "cl3_e63_amg_babypink", 0, "driver" },
			{ "cl3_e63_amg_red", 0, "driver" },
			{ "cl3_e63_amg_burgundy", 0, "driver" },
			{ "cl3_e63_amg_cardinal", 0, "driver" },
			{ "cl3_e63_amg_dark_green", 0, "driver" },
			{ "cl3_e63_amg_gold", 0, "driver" },
			{ "cl3_e63_amg_green", 0, "driver" },
			{ "cl3_e63_amg_grey", 0, "driver" },
			{ "cl3_e63_amg_lavender", 0, "driver" },
			{ "cl3_e63_amg_light_blue", 0, "driver" },
			{ "cl3_e63_amg_light_yellow", 0, "driver" },
			{ "cl3_e63_amg_lime", 0, "driver" },
			{ "cl3_e63_amg_marina_blue", 0, "driver" },
			{ "cl3_e63_amg_navy_blue", 0, "driver" },
			{ "cl3_e63_amg_orange", 0, "driver" },
			{ "cl3_e63_amg_purple", 0, "driver" },
			{ "cl3_e63_amg_sand", 0, "driver" },
			{ "cl3_e63_amg_silver", 0, "driver" },
			{ "cl3_e63_amg_camo", 0, "driver" },
			{ "cl3_e63_amg_camo_urban", 0, "driver" },
			{ "cl3_e63_amg_white", 0, "driver" },
			{ "cl3_e63_amg_violet", 0, "driver" },
			{ "cl3_e63_amg_flame", 0, "driver" },
			{ "cl3_e63_amg_flame1", 0, "driver" },
			{ "cl3_e63_amg_flame2", 0, "driver" },
			{ "cl3_e63_amg_2tone1", 0, "driver" },
			{ "cl3_e63_amg_2tone2", 0, "driver" },
			{ "cl3_e63_amg_2tone3", 0, "driver" },
			{ "cl3_e63_amg_2tone4", 0, "driver" },
			{ "cl3_e63_amg_2tone5", 0, "driver" },
			{ "cl3_range_rover_yellow", 0, "driver" },// range rover
			{ "cl3_range_rover_black", 0, "driver" },// range rover
			{ "cl3_range_rover_blue", 0, "driver" },// range rover
			{ "cl3_range_rover_aqua", 0, "driver" },// range rover
			{ "cl3_range_rover_babyblue", 0, "driver" },// range rover
			{ "cl3_range_rover_babypink", 0, "driver" },// range rover
			{ "cl3_range_rover_red", 0, "driver" },// range rover
			{ "cl3_range_rover_burgundy", 0, "driver" },// range rover
			{ "cl3_range_rover_cardinal", 0, "driver" },// range rover
			{ "cl3_range_rover_dark_green", 0, "driver" },// range rover
			{ "cl3_range_rover_gold", 0, "driver" },// range rover
			{ "cl3_range_rover_green", 0, "driver" },// range rover
			{ "cl3_range_rover_grey", 0, "driver" },// range rover
			{ "cl3_range_rover_lavender", 0, "driver" },// range rover
			{ "cl3_range_rover_light_blue", 0, "driver" },// range rover
			{ "cl3_range_rover_light_yellow", 0, "driver" },// range rover
			{ "cl3_range_rover_lime", 0, "driver" },// range rover
			{ "cl3_range_rover_marina_blue", 0, "driver" },// range rover
			{ "cl3_range_rover_navy_blue", 0, "driver" },// range rover
			{ "cl3_range_rover_orange", 0, "driver" },// range rover
			{ "cl3_range_rover_purple", 0, "driver" },// range rover
			{ "cl3_range_rover_sand", 0, "driver" },// range rover
			{ "cl3_range_rover_silver", 0, "driver" },// range rover
			{ "cl3_range_rover_camo", 0, "driver" },// range rover
			{ "cl3_range_rover_camo_urban", 0, "driver" },// range rover
			{ "cl3_range_rover_white", 0, "driver" },// range rover
			{ "cl3_range_rover_violet", 0, "driver" },// range rover
			{ "cl3_range_rover_flame", 0, "driver" },// range rover
			{ "cl3_range_rover_flame1", 0, "driver" },// range rover
			{ "cl3_range_rover_flame2", 0, "driver" },// range rover
			{ "cl3_range_rover_2tone1", 0, "driver" },// range rover
			{ "cl3_range_rover_2tone2", 0, "driver" },// range rover
			{ "cl3_range_rover_2tone3", 0, "driver" },// range rover
			{ "cl3_range_rover_2tone4", 0, "driver" },// range rover
			{ "cl3_range_rover_2tone5", 0, "driver" },// range rover
			{ "cl3_golf_mk2_yellow", 0, "driver" },
			{ "cl3_golf_mk2_black", 0, "driver" },
			{ "cl3_golf_mk2_blue", 0, "driver" },
			{ "cl3_golf_mk2_aqua", 0, "driver" },
			{ "cl3_golf_mk2_babyblue", 0, "driver" },
			{ "cl3_golf_mk2_babypink", 0, "driver" },
			{ "cl3_golf_mk2_red", 0, "driver" },
			{ "cl3_golf_mk2_burgundy", 0, "driver" },
			{ "cl3_golf_mk2_cardinal", 0, "driver" },
			{ "cl3_golf_mk2_dark_green", 0, "driver" },
			{ "cl3_golf_mk2_gold", 0, "driver" },
			{ "cl3_golf_mk2_green", 0, "driver" },
			{ "cl3_golf_mk2_grey", 0, "driver" },
			{ "cl3_golf_mk2_lavender", 0, "driver" },
			{ "cl3_golf_mk2_light_blue", 0, "driver" },
			{ "cl3_golf_mk2_light_yellow", 0, "driver" },
			{ "cl3_golf_mk2_lime", 0, "driver" },
			{ "cl3_golf_mk2_marina_blue", 0, "driver" },
			{ "cl3_golf_mk2_navy_blue", 0, "driver" },
			{ "cl3_golf_mk2_orange", 0, "driver" },
			{ "cl3_golf_mk2_purple", 0, "driver" },
			{ "cl3_golf_mk2_sand", 0, "driver" },
			{ "cl3_golf_mk2_silver", 0, "driver" },
			{ "cl3_golf_mk2_camo", 0, "driver" },
			{ "cl3_golf_mk2_camo_urban", 0, "driver" },
			{ "cl3_golf_mk2_white", 0, "driver" },
			{ "cl3_golf_mk2_violet", 0, "driver" },
			{ "cl3_golf_mk2_flame", 0, "driver" },
			{ "cl3_golf_mk2_flame1", 0, "driver" },
			{ "cl3_golf_mk2_flame2", 0, "driver" },
			{ "cl3_golf_mk2_2tone1", 0, "driver" },
			{ "cl3_golf_mk2_2tone2", 0, "driver" },
			{ "cl3_golf_mk2_2tone3", 0, "driver" },
			{ "cl3_golf_mk2_2tone4", 0, "driver" },
			{ "cl3_golf_mk2_2tone5", 0, "driver" },
			{ "cl3_polo_gti_yellow", 0, "driver" },
			{ "cl3_polo_gti_black", 0, "driver" },
			{ "cl3_polo_gti_blue", 0, "driver" },
			{ "cl3_polo_gti_aqua", 0, "driver" },
			{ "cl3_polo_gti_babyblue", 0, "driver" },
			{ "cl3_polo_gti_babypink", 0, "driver" },
			{ "cl3_polo_gti_red", 0, "driver" },
			{ "cl3_polo_gti_burgundy", 0, "driver" },
			{ "cl3_polo_gti_cardinal", 0, "driver" },
			{ "cl3_polo_gti_dark_green", 0, "driver" },
			{ "cl3_polo_gti_gold", 0, "driver" },
			{ "cl3_polo_gti_green", 0, "driver" },
			{ "cl3_polo_gti_grey", 0, "driver" },
			{ "cl3_polo_gti_lavender", 0, "driver" },
			{ "cl3_polo_gti_light_blue", 0, "driver" },
			{ "cl3_polo_gti_light_yellow", 0, "driver" },
			{ "cl3_polo_gti_lime", 0, "driver" },
			{ "cl3_polo_gti_marina_blue", 0, "driver" },
			{ "cl3_polo_gti_navy_blue", 0, "driver" },
			{ "cl3_polo_gti_orange", 0, "driver" },
			{ "cl3_polo_gti_purple", 0, "driver" },
			{ "cl3_polo_gti_sand", 0, "driver" },
			{ "cl3_polo_gti_silver", 0, "driver" },
			{ "cl3_polo_gti_camo", 0, "driver" },
			{ "cl3_polo_gti_camo_urban", 0, "driver" },
			{ "cl3_polo_gti_white", 0, "driver" },
			{ "cl3_polo_gti_violet", 0, "driver" },
			{ "cl3_polo_gti_flame", 0, "driver" },
			{ "cl3_polo_gti_flame1", 0, "driver" },
			{ "cl3_polo_gti_flame2", 0, "driver" },
			{ "cl3_polo_gti_2tone1", 0, "driver" },
			{ "cl3_polo_gti_2tone2", 0, "driver" },
			{ "cl3_polo_gti_2tone3", 0, "driver" },
			{ "cl3_polo_gti_2tone4", 0, "driver" },
			{ "cl3_polo_gti_2tone5", 0, "driver" },
			{ "cl3_veyron_yellow", 0, "driver" },
			{ "cl3_veyron_black", 0, "driver" },
			{ "cl3_veyron_blue", 0, "driver" },
			{ "cl3_veyron_aqua", 0, "driver" },
			{ "cl3_veyron_babyblue", 0, "driver" },
			{ "cl3_veyron_babypink", 0, "driver" },
			{ "cl3_veyron_red", 0, "driver" },
			{ "cl3_veyron_burgundy", 0, "driver" },
			{ "cl3_veyron_cardinal", 0, "driver" },
			{ "cl3_veyron_dark_green", 0, "driver" },
			{ "cl3_veyron_gold", 0, "driver" },
			{ "cl3_veyron_green", 0, "driver" },
			{ "cl3_veyron_grey", 0, "driver" },
			{ "cl3_veyron_lavender", 0, "driver" },
			{ "cl3_veyron_light_blue", 0, "driver" },
			{ "cl3_veyron_light_yellow", 0, "driver" },
			{ "cl3_veyron_lime", 0, "driver" },
			{ "cl3_veyron_marina_blue", 0, "driver" },
			{ "cl3_veyron_navy_blue", 0, "driver" },
			{ "cl3_veyron_orange", 0, "driver" },
			{ "cl3_veyron_purple", 0, "driver" },
			{ "cl3_veyron_sand", 0, "driver" },
			{ "cl3_veyron_silver", 0, "driver" },
			{ "cl3_veyron_camo", 0, "driver" },
			{ "cl3_veyron_camo_urban", 0, "driver" },
			{ "cl3_veyron_white", 0, "driver" },
			{ "cl3_veyron_violet", 0, "driver" },
			{ "cl3_veyron_flame", 0, "driver" },
			{ "cl3_veyron_flame1", 0, "driver" },
			{ "cl3_veyron_flame2", 0, "driver" },
			{ "cl3_veyron_2tone1", 0, "driver" },
			{ "cl3_veyron_2tone2", 0, "driver" },
			{ "cl3_veyron_2tone3", 0, "driver" },
			{ "cl3_veyron_2tone4", 0, "driver" },
			{ "cl3_veyron_2tone5", 0, "driver" },
			{ "cl3_transit_yellow", 0, "driver" }, //transit
			{ "cl3_transit_black", 0, "driver" }, //transit
			{ "cl3_transit_blue", 0, "driver" }, //transit
			{ "cl3_transit_aqua", 0, "driver" }, //transit
			{ "cl3_transit_babyblue", 0, "driver" }, //transit
			{ "cl3_transit_babypink", 0, "driver" }, //transit
			{ "cl3_transit_red", 0, "driver" }, //transit
			{ "cl3_transit_burgundy", 0, "driver" }, //transit
			{ "cl3_transit_cardinal", 0, "driver" }, //transit
			{ "cl3_transit_dark_green", 0, "driver" }, //transit
			{ "cl3_transit_gold", 0, "driver" }, //transit
			{ "cl3_transit_green", 0, "driver" }, //transit
			{ "cl3_transit_grey", 0, "driver" }, //transit
			{ "cl3_transit_lavender", 0, "driver" }, //transit
			{ "cl3_transit_light_blue", 0, "driver" }, //transit
			{ "cl3_transit_light_yellow", 0, "driver" }, //transit
			{ "cl3_transit_lime", 0, "driver" }, //transit
			{ "cl3_transit_marina_blue", 0, "driver" }, //transit
			{ "cl3_transit_navy_blue", 0, "driver" }, //transit
			{ "cl3_transit_orange", 0, "driver" }, //transit
			{ "cl3_transit_purple", 0, "driver" }, //transit
			{ "cl3_transit_sand", 0, "driver" }, //transit
			{ "cl3_transit_silver", 0, "driver" }, //transit
			{ "cl3_transit_camo", 0, "driver" }, //transit
			{ "cl3_transit_camo_urban", 0, "driver" }, //transit
			{ "cl3_transit_white", 0, "driver" }, //transit
			{ "cl3_transit_violet", 0, "driver" }, //transit
			{ "cl3_transit_flame", 0, "driver" }, //transit
			{ "cl3_transit_flame1", 0, "driver" }, //transit
			{ "cl3_transit_flame2", 0, "driver" }, //transit
			{ "cl3_transit_2tone1", 0, "driver" }, //transit
			{ "cl3_transit_2tone2", 0, "driver" }, //transit
			{ "cl3_transit_2tone3", 0, "driver" }, //transit
			{ "cl3_transit_2tone4", 0, "driver" }, //transit
			{ "cl3_transit_2tone5", 0, "driver" } //transit
		};
	};
	
	class civ_car_luxe {
		side = "civ";
		vehicles[] = {
		{ "cl3_reventon_yellow", 0, "driver" },
			{ "cl3_reventon_black", 0, "driver" },
			{ "cl3_reventon_blue", 0, "driver" },
			{ "cl3_reventon_aqua", 0, "driver" },
			{ "cl3_reventon_babyblue", 0, "driver" },
			{ "cl3_reventon_babypink", 0, "driver" },
			{ "cl3_reventon_red", 0, "driver" },
			{ "cl3_reventon_burgundy", 0, "driver" },
			{ "cl3_reventon_cardinal", 0, "driver" },
			{ "cl3_reventon_dark_green", 0, "driver" },
			{ "cl3_reventon_gold", 0, "driver" },
			{ "cl3_reventon_green", 0, "driver" },
			{ "cl3_reventon_grey", 0, "driver" },
			{ "cl3_reventon_lavender", 0, "driver" },
			{ "cl3_reventon_light_blue", 0, "driver" },
			{ "cl3_reventon_light_yellow", 0, "driver" },
			{ "cl3_reventon_lime", 0, "driver" },
			{ "cl3_reventon_marina_blue", 0, "driver" },
			{ "cl3_reventon_navy_blue", 0, "driver" },
			{ "cl3_reventon_orange", 0, "driver" },
			{ "cl3_reventon_purple", 0, "driver" },
			{ "cl3_reventon_sand", 0, "driver" },
			{ "cl3_reventon_silver", 0, "driver" },
			{ "cl3_reventon_camo", 0, "driver" },
			{ "cl3_reventon_camo_urban", 0, "driver" },
			{ "cl3_reventon_white", 0, "driver" },
			{ "cl3_reventon_violet", 0, "driver" },
			{ "cl3_reventon_flame", 0, "driver" },
			{ "cl3_reventon_flame1", 0, "driver" },
			{ "cl3_reventon_flame2", 0, "driver" },
			{ "cl3_reventon_2tone1", 0, "driver" },
			{ "cl3_reventon_2tone2", 0, "driver" },
			{ "cl3_reventon_2tone3", 0, "driver" },
			{ "cl3_reventon_2tone4", 0, "driver" },
			{ "cl3_reventon_2tone5", 0, "driver" },
			{ "cl3_lamborghini_gt1_yellow", 0, "driver" },
			{ "cl3_lamborghini_gt1_black", 0, "driver" },
			{ "cl3_lamborghini_gt1_blue", 0, "driver" },
			{ "cl3_lamborghini_gt1_aqua", 0, "driver" },
			{ "cl3_lamborghini_gt1_babyblue", 0, "driver" },
			{ "cl3_lamborghini_gt1_babypink", 0, "driver" },
			{ "cl3_lamborghini_gt1_red", 0, "driver" },
			{ "cl3_lamborghini_gt1_burgundy", 0, "driver" },
			{ "cl3_lamborghini_gt1_cardinal", 0, "driver" },
			{ "cl3_lamborghini_gt1_dark_green", 0, "driver" },
			{ "cl3_lamborghini_gt1_gold", 0, "driver" },
			{ "cl3_lamborghini_gt1_green", 0, "driver" },
			{ "cl3_lamborghini_gt1_grey", 0, "driver" },
			{ "cl3_lamborghini_gt1_lavender", 0, "driver" },
			{ "cl3_lamborghini_gt1_light_blue", 0, "driver" },
			{ "cl3_lamborghini_gt1_light_yellow", 0, "driver" },
			{ "cl3_lamborghini_gt1_lime", 0, "driver" },
			{ "cl3_lamborghini_gt1_marina_blue", 0, "driver" },
			{ "cl3_lamborghini_gt1_navy_blue", 0, "driver" },
			{ "cl3_lamborghini_gt1_orange", 0, "driver" },
			{ "cl3_lamborghini_gt1_purple", 0, "driver" },
			{ "cl3_lamborghini_gt1_sand", 0, "driver" },
			{ "cl3_lamborghini_gt1_silver", 0, "driver" },
			{ "cl3_lamborghini_gt1_camo", 0, "driver" },
			{ "cl3_lamborghini_gt1_camo_urban", 0, "driver" },
			{ "cl3_lamborghini_gt1_white", 0, "driver" },
			{ "cl3_lamborghini_gt1_violet", 0, "driver" },
			{ "cl3_lamborghini_gt1_flame", 0, "driver" },
			{ "cl3_lamborghini_gt1_flame1", 0, "driver" },
			{ "cl3_lamborghini_gt1_flame2", 0, "driver" },
			{ "cl3_lamborghini_gt1_2tone1", 0, "driver" },
			{ "cl3_lamborghini_gt1_2tone2", 0, "driver" },
			{ "cl3_lamborghini_gt1_2tone3", 0, "driver" },
			{ "cl3_lamborghini_gt1_2tone4", 0, "driver" },
			{ "cl3_lamborghini_gt1_2tone5", 0, "driver" },
			{ "C_Van_01_fuel_F", 0, "driver" }, //van
			{ "cl3_458_yellow", 0, "driver" }, //ferrari
			{ "cl3_458_black", 0, "driver" }, //ferrari
			{ "cl3_458_blue", 0, "driver" }, //ferrari
			{ "cl3_458_aqua", 0, "driver" }, //ferrari
			{ "cl3_458_babyblue", 0, "driver" }, //ferrari
			{ "cl3_458_babypink", 0, "driver" }, //ferrari
			{ "cl3_458_red", 0, "driver" }, //ferrari
			{ "cl3_458_burgundy", 0, "driver" }, //ferrari
			{ "cl3_458_cardinal", 0, "driver" }, //ferrari
			{ "cl3_458_dark_green", 0, "driver" }, //ferrari
			{ "cl3_458_gold", 0, "driver" }, //ferrari
			{ "cl3_458_green", 0, "driver" }, //ferrari
			{ "cl3_458_grey", 0, "driver" }, //ferrari
			{ "cl3_458_lavender", 0, "driver" }, //ferrari
			{ "cl3_458_light_blue", 0, "driver" }, //ferrari
			{ "cl3_458_light_yellow", 0, "driver" }, //ferrari
			{ "cl3_458_lime", 0, "driver" }, //ferrari
			{ "cl3_458_marina_blue", 0, "driver" }, //ferrari
			{ "cl3_458_navy_blue", 0, "driver" }, //ferrari
			{ "cl3_458_orange", 0, "driver" }, //ferrari
			{ "cl3_458_purple", 0, "driver" }, //ferrari
			{ "cl3_458_sand", 0, "driver" }, //ferrari
			{ "cl3_458_silver", 0, "driver" }, //ferrari
			{ "cl3_458_camo", 0, "driver" }, //ferrari
			{ "cl3_458_camo_urban", 0, "driver" }, //ferrari
			{ "cl3_458_white", 0, "driver" }, //ferrari
			{ "cl3_458_violet", 0, "driver" }, //ferrari
			{ "cl3_458_flame", 0, "driver" }, //ferrari
			{ "cl3_458_flame1", 0, "driver" }, //ferrari
			{ "cl3_458_flame2", 0, "driver" }, //ferrari
			{ "cl3_458_2tone1", 0, "driver" }, //ferrari
			{ "cl3_458_2tone2", 0, "driver" }, //ferrari
			{ "cl3_458_2tone3", 0, "driver" }, //ferrari
			{ "cl3_458_2tone4", 0, "driver" }, //ferrari
			{ "cl3_458_2tone5", 0, "driver" }, //ferrari
			{ "cl3_murcielago_yellow", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_black", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_blue", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_aqua", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_babyblue", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_babypink", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_red", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_burgundy", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_cardinal", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_dark_green", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_gold", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_green", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_grey", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_lavender", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_light_blue", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_light_yellow", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_lime", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_marina_blue", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_navy_blue", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_orange", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_purple", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_sand", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_silver", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_camo", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_camo_urban", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_white", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_violet", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_flame", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_flame1", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_flame2", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_2tone1", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_2tone2", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_2tone3", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_2tone4", 0, "driver" }, //lamborgini
			{ "cl3_murcielago_2tone5", 0, "driver" }, //lamborgini
			{ "cl3_r8_spyder_yellow", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_black", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_blue", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_aqua", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_babyblue", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_babypink", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_red", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_burgundy", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_cardinal", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_dark_green", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_gold", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_green", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_grey", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_lavender", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_light_blue", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_light_yellow", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_lime", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_marina_blue", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_navy_blue", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_orange", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_purple", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_sand", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_silver", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_camo", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_camo_urban", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_white", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_violet", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_flame", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_flame1", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_flame2", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_2tone1", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_2tone2", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_2tone3", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_2tone4", 0, "driver" }, //audi R8
			{ "cl3_r8_spyder_2tone5", 0, "driver" }, //audi R8
			{ "cl3_carrera_gt_yellow", 0, "driver" }, // porche
			{ "cl3_carrera_gt_black", 0, "driver" }, // porche
			{ "cl3_carrera_gt_blue", 0, "driver" }, // porche
			{ "cl3_carrera_gt_aqua", 0, "driver" }, // porche
			{ "cl3_carrera_gt_babyblue", 0, "driver" }, // porche
			{ "cl3_carrera_gt_babypink", 0, "driver" }, // porche
			{ "cl3_carrera_gt_red", 0, "driver" }, // porche
			{ "cl3_carrera_gt_burgundy", 0, "driver" }, // porche
			{ "cl3_carrera_gt_cardinal", 0, "driver" }, // porche
			{ "cl3_carrera_gt_dark_green", 0, "driver" }, // porche
			{ "cl3_carrera_gt_gold", 0, "driver" }, // porche
			{ "cl3_carrera_gt_green", 0, "driver" }, // porche
			{ "cl3_carrera_gt_grey", 0, "driver" }, // porche
			{ "cl3_carrera_gt_lavender", 0, "driver" }, // porche
			{ "cl3_carrera_gt_light_blue", 0, "driver" }, // porche
			{ "cl3_carrera_gt_light_yellow", 0, "driver" }, // porche
			{ "cl3_carrera_gt_lime", 0, "driver" }, // porche
			{ "cl3_carrera_gt_marina_blue", 0, "driver" }, // porche
			{ "cl3_carrera_gt_navy_blue", 0, "driver" }, // porche
			{ "cl3_carrera_gt_orange", 0, "driver" }, // porche
			{ "cl3_carrera_gt_purple", 0, "driver" }, // porche
			{ "cl3_carrera_gt_sand", 0, "driver" }, // porche
			{ "cl3_carrera_gt_silver", 0, "driver" }, // porche
			{ "cl3_carrera_gt_camo", 0, "driver" }, // porche
			{ "cl3_carrera_gt_camo_urban", 0, "driver" }, // porche
			{ "cl3_carrera_gt_white", 0, "driver" }, // porche
			{ "cl3_carrera_gt_violet", 0, "driver" }, // porche
			{ "cl3_carrera_gt_flame", 0, "driver" }, // porche
			{ "cl3_carrera_gt_flame1", 0, "driver" }, // porche
			{ "cl3_carrera_gt_flame2", 0, "driver" }, // porche
			{ "cl3_carrera_gt_2tone1", 0, "driver" },// porche
			{ "cl3_carrera_gt_2tone2", 0, "driver" },// porche
			{ "cl3_carrera_gt_2tone3", 0, "driver" },// porche
			{ "cl3_carrera_gt_2tone4", 0, "driver" },// porche
			{ "cl3_carrera_gt_2tone5", 0, "driver" },// porche
			{ "cl3_dodge_charger_o_black", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_black", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_blue", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_blue", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_blue", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_camo", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_camo", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_camo", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_camourban", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_camourban", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_camourban", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_darkgreen", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_darkgreen", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_darkgreen", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_darkred", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_darkred", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_darkred", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_grey", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_grey", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_grey", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_green", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_green", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_green", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_lime", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_lime", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_lime", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_orange", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_orange", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_orange", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_purple", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_purple", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_purple", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_red", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_red", 0, "driver" }, //dodge
			{ "cl3_dodge_charger_f_red", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_white", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_white", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_white", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_yellow", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_yellow", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_yellow", 0, "driver" },//dodge
			{ "cl3_dodge_charger_s_pink", 0, "driver" },//dodge
			{ "cl3_dodge_charger_o_pink", 0, "driver" },//dodge
			{ "cl3_dodge_charger_f_pink", 0, "driver" }//dodge
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "DAR_TahoeEMS", 0, "" },
			{ "max_ambulance", 0, "" },
			{ "ALE_MedSUV", 0, "" },
			{ "ALE_MedHayonSport", 0, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "dezkit_b206_ems", 50000, "mAir" },
			{ "dezkit_b206_rescue", 75000, "mAir" },
			{ "ivory_b206_rescue", 50000, "mAir" },
			{ "ALE_MedOrca", 75000, "mAir" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 60000, "trucking" },
			{ "I_Truck_02_transport_F", 75000, "trucking" },
			{ "I_Truck_02_covered_F", 100000, "trucking" },
			{ "B_Truck_01_transport_F", 275000, "trucking" },
			{ "O_Truck_03_transport_F", 200000, "trucking" },
			{ "O_Truck_03_covered_F", 250000, "trucking" },
			{ "B_Truck_01_box_F", 350000, "trucking" },
			{ "O_Truck_03_device_F", 450000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 0, "" },
			{ "B_G_Offroad_01_F", 0, "" },
			{ "O_MRAP_02_F", 0, "" },
			{ "B_Heli_Light_01_F", 0, "" },
			{ "B_G_Offroad_01_armed_F", 0, "rebel" },
			{ "B_G_Van_01_fuel_F", 0, "" },
			{ "max_robbers_Hatchback", 0, "" },
			{ "max_robbers_suv", 0, "" },
			{ "B_G_Offroad_01_armed_F", 0, "" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "ALE_GendQ7", 0, ""},
			{ "cl3_reventon_clpd", 0, "" },
			{ "DAR_DAR_02FirebirdSSVPolice", 0, "" },
			{ "DAR_TahoePolice", 0, "" },
			{ "DAR_TahoePoliceDet", 0, "" },
			{ "DAR_CVPIAux", 0, "" },
			{ "DAR_ChargerPolice", 0, "" },
			{ "DAR_ExplorerPolice", 0, "" },
			{ "DAR_ExplorerPoliceStealth", 0, "" },
			{ "DAR_TaurusPoliceState", 0, "" },
			{ "DAR_ImpalaPoliceDet", 0, "" },
			{ "DAR_ImpalaPolice", 0, "" },
			{ "Max_Security_armored", 0, "" },
			{ "Max_Police_hunter", 0, "" },
			{ "Max_marshal_car", 0, "" },
			{ "Max_Police_Suv", 0, "" },
			{ "max_Police_Quadbike", 0, "" },
			{ "Max_police_car", 0, "" },
			{ "TCG_Charger14SlickBK", 0, "" },
			{ "TCG_Charger14SlickGY", 0, "" },
			{ "TCG_Charger14SlickWE", 0, "" },
			{ "TCG_Charger14PD", 0, "" },
			{ "ALFR_GeK_Panamera_Police", 0, "" },
			{ "ALE_GendSUV", 0, "" },
			{ "cl3_murcielago_yellow", 0, "" },
			{ "ALE_GendOffroad", 0, "" },
			{ "B_MRAP_01_F", 0, "" }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "dezkit_b206_fl", 0, "pilot" },
			{ "dezkit_b206_hs", 0, "pilot" },
			{ "dezkit_b206_ls", 0, "pilot" },
			{ "ivory_b206", 0, "pilot" },
			{ "dezkit_b206x_unarmed", 0, "pilot" },
			{ "GNT_C185", 0, "pilot" },
			{ "GNT_C185F", 0, "pilot" },
			{ "I_Heli_Transport_02_F", 0, "pilot" },
			{ "B_Heli_Light_01_F", 0, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 0, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "dezkit_b206_fbi", 0, "cAir" },
			{ "dezkit_b206_police", 0, "cAir" },
			{ "ivory_b206_police", 0, "cAir" },
			{ "dezkit_b206x_unarmed", 0, "cAir" },
			{ "GIGN_heli", 0, "cAir" },
			{ "ALE_GendLB", 0, "cAir" },
			{ "max_heli_police_med", 0, "cAir" }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "dezkit_b206_fbi", 0, "cAir" },
			{ "dezkit_b206_police", 0, "cAir" },
			{ "ivory_b206_police", 0, "cAir" },
			{ "dezkit_b206x_unarmed", 0, "cAir" },
			{ "GIGN_heli", 0, "cAir" },
			{ "ALE_GendLB", 0, "cAir" },
			{ "max_heli_police_med", 0, "cAir" },
			{ "ALE_GendQ7", 0, ""},
			{ "DAR_DAR_02FirebirdSSVPolice", 0, "" },
			{ "DAR_TahoePolice", 0, "" },
			{ "DAR_TahoePoliceDet", 0, "" },
			{ "DAR_CVPIAux", 0, "" },
			{ "DAR_ChargerPolice", 0, "" },
			{ "DAR_ExplorerPolice", 0, "" },
			{ "DAR_ExplorerPoliceStealth", 0, "" },
			{ "DAR_TaurusPoliceState", 0, "" },
			{ "DAR_ImpalaPoliceDet", 0, "" },
			{ "DAR_ImpalaPolice", 0, "" },
			{ "Max_Security_armored", 0, "" },
			{ "Max_Police_hunter", 0, "" },
			{ "Max_marshal_car", 0, "" },
			{ "Max_Police_Suv", 0, "" },
			{ "max_Police_Quadbike", 0, "" },
			{ "Max_police_car", 0, "" },
			{ "TCG_Charger14SlickBK", 0, "" },
			{ "TCG_Charger14SlickGY", 0, "" },
			{ "TCG_Charger14SlickWE", 0, "" },
			{ "TCG_Charger14PD", 0, "" },
			{ "ALFR_GeK_Panamera_Police", 0, "" },
			{ "ALE_GendSUV", 0, "" },
			{ "ALE_GendOffroad", 0, "" },
			{ "B_MRAP_01_F", 0, "" }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};

	class legion_car {
		side = "cop";
		vehicles[] = {
			{ "JF_UGV_01_rcws_F", 0, "legion" },
			{ "JF_Truck_01_Repair_F", 0, "legion" },
			{ "O_Truck_03_repair_JF", 0, "legion" },
			{ "B_AMV_JF", 0, "legion" },
			{ "JF_APC_Wheeled_01_cannon_F", 0, "legion" },
			{ "JF_HUNTER_F", 0, "legion" },
			{ "JF_HUNTER_HMG_F", 0, "legion" },
			{ "JF_MRAP_01_F", 0, "legion" },
			{ "JF_MRAP_01_hmg_F", 0, "legion" },
			{ "DAR_M115_MK19Woodland", 0, "legion" },
			{ "DAR_M1151WoodlandUA", 0, "legion" },
			{ "DAR_M1165_GMV", 0, "legion" },
			{ "DAR_MK23A", 0, "legion" },
			{ "DAR_MK27T", 0, "legion" },
			{ "DAR_MK23AD", 0, "legion" },
			{ "BAF_Jackal2_L2A1_W", 0, "legion" },
			{ "BAF_Offroad_W", 0, "legion" },
			{ "I_MRAP_03_F", 0, "legion" },
			{ "I_MRAP_03_hmg_F", 0, "legion" },
			{ "I_MRAP_03_gmg_F", 0, "legion" }
		};
	};

	class legion_air {
		side = "cop";
		vehicles[] = {
			{ "dezkit_b206_fbi", 0, "legion" },
			{ "dezkit_b206x_armed", 0, "legion" },
			{ "MV22", 0, "legion" },
			{ "I_Heli_Transport_02_F", 0, "legion" },
			{ "O_Heli_Attack_02_F", 0, "legion" },
			{ "O_Heli_Attack_02_black_F", 0, "legion" },
			{ "IVORY_T6A_1", 0, "legion" },
			{ "B_Heli_Transport_01_F", 0, "legion" },
			{ "I_Heli_light_03_unarmed_F", 0, "legion" },
			{ "I_Heli_light_03_F", 0, "legion" },
			{ "JF_Heli_Light_01_armed_F", 0, "legion" },
			{ "JF_Heli_Light_01_F", 0, "legion" },
			{ "JF_Heli_LightM_01_armed_F", 0, "legion" },
			{ "JF_Heli_LightM_01_F", 0, "legion" },
			{ "JF_O_Heli_Light_02_F", 0, "legion" },
			{ "O_Heli_Attack_02_black_JF", 0, "legion" },
			{ "JF_avion_combat_03_AA_F", 0, "legion" },
			{ "JF_avion_combat_03_CAS_F", 0, "legion" },
			{ "JF_Heli_light_03C_transport_F", 0, "legion" },
			{ "JF_Heli_light_03C_F", 0, "legion" },
			{ "JF_Heli_light_03_transport_F", 0, "legion" },
			{ "JF_Heli_light_03_F", 0, "legion" },
			{ "JF_Heli_Transport_02_F", 0, "legion" },
			{ "JF_Heli_Transport_01_F", 0, "legion" },
			{ "JF_O_Heli_LightA_02_F", 0, "legion" },
			{ "B_Heli_Transport_01_camo_JF", 0, "legion" },
			{ "B_Heli_Transport_01_JF", 0, "legion" },
			{ "O_Plane_CAS_02_JF", 0, "legion" },
			{ "O_Plane_CAS_02_JFcamo", 0, "legion" }
		};
	};

	class giap_car {
		side = "cop";
		vehicles[] = {
			{ "DAR_M1151", 0, "giap"},
			{ "DAR_M1151_Deploy", 0, "giap" },
			{ "DAR_M1165_GMV", 0, "giap" },
			{ "DAR_SWATPolice", 0, "giap" },
			{ "max_swat_armored", 0, "giap" },
			{ "Max_swat_hunter", 0, "giap" },
			{ "Max_swat_car", 0, "giap" },
			{ "Max_Security_armored", 0, "giap" },
			{ "AF_Jackal2_L2A1_D", 0, "giap" },
			{ "GIGN_Hunter", 0, "giap" },
			{ "B_MRAP_01_F", 0, "giap" },
			{ "B_MRAP_01_hmg_F", 0, "giap" }
		};
	};

	class giap_air {
		side = "cop";
		vehicles[] = {
			{ "dezkit_b206_fbi", 0, "giap" },
			{ "MV22", 0, "giap" },
			{ "GIGN_heli", 0, "giap" },
			{ "B_Heli_Transport_01_F", 0, "giap" },
			{ "ALE_GignHellcat", 0, "giap" },
			{ "B_UAV_01_F", 0, "giap" },
			{ "max_Swat_heli", 0, "giap" }
		};
	};

	class milice_car {
		side = "civ";
		vehicles[] = {
			{ "B_G_Offroad_01_armed_F", 0, "milice" },
			{ "O_MRAP_02_F", 0, "milice" },
			{ "O_MRAP_02_hmg_F", 0, "milice" },
			{ "BAF_Offroad_W", 0, "milice" },
			{ "B_Heli_Light_01_armed_F", 0, "milice" },
			{ "Cha_Mi17_rockets_RU", 0, "milice" },
			{ "Cha_Mi17_CDF", 0, "milice" },
			{ "Cha_Mi17_TK_EP1", 0, "milice" },
			{ "Cha_BRDM2_ChDKZ", 0, "milice" },
			{ "Cha_BRDM2_ATGM_ChDKZ", 0, "milice" },
			{ "Cha_BRDM2_HQ_ChDKZ", 0, "milice" },
			{ "Cha_BRDM2_CDF", 0, "milice" },
			{ "Cha_BRDM2_ATGM_CDF", 0, "milice" },
			{ "Cha_BRDM2_HQ_CDF", 0, "milice" },
			{ "Cha_BTR60_CDF", 0, "milice" },
			{ "RU_MBT_02_arty_F", 0, "milice" },
			{ "RU_MBT_02_cannon_F", 0, "milice" },
			{ "RU_APC_Tracked_02_AA_F", 0, "milice" },
			{ "SUD_BTR100", 0, "milice" },
			{ "SUD_Kamaz_transport", 0, "milice" },
			{ "SUD_Kamaz_covered", 0, "milice" },
			{ "Cha_Mi171Sh_rockets_CZ_EP1", 0, "milice" }
		};
	};
	
	class milice_air {
		side = "civ";
		vehicles[] = {
			{ "Cha_Mi17_Ins", 0, "milice" },
			{ "Cha_Mi17_CDF", 0, "milice" },
			{ "Cha_Mi17_rockets_RU", 0, "milice" },
			{ "SUD_KA60_RU", 0, "milice" },
			{ "SUD_MI48_RU", 0, "milice" },
			{ "Cha_Mi17_medevac_RU", 0, "milice" },
			{ "Cha_Mi17_medevac_CDF", 0, "milice" },
			{ "Cha_Mi17_medevac_Ins", 0, "milice" },
			{ "B_G_Van_01_transport_F", 0, "milice" }
		};
	};
	
	class milice_ship {
		side = "civ";
		vehicles[] = {
			{ "O_Boat_Armed_01_hmg_F", 0, "milice" },
			{ "SUD_RU_Assaultboat", 0, "milice" },
			{ "O_Boat_Transport_01_F", 0, "milice" },
			{ "O_SDV_01_F", 0, "milice" },
			{ "O_CBS_WaterShadow730_F", 0, "milice" }
		};
	};
	
	class mafia_car {
		side = "civ";
		vehicles[] = {
			{ "CL3_Black_SUV_01_F", 0, "mafia" },
			{ "CL3_Grey_SUV_01_F", 0, "mafia" },
			{ "DAR_ChargerCiv", 0, "mafia" },
			{ "DAR_ImpalaCivA", 0, "mafia" },
			{ "DAR_FusionCivBlack", 0, "mafia" },
			{ "DAR_TahoeCivBlack", 0, "mafia" },
			{ "DAR_MF1Civ", 0, "mafia" },
			{ "DAR_MF1Silver", 0, "mafia" },
			{ "DAR_TahoeCivSilver", 0, "mafia" },
			{ "DAR_TahoeCiv", 0, "mafia" },
			{ "DAR_M3CivGrey", 0, "mafia" },
			{ "DAR_M3CivWhite", 0, "mafia" },
			{ "DAR_ChallengerCivWhite", 0, "mafia" },
			{ "DAR_FusionCiv", 0, "mafia" },
			{ "A3L_ChargerWhit", 0, "mafia" },
			{ "DAR_TaurusCiv", 0, "mafia" },
			{ "BMW_M5White", 0, "mafia" },
			{ "A3L_PuntoBlack", 0, "mafia" },
			{ "A3L_PuntoGrey", 0, "mafia" },
			{ "A3L_PuntoWhite", 0, "mafia" },
			{ "DAR_ImpalaCivD", 0, "mafia" },
			{ "ALFR_GeK_Panamera", 0, "mafia" },
			{ "cl3_civic_vti_black", 0, "mafia" },
			{ "cl3_transit_black", 0, "mafia" },
			{ "cl3_dbs_volante_black", 0, "mafia" },
			{ "cl3_e63_amg_black", 0, "mafia" },
			{ "cl3_e60_m5_black", 0, "mafia" },
			{ "cl3_z4_2008_black", 0, "mafia" },
			{ "cl3_civic_vti_white", 0, "mafia" },
			{ "cl3_transit_white", 0, "mafia" },
			{ "cl3_dbs_volante_white", 0, "mafia" },
			{ "cl3_e63_amg_white", 0, "mafia" },
			{ "cl3_e60_m5_white", 0, "mafia" },
			{ "cl3_z4_2008_white", 0, "mafia" },
			{ "cl3_taurus_white", 0, "mafia" },
			{ "cl3_taurus_grey", 0, "mafia" }
			
		};
	};
	
	class mafia_air {
		side = "civ";
		vehicles[] = {
			{ "Cha_Mi8_Cia", 0, "mafia" },
			{ "C_Heli_Light_01_civil_F", 0, "mafia" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
};