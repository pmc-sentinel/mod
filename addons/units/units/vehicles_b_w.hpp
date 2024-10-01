class GVAR(blufor_W_M1165A1) : rhsusf_m1165a1_gmv_m2_m240_socom_d {
	author = ECSTRING(common,PMCSTeam);
	faction = QGVAR(blufor_W);
	crew = QGVAR(blufor_W_Rifleman);
	scope = 2;
	scopeCurator = 2;

	hiddenSelections[] = {"camo","camo1","camo2","camo8","camo17","camo18","camo19","BFT_screen"};
	HiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_WD_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
		"rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_WD_CO.paa",
		"rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_WD_CO.paa",
		"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
	};

	textureList[] = {"rhs_woodland",1};
};

// Ground
GV_W_OR(MRZR4,rhsusf_mrzr4_w)
GV_W_OR(WMIK_HMG_FFR,UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A)
GV_W_OR(WMIK_GPMG_FFR,UK3CB_BAF_LandRover_WMIK_GPMG_FFR_Green_A)
GV_W_OR(M1240,rhsusf_m1240a1_usarmy_wd)
GV_W_OR(M1240_M2,rhsusf_m1240a1_m2_usarmy_wd)
GV_W_OR(M1240_M240,rhsusf_m1240a1_m240_usarmy_wd)
GV_W_OR(M1240A1_M2,rhsusf_m1240a1_m2_uik_usarmy_wd)
GV_W_OR(M1240A1_M240,rhsusf_m1240a1_m240_uik_usarmy_wd)
GV_W_OR(Husky_HMG,UK3CB_BAF_Husky_Passenger_HMG_Green)
GV_W_OR(Husky_GPMG,UK3CB_BAF_Husky_Passenger_GPMG_Green)
GV_W_OR(M1232,rhsusf_M1232_usarmy_wd)
GV_W_OR(M1232_M2,rhsusf_M1232_M2_usarmy_wd)
GV_W_OR(M1220,rhsusf_M1220_usarmy_wd)
GV_W_OR(M1220_M2,rhsusf_M1220_M2_usarmy_wd)
GV_W_OR(M1237,rhsusf_M1237_M2_usarmy_wd)
GV_W_OR(M1127,rhsusf_stryker_M1127_M2_wd)

// Logistics
GV_W_OR(M1078A1P2_B_M2_Flatbed,rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy)
GV_W_OR(M1078A1P2_B_M2,rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy)
GV_W_OR(M1083A1P2,rhsusf_M1083A1P2_B_WD_fmtv_usarmy)
GV_W_OR(M1239_AUV,rhsusf_M1239_socom_wd)
GV_W_OR(M1078A1P2,rhsusf_M1078A1P2_WD_fmtv_usarmy)

GV_W_OR(M977A4_Ammo,rhsusf_M977A4_AMMO_usarmy_wd)
GV_W_OR(M977A4_Repair,rhsusf_M977A4_REPAIR_usarmy_wd)
GV_W_OR(M978A4,rhsusf_M978A4_usarmy_wd)

// Boats
GV_W_OR_NI(AssaultBoat_HMG,UK3CB_BAF_RHIB_HMG)
GV_W_OR_NI(AssaultBoat_GPMG,UK3CB_BAF_RHIB_GPMG)

// Rotary Logistics
AV_W_OR_NI(MH6M,RHS_MELB_MH6M)
AV_W_OR_NI(MH60M,vtx_MH60M)
AV_W_OR_NI(CH47,RHS_CH_47F_10)

// Rotary CAS
AV_W_OR_NI(AH6M,RHS_MELB_AH6M)
AV_W_OR_NI(MH60M_DAP_MLASS,vtx_MH60M_DAP_MLASS)
AV_W_OR_NI(AH64D,fza_ah64d_b2e)

// Statics
GV_W_OR(S_M2_High,RHS_M2StaticMG_USMC_WD)
GV_W_OR(S_M2_Low,RHS_M2StaticMG_MiniTripod_USMC_WD)
GV_W_OR(S_TOW,RHS_TOW_TriPod_WD)
GV_W_OR(S_FIM92F,RHS_Stinger_AA_pod_WD)