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
//////////
/// fob(bare) 
///////
if (_objtype isEqualTo "Land_BagBunker_Large_F") then{
_obj setVariable ["Placedt",1,true];
if (_play distance (_obj) < 19)  then{
_obj setposworld (getposworld _obj);
 ///_obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 _obj4 = createVehicle ["Land_Basketball_01_F", (_obj modelToWorld [-0.16,2.48,0.75]), [], 0, "NONE"];
	[_obj4, false] remoteExec ["enableSimulationGlobal",2];	
 _obj4 setPosWorld (_obj modelToWorldWorld [-0.16,2.48,0.75]);
     //banner and flag_obj4,_obj5
if (side _play isEqualTo opfor) Then { 
[_obj,east]call jstbld_fnc_counter;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj,objNull,_obj4,objNull,objNull,east,_play],1.5,true,true,"","side _this == east",2.5,false,"",""];
 } else {if (side _play isEqualTo resistance) Then {
 //////green force
[_obj,resistance]call jstbld_fnc_counter;
_side = side _play;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj,objNull,_obj4,objNull,objNull,resistance,_play],1.5,true,true,"","side _this == resistance",2.5,false,"",""];
 } else {
 //////blue force
[_obj,west]call jstbld_fnc_counter; 
_side = side _play;
_obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addfobmrkr;},[_obj,_obj,objNull,_obj4,objNull,objNull,_side,_play],1.5,true,true,"","!(side _this == east)",2.5,false,"",""];};	 
 	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
 [_obj,_play] call jstbld_fnc_jbanimation;
	 hint "Placed F.O.B.";
	 }; } Else {
hint "Too far";deleteVehicle _obj;} ;};
_play removeAction setposcanc;
_play removeAction setposadd;