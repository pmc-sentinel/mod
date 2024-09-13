// Must be set to extend for individual soldier classes.
class B_Soldier_base_F;

// Base class for all PMC Sentinel units
class GVAR(blufor_soldier) : B_Soldier_base_F {
    author       = ECSTRING(common,PMCSTeam);
    scope        = 0; // available in 3den
    scopeCurator = 0; // available in Zeus
    scopeArsenal = 0; // available in arsenal

    side              = 1; // BLUFOR
    faction           = QGVAR(blufor_D); // set in addons/factions, not in addons/units
    editorSubcategory = UNITGROUP(B,Men);

    identityTypes[] = { "LanguageENG_F", "Head_NATO", "G_NATO_Default" };

    cost        = 20000;
    camouflage  = 1.5;
    sensitivity = 2.5;
    threat[]    = { 1, 1, 0.8 };

    hiddenSelections[]         = { "Camo", "Insignia" };
    hiddenSelectionsTextures[] = { "VSM_Multicam\Data\VSM_ARD_Multicam_grey_shirt_1.paa", "z\pmcs\addons\patches\pmcs_insig.paa" };

    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

    uniformClass = "VSM_Multicam_Crye_grey_shirt_Camo";

    linkedItems[] = { "VSM_LBT6094_operator_multicam", "VSM_OPS_multicam", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ACE_Vector" };
    respawnLinkedItems[] = { "VSM_LBT6094_operator_multicam", "VSM_OPS_multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };
};

class GVAR(blufor_D_SquadLeader) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_SquadLeader);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "tfw_ilbe_whip_mc";

    weapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(SquadLeader)

class GVAR(blufor_D_TeamLeader) : GVAR(blufor_D_SquadLeader) {
    displayName = CSTRING(Soldier_TeamLeader);
};
UCOPY(TeamLeader)

class GVAR(blufor_D_Rifleman) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Rifleman);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "VSM_Multicam_Backpack_Compact";

    weapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Rifleman)

class GVAR(blufor_D_EOD) : GVAR(blufor_D_Rifleman) {
    displayName        = CSTRING(Soldier_EOD);
    canDeactivateMines = 1;
};
UCOPY(EOD)

class GVAR(blufor_D_MissileSpecialist) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_MissileSpecialist);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "VSM_Multicam_carryall";

    weapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "rhs_weap_maaws", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "rhs_weap_maaws", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), MAG_4(rhs_mag_maaws_hedp), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), MAG_4(rhs_mag_maaws_hedp), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(MissileSpecialist)

class GVAR(blufor_D_Autorifleman) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Autorifleman);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "VSM_Multicam_Backpack_Compact";

    weapons[] = { QGVAR(weapon_M249_PIP_RIS), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M249_PIP_RIS), "rhsusf_weap_glock17g4", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Autorifleman)

class GVAR(blufor_D_Marksman) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Marksman);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "VSM_Multicam_Backpack_Compact";

    weapons[] = { QGVAR(weapon_M110k5_ACS), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M110k5_ACS), "rhsusf_weap_glock17g4", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(Tier1_20Rnd_762x51_M993_SR25_Mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(Tier1_20Rnd_762x51_M993_SR25_Mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Marksman)

class GVAR(blufor_D_PilotHelicopter) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_PilotHelicopter);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 0; // Has Medic trait

    backpack = "tfw_ilbe_whip_mc";

    linkedItems[] = { "VSM_LBT6094_operator_multicam", "rhsusf_hgu56p_black", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ACE_Vector" };
    respawnLinkedItems[] = { "VSM_LBT6094_operator_multicam", "rhsusf_hgu56p_black", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_ancprc152", "ACE_Vector" };

    weapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(PilotHelicopter)

class GVAR(blufor_D_Medic) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Medic);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    canDeactivateMines   = 0;
    engineer             = 0;
    attendant            = 1; // Has Medic trait

    backpack = "VSM_Multicam_Backpack_Compact";

    weapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M4A1), "rhsusf_weap_glock17g4", "Throw", "Put" };

    Items[] = { "FirstAidKit" };
    RespawnItems[] = { "FirstAidKit" };

    magazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(30Rnd_556x45_Stanag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Medic)