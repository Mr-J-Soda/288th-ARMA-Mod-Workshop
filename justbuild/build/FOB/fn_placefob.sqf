////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_dog  = _this select 0;
 
 

///remove actions 
call jstbld_fnc_cancel;




sleep 0.3; _items = items _dog;


//////ADDON disable/enable

if !(justBuild_Togglex ==3 ) then
{


if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then {

if 
(vehicle _dog isEqualTo _dog) 

then {

_obj= createVehicle ["Land_BagBunker_Large_F", [100, 100, 200], [], 0, "NONE"];
_obj setDir ((getDir _dog)+180);
///_obj setPos [(getpos _dog) select 0,(getpos _dog) select 1,(getpos _dog) select 2] ;
_obj setPos (screenToWorld [0.5,0.5]) ;
_obj setVariable ["Placedt",0,true];
_obj attachto [_dog,[500.3,502.2,23.8]];
   

 ///timer
 [_obj,_dog] spawn jstbld_fnc_setpostimer;

 
//_obj3 setVectorUP (surfaceNormal [(getPosATL _obj3) select 0,(getPosATL _obj3) select 1]);
 
sleep 0.5; 


///limit

_dog removeAction plfob;
_dog removeAction lista;
_dog removeAction canc;

_dog removeAction setposadd;_dog removeAction setposcanc;
sleep 0.5;
setposadd = _dog addaction["SET POSITION", {[(_this select 3 select 0), _this select 1] call jstbld_fnc_fobsetpos;},[_obj], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
setposcanc = _dog addaction["<t color='#FF0000'>Cancel Placement</t>",
{


(_this select 1) removeAction setposadd;
 (_this select 1) removeAction setposcanc;
 (_this select 3 select 0) setVariable ["Placed",1,true];
(_this select 3 select 0) setVariable ["Placedt",1,true];
 deleteVehicle (_this select 3 select 0);
  deleteVehicle (_this select 3 select 1);
 },[_obj,_obj3], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];




While {_obj getVariable "Placedt" isEqualTo 0} do {
if 
(_dog distance (screenToWorld [0.5,0.5]) < 25)  


then {
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
if (getpos _obj select 2 > 0) then { _obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )]; };
 } Else {
_obj setPosatl getPosATL _obj;
if (getpos _obj select 2 > 0) then { _obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )]; };
 };

sleep 0.25;
};
sleep 5;
if (_obj getVariable "Placedt" isEqualTo 0) then {

detach _obj;
 
_obj setPos [(getpos _obj) select 0,(getpos _obj) select 1,((getpos _obj) select 2)];

};
}else {_dog removeAction setposadd;_dog removeAction setposcanc;
hint "Exit Vehicle";
};
}
else { 
_dog removeAction plfob;
_dog removeAction setposadd;_dog removeAction setposcanc;
hint "Need Entrenching Tool";
};
//////ADDON disable/enable


}else { 

hint "justBuild has been disabled by this Mission/Server";
}; 

