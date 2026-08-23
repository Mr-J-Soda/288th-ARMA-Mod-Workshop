////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
_play =  _this select 0;
  
 _play removeAction plhetow;
_play removeAction plsatow;
_play removeAction plcatow;
_play removeAction plbkert;
_play removeAction canc;
_items = items _play;

///remove actions 
_play call jstbld_fnc_cancel;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///TOWERS
///HESCO
plhetow = (_play) addaction ["<t color='#FF0000'>HESCO TOWER</t>",{_obj = createVehicle ["Land_HBarrierTower_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///SANDBAG
plsatow = (_play) addaction ["<t color='#FF0000'>SAND BAG TOWER</t>",{_obj = createVehicle ["Land_BagBunker_Tower_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///CARGO
plcatow = (_play) addaction ["<t color='#FF0000'>CARGO TOWER</t>", {_obj = createVehicle ["Land_Cargo_Tower_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///bunker tall
plbkert = (_play) addaction ["<t color='#FF0000'>Concrete TOWER)</t>", {_obj = createVehicle ["Land_Bunker_01_tall_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};