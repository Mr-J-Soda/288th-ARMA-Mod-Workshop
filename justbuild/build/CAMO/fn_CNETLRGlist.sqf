////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play  = _this select 0;
_play removeAction plcamogrel;
_play removeAction plcamodigl;
_play removeAction plcamohexl;
_play removeAction plcamoirml;
_play removeAction canc;



_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///CAMONET LRG
///GREEN
plcamogrel = (_play) addaction ["<t color='#FF0000'>LRG CAMO NET (GREEN)</t>", {_obj = createVehicle ["CamoNet_Blufor_big_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///DIGITAL)
plcamodigl = (_play) addaction ["<t color='#FF0000'>LRG CAMO NET (DIGITAL)</t>", {_obj = createVehicle ["CamoNet_INDP_big_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///HEX
plcamohexl = (_play) addaction ["<t color='#FF0000'>LRG CAMO NET (HEX)</t>", {_obj = createVehicle ["CamoNet_OPFOR_big_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///IRMASK
plcamoirml = (_play) addaction ["<t color='#FF0000'>LRG CAMO NET (IR MASK)</t>",{_obj = createVehicle ["Land_IRMaskingCover_01_F", [100, 100, 200], [], 0, "NONE"];_obj allowDamage false;[_obj,_this select 1,90] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

