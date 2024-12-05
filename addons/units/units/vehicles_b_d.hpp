// Ground
GV_D_OR(MRZR4,rhsusf_mrzr4_d)
GV_D_OR(WMIK_HMG_FFR,UK3CB_BAF_LandRover_WMIK_HMG_FFR_Sand_A)
GV_D_OR(WMIK_GPMG_FFR,UK3CB_BAF_LandRover_WMIK_GPMG_FFR_Sand_A)
GV_D_OR(M1165A1,rhsusf_m1165a1_gmv_m2_m240_socom_d)
GV_D_OR(M1240,rhsusf_m1240a1_usarmy_d)
GV_D_OR(M1240_M2,rhsusf_m1240a1_m2_usarmy_d)
GV_D_OR(M1240_M240,rhsusf_m1240a1_m240_usarmy_d)
GV_D_OR(M1240A1_M2,rhsusf_m1240a1_m2_uik_usarmy_d)
GV_D_OR(M1240A1_M240,rhsusf_m1240a1_m240_uik_usarmy_d)
GV_D_OR(Husky_HMG,UK3CB_BAF_Husky_Passenger_HMG_Sand)
GV_D_OR(Husky_GPMG,UK3CB_BAF_Husky_Passenger_GPMG_Sand)
GV_D_OR(M1232,rhsusf_M1232_usarmy_d)
GV_D_OR(M1232_M2,rhsusf_M1232_M2_usarmy_d)
GV_D_OR(M1220,rhsusf_M1220_usarmy_d)
GV_D_OR(M1220_M2,rhsusf_M1220_M2_usarmy_d)
GV_D_OR(M1237,rhsusf_M1237_M2_usarmy_d)

class rhsusf_stryker_M1127_M2_d;
class GVAR(blufor_D_M1127) : rhsusf_stryker_M1127_M2_d {
    author = ECSTRING(common,tfpTeam);
    faction = QGVAR(blufor_D);
    crew = QGVAR(blufor_W_Rifleman);
    scope = 2;
    scopeCurator = 2;

    hiddenSelectionsTextures[] = {
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_des_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_d_CO.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
        "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
    };
};

// Logistics
GV_D_OR(M1078A1P2_B_M2_Flatbed,rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy)
GV_D_OR(M1078A1P2_B_M2,rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy)
GV_D_OR(M1083A1P2,rhsusf_M1083A1P2_B_D_fmtv_usarmy)
GV_D_OR(M1239_AUV,rhsusf_M1239_socom_d)
GV_D_OR(M1078A1P2,rhsusf_M1078A1P2_D_fmtv_usarmy)

GV_D_OR(M977A4_Ammo,rhsusf_M977A4_AMMO_usarmy_d)
GV_D_OR(M977A4_Repair,rhsusf_M977A4_REPAIR_usarmy_d)
GV_D_OR(M978A4,rhsusf_M978A4_usarmy_d)

// Boats
GV_D_OR(AssaultBoat_HMG,UK3CB_BAF_RHIB_HMG)
GV_D_OR(AssaultBoat_GPMG,UK3CB_BAF_RHIB_GPMG)

// Rotary Logistics
AV_D_OR(MH6M,RHS_MELB_MH6M)
AV_D_OR(CH47,RHS_CH_47F_10)

// Rotary CAS
AV_D_OR(AH6M,RHS_MELB_AH6M)

// Statics
GV_D_OR(S_M2_High,RHS_M2StaticMG_USMC_D)
GV_D_OR(S_M2_Low,RHS_M2StaticMG_MiniTripod_USMC_D)
GV_D_OR(S_TOW,RHS_TOW_TriPod_D)
GV_D_OR(S_FIM92F,RHS_Stinger_AA_pod_D)
