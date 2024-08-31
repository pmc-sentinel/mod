#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        NAME = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleTeleport)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(common,PMCSTeam);
        authors[] = {"hbjydev"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"