#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Soldiers
            QGVAR(blufor_W_SquadLeader),
            QGVAR(blufor_D_SquadLeader),
            QGVAR(blufor_W_TeamLeader),
            QGVAR(blufor_D_TeamLeader),
            QGVAR(blufor_W_Rifleman),
            QGVAR(blufor_D_Rifleman),
            QGVAR(blufor_W_Rifleman_LAT),
            QGVAR(blufor_D_Rifleman_LAT),
            QGVAR(blufor_W_Autorifleman),
            QGVAR(blufor_D_Autorifleman),
            QGVAR(blufor_W_Marksman),
            QGVAR(blufor_D_Marksman),
            QGVAR(blufor_W_PilotHelicopter),
            QGVAR(blufor_D_PilotHelicopter),
            QGVAR(blufor_W_SquadLeader),
            QGVAR(blufor_D_SquadLeader),
            QGVAR(blufor_W_TeamLeader),
            QGVAR(blufor_D_TeamLeader),
            QGVAR(blufor_W_Rifleman),
            QGVAR(blufor_D_Rifleman),
            QGVAR(blufor_W_Rifleman_LAT),
            QGVAR(blufor_D_Rifleman_LAT),
            QGVAR(blufor_W_Autorifleman),
            QGVAR(blufor_D_Autorifleman),
            QGVAR(blufor_W_Marksman),
            QGVAR(blufor_D_Marksman),
            QGVAR(blufor_W_PilotHelicopter),
            QGVAR(blufor_D_PilotHelicopter),

            // Vehicles
            QGVAR(blufor_D_MRZR4),
            QGVAR(blufor_D_MRZR4),
            QGVAR(blufor_W_MRZR4),
            QGVAR(blufor_D_WMIK_HMG_FFR),
            QGVAR(blufor_W_WMIK_HMG_FFR),
            QGVAR(blufor_D_WMIK_GPMG_FFR),
            QGVAR(blufor_W_WMIK_GPMG_FFR),
            QGVAR(blufor_D_M1165A1),
            QGVAR(blufor_W_M1165A1),
            QGVAR(blufor_D_M1240),
            QGVAR(blufor_W_M1240),
            QGVAR(blufor_D_M1240_M2),
            QGVAR(blufor_W_M1240_M2),
            QGVAR(blufor_D_M1240_M240),
            QGVAR(blufor_W_M1240_M240),
            QGVAR(blufor_D_M1240A1_M2),
            QGVAR(blufor_W_M1240A1_M2),
            QGVAR(blufor_D_M1240A1_M240),
            QGVAR(blufor_W_M1240A1_M240),
            QGVAR(blufor_D_Husky_HMG),
            QGVAR(blufor_W_Husky_HMG),
            QGVAR(blufor_D_Husky_GPMG),
            QGVAR(blufor_W_Husky_GPMG),
            QGVAR(blufor_D_M1232),
            QGVAR(blufor_W_M1232),
            QGVAR(blufor_D_M1232_M2),
            QGVAR(blufor_W_M1232_M2),
            QGVAR(blufor_D_M1078A1P2_B_M2_Flatbed),
            QGVAR(blufor_W_M1078A1P2_B_M2_Flatbed),
            QGVAR(blufor_D_M1078A1P2_B_M2),
            QGVAR(blufor_W_M1078A1P2_B_M2),
            QGVAR(blufor_D_M1083A1P2),
            QGVAR(blufor_W_M1083A1P2),
            QGVAR(blufor_D_M1239_AUV),
            QGVAR(blufor_W_M1239_AUV),
            QGVAR(blufor_D_M1078A1P2),
            QGVAR(blufor_W_M1078A1P2),
            QGVAR(blufor_D_M977A4_Ammo),
            QGVAR(blufor_W_M977A4_Ammo),
            QGVAR(blufor_D_M977A4_Repair),
            QGVAR(blufor_W_M977A4_Repair),
            QGVAR(blufor_D_M978A4),
            QGVAR(blufor_W_M978A4),
            QGVAR(blufor_D_MH6M),
            QGVAR(blufor_W_MH6M),
            QGVAR(blufor_D_MH60M),
            QGVAR(blufor_W_MH60M),
            QGVAR(blufor_D_CH47),
            QGVAR(blufor_W_CH47),
            QGVAR(blufor_D_AH6M),
            QGVAR(blufor_W_AH6M),
            QGVAR(blufor_D_MH60M_DAP_MLASS),
            QGVAR(blufor_W_MH60M_DAP_MLASS),
            QGVAR(blufor_D_AH64D),
            QGVAR(blufor_W_AH64D),
            QGVAR(blufor_D_S_M2_High),
            QGVAR(blufor_W_S_M2_High),
            QGVAR(blufor_D_S_M2_Low),
            QGVAR(blufor_W_S_M2_Low),
            QGVAR(blufor_D_S_TOW),
            QGVAR(blufor_W_S_TOW),
            QGVAR(blufor_D_S_FIM92F),
            QGVAR(blufor_W_S_FIM92F)
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
            "rhsusf_c_weapons"
        };
        author = ECSTRING(common,PMCSTeam);
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