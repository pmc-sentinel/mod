#include "..\script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

[
    getPosATL _logic,
    parseSimpleArray GVAR(Arsenal_AssetPreset)
] call FUNC(addArsenal);

deleteVehicle _logic;