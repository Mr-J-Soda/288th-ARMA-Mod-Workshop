////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play = _this select 0;


///remove actions 
_play call jstbld_fnc_cancel;
sleep 0.3; _items = items _play;

//////ADDON disable/enable

if !(justBuild_Togglex ==3 ) then
{

///if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then {

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then {
///check if ACE_EntrenchingTool is in inventory
if 
(vehicle _play isEqualTo _play)   


then {

_obj = createVehicle ["Land_MedicalTent_01_Floor_dark_F", [100, 100, 200], [], 0, "NONE"];
_obj setDir ((getDir _play)+180);
///_obj setPos [(getpos _play) select 0,(getpos _play) select 1,(getpos _play) select 2] ;
_obj setPos (screenToWorld [0.5,0.5]) ;
_obj setVariable ["Placedt",0,true];
_obj attachto [_play,[500.3,502.2,23.8]];

[_obj,_play] spawn jstbld_fnc_setpostimer;
///[_obj,_play] execVM "justbuild\build\timer.sqf";

_play removeAction plrepa;
_play removeAction setposadd;
_play removeAction setposcanc;
sleep 0.5;
setposadd = _play addaction["SET POSITION", {(_this select 3) call jstbld_fnc_setpos;(_this select 3 select 0) hideObject false;}, [_obj,_play], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
setposcanc = _play addaction["<t color='#FF0000'>Cancel Placement</t>",
{
[(_this select 3),_this select 1] call jstbld_fnc_OTHERlist;
(_this select 1) removeAction setposadd;
 (_this select 1) removeAction setposcanc;
 (_this select 3) setVariable ["Placed",1,true];
(_this select 3) setVariable ["Placedt",1,true];
deleteVehicle (_this select 3); }
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
///name Repair Station";
///limit
_obj spawn {While {_this getVariable "Placed" isEqualTo 0} do {_this hideObject true;sleep 0.85;};};
While {_obj getVariable "Placed" isEqualTo 0} do {
if (_play distance (_obj) > 19)  then {
_obj hideObject true;
 }ELSE{if (isObjectHidden _obj) then{_obj hideObject false;sleep 0.005; }; };
_obj setPos [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
   
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
// 
sleep 0.04;};
}else {_play removeAction setposadd;_play removeAction setposcanc;
hint "Exit Vehicle";
};}else { 
_play removeAction plrepa;
_play removeAction setposadd;_play removeAction setposcanc;
hint "Need Entrenching Tool";};
//////ADDON disable/enable hint
}else { hint "justBuild has been disabled by this Mission/Server";}; 
