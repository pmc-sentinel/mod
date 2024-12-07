#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Soldiers
            UPAIR(Rifleman),
            UPAIR(Rifleman_MCX),
            UPAIR(SquadLeader),
            UPAIR(TeamLeader),
            UPAIR(EOD),
            UPAIR(MissileSpecialist),
            UPAIR(MissileSpecialist_AA),
            UPAIR(Autorifleman),
            UPAIR(Marksman),
            UPAIR(Marksman_VSS),
            UPAIR(PilotHelicopter),
            UPAIR(Medic),

            // Vehicles
            UVPAIR(MRZR4),
            UVPAIR(M1165A1),
            UVPAIR(M1220),
            UVPAIR(M1220_M2),
            UVPAIR(M1232),
            UVPAIR(M1232_M2),
            UVPAIR(M1237),
            UVPAIR(M1239_AUV),
            UVPAIR(M1240),
            UVPAIR(M1240_M2),
            UVPAIR(M1240_M240),
            UVPAIR(M1240A1_M2),
            UVPAIR(M1240A1_M240),
            UVPAIR(M113A3_M2),
            UVPAIR(M113A3_M240),
            UVPAIR(M1127),
            UVPAIR(M2A3),
            UVPAIR(M2A3_B1),
            UVPAIR(M2A3_B3),
            UVPAIR(M6),
            UVPAIR(M977A4_Ammo),
            UVPAIR(M977A4_Repair),
            UVPAIR(M978A4),
            UVPAIR(M1078A1P2_B_M2_Flatbed),
            UVPAIR(M1078A1P2_B_M2),
            UVPAIR(M1083A1P2),
            UVPAIR(M1078A1P2),
            UVPAIR(S_M2_High),
            UVPAIR(S_M2_Low),
            UVPAIR(S_TOW),
            UVPAIR(S_FIM92F),
            UVPAIR(M119A2),
            UVPAIR(M252),
        };
        weapons[] = {
            QGVAR(weapon_M110k5_ACS),
            QGVAR(weapon_VSS_Vintorez),
            QGVAR(weapon_M249_PIP_RIS),
            QGVAR(weapon_ak103_zenitco01_b33),
            QGVAR(weapon_SIG_MCX_115_Virtus),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Air_F_Heli",
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "ace_compat_rhs_usf3",
            "ace_thermals",
            "ace_vector",
            "rhsusf_c_weapons",
            "rhsusf_m11xx",
            "rhsusf_m1165",
            "rhsusf_hmmwv"
        };
        author = ECSTRING(common,TFPTeam);
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
