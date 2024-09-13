#include "..\script_component.hpp"
/**
 * Author: hbjydev
 * Adds an ACE arsenal preset to an object and clears its cargo if it has any.
 *
 * Arguments:
 * 0: Object to add arsenal to. <OBJECT>
 * 1: Arsenal preset array <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_this, true] call pmcs_modules_fnc_addArsenal;
 *
 * Public: No
 */

params ["_pos", "_items"];

private _box = "B_supplyCrate_F" createVehicle _pos;

if (count everyContainer _box > 0) then {
    clearMagazineCargoGlobal _box;
    clearWeaponCargoGlobal _box;
    clearItemCargoGlobal _box;
    clearBackpackCargoGlobal _box;
};

[_box, _items, true] call ace_arsenal_fnc_initBox;

{
    _x addCuratorEditableObjects [[_box], true];
} forEach allCurators;