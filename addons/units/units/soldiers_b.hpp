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

	uniformClass = "VSM_Multicam_Crye_grey_shirt_Camo";

	#define PMCS_B_Soldier_base_linkedItems { "VSM_LBT6094_operator_multicam", "VSM_OPS_multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" }
	LINKEDITEMS(PMCS_B_Soldier_base_linkedItems);
};

class PMCS_B_Rifleman : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_Rifleman);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 0;
	engineer             = 0;
	attendant            = 0; // Has Medic trait

	backpack = "VSM_Multicam_Backpack_Compact";

	#define PMCS_B_Rifleman_weapons { "MCX_Virtus_14_b_s4", "hgun_P07_F", "Throw", "Put" }
	WEAPONS(PMCS_B_Rifleman_weapons);

	#define PMCS_B_Rifleman_items { "FirstAidKit" }
	ITEMS(PMCS_B_Rifleman_items);

	#define PMCS_B_Rifleman_magazines { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) }
	MAGAZINES(PMCS_B_Rifleman_magazines);
};