[
    QGVAR(Resupply_PrimaryMagCount),
    "SLIDER",
    LSTRING(Settings_Resupply_PrimaryMags),
    LSTRING(Settings_Resupply_Category),
    [0, 50, 10, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_SecondaryMagCount),
    "SLIDER",
    LSTRING(Settings_Resupply_SecondaryMags),
    LSTRING(Settings_Resupply_Category),
    [0, 50, 5, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_HandgunMagCount),
    "SLIDER",
    LSTRING(Settings_Resupply_HandgunMags),
    LSTRING(Settings_Resupply_Category),
    [0, 50, 5, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_BinocularMagCount),
    "SLIDER",
    LSTRING(Settings_Resupply_BinocularMags),
    LSTRING(Settings_Resupply_Category),
    [0, 50, 2, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_GrenadeCount),
    "SLIDER",
    LSTRING(Settings_Resupply_FragGrenades),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Grenades)],
    [0, 50, 2, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_SmokeShellCount),
    "SLIDER",
    LSTRING(Settings_Resupply_SmokeShells),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Grenades)],
    [0, 50, 4, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedFluidCount),
    "SLIDER",
    LSTRING(Settings_Resupply_Fluids),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Medical)],
    [0, 50, 5, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedItemCount),
    "SLIDER",
    LSTRING(Settings_Resupply_MedItems),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Medical)],
    [0, 50, 4, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedBandageCount),
    "SLIDER",
    LSTRING(Settings_Resupply_Bandages),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Medical)],
    [0, 50, 15, 0],
    1,
    {true}
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedMedicineCount),
    "SLIDER",
    LSTRING(Settings_Resupply_Medicines),
    [LSTRING(Settings_Resupply_Category), LSTRING(Settings_Resupply_Medical)],
    [0, 50, 10, 0],
    1,
    {true}
] call CBA_fnc_addSetting;