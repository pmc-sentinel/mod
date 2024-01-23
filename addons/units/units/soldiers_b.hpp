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

	hiddenSelections[] 		   = { "Camo", "Insignia" };
	hiddenSelectionsTextures[] = { "VSM_Multicam\Data\VSM_ARD_Multicam_grey_shirt_1.paa" };

	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

	uniformClass = "VSM_Multicam_Crye_grey_shirt_Camo";

	linkedItems[] = { "VSM_LBT6094_operator_multicam", "VSM_OPS_multicam", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ACE_Vector" };
	respawnLinkedItems[] = { "VSM_LBT6094_operator_multicam", "VSM_OPS_multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };
};

class PMCS_B_SquadLeader : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_SquadLeader);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 0;
	engineer             = 0;
	attendant            = 0; // Has Medic trait

	backpack = "tfw_ilbe_whip_mc";

	weapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "Throw", "Put" };
	respawnWeapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "Throw", "Put" };

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
	respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};

class PMCS_B_TeamLeader : PMCS_B_SquadLeader {
	displayName = CSTRING(Soldier_TeamLeader);
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

	weapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "Throw", "Put" };
	respawnWeapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "Throw", "Put" };

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
	respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};

class PMCS_B_Rifleman_LAT : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_Rifleman_LAT);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 0;
	engineer             = 0;
	attendant            = 0; // Has Medic trait

	backpack = "VSM_Multicam_Backpack_Compact";

	weapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };
	respawnWeapons[] = { "PMCS_MCX_Virtus_14_f_s4", "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
	respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};

class PMCS_B_Autorifleman : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_Autorifleman);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 0;
	engineer             = 0;
	attendant            = 0; // Has Medic trait

	backpack = "VSM_Multicam_Backpack_Compact";

	weapons[] = { "PMCS_M249_PIP_RIS", "rhsusf_weap_glock17g4", "Throw", "Put" };
	respawnWeapons[] = { "PMCS_M249_PIP_RIS", "rhsusf_weap_glock17g4", "Throw", "Put" };

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	magazines[] = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
	respawnMagazines[] = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};

class PMCS_B_Marksman : PMCS_B_Soldier_base {
	displayName = CSTRING(Soldier_Marksman);

	scope 	     = 2; // available in 3den
	scopeCurator = 2; // available in Zeus
	scopeArsenal = 2; // available in arsenal

	canDeactivateMines   = 0;
	engineer             = 0;
	attendant            = 0; // Has Medic trait

	backpack = "VSM_Multicam_Backpack_Compact";

	weapons[] = { "PMCS_MCX_SpearLT_762_16_s1", "rhsusf_weap_glock17g4", "Throw", "Put" };
	respawnWeapons[] = { "PMCS_MCX_SpearLT_762_16_s1", "rhsusf_weap_glock17g4", "Throw", "Put" };

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	magazines[] = { MAG_5(MCX_28Rnd_762R_AP_mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
	respawnMagazines[] = { MAG_5(MCX_28Rnd_762R_AP_mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};