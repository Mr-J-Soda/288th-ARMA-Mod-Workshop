////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;


_play removeAction plfobcargosm;
_play removeAction plfobsm;
_play removeAction plfobwood;
_play removeAction canc;


///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///smfob
///cargosm
///plfobwood = (_play) addaction ["<t color='#FF0000'>F.O.B. (BUNKER)</t>", {_obj = createVehicle ["Land_BagBunker_Large_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] remoteExec [jstbld_fnc_placeobject12",2];}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
plfobwood = (_play) addaction ["<t color='#FF0000'>F.O.B. (BUNKER)</t>", {_obj = createVehicle ["Land_BagBunker_Large_F", [100, 100, 200], [], 0, "NONE"];_obj setVariable ["BARE",0,true];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject11;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///shelter
plfobsm = (_play) addaction ["<t color='#FF0000'>F.O.B. (SHELTER)</t>", {_obj = createVehicle ["Land_SandbagBarricade_01_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject12;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargopatrol
plfobcargosm = (_play) addaction ["<t color='#FF0000'>F.O.B. (CARGO)</t>", {_obj = createVehicle ["Land_Cargo_House_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject11;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cargopatrol
///plfobbare = (_play) addaction ["<t color='#FF0000'>BUNKER (Simple)</t>", {_obj = createVehicle ["Land_BagBunker_Large_F", [100, 100, 200], [], 0, "NONE"];_obj setVariable ["BARE",1,true];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject11;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

