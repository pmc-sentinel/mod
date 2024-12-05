#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleResupply),
            QGVAR(moduleTeleport),
            QGVAR(moduleAcreSetup),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_interact_menu",
            "kat_pharma",
            "ace_medical",
            "cba_settings",
            "ace_arsenal",
            "acre_api",
        };
        author = ECSTRING(common,tfpTeam);
        authors[] = {"hbjydev"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
