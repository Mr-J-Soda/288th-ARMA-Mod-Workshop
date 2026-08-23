////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
 ///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///ROAD BLK stuff

///woodbarrier(2)
plrdbarwo = (_play) addaction ["<t color='#FF0000'>TRAFFIC BARRIER</t>",  {_obj = createVehicle ["RoadBarrier_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///roadcone(1)
plrdcn = (_play) addaction ["<t color='#FF0000'>ROAD CONE</t>",  {_obj = createVehicle ["RoadCone_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///concrete barrier(0)
plrdbarco = (_play) addaction ["<t color='#FF0000'>CONCRETE BARRIER</t>",  {_obj = createVehicle ["Land_CncBarrier_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///lights(3)
pllights = (_play) addaction ["<t color='#FF0000'>FLOOD LIGHTS</t>", {_obj = createVehicle ["Land_PortableLight_double_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///rxrwire(4)
plfence = (_play) addaction ["<t color='#FF0000'>Place Razorwire</t>", {_obj = createVehicle ["Land_Razorwire_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///traffic gate
plrdbarga = (_play) addaction ["<t color='#FF0000'>TRAFFIC GATE</t>",  {_obj = createVehicle ["Land_BarGate_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

