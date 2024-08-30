#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "PMCS_B_SquadLeader",
            "PMCS_B_TeamLeader",
            "PMCS_B_Rifleman",
            "PMCS_B_Rifleman_LAT",
            "PMCS_B_Autorifleman",
            "PMCS_B_Marksman",
            "PMCS_B_PilotHelicopter"
        };
        weapons[] = {
            "PMCS_weap_m4a1",
            "PMCS_M110k5_ACS",
            "PMCS_M249_PIP_RIS"
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

#include "units\CfgEditorSubcategories.hpp"
#include "units\CfgVehicleClasses.hpp"

#include "items\CfgWeapons.hpp"
#include "units\CfgVehicles.hpp"