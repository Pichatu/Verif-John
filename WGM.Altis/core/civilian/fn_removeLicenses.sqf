#include <macro.h>
/*
	File: fn_removeLicenses.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used for stripping certain licenses off of civilians as punishment.
*/
private["_state"];
_state = [_this,0,1,[0]] call BIS_fnc_param;

switch (_state) do {
	//Death while being wanted
	case 0: {
		/* SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("heroin","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("marijuana","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("coke","civ"),false]; */
	};
	
	//Jail licenses
	case 1: {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
	};
	
	//Remove motor vehicle licenses
	case 2: {
		if(GVAR_MNS LICENSE_VARNAME("driver","civ") OR GVAR_MNS LICENSE_VARNAME("air","civ") OR GVAR_MNS LICENSE_VARNAME("truck","civ") OR GVAR_MNS LICENSE_VARNAME("boat","civ")) then {			
			SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("truck","civ"),false];
			hint localize "STR_Civ_LicenseRemove_1";
		};
	};
	
	//Killing someone while owning a gun license
	case 3: {
		if(GVAR_MNS LICENSE_VARNAME("gun","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
			hint localize "STR_Civ_LicenseRemove_2";
		};
	};
};



// Revoking Licenses
    
    // Permis de Conduire
    case 10:
    {
        driver = false;
        hint localize "STR_Civ_RevokeLicense_Driver";
    };
    // Permis de Camions
    case 11:
    {
        license_civ_trucking = false;
        hint localize "STR_Civ_RevokeLicense_Truck";
    };
    // Brevet de Pilote
    case 12:
    {
        license_civ_cAir = false;
        hint localize "STR_Civ_RevokeLicense_Pilot";
    };
    // Permis de Bateau
    case 13:
    {
        license_civ_boat = false;
        hint localize "STR_Civ_RevokeLicense_Boating";
    };
    // Permis de plongée
    case 14:
    {
        license_civ_dive = false;
        hint localize "STR_Civ_RevokeLicense_Diving";
    };
    // Licence de Taxi
    case 15:
    {
        license_civ_taxi = false;
        hint localize "STR_Civ_RevokeLicense_Taxi";
    };
    // Toutes les licences
    case 16:
    {
        license_civ_driver = false;
        license_civ_trucking = false;
        license_civ_cAir = false;
        license_civ_boat = false;
        license_civ_air = false;
        license_civ_dive = false;
        license_civ_taxi = false;
        hint localize "STR_Civ_RevokeLicense_AllMotor";
    };
    // Permis de port d'armes
    case 17:
    {
        license_civ_gun = false;
        hint localize "STR_Civ_RevokeLicense_Firearm";
    };