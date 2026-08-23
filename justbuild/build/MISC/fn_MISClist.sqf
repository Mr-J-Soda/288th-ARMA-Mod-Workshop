////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_objtype =typeOf _obj;
_play =  _this select 1;
 _items = items player; 


///remove actions 
_play call jstbld_fnc_cancel;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

if (_objtype isEqualTo "Land_Razorwire_F") then
{
plfence = (_play) addaction ["<t color='#FF0000'>Place Razorwire</t>", {_obj = createVehicle ["Land_Razorwire_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

};

///flood light
if (_objtype isEqualTo "Land_PortableLight_double_F")
then
{  pllights = (_play) addaction ["<t color='#FF0000'>FLOOD LIGHTS</t>", {_obj = createVehicle ["Land_PortableLight_double_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

};

///Large bridge
if (_objtype isEqualTo "Land_PierConcrete_01_16m_F") then
{
plbrict = (_play) addaction ["<t color='#FF0000'>Place BRIDGE (LRG)</t>",{_obj = createVehicle ["Land_PierConcrete_01_16m_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

};

///small bridge
if (_objtype isEqualTo "Land_Pallet_F")
then
{  plbriwo = (_play) addaction ["<t color='#FF0000'>Place BRIDGE</t>", {_obj = createVehicle ["Land_Pallet_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

};

}else {hint "Need Entrenching tool";};




