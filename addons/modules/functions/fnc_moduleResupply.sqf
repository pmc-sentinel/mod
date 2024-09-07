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

clearMagazineCargoGlobal _resupplyBox;
clearWeaponCargoGlobal _resupplyBox;
clearItemCargoGlobal _resupplyBox;
clearBackpackCargoGlobal _resupplyBox;

[_resupplyBox, "ACE_fieldDressing", _medBandageCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_elasticBandage", _medBandageCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_packingBandage", _medBandageCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_quikClot", _medBandageCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_bloodIV_O_N", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_bloodIV_O_N_500", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_bloodIV_O_N_250", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_chestSeal", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_EACA", _medMedicineCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_adenosine", _medMedicineCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_epinephrine", _medMedicineCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_morphine", _medMedicineCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_IO_FAST", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_guedel", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "kat_larynx", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_plasmaIV", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_plasmaIV_500", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_plasmaIV_250", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_salineIV", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_salineIV_500", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_salineIV_250", _medFluidCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_splint", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "ACE_tourniquet", _medItemCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "HandGrenade", _handGrenadeCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShell", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellBlue", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellGreen", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellOrange", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellRed", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellPurple", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);
[_resupplyBox, "SmokeShellYellow", _smokeShellCount * _playerCount] call FUNC(appendResupplyItem);

{
  private _pm = primaryWeaponMagazine _x;
  [_resupplyBox, _pm, _primaryMagCount] call FUNC(appendResupplyItem);

  private _sm = secondaryWeaponMagazine _x;
  [_resupplyBox, _sm, _secondaryMagCount] call FUNC(appendResupplyItem);

  private _hm = handgunMagazine _x;
  [_resupplyBox, _hm, _handgunMagCount] call FUNC(appendResupplyItem);

  private _bms = binocularMagazine _x;
  [_resupplyBox, _bms, _binocularMagCount] call FUNC(appendResupplyItem);

} forEach call BIS_fnc_listPlayers;

deleteVehicle _logic;