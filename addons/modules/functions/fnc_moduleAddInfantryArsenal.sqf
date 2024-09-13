#include "..\script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

[
    getPosATL _logic,
    parseSimpleArray GVAR(Arsenal_InfantryPreset)
] call FUNC(addArsenal);

deleteVehicle _logic;