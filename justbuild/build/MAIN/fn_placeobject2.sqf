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
 
_obj setPos (screenToWorld [0.5,0.5]) ;
 _obj setDir ((getDir _play)+_dir);
_obj setVariable ["Placed",0,true];

[_obj,_play] spawn jstbld_fnc_setpostimer;

sleep 0.5; 
////setposition/cancel add

setposadd = _play addaction["SET POSITION", 
{
[(_this select 3),_this select 1] call jstbld_fnc_setposition2;
(_this select 3) hideObject false;								  
 (_this select 1) removeAction setposcanc;
 (_this select 3) hideObject false;
}
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

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
_obj spawn {While {_this getVariable "Placed" isEqualTo 0} do {_this hideObject true;sleep 0.85;};};
While {_obj getVariable "Placed" isEqualTo 0} do {
if (_play distance (_obj) > 19)  then {
_obj hideObject true;
 }ELSE{if (isObjectHidden _obj) then{_obj hideObject false;sleep 0.005 }; };
private _line = lineIntersectsSurfaces [
                AGLToASL positionCameraToWorld [0,0,0],
                AGLToASL positionCameraToWorld [0,0,22],
                _play,_obj ];
if !(isNil "_line") then {	
if (_obj in (attachedObjects _play)) then {detach _obj;};		
_obj setPosasl (_line select 0 select 0);
	_obj setDir ((getDir _play)+_dir); 
};_spot = (_line select 0 select 0);
if (isNil "_spot")then { if !(_obj in (attachedObjects _play)) then {
_poslock = (_play worldToModel (asltoagl (getPosworld _obj)));
_obj attachTo [_play, (_play worldToModel (asltoagl (getPosworld _obj)))];};};
sleep 0.033;};
}else {_play removeAction setposadd;_play removeAction setposcanc;
hint "Exit Vehicle";};
}else { _play removeAction setposadd;_play removeAction setposcanc;
_play call jstbld_fnc_cancel;
hint "Need Entrenching Tool";};
//////ADDON disable/enable
}else { 
hint "justBuild has been disabled by this Mission/Server";
}; 
