#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Soldiers
            UPAIR(Rifleman),
            UPAIR(SquadLeader),
            UPAIR(TeamLeader),
            UPAIR(EOD),
            UPAIR(MissileSpecialist),
            UPAIR(MissileSpecialist_AA),
            UPAIR(Autorifleman),
            UPAIR(Marksman),
            UPAIR(PilotHelicopter),
            UPAIR(Medic),

            // Vehicles
            UPAIR(MRZR4),
            UPAIR(WMIK_HMG_FFR),
            UPAIR(WMIK_GPMG_FFR),
            UPAIR(M1165A1),
            UPAIR(M1240),
            UPAIR(M1240_M2),
            UPAIR(M1240_M240),
            UPAIR(M1240A1_M2),
            UPAIR(M1240A1_M240),
            UPAIR(Husky_HMG),
            UPAIR(Husky_GPMG),
            UPAIR(M1232),
            UPAIR(M1232_M2),
            UPAIR(M1220),
            UPAIR(M1220_M2),
            UPAIR(M1237),
            UPAIR(M1127),
            UPAIR(M1078A1P2_B_M2_Flatbed),
            UPAIR(M1078A1P2_B_M2),
            UPAIR(M1083A1P2),
            UPAIR(M1239_AUV),
            UPAIR(M1078A1P2),
            UPAIR(M977A4_Ammo),
            UPAIR(M977A4_Repair),
            UPAIR(M978A4),
            UPAIR(AssaultBoat_HMG),
            UPAIR(AssaultBoat_GPMG),
            UPAIR(MH6M),
            UPAIR(MH60M),
            UPAIR(CH47),
            UPAIR(AH6M),
            UPAIR(MH60M_DAP_MLASS),
            UPAIR(AH64D),
            UPAIR(S_M2_High),
            UPAIR(S_M2_Low),
            UPAIR(S_TOW),
            UPAIR(S_FIM92F),
        };
        weapons[] = {
            QGVAR(weapon_M4A1),
            QGVAR(weapon_M110k5_ACS),
            QGVAR(weapon_M249_PIP_RIS)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Air_F_Heli",
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "VSM_HELMETS",
            "VSM_Multicam_Config",
            "ace_compat_rhs_usf3",
            "ace_thermals",
            "ace_vector",
            "rhsusf_c_weapons",
            "rhsusf_m11xx",
            "rhsusf_m1165",
            "rhsusf_hmmwv"
        };
        author = ECSTRING(common,tfpTeam);
        authors[] = {"hbjydev"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
