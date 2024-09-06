#include "..\script_component.hpp"
/**
 * Author: hbjydev
 * Module calling the resupply function.
 *
 * Arguments:
 * 0: Module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [LOGIC] call pmcs_resupply_fnc_moduleResupply;
 *
 * Public: No
 */

params ["_logic"];

private _primaryMagCount = 10;
private _secondaryMagCount = 15;
private _handgunMagCount = 10;
private _binocularMagCount = 2;

private _resupplyBox = "Box_NATO_Wps_F" createVehicle position _logic;
private _magazines = createHashMapFromArray [];

{
  private _pm = primaryWeaponMagazine _x;
  if (!_pm in _magazines) then { _magazines set [_pm, _primaryMagCount]; };

  private _sm = secondaryWeaponMagazine _x;
  if (!_sm in _magazines) then { _magazines set [_sm, _secondaryMagCount]; };

  private _hm = handgunMagazine _x;
  if (!_hm in _magazines) then { _magazines set [_hm, _handgunMagCount]; };

  private _bm = binocularMagazine _x;
  if (!_bm in _magazines) then { _magazines set [_bm, _binocularMagCount]; };
} forEach blufor countSide allPlayers;

{
  _resupplyBox addItemCargoGlobal [_x, _y]; // _x = magazine class name, _y = number of magazines to add
} forEach _magazines;