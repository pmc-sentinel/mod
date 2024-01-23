#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Base game
            "A3_Sounds_F",
            "A3_Sounds_F_Exp",
            "A3_Soft_F",
            "A3_Data_F",
            "A3_Data_F_ParticleEffects",
            "A3_Characters_F",

            // ACE
            "ace_thermals",

            // Other
            "RKSL_attachments_core",
            "RKSL_EOT552",
            "RKSL_LDS",
            "RKSL_PM_525",
            "RKSL_PM_II",
            "RKSL_RMR",
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