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
        author = ECSTRING(main,Author);
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

    class GVAR(moduleAddInfantryArsenal) : GVAR(moduleBase) {
        displayName = CSTRING(AddInfantryArsenal);
        category = QGVAR(Utilities);
        function = QFUNC(moduleAddInfantryArsenal);

        class Attributes : AttributesBase {
            class ModuleDescription : ModuleDescription {};
        };
        class ModuleDescription : ModuleDescription {
            description[] = {
                CSTRING(Arsenal_Description1)
            };
        };
    };

    class GVAR(moduleAddAssetArsenal) : GVAR(moduleBase) {
        displayName = CSTRING(AddAssetArsenal);
        category = QGVAR(Utilities);
        function = QFUNC(moduleAddAssetArsenal);

        class Attributes : AttributesBase {
            class ModuleDescription : ModuleDescription {};
        };
        class ModuleDescription : ModuleDescription {
            description[] = {
                CSTRING(Arsenal_Description1)
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
};