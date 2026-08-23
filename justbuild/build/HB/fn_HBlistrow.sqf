////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
    _play removeAction plhro3;
_play removeAction plhro5;
_play removeAction plnet;
_play removeAction plhrob;
_play removeAction canc;


///remove actions 
_play call jstbld_fnc_cancel;

 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{




///Hesco row3
plhro3 = (_play) addaction ["<t color='#FF0000'>Hesco Row (3)</t>", {_obj = createVehicle ["Land_HBarrier_3_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///Hesco row5
plhro5 = (_play) addaction ["<t color='#FF0000'>Hesco Row (5)</t>", {_obj = createVehicle ["Land_HBarrier_5_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///Single Hesco
plnet = (_play) addaction ["<t color='#FF0000'>Single Hesco</t>", {_obj = createVehicle ["Land_HBarrier_1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///Hesco rowBig

plhrob = (_play) addaction ["<t color='#FF0000'>Hesco Row (BIG)</t>",  {_obj = createVehicle ["Land_HBarrier_Big_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];




///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};
