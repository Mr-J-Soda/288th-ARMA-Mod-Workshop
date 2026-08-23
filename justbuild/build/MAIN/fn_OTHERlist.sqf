////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//////////////////////////////////////
  _play = _this select 1;
  _play removeAction setposadd;
 _play removeAction setposcanc;
  _play removeAction canc;
_obj = _this select 0;

_objtype =typeOf _obj;

////all H Barrier wall 

if ((_objtype isEqualTo "Land_HBarrierWall4_F")  or 
(_objtype isEqualTo "Land_HBarrierWall_corridor_F")  or 
(_objtype isEqualTo "Land_HBarrierWall_corner_F")  or 
(_objtype isEqualTo "Land_HBarrierWall6_F")) 
then{[_play] call jstbld_fnc_HBlist;};
///////Row

if ((_objtype isEqualTo "Land_HBarrier_3_F")  or 
(_objtype isEqualTo "Land_HBarrier_5_F")  or 
(_objtype isEqualTo "Land_HBarrier_Big_F")  or 
(_objtype isEqualTo "Land_HBarrier_1_F")) 
then{[_play] call jstbld_fnc_HBlistrow;};
////SAND Bags
if ((_objtype isEqualTo "Land_BagFence_Long_F") or 
(_objtype isEqualTo "Land_BagFence_Round_F")) 
then{ [_play] call jstbld_fnc_SANDlist;};
////SAND Barrier and more

if ((_objtype isEqualTo "Land_SandbagBarricade_01_F") or 
(_objtype isEqualTo "Land_SandbagBarricade_01_hole_F") or 
(_objtype isEqualTo "Land_SandbagBarricade_01_half_F")) 
then
{ [_play] call jstbld_fnc_SANDlistwall;};
////Walls and more
if  ((_objtype isEqualTo "Land_Bunker_01_blocks_1_F") or 
(_objtype isEqualTo "Land_Mil_WallBig_4m_battered_F") or 
(_objtype isEqualTo "Land_Bunker_01_blocks_3_F")) 
then{ [_play] call jstbld_fnc_WALLlist;};
//////////////////////
///traffic
///concrete barrier andgate
if ((_objtype isEqualTo "Land_CncBarrier_F")  or 
(_objtype isEqualTo "Land_BarGate_F"))
then
{ [_play] call jstbld_fnc_ROADlist;};
///woodbarrier
if (_objtype isEqualTo "RoadBarrier_F")
then
{ [_play] call jstbld_fnc_ROADlist2;};
///rd cone
if (_objtype isEqualTo "RoadCone_F")
then
{ [_play] call jstbld_fnc_ROADlist1;};
///shelter
if (_objtype isEqualTo "Land_CncShelter_F") then
{plshelt = (_play) addaction ["<t color='#FF0000'>Place Concrete Shelter</t>", {_obj = createVehicle ["Land_CncShelter_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];};
if (_objtype isEqualTo "Land_Razorwire_F") then
{plfence = (_play) addaction ["<t color='#FF0000'>Place Razorwire</t>", {_obj = createVehicle ["Land_Razorwire_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];};
///flood light
if (_objtype isEqualTo "Land_PortableLight_double_F") then
{  pllights = (_play) addaction ["<t color='#FF0000'>FLOOD LIGHTS</t>", {_obj = createVehicle ["Land_PortableLight_double_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];};
///Large bridge
if (_objtype isEqualTo "Land_PierConcrete_01_16m_F") then
{plbrict = (_play) addaction ["<t color='#FF0000'>Place Wood Pallet (LRG)</t>",{_obj = createVehicle ["Land_PierConcrete_01_16m_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];};
///small bridge
if (_objtype isEqualTo "Land_Pallet_F")then
{  plbriwo = (_play) addaction ["<t color='#FF0000'>Place Wood Pallet</t>", {_obj = createVehicle ["Land_Pallet_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject3;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];};