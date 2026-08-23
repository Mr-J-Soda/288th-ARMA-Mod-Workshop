////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_play = _this select 1;
///_dirdog = [_play,(screenToWorld [0.5,0.5])] call BIS_fnc_dirTo;
///_dirfob = [_obj,(_obj modelToWorld [0,2,0])] call BIS_fnc_dirTo;

_obj setposasl [(getposasl _obj select 0),(getposasl _obj select 1),((getposasl _obj select 2)+0.33)]; 
_obj setposworld (getposworld _obj);
_play call jstbld_fnc_cancel;
_objtype =typeOf _obj;

///	 _x = _obj getVariable "JBID";
///_name = format ["RALLY%1" , _x ]; ///name used for id
[_this select 0,_this select 1] call jstbld_fnc_jbanimation;

//////////
/// Respawn pole
///////
_side = side _play;
[_obj,_side]call jstbld_fnc_counter;
_obj addaction ["<t color='#FF0000'>Remove SPAWN</t>", {_this select 3 remoteExecCall ["jstbld_fnc_delrally",0];},[_obj,_side],1.5,true,true,"","",2.5,false,"",""];

[_obj,_side] remoteExecCall ["jstbld_fnc_rallymkr1",_side,_obj];




