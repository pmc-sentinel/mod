// Must be set to extend for individual soldier classes.
class B_Soldier_base_F;

// Base class for all PMC Sentinel units
class PMCS_B_Soldier_base : B_Soldier_base_F {
	author       = ECSTRING(common,PMCSTeam);
	scope 	     = 0; // available in 3den
	scopeCurator = 0; // available in Zeus
	scopeArsenal = 0; // available in arsenal

	side              = 1; // BLUFOR
	faction           = "PMCS_B"; // set in addons/factions, not in addons/units
	editorSubcategory = UNITGROUP(B,Men);

	identityTypes[] = { "LanguageENG_F", "Head_NATO", "G_NATO_Default" };

	cost 		= 20000;
	camouflage  = 1.5;
	sensitivity = 2.5;
	threat[]    = { 1, 1, 0.8 };

	hiddenSelections[] 		   = { "camo" };
	hiddenSelectionsTextures[] = { "\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa" };

	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

	uniformClass = "U_B_soldier_new";
};

class PMCS_B_Rifleman : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_Rifleman);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 1;					// Can this character deactivate mines?
	engineer             = 1;							// Can this character repair vehicles?
	attendant            = 1;							// Can this character heal soldiers?
	icon                 = "iconManEngineer";				// If a character has a special role, a special icon shall be used.
	picture              = "pictureRepair";				// The same as above, but for the squad picture.
	backpack             = "B_Kitbag_mcamo_Eng";		// Which backpack the character is wearing.
	weapons[]            = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };		// Which weapons the character has.
	respawnWeapons[]     = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };	// Which weapons the character respawns with.
	Items[]              = { "FirstAidKit" };			// Which items the character has.
	RespawnItems[]       = { "FirstAidKit" };		// Which items the character respawns with.
	magazines[]          = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };			// What ammunition the character has.
	respawnMagazines[]   = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };	// What ammunition the character respawns with.
	linkedItems[]        = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };		// Which items the character has.
	respawnLinkedItems[] = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };	// Which items the character respawns with.
};