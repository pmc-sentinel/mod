#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = CSTRING(TFPTeam);
        authors[] = {"hbjydev"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
