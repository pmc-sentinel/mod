#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = ECSTRING(common,PMCSTeam);
        authors[] = {"hbjydev"};
        url = CSTRING(url);
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"