////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
 

_play removeAction plhwa;
_play removeAction plhwa6;
_play removeAction plhwacor;
_play removeAction plhwador;
_play removeAction canc;

///remove actions 
_play call jstbld_fnc_cancel;



 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///Hbarrierwall(4)
plhwa = (_play) addaction ["<t color='#FF0000'>Hesco Wall(4x)</t>", {_obj = createVehicle ["Land_HBarrierWall4_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///Hbarrierwall(6)
plhwa6 = (_play) addaction ["<t color='#FF0000'>Hesco Wall (Long)</t>",{_obj = createVehicle ["Land_HBarrierWall6_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///Hbarrierwall(corner)
plhwacor = (_play) addaction ["<t color='#FF0000'>Hesco Wall (Corner)</t>", {_obj = createVehicle ["Land_HBarrierWall_corner_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///Hbarrierwall(corridor)
plhwador = (_play) addaction ["<t color='#FF0000'>Hesco Corridor</t>", {_obj = createVehicle ["Land_HBarrierWall_corridor_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,270] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};
