#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "PMCS_B_Rifleman"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Air_F_Heli",
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "MCX_Virtus_cfg",
            "VSM_HELMETS",
            "VSM_Multicam_Config",
            "ace_thermals",
            "ace_vector"
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