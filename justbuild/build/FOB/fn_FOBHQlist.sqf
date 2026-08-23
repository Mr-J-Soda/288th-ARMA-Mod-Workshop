////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;


_play removeAction plfobconc;
_play removeAction plfobcargohq;
_play removeAction plfobpillbox;
_play removeAction canc;


///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///lrgfob
///cargosm
plfobconc = (_play) addaction ["<t color='#FF0000'>F.O.B. (CONCRETE)</t>", {_obj = createVehicle ["Land_Bunker_01_HQ_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject11;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargolrg
plfobcargohq = (_play) addaction ["<t color='#FF0000'>F.O.B. (CARGO)</t>", {_obj = createVehicle ["Land_Cargo_HQ_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject11;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargopatrol
plfobpillbox = (_play) addaction ["<t color='#FF0000'>F.O.B. (PILLBOX)</t>", {_obj = createVehicle ["Land_PillboxBunker_01_big_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject12;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

