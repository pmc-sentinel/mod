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

["ACRE_PRC152", "default", 1, "description", "PROM PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "default", 2, "description", "PROM MEDNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "default", 3, "description", "PROM FIRES"] call acre_api_fnc_setPresetChannelField;

