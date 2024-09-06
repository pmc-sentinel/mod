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

private _resupplyBox = "B_supplyCrate_F" createVehicle position _logic;
private _items = createHashMapFromArray [
  ["ACE_fieldDressing", 75],
  ["ACE_elasticBandage", 75],
  ["ACE_packingBandage", 75],
  ["ACE_quikClot", 75],
  ["kat_bloodIV_O_N", 20],
  ["kat_bloodIV_O_N_500", 20],
  ["kat_bloodIV_O_N_250", 20],
  ["kat_chestSeal", 20],
  ["kat_EACA", 10],
  ["ACE_adenosine", 40],
  ["ACE_epinephrine", 40],
  ["ACE_morphine", 40],
  ["kat_IO_FAST", 60],
  ["kat_guedel", 50],
  ["kat_larynx", 40],
  ["kat_larynx", 40],
  ["ACE_plasmaIV", 20],
  ["ACE_plasmaIV_500", 20],
  ["ACE_plasmaIV_250", 20],
  ["ACE_salineIV", 20],
  ["ACE_salineIV_500", 20],
  ["ACE_salineIV_250", 20],
  ["ACE_splint", 50],
  ["ACE_tourniquet", 50],

  // Grenades
  ["HandGrenade", 40],
  ["SmokeShell", 40],
  ["SmokeShellBlue", 40],
  ["SmokeShellGreen", 40],
  ["SmokeShellOrange", 40],
  ["SmokeShellRed", 40],
  ["SmokeShellPurple", 40],
  ["SmokeShellYellow", 40]
];

{
  private _pm = primaryWeaponMagazine _x;
  if (_pm in _items) then {
    _items set [_pm, (_items select _pm) + _primaryMagCount];
  } else {
    _items set [_pm, _primaryMagCount];
  };

  private _sm = secondaryWeaponMagazine _x;
  if (_sm in _items) then {
    _items set [_sm, (_items select _sm) + _secondaryMagCount];
  } else {
    _items set [_sm, _secondaryMagCount];
  };

  private _hm = handgunMagazine _x;
  if (_hm in _items) then {
    _items set [_hm, (_items select _sm) + _handgunMagCount];
  } else {
    _items set [_hm, _handgunMagCount];
  };

  private _bms = binocularMagazine _x;
  {
    if (_x in _items) then {
      _items set [_x, (_items select _x) + _binocularMagCount];
    } else {
      _items set [_x, _binocularMagCount];
    };
  } forEach _bms;
} forEach call BIS_fnc_listPlayers;

clearMagazineCargo _resupplyBox;
clearWeaponCargo _resupplyBox;
clearItemCargo _resupplyBox;

{
  if (typeName _x == "ARRAY") then {
    _amount = _y;
    {
      _resupplyBox addItemCargoGlobal [_x, _amount]; // _x = magazine class name, _y = number of magazines to add
    } forEach _x;
  } else {
    _resupplyBox addItemCargoGlobal [_x, _y]; // _x = magazine class name, _y = number of magazines to add
  }
} forEach _items;