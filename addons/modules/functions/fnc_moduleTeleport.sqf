#include "..\script_component.hpp"
/**
 * Author: hbjydev
 * Module calling the teleport function.
 *
 * Arguments:
 * 0: Module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [LOGIC"] call tfp_modules_fnc_moduleTeleport;
 *
 * Public: No
 */

params ["_logic"];

private _destination = _logic getVariable ["Target", ""];
private _display = _logic getVariable ["Display", "Teleport"];

private _synced = (synchronizedObjects _logic);
private _trigger = _synced select 0;

private _action = [
    "tfp_Teleporter_TeleportTo",
    _display,
    "",
    {
        params ["_target", "_player", "_params"];
        _player setPosATL (getPosATL (missionNamespace getVariable (_params select 0)));
    },
    {true},
    {},
    [_destination]
] call ace_interact_menu_fnc_createAction;

[_trigger, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
