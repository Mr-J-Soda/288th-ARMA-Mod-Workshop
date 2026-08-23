////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_paramarray = _this;
_obj = _paramarray select 0;
_dir = _paramarray select 2;

_play = _paramarray select 1;

///remove actions 
_play call jstbld_fnc_cancel;
sleep 0.3; _items = items _play;
[_obj, false] remoteExec ["enableSimulationGlobal",2];
//////ADDON disable/enable
if !(justBuild_Togglex ==3 ) then
{
if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then {
///check if ACE_EntrenchingTool is in inventory
if 
(vehicle _play isEqualTo _play)   
then {

 _obj setDir ((getDir _play)+_dir);
_obj setVariable ["Placed",0,true];
_obj setVariable ["TOGGLE",false,true];
[_obj,_play] spawn jstbld_fnc_setpostimer; 
///_obj setDir ((getDir _play)+_dir);
sleep 0.5; 
////setposition/cancel add
setposadd = _play addaction["SET POSITION", 
{
[(_this select 3),_this select 1] call jstbld_fnc_setposition1;
 (_this select 1) removeAction setposcanc;
 (_this select 3) hideObject false;
 detach (_this select 3);
}
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
//
/*
setpostog = _play addaction["TOGGLE", 
{
if ((_this select 3) getVariable "TOGGLE") then{(_this select 3) setVariable ["TOGGLE",false,true];}else{(_this select 3) setVariable ["TOGGLE",true,true];};
}
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
*/
setposcanc = _play addaction["<t color='#FF0000'>Cancel Placement</t>",
{
[(_this select 3),_this select 1] call jstbld_fnc_OTHERlist;
(_this select 1) removeAction setposadd;
 (_this select 1) removeAction setposcanc;
 (_this select 3) setVariable ["Placed",1,true];
(_this select 3) setVariable ["Placedt",1,true];
deleteVehicle (_this select 3); }
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
 ///limit
/*_obj spawn {While {_this getVariable "Placed" isEqualTo 0} do {_this hideObject true;sleep 0.85;};};
[_obj,_play,_dir] spawn{ While {((_this select 0) getVariable "Placed" isEqualTo 0) && ((_this select 0) getVariable "TOGGLE" isEqualTo true)} do {
_obj =_this select 0;
_play =_this select 1;
_dir =_this select 2;
if (_play distance (_obj) > 19)  then {
_obj hideObject true;
 }ELSE{if (isObjectHidden _obj) then{_obj hideObject false;sleep 0.005 }; };
 _dis = _obj distance _play;
 _obj setPosasl (AGLToASL positionCameraToWorld [0,0,_dis]);
	_obj setDir ((getDir _play)+_dir); 
 sleep 0.033;};};
 */ 
While {(_obj getVariable "Placed" isEqualTo 0)} do {
if (_play distance (_obj) > 19)  then {
_obj hideObject true;
 }ELSE{if (isObjectHidden _obj) then{_obj hideObject false;sleep 0.005; }; };
private _line = lineIntersectsSurfaces [
                AGLToASL positionCameraToWorld [0,0,0],
                AGLToASL positionCameraToWorld [0,0,22],
                _play,_obj ];
_obj setDir ((getDir _play)+_dir);				
if !(isNil "_line") then {	
if (_obj in (attachedObjects _play)) then {detach _obj;};
_obj setPosasl (_line select 0 select 0);
_obj setVectorUP (_line select 0 select 1);
///_poslock = nil;
///_obj setVariable ["poslock",nil,true];
};

sleep 0.033;};
}else {_play removeAction setposadd;_play removeAction setposcanc;_play removeAction setpostog;
hint "Exit Vehicle";};
}else { _play removeAction setposadd;_play removeAction setposcanc;_play removeAction setpostog;
_play call jstbld_fnc_cancel;
hint "Need Entrenching Tool";};
//////ADDON disable/enable
}else { hint "justBuild has been disabled by this Mission/Server";}; 