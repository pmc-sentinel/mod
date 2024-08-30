// Base Imports
class SlotInfo;

// Weapon Imports
class MCX_Virtus_14_f_s4;
class MCX_SpearLT_762_16_s1;
class rhs_weap_m249_pip_ris;
class rhs_weap_m4a1;

// Presets
class PMCS_weap_m4a1 : rhs_weap_m4a1 {
	class LinkedItems {
		WOPTIC(rhsusf_acc_SU230);
	};
};

class PMCS_MCX_Virtus_14_f_s4 : MCX_Virtus_14_f_s4 {
	class LinkedItems {
		WOPTIC(RKSL_Optic_EOT552);
		WPOINTER(BC_ACC_B_IR_MCXV);
	};
};

class PMCS_MCX_SpearLT_762_16_s1 : MCX_SpearLT_762_16_s1 {
	class LinkedItems {
		WOPTIC(rhsusf_acc_M8541_mrds);
		WPOINTER(BC_ACC_S_IR_MCXV);
		WMUZZLE(MCX_SLC);
		WBIPOD(rhsusf_acc_grip1);
	};
};

class PMCS_M249_PIP_RIS : rhs_weap_m249_pip_ris {
	class LinkedItems {
		WOPTIC(rhsusf_acc_ACOG_RMR);
		WBIPOD(rhsusf_acc_saw_bipod);
	};
};