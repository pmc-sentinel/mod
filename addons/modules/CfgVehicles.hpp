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

    class GVAR(moduleBase) : Module_F {
        author = ECSTRING(common,tfpTeam);
        category = "NO_CATEGORY";
        function = "";
        scope = 1;
        scopeCurator = 2;
        curatorInfoType = "";
    };

    class GVAR(moduleResupply) : GVAR(moduleBase) {
        displayName = CSTRING(Resupply);
        category = QGVAR(Utilities);
        function = QFUNC(moduleResupply);

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
        displayName = CSTRING(Teleport);
        category = QGVAR(Utilities);
        function = QFUNC(moduleTeleport);
        scope = 2;
        scopeCurator = 1;

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

    class GVAR(moduleAcreSetup) : Module_F {
        displayName = CSTRING(AcreSetup);
        category = QGVAR(Utilities);
        function = QFUNC(moduleAcreSetup);
        scope = 2;
        scopeCurator = 1;

        class Attributes : AttributesBase {
            class ModuleDescription : ModuleDescription {};
        };

        class ModuleDescription : ModuleDescription {
            description[] = {
                CSTRING(AcreSetup_Description),
            };
        };
    };
};
