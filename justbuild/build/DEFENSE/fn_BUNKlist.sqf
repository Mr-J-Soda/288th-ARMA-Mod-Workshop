////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play  = _this select 0;
 
  _play removeAction plbker;
_play removeAction plbkers;
_play removeAction plbkert;
  _play removeAction plbkhq;
_play removeAction plbkpl;
_play removeAction plbkpllrg;
_play removeAction canc;

///remove actions 
_play call jstbld_fnc_cancel;




 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

/////WOOD


///bunker small
plbkers = (_play) addaction ["<t color='#FF0000'>BUNKER (WOOD: SMALL)</t>", {_obj = createVehicle ["Land_BagBunker_Small_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///bunker
plbker = (_play) addaction ["<t color='#FF0000'>BUNKER (Concrete)</t>",  {_obj = createVehicle ["Land_Bunker_01_small_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///bunker hq
plbkhq = (_play) addaction ["<t color='#FF0000'>BUNKER (Concrete LARGE)</t>", {_obj = createVehicle ["Land_Bunker_01_HQ_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///bunker pillbox small
plbkpl = (_play) addaction ["<t color='#FF0000'>BUNKER (Pillbox)</t>",  {_obj = createVehicle ["Land_PillboxBunker_01_hex_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,90] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///bunker pillbox
plbkpllrg = (_play) addaction ["<t color='#FF0000'>BUNKER (Pillbox LARGE)</t>", {_obj = createVehicle ["Land_PillboxBunker_01_big_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject2;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

