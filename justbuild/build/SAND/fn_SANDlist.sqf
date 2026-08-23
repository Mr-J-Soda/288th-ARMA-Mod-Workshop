////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
//

_play = _this select 0;

///remove actions 
 _play removeAction plsa2;
_play removeAction plsa1;
_play call jstbld_fnc_cancel;

 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///Sandbags long
///plsa1 = (_play) addaction ["<t color='#FF0000'>Sandbags (Long)</t>", {[_this select 1] spawn jstbld_fnc_placebags;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
plsa1 = (_play) addaction ["<t color='#FF0000'>Sandbags (Long)</t>", {_obj = createVehicle ["Land_BagFence_Long_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///curved
///plsa2 = (_play) addaction ["<t color='#FF0000'>Sandbags (Curved)</t>", {[_this select 1] spawn jstbld_fnc_placebagcu;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
plsba = (_play) addaction ["<t color='#FF0000'>Sandbags (Curved)</t>", {_obj = createVehicle ["Land_BagFence_Round_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};