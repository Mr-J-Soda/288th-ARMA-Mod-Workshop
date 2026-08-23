// LIST --- extra arguments: [_values, _valueTitles, _defaultIndex]
["Test_Setting_2", "LIST",     ["-test list-",     "-tooltip-"], "My Category", [[1, 0], ["enabled","disabled"], 1]] call CBA_fnc_addSetting;

///["justBuild_Toggle", "CHECKBOX", ["Enable Mod", "Disables entire mod"], "justBuild", true] call CBA_fnc_addSetting;
///["justBuild_LTE", "CHECKBOX", ["Lite version", "No emplacements, No walls, No fob,NOREARM ,NOPREFAB. Basically just hescos and sandbags"], "justBuild", true] call CBA_fnc_addSetting;
///["justBuild_LTE", "CHECKBOX", ["Very Lite version", "Sandbags, Hescos"], "justBuild", true] call CBA_fnc_addSetting;
///["justBuild_NOTOOL", "CHECKBOX", ["Enable Mod2", "Takes away requirement for having an entrenching tool in inventory"], "justBuild", true] call CBA_fnc_addSetting;

["justBuild_Toggle2", "LIST", ["Toggle Mod", "Disables entire mod"], "justBuild", [[1, 0], ["enabled","disabled"], 1]] call CBA_fnc_addSetting;
["justBuild_LTE2", "LIST", ["Lite version", "No emplacements, No walls, No fob,NOREARM ,NOPREFAB. Basically just hescos and sandbags"], "justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;
["justBuild_VRYLTE2", "LIST", ["Very Lite version", "Sandbags, Hescos only"], "justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;
["justBuild_NOTOOL", "LIST", ["Require Tool", "Takes away requirement for having an entrenching tool in inventory"], "justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;
["justBuild_NOFOB2", "LIST", ["Disable FOBS", "Removes category for FOB Structures which contain a respawn point"],"justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;
["justBuild_NOEMP2", "LIST", ["Disable Emplacements", "Removes category for emplacements. ie, Mortars, HMG, AA etc."], "justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;

["justBuild_NOCRATE2", "LIST", ["Disable Ammocrate", "Removes Ammocrate"], "justBuild", [[0, 1], ["enabled","disabled"], 0]] call CBA_fnc_addSetting;
["justBuild_NOREARM", "LIST", ["Disable Rearm station", "Removes Rearm Station"], "justBuild", [[nil, 1], ["enabled","disabled"], nil]] call CBA_fnc_addSetting;