class CfgWeapons {
    // Base Imports
    class SlotInfo;

    // Weapon Imports
    class Tier1_M110k5_ACS;
    class Tier1_SIG_MCX_115_Virtus;
    class rhs_weap_vss_grip_npz;
    class rhs_weap_m249_pip_ris;
    class rhs_weap_ak103_zenitco01_b33;

    // Presets
    class GVAR(weapon_M110k5_ACS) : Tier1_M110k5_ACS {
        class LinkedItems {
            WOPTIC(Tier1_Razor_Gen3_110_Geissele_Docter);
            WBIPOD(rhsusf_acc_grip1);
        };
    };

    class GVAR(weapon_VSS_Vintorez) : rhs_weap_vss_grip_npz {
        class LinkedItems {
            WOPTIC(Tier1_Razor_Gen3_110_Geissele_Docter);
            WBIPOD(Tier1_GripPod_Black);
        };
    };

    class GVAR(weapon_M249_PIP_RIS) : rhs_weap_m249_pip_ris {
        class LinkedItems {
            WOPTIC(rhsusf_acc_ACOG_RMR);
            WBIPOD(rhsusf_acc_saw_bipod);
        };
    };

    class GVAR(weapon_ak103_zenitco01_b33) : rhs_weap_ak103_zenitco01_b33 {
        class LinkedItems {
            WOPTIC(rhsusf_acc_su230_mrds);
            WMUZZLE(rhs_acc_dtk3);
        };
    };

    class GVAR(weapon_SIG_MCX_115_Virtus) : Tier1_SIG_MCX_115_Virtus {
        class LinkedItems {
            WOPTIC(Tier1_Eotech551_3xMag_Black_Up);
            WBIPOD(Tier1_AFG_MLOK_Black);
            WMUZZLE(Tier1_KAC_556_QDC_Black);
        };
    };
};
