////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play =  _this select 0;


_play removeAction plcargosm;
_play removeAction plcargolrg;
_play removeAction plcargopa;
_play removeAction canc;


///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///Structures
///cargosm
plcargosm = (_play) addaction ["<t color='#FF0000'>CARGO (SMALL)</t>", {_obj = createVehicle ["Land_Cargo_House_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargolrg
plcargolrg = (_play) addaction ["<t color='#FF0000'>CARGO (LARGE)</t>", {_obj = createVehicle ["Land_Cargo_Tower_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargopatrol
plcargopa = (_play) addaction ["<t color='#FF0000'>CARGO (PATROL)</t>", {_obj = createVehicle ["Land_Cargo_Patrol_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

