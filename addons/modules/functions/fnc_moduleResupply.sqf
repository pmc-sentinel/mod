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

private _playerCount = count call BIS_fnc_listPlayers;

private _primaryMagCount = GVAR(Resupply_PrimaryMagCount);
private _secondaryMagCount = GVAR(Resupply_SecondaryMagCount);
private _handgunMagCount = GVAR(Resupply_HandgunMagCount);
private _binocularMagCount = GVAR(Resupply_BinocularMagCount);
private _handGrenadeCount = GVAR(Resupply_GrenadeCount);
private _smokeShellCount = GVAR(Resupply_SmokeShellCount);
private _medFluidCount = GVAR(Resupply_MedFluidCount);
private _medItemCount = GVAR(Resupply_MedItemCount);
private _medBandageCount = GVAR(Resupply_MedBandageCount);
private _medMedicineCount = GVAR(Resupply_MedMedicineCount);

private _resupplyBox = "B_supplyCrate_F" createVehicle getPosATL _logic;
private _items = createHashMapFromArray [
  ["ACE_fieldDressing", _medBandageCount * _playerCount],
  ["ACE_elasticBandage", _medBandageCount * _playerCount],
  ["ACE_packingBandage", _medBandageCount * _playerCount],
  ["ACE_quikClot", _medBandageCount * _playerCount],
  ["kat_bloodIV_O_N", _medFluidCount * _playerCount],
  ["kat_bloodIV_O_N_500", _medFluidCount * _playerCount],
  ["kat_bloodIV_O_N_250", _medFluidCount * _playerCount],
  ["kat_chestSeal", _medItemCount * _playerCount],
  ["kat_EACA", _medMedicineCount * _playerCount],
  ["ACE_adenosine", _medMedicineCount * _playerCount],
  ["ACE_epinephrine", _medMedicineCount * _playerCount],
  ["ACE_morphine", _medMedicineCount * _playerCount],
  ["kat_IO_FAST", _medItemCount * _playerCount],
  ["kat_guedel", _medItemCount * _playerCount],
  ["kat_larynx", _medItemCount * _playerCount],
  ["ACE_plasmaIV", _medFluidCount * _playerCount],
  ["ACE_plasmaIV_500", _medFluidCount * _playerCount],
  ["ACE_plasmaIV_250", _medFluidCount * _playerCount],
  ["ACE_salineIV", _medFluidCount * _playerCount],
  ["ACE_salineIV_500", _medFluidCount * _playerCount],
  ["ACE_salineIV_250", _medFluidCount * _playerCount],
  ["ACE_splint", _medItemCount * _playerCount],
  ["ACE_tourniquet", _medItemCount * _playerCount],

  // Grenades
  ["HandGrenade", _handGrenadeCount * _playerCount],
  ["SmokeShell", _smokeShellCount * _playerCount],
  ["SmokeShellBlue", _smokeShellCount * _playerCount],
  ["SmokeShellGreen", _smokeShellCount * _playerCount],
  ["SmokeShellOrange", _smokeShellCount * _playerCount],
  ["SmokeShellRed", _smokeShellCount * _playerCount],
  ["SmokeShellPurple", _smokeShellCount * _playerCount],
  ["SmokeShellYellow", _smokeShellCount * _playerCount]
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
    _items set [_sm, (_items get _sm) + _secondaryMagCount];
  } else {
    _items set [_sm, _secondaryMagCount];
  };

  private _hm = handgunMagazine _x;
  if (_hm in _items) then {
    _items set [_hm, (_items get _sm) + _handgunMagCount];
  } else {
    _items set [_hm, _handgunMagCount];
  };

  private _bms = binocularMagazine _x;
  {
    if (_x in _items) then {
      _items set [_x, (_items get _x) + _binocularMagCount];
    } else {
      _items set [_x, _binocularMagCount];
    };
  } forEach _bms;
  INFO_5("Got %1, %2, %3 and %4 for player %5",_pm,_sm,_hm,_bms,_x);
} forEach call BIS_fnc_listPlayers;

clearMagazineCargo _resupplyBox;
clearWeaponCargo _resupplyBox;
clearItemCargo _resupplyBox;
clearBackpackCargo _resupplyBox;

{
  INFO_2("Adding %1 (x%2) to crate...",_x,_y);
  if (typeName _x == "ARRAY") then {
    _amount = _y;
    {
      _resupplyBox addItemCargoGlobal [_x, _amount]; // _x = magazine class name, _y = number of magazines to add
    } forEach _x;
  } else {
    _resupplyBox addItemCargoGlobal [_x, _y]; // _x = magazine class name, _y = number of magazines to add
  }
} forEach _items;

deleteVehicle _logic;