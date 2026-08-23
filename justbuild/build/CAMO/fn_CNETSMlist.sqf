////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play  = _this select 0;
_play removeAction plcamogresm;
_play removeAction plcamodigsm;
_play removeAction plcamohexsm;
_play removeAction plcamoirmsm;
_play removeAction canc;


_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///CAMONET SM
///GREEN
plcamogresm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (GREEN)</t>", {_obj = createVehicle ["CamoNet_Blufor_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
//plcamogresm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (GREEN)</t>", "justbuild\build\CAMO\placecamosm.sqf",[_one]];



///DIGITAL)
plcamodigsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (DIGITAL)</t>",{_obj = createVehicle ["CamoNet_INDP_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
//plcamodigsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (DIGITAL)</t>", "justbuild\build\CAMO\placecamosm.sqf",[_two]];


///HEX
plcamohexsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (HEX)</t>", {_obj = createVehicle ["CamoNet_OPFOR_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
//plcamohexsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (HEX)</t>", "justbuild\build\CAMO\placecamosm.sqf",[_three]];


///IRMASK
plcamoirmsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (IR MASK)</t>", {_obj = createVehicle ["Land_IRMaskingCover_02_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
//plcamoirmsm = (_play) addaction ["<t color='#FF0000'>SM CAMO NET (IR MASK)</t>", "justbuild\build\CAMO\placecamosm.sqf",[_four]];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

