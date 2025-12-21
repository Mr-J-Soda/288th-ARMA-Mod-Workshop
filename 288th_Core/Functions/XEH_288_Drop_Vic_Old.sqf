/*
    Description:
        Adds new vehicle classnames into an existing missionNamespace list (PHAN_UNSC_GV_list),
        verifies that each classname exists in CfgVehicles, 
        and creates a display-friendly version (PHAN_UNSC_GV_listDISPLAY)
        with color-coded sides and preview images.
*/

//--------------
// 1. Define your new vehicle classnames to insert
My_New_Fancy_Insert_list = [
    "288th_Hornet", 
    "288th_Oryx"
];

// 2. Retrieve (or initialize) the existing global vehicle list
PHAN_UNSC_GV_list = missionNamespace getVariable ["PHAN_UNSC_GV_list", []];

//--------------
// 3. Validate and append new vehicles to PHAN_UNSC_GV_list
//    - Ensures classname isn't empty
//    - Ensures displayName exists (valid config entry)
{
    if (
        _x != "" && 
        (getText (configFile >> "CfgVehicles" >> _x >> "displayName")) != ""
    ) then {
        PHAN_UNSC_GV_list pushBack _x;
    };
} forEach My_New_Fancy_Insert_list;

// Return
PHAN_UNSC_GV_list;

//--------------
// 4. Retrieve (or initialize) the display list version
PHAN_UNSC_GV_listDISPLAY = missionNamespace getVariable ["PHAN_UNSC_GV_listDISPLAY", []];

//--------------
// 5. Build the display list
//    - Adds formatted display info for each vehicle in PHAN_UNSC_GV_list
//    - Assigns color based on vehicle side:
//        0 = OPFOR (Red)
//        1 = BLUFOR (Blue)
//        2 = Independent (Green)
//        3 = Civilian (Magenta)
//        Default = White
{
    if (
        _x != "" && 
        (getText (configFile >> "CfgVehicles" >> _x >> "displayName")) != ""
    ) then {
        
        // Determine color by vehicle side
        _colour = switch (getNumber (configFile >> "CfgVehicles" >> _x >> "side")) do {
            case 0: { [255, 0, 0, 255] };     // OPFOR
            case 1: { [0, 0, 255, 255] };     // BLUFOR
            case 2: { [0, 255, 0, 255] };     // Independent
            case 3: { [255, 0, 255, 255] };   // Civilian
            default { [255, 255, 255, 255] }; // Unknown
        };
        
        // Push formatted display entry
        PHAN_UNSC_GV_listDISPLAY pushBack [
            (getText (configFile >> "CfgVehicles" >> _x >> "displayName")), // Display name
            "",                                                            // Placeholder (unused atm)
            (getText (configFile >> "CfgVehicles" >> _x >> "editorPreview")), // Preview image path
            _colour                                                        // Side color
        ];
    };
} forEach PHAN_UNSC_GV_list;

// Return/Debug the display list
PHAN_UNSC_GV_listDISPLAY;