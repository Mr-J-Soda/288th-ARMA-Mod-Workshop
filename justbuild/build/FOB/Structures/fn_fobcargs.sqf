////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_play = _this select 1;
_dirdog = [_play,(screenToWorld [0.5,0.5])] call BIS_fnc_dirTo;
_dirfob = [_obj,(_obj modelToWorld [0,2,0])] call BIS_fnc_dirTo;
///_obj setposworld (getposworld _obj);
_play call jstbld_fnc_cancel;
_obj hideObject false;
_objtype =typeOf _obj;
///////////////////////////
/// fob(cargosmall) 
//////////////////////////////////

if (_objtype isEqualTo "Land_Cargo_House_V1_F") then{
_obj setVariable ["Placedt",1,true];
if (_play distance (_obj) < 19)  then{
_obj setposworld (getposworld _obj);
 _obj setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
 _obj2 = createVehicle ["B_supplyCrate_F", (_obj modelToWorld [1.255,2.875,0.975]), [], 0, "NONE"];
  
 if !(justBuild_arsenalx > 1) then {
[_obj2] remoteExecCall ["jstbld_fnc_supplyaction",0,_obj2];};
 _obj2 addItemCargoGlobal ["ACE_EntrenchingTool", 10];
  _obj2 addBackpackCargoGlobal ["B_Patrol_Respawn_bag_F", 2];
_obj2 addBackpackCargoGlobal ["ACE_TacticalLadder_Pack", 5];
 
 //ladder _obj6
	_obj6 = createVehicle ["Land_CampingTable_small_F", (_obj modelToWorld [-2.043,3.761,0.448]), [], 0, "NONE"];
  //banner and flag_obj4,_obj5
if (side _play isEqualTo opfor) Then { 
 _obj4 = createVehicle ["Banner_01_CSAT_F", (_obj modelToWorld [-0.291,4.175,1.309]), [], 0, "NONE"];
 
  _obj5 = createVehicle ["Land_Laptop_device_F", (_obj modelToWorld [-2.087,3.849,1.009]), [], 0, "NONE"];
  _obj2 addBackpackCargoGlobal ["O_UAV_01_backpack_F", 2];
_obj2 addBackpackCargoGlobal ["O_Static_Designator_02_weapon_F", 3];
  [_obj,east]call jstbld_fnc_counter;
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj,_obj4,_obj5,_obj6,east,_play],1.5,true,true,"","side _this == east",2.5,false,"",""];
[_obj,_obj2,_obj,_obj4,_obj5,_obj6,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobcargs2",0,_obj];

  } else {if (side _play isEqualTo resistance) Then {
 //////green force
 _obj4 = createVehicle ["Banner_01_AAF_F", (_obj modelToWorld [-0.291,4.175,1.309]), [], 0, "NONE"];
   _obj5 = createVehicle ["Land_Laptop_device_F", (_obj modelToWorld [-2.087,3.849,1.009]), [], 0, "NONE"];
  _obj2 addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
      _obj2 addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 3];   
[_obj,resistance]call jstbld_fnc_counter;

_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj,_obj4,_obj5,_obj6,resistance,_play],1.5,true,true,"","side _this == resistance",2.5,false,"",""];
 [_obj,_obj2,_obj,_obj4,_obj5,_obj6,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobcargs2",0,_obj];
} else {
 //////blue force
 _obj4 = createVehicle ["Banner_01_NATO_F", (_obj modelToWorldWorld [-0.291,4.175,1.309]), [], 0, "NONE"];
 _obj5 = createVehicle ["Land_Laptop_device_F", (_obj modelToWorld [-2.087,3.849,1.009]), [], 0, "NONE"];
   _obj2 addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
      _obj2 addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 3];   
[_obj,west]call jstbld_fnc_counter;
	 _side = side _play;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj,_obj4,_obj5,_obj6,_side,_play],1.5,true,true,"","!(side _this == east)",2.5,false,"",""];
[_obj,_obj2,_obj,_obj4,_obj5,_obj6,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobcargs2",0,_obj];
};};
 	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
	   [_obj,_play] call jstbld_fnc_jbanimation;
	 hint "Placed F.O.B."; } Else {hint "Too far";deleteVehicle _obj;} ;};
_play removeAction setposcanc;
_play removeAction setposadd;