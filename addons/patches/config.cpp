#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(common,TFPTeam);
        authors[] = {"hbjydev"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgUnitInsignia.hpp"
