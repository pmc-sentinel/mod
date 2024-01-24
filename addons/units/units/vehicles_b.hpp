// Inheritance Imports
class rhsusf_m1165a1_gmv_m2_m240_socom_d;
class rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy;
class rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy;
class rhsusf_m1a1aimd_usarmy;
class rhsusf_M1232_MC_M2_usmc_d;
class rhsusf_m113d_usarmy;
class RHS_M2StaticMG_USMC_D;
class RHS_M2StaticMG_MiniTripod_USMC_D;
class vtx_UH60M;
class vtx_MH60M_DAP_MLASS;

// Overrides for crew & gunners
class PMCS_B_D_M1165A1_GMV_M2_M240_SOCOM : rhsusf_m1165a1_gmv_m2_m240_socom_d {
	B_VCREW;
};

class PMCS_B_D_M1078A1P2_M2_Flatbed_01 : rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy {
	B_VCREW;
};

class PMCS_B_D_M1083A1P2_M2_fmtv : rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy {
	B_VCREW;
};

class PMCS_B_D_M1A1AIM : rhsusf_m1a1aimd_usarmy {
	B_VCREW;
};

class PMCS_B_D_M1232_MC_M2 : rhsusf_M1232_MC_M2_usmc_d {
	B_VCREW;
};

class PMCS_B_D_M113 : rhsusf_m113d_usarmy {
	B_VCREW;
};

class PMCS_B_D_M2StaticMG : RHS_M2StaticMG_USMC_D {
	B_VCREW;
};

class PMCS_B_D_M2StaticMG_MiniTripod : RHS_M2StaticMG_MiniTripod_USMC_D {
	B_VCREW;
};

class PMCS_B_UH60M : vtx_UH60M {
	B_VCREW;
	editorSubcategory = "EdSubcat_Helicopters";
};

class PMCS_B_MH60M_DAP_MLASS : vtx_MH60M_DAP_MLASS {
	B_VCREW;
	editorSubcategory = "EdSubcat_Helicopters";
};