////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////
//////////////////////////////////////



_play = _this select 1;
_obj = _this select 0;
if (_play distance (_obj) < 19)  then
{
_play removeAction setposadd;_play removeAction setposcanc;
detach _obj;

_obj setposworld (getposworld _obj);
///_obj setPosASL (getPosASL _obj);
_obj setVariable ["Placed",1,true];
_obj setVariable ["Placedt",1,true];
_objtype =typeOf _obj;
if !(_objtype isEqualTo "Land_Pallet_F")then
{[_obj, true] remoteExec ["enableSimulationGlobal",2];}  Else {[_obj, false] remoteExec ["enableSimulationGlobal",2];};
  _obj hideObject false;
 [_this select 0,_this select 1] call jstbld_fnc_jbanimation;
 
 }  Else {
hint "Too far"; _play call jstbld_fnc_cancel;deleteVehicle _obj;};
