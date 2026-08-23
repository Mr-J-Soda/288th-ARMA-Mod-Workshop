////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
 _play removeAction plsba;
_play removeAction plsbah;
_play removeAction plsbap;
_play removeAction canc;
///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///WALL
///barricade
plsba = (_play) addaction ["<t color='#FF0000'>Sandbag WALL</t>", {_obj = createVehicle ["Land_SandbagBarricade_01_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///barricadehalf
plsbah = (_play) addaction ["<t color='#FF0000'>Sandbag WALL (HALF)</t>", {_obj = createVehicle ["Land_SandbagBarricade_01_half_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///Sandbagspigonholw
plsbap = (_play) addaction ["<t color='#FF0000'>Sandbag WALL (Hole)</t>",{_obj = createVehicle ["Land_SandbagBarricade_01_hole_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

