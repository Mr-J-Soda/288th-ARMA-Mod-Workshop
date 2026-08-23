////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play  = _this select 0;
 
   _play removeAction plwal3;
_play removeAction plwal;
_play removeAction plwal2;
_play removeAction canc;


///remove actions 
_play call jstbld_fnc_cancel;




 _items = items player;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

/////WALLS
///WALL 3 tall
plwal3 = (_play) addaction ["<t color='#FF0000'>WALL: TALL</t>",  {_obj = createVehicle ["Land_Mil_WallBig_4m_battered_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///WALL 1
plwal = (_play) addaction ["<t color='#FF0000'>WALL: SMALL</t>",  {_obj = createVehicle ["Land_Bunker_01_blocks_1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///WALL 2 LOng
plwal2 = (_play) addaction ["<t color='#FF0000'>WALL: SMALL (3)</t>", {_obj = createVehicle ["Land_Bunker_01_blocks_3_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];






///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

