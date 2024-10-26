#include "..\script_component.hpp"
/**
 * Author: hbjydev
 * Module that exists to run a Persist save.
 *
 * Arguments:
 * 0: Module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [LOGIC] call pmcs_modules_fnc_modulePersistSave;
 *
 * Public: No
 */

params ["_logic"];
deleteVehicle _logic;
"RCOP\RCOPersist\RCOPsaving.sqf" remoteExec ["execVM", 0];