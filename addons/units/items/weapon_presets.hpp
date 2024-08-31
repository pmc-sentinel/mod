// Base Imports
class SlotInfo;

// Weapon Imports
class Tier1_M110k5_ACS;
class rhs_weap_m249_pip_ris;
class rhs_weap_m4a1;

// Presets
class PMCS_weap_m4a1 : rhs_weap_m4a1 {
    class LinkedItems {
        WOPTIC(rhsusf_acc_SU230);
    };
};

class PMCS_M110k5_ACS : Tier1_M110k5_ACS {
    class LinkedItems {
        WOPTIC(rhsusf_acc_M8541_mrds);
        WBIPOD(rhsusf_acc_grip1);
    };
};

class PMCS_M249_PIP_RIS : rhs_weap_m249_pip_ris {
    class LinkedItems {
        WOPTIC(rhsusf_acc_ACOG_RMR);
        WBIPOD(rhsusf_acc_saw_bipod);
    };
};