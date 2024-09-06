[
    QGVAR(Resupply_PrimaryMagCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Primary magazines per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "PMC Sentinel - Resupply", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 10, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_SecondaryMagCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Secondary magazines per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "PMC Sentinel - Resupply", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 5, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_HandgunMagCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Handgun magazines per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "PMC Sentinel - Resupply", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 5, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_BinocularMagCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Binocular batteries per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "PMC Sentinel - Resupply", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 2, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_GrenadeCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Frag grenades per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Grenades"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 2, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_SmokeShellCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Smoke grenades per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Grenades"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 4, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedFluidCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Fluid bags per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Medical"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 5, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedItemCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Items per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Medical"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 4, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedBandageCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Bandages per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Medical"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 15, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    QGVAR(Resupply_MedMedicineCount), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Medicinal items per player", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["PMC Sentinel - Resupply", "Medical"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 50, 10, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {true} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;