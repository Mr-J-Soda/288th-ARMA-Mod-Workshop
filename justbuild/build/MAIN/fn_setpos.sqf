////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
_obj = _this select 0;
_play = _this select 1;
_dirt = (getDir _play);
_play call jstbld_fnc_cancel;
_play removeAction setposadd;
_play removeAction setposcanc;
detach _obj;
_objtype =typeOf _obj;
_obj setposatl (getposatl _obj);
_obj setVariable ["Placed",1,true];
_obj setVariable ["Placedt",1,true];
/////CAMPEND
if (_objtype isEqualTo "Land_Dome_big_F") then{ 
if (_play distance (screenToWorld [0.5,0.5]) < 75) then{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
[_obj,_play] call jstbld_fnc_jbanimation;
[(getPos _obj), (getDir _obj), "CAMP_ENDURANCE"] call (compile (preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"));
hint "PlacedCAMP ENDURANCE.";
} Else {hint "Too far";};};
///AA
if (_objtype isEqualTo "RHS_Stinger_AA_pod_D") then{ 
_obj setPosatl [_play modelToWorld [0,3,0] select 0,_play modelToWorld [0,3,0] select 1,(_play modelToWorld [0,3,0] select 2)];
 if ((getposatl _obj select 2) < 0.1) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]); };
 hint "Placed A.A.";
[_obj,_play] call jstbld_fnc_jbanimation;};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// repair
///
if (_objtype == "Land_MedicalTent_01_Floor_dark_F") then{
_obj setVariable ["Placedt",1,true];
if (_play distance (screenToWorld [0.5,0.5]) < 25)  then{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
///side specific
        if (side _play isEqualTo opfor) Then 
{ _obj2 = createVehicle ["Flag_Red_F", [100, 100, 200], [], 0, "NONE"];
 _obj2 setPosWorld (_obj modelToWorldWorld [1.7,4.0,0]) ;  _obj2 allowdamage false;
 _obj4 = createVehicle ["Box_NATO_AmmoVeh_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 setPosWorld (_obj modelToWorldWorld [3.7,4.0,0]);  _obj4 allowdamage false;
 _obj allowdamage false;    
[_obj,east]call jstbld_fnc_counter;
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
_side = side _play;
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 Call jstbld_fnc_addrepmrkr;},[_obj,_obj2,_obj4,east,_play],1.5,true,true,"","side _this == east",2.5,false,"",""];
  [_obj,_play] call jstbld_fnc_jbanimation;
 hint "Placed Rearm Station";
 } else {
 if (side _play isEqualTo resistance) Then {
 //////green force
 _obj2 = createVehicle ["Flag_Green_F", [100, 100, 200], [], 0, "NONE"];
 _obj2 setPosWorld (_obj modelToWorldWorld [1.7,4.0,0]) ; _obj2 allowdamage false;
  _obj4 = createVehicle ["Box_NATO_AmmoVeh_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 setPosWorld (_obj modelToWorldWorld [3.7,4.0,0]);  _obj4 allowdamage false;
 _obj allowdamage false;    
[_obj,resistance]call jstbld_fnc_counter;
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
_side = side _play;
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 Call jstbld_fnc_addrepmrkr;},[_obj,_obj2,_obj4,resistance,_play],1.5,true,true,"","side _this == resistance",2.5,false,"",""];
} else {
_obj2 = createVehicle ["Flag_Blue_F", [100, 100, 200], [], 0, "NONE"];
 _obj2 setPosWorld (_obj modelToWorldWorld [1.7,4.0,0]) ; _obj2 allowdamage false;
  _obj4 = createVehicle ["Box_NATO_AmmoVeh_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 setPosWorld (_obj modelToWorldWorld [3.7,4.0,0]);  _obj4 allowdamage false;
 _obj allowdamage false;    
[_obj,west]call jstbld_fnc_counter;
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
_side = side _play;
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {_this select 3 call jstbld_fnc_addrepmrkr;},[_obj,_obj2,_obj4,_side,_play],1.5,true,true,"","!(side _this == east)",2.5,false,"",""];};
  [_obj,_play] call jstbld_fnc_jbanimation;
 hint "Placed Rearm Station";  
};_obj hideObject false;}  Else {
hint "Too far"; _play call jstbld_fnc_cancel;deleteVehicle _obj;};};
//_play playaction "RepairingKneel";
_play removeAction setposcanc;
_play removeAction setposadd;
[_obj, true] remoteExec ["enableSimulationGlobal",2];