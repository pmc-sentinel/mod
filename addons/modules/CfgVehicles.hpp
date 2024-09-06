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

    class GVAR(moduleResupply) : Module_F {
        scope              = 2;
        displayName        = CSTRING(Resupply);
        category           = "PMCS";
        function           = QFUNC(moduleResupply);
        isGlobal           = 1;
        isTriggerActivated = 0;
        curatorInfoType    = "RscDisplayAttributeAudioModule";
        class Attributes : AttributesBase {
            class ModuleDescription : ModuleDescription {};
        };
        class ModuleDescription : ModuleDescription {
            description[] = {
                CSTRING(Resupply_Description1)
            };
        };
    };

    class GVAR(moduleTeleport) : Module_F {
        scope              = 2;
        scopeCurator       = 2;
        displayName        = CSTRING(Teleport);
        category           = "PMCS";
        function           = QFUNC(moduleTeleport);
        isGlobal           = 1;
        isTriggerActivated = 0;
        curatorInfoType    = "RscDisplayAttributeAudioModule";
        class Attributes : AttributesBase {
            class Target : Edit {
                property     = QUOTE(GVAR(moduleTeleport)_target);
                displayName  = CSTRING(TeleportTarget);
                tooltip      = CSTRING(TeleportTargetTooltip);
                typeName     = "STRING";
                defaultValue = """""";
            };

            class Display : Edit {
                property     = QUOTE(GVAR(moduleTeleport)_display);
                displayName  = CSTRING(TeleportDisplay);
                tooltip      = CSTRING(TeleportDisplayTooltip);
                typeName     = "STRING";
                defaultValue = """Teleport""";
            };

            class ModuleDescription : ModuleDescription {};
        };
        class ModuleDescription : ModuleDescription {
            description[] = {
                CSTRING(Teleport_Description1),
                CSTRING(Teleport_Description2),
            };
        };
    };
};