// Must be set to extend for individual soldier classes.
class B_Soldier_base_F;

// Base class for all Task Force Prometheus units
class GVAR(blufor_soldier) : B_Soldier_base_F {
    author       = ECSTRING(common,tfpTeam);
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

    canDeactivateMines = 0;
    engineer           = 0;
    attendant          = 0; // Has Medic trait

    hiddenSelections[]         = { "Camo", "Insignia" };
    hiddenSelectionsTextures[] = { "VSM_Multicam\Data\VSM_ARD_Multicam_1.paa", "z\tfp\addons\patches\tfp_insig.paa" };

    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

    uniformClass = "USP_G3C_MC";

    linkedItems[]        = { "rhsusf_spcs_ocp_rifleman_alt", "USP_IHPS_COV_CT3_TAN_MC", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };
    respawnLinkedItems[] = { "rhsusf_spcs_ocp_rifleman_alt", "USP_IHPS_COV_CT3_TAN_MC", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };
};

class GVAR(blufor_D_Rifleman) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Rifleman_AK);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    backpack = "USP_ZIPON_PANEL_CPC_SMK_MC";

    weapons[]        = { QGVAR(weapon_ak103_zenitco01_b33), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_ak103_zenitco01_b33), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };

    Items[]        = { MAG_5(ACE_PackingBandage), MAG_5(ACE_elasticBandage), MAG_3(ACE_morphine), MAG_3(ACE_epinephrine), MAG_2(ACE_tourniquet), MAG_2(ACE_splint), "ACRE_PRC343" };
    RespawnItems[] = { MAG_5(ACE_PackingBandage), MAG_5(ACE_elasticBandage), MAG_3(ACE_morphine), MAG_3(ACE_epinephrine), MAG_2(ACE_tourniquet), MAG_2(ACE_splint), "ACRE_PRC343" };

    magazines[]        = { MAG_5(rhs_30Rnd_762x39mm_polymer), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(rhs_30Rnd_762x39mm_polymer), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Rifleman)

class GVAR(blufor_D_Rifleman_MCX) : GVAR(blufor_soldier) {
    displayName = CSTRING(Soldier_Rifleman_MCX);

    scope        = 2; // available in 3den
    scopeCurator = 2; // available in Zeus
    scopeArsenal = 2; // available in arsenal

    backpack = "USP_ZIPON_PANEL_CPC_SMK_MC";

    weapons[]        = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "rhs_weap_M136_hedp", "Throw", "Put" };

    Items[]        = { MAG_5(ACE_PackingBandage), MAG_5(ACE_elasticBandage), MAG_3(ACE_morphine), MAG_3(ACE_epinephrine), MAG_2(ACE_tourniquet), MAG_2(ACE_splint), "ACRE_PRC343" };
    RespawnItems[] = { MAG_5(ACE_PackingBandage), MAG_5(ACE_elasticBandage), MAG_3(ACE_morphine), MAG_3(ACE_epinephrine), MAG_2(ACE_tourniquet), MAG_2(ACE_splint), "ACRE_PRC343" };

    magazines[]        = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Rifleman_MCX)

class GVAR(blufor_D_SquadLeader) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_SquadLeader);

    backpack = "USP_REEBOW_3DAP_ACC4_MC";
    icon     = "iconManLeader";

    weapons[]        = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "Throw", "Put" };

    magazines[]        = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(SquadLeader)

class GVAR(blufor_D_TeamLeader) : GVAR(blufor_D_SquadLeader) {
    displayName = CSTRING(Soldier_TeamLeader);
};
UCOPY(TeamLeader)

class GVAR(blufor_D_EOD) : GVAR(blufor_D_Rifleman) {
    displayName        = CSTRING(Soldier_EOD);
    canDeactivateMines = 1;
    icon               = "iconManEngineer";
};
UCOPY(EOD)

class GVAR(blufor_D_MissileSpecialist) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_MissileSpecialist);

    backpack = "USP_PATROL_PACK_CB_RP";
    icon     = "iconManAT";

    weapons[]        = { QGVAR(weapon_ak103_zenitco01_b33), "rhsusf_weap_glock17g4", "rhs_weap_maaws", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_ak103_zenitco01_b33), "rhsusf_weap_glock17g4", "rhs_weap_maaws", "Throw", "Put" };

    magazines[]        = { MAG_5(rhs_30Rnd_762x39mm_polymer), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), MAG_4(rhs_mag_maaws_hedp), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(rhs_30Rnd_762x39mm_polymer), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), MAG_4(rhs_mag_maaws_hedp), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(MissileSpecialist)

class GVAR(blufor_D_MissileSpecialist_AA) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_MissileSpecialist_AA);

    backpack = "USP_PATROL_PACK_CB_RP";
    icon     = "iconManAT";

    weapons[]        = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "rhs_weap_fim92", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "rhs_weap_fim92", "Throw", "Put" };

    magazines[]        = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade), MAG_2(rhs_fim92_mag) };
    respawnMagazines[] = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade), MAG_2(rhs_fim92_mag) };
};
UCOPY(MissileSpecialist_AA)

class GVAR(blufor_D_Autorifleman) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_Autorifleman);

    backpack = "USP_PATROL_PACK_CB_RP";
    icon = "iconManMG";

    weapons[]        = { QGVAR(weapon_M249_PIP_RIS), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M249_PIP_RIS), "rhsusf_weap_glock17g4", "Throw", "Put" };

    magazines[]        = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_3(rhsusf_200Rnd_556x45_box), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Autorifleman)

class GVAR(blufor_D_Marksman) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_Marksman_M110);

    weapons[]        = { QGVAR(weapon_M110k5_ACS), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_M110k5_ACS), "rhsusf_weap_glock17g4", "Throw", "Put" };

    magazines[]        = { MAG_5(Tier1_20Rnd_762x51_M993_SR25_Mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(Tier1_20Rnd_762x51_M993_SR25_Mag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Marksman)

class GVAR(blufor_D_Marksman_VSS) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_Marksman_VSS);

    weapons[]        = { QGVAR(weapon_VSS_Vintorez), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_VSS_Vintorez), "rhsusf_weap_glock17g4", "Throw", "Put" };

    magazines[]        = { MAG_5(rhs_20rnd_9x39mm_SP6), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(rhs_20rnd_9x39mm_SP6), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(Marksman_VSS)

class GVAR(blufor_D_PilotHelicopter) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_PilotHelicopter);

    backpack = "USP_REEBOW_3DAP_ACC4_MC";

    linkedItems[]        = { "rhsusf_spcs_ocp_rifleman_alt", "rhsusf_hgu56p_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };
    respawnLinkedItems[] = { "rhsusf_spcs_ocp_rifleman_alt", "rhsusf_hgu56p_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ACE_Vector" };

    weapons[]        = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "Throw", "Put" };
    respawnWeapons[] = { QGVAR(weapon_SIG_MCX_115_Virtus), "rhsusf_weap_glock17g4", "Throw", "Put" };

    magazines[]        = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
    respawnMagazines[] = { MAG_5(Tier1_30Rnd_556x45_M855A1_EMag), MAG_2(rhsusf_mag_17Rnd_9x19_JHP), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };
};
UCOPY(PilotHelicopter)

class GVAR(blufor_D_Medic) : GVAR(blufor_D_Rifleman) {
    displayName = CSTRING(Soldier_Medic);
    attendant   = 1; // Has Medic trait
    icon        = "iconManMedic";
};
UCOPY(Medic)
