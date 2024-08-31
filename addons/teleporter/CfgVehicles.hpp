class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class ModuleDescription;
        };
        class ModuleDescription;
    };

    class GVAR(moduleTeleport) : Module_F {
        scope              = 2;
        displayName        = CSTRING(Teleport);
        category           = "PMCS";
        function           = QFUNC(moduleTeleport);
        isGlobal           = 1;
        isTriggerActivated = 0;
        curatorInfoType    = "RscDisplayAttributeAudioModule";
        class Attributes : AttributesBase {
            class Target : Edit {
                property     = "pmcs_mod_teleport_target";
                displayName  = CSTRING(TeleportTarget);
                description  = CSTRING(TeleportTargetTooltip);
                typeName     = "STRING";
                defaultValue = """""";
            };
            class ModuleDescription : ModuleDescription {};
        };
        class ModuleDescription : ModuleDescription {
            description = CSTRING(Teleport_Description);
        };
    };
};