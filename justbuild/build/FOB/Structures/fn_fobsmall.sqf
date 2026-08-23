////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_obj hideObject false;
_play = _this select 1;
_dirdog = [_play,(screenToWorld [0.5,0.5])] call BIS_fnc_dirTo;
_dirfob = [_obj,(_obj modelToWorld [0,2,0])] call BIS_fnc_dirTo;
///_obj setposworld (getposworld _obj);
_play call jstbld_fnc_cancel;
_obj hideObject false;
_objtype =typeOf _obj;
//////////
/// fob(small) 
///////
if (_objtype isEqualTo "Land_SandbagBarricade_01_F") then{
_obj setVariable ["Placedt",1,true];
if (_play distance (_obj) < 19)  then{
_obj setposworld (getposworld _obj);
_obj2 = createVehicle ["ACE_medicalSupplyCrate_advanced", (_obj modelToWorldWorld [-0.579,-0.751,-1.386]), [], 0, "NONE"];
    if !(justBuild_arsenalx > 1) then {
[_obj2] remoteExecCall ["jstbld_fnc_supplyaction",0,_obj2];};
 _obj2 addItemCargoGlobal ["ACE_EntrenchingTool", 10];
  _obj2 addBackpackCargoGlobal ["B_Patrol_Respawn_bag_F", 2];
_obj2 addBackpackCargoGlobal ["ACE_TacticalLadder_Pack", 5];

    //ladder _obj6
	 
 //banner and flag_obj4,_obj5
if (side _play isEqualTo opfor) Then { 
 _obj4 = createVehicle ["Banner_01_CSAT_F", (_obj modelToWorld [0.116,-0.554,0.285]), [], 0, "NONE"];
 
  _obj5 = createVehicle ["Land_CncShelter_F", (_obj modelToWorld [-0.033,-1.010,-0.085]), [], 0, "NONE"];
 
 _obj5 setVariable ["Placed",1,true];
  _obj2 addBackpackCargoGlobal ["O_UAV_01_backpack_F", 2];
 _obj2 addBackpackCargoGlobal ["O_Static_Designator_02_weapon_F", 3];
  [_obj,east]call jstbld_fnc_counter;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj3,_obj4,_obj5,_obj6,east,_play],1.5,true,true,"","side _this == east",2.5,false,"",""];
  [_obj,_obj2,_obj,_obj4,_obj5,_obj,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobsmall2",0,_obj];

 } else {if (side _play isEqualTo resistance) Then {
 //////green force
 _obj4 = createVehicle ["Banner_01_AAF_F", (_obj modelToWorld [0.116,-0.554,0.285]), [], 0, "NONE"];
 _obj5 = createVehicle ["Land_CncShelter_F", (_obj modelToWorld [-0.033,-1.010,-0.085]), [], 0, "NONE"];
_obj5 setVariable ["Placed",1,true];
_obj2 addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
      _obj2 addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 3];   
[_obj,resistance]call jstbld_fnc_counter;
_side = side _play;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj3,_obj4,_obj5,_obj6,resistance,_play],1.5,true,true,"","side _this == resistance",2.5,false,"",""];
 [_obj,_obj2,_obj,_obj4,_obj5,_obj,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobsmall2",0,_obj];

} else {
 //////blue force
 _obj4 = createVehicle ["Banner_01_NATO_F", (_obj modelToWorld [0.116,-0.554,0.285]), [], 0, "NONE"];
  _obj5 = createVehicle ["Land_CncShelter_F", (_obj modelToWorld [-0.033,-1.010,-0.085]), [], 0, "NONE"];
_obj5 setVariable ["Placed",1,true];
 _obj2 addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
      _obj2 addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 3];   
[_obj,west]call jstbld_fnc_counter;
 _side = side _play;
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj3,_obj4,_obj5,_obj6,_side,_play],1.5,true,true,"","!(side _this == east)",2.5,false,"",""];
  [_obj,_obj2,_obj,_obj4,_obj5,_obj,_dirdog,_play]remoteExecCall ["jstbld_fnc_fobsmall2",0,_obj];

 }; };  _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
	   [_obj,_play] call jstbld_fnc_jbanimation;
	 hint "Placed F.O.B."; } Else {hint "Too far";deleteVehicle _obj;} ;};
_play removeAction setposcanc;
_play removeAction setposadd;