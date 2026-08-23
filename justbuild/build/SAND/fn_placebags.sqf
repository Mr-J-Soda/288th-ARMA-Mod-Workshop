////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_dog = _this select 0;

 

 _dog removeAction plsa2;
_dog removeAction plsa1;
_dog removeAction canc;

///remove actions 
call jstbld_fnc_cancel;
sleep 0.3; _items = items _dog;


//////ADDON disable/enable

if !(justBuild_Togglex ==3 ) then
{



if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{
///check if close to placeble areas and cursor distance< 10
if 
(vehicle _dog isEqualTo _dog)  


then {

_obj= createVehicle ["Land_BagFence_Long_F", position _dog, [], 0, "NONE"];
_obj setDir (getDir _dog);
_obj setPos (_dog modelToWorld [0,4,0]) ;
_obj setVariable ["Placed",0,true];
_obj attachto [_dog,[0,5,-30.5]];
[_obj,_dog] spawn jstbld_fnc_setpostimer;///limit
 _dog removeAction plsa2;
_dog removeAction plsa1;
_dog removeAction canc;

sleep 0.5; 
setposadd = _dog addaction["SET POSITION", {[(_this select 3),_this select 1] call jstbld_fnc_setpos;}
,_obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];
setposcanc = _dog addaction["<t color='#FF0000'>Cancel Placement</t>",
{
[(_this select 3),_this select 1] call jstbld_fnc_OTHERlist;
(_this select 1) removeAction setposadd;
 (_this select 1) removeAction setposcanc;
 (_this select 3) setVariable ["Placed",1,true];
(_this select 3) setVariable ["Placedt",1,true];
deleteVehicle (_this select 3); }
, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];


While {_obj getVariable "Placed" isEqualTo 0} do {

_obj setPosatl [_dog modelToWorld [0,4,0] select 0,_dog modelToWorld [0,4,0] select 1,(_dog modelToWorld [0,4,0] select 2)];

if (getpos _obj select 2 > 0.07) then { _obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )]; };
if ((getposatl _obj select 2) < 0.3) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]);};
///sleep 0.4;
};

///name sandbags";

} else {
hint "Exit Vehicle";
};
}
else { 
_dog removeAction plbags;
hint "Need Entrenching tool";
};


//////ADDON disable/enable hint


}else { 

hint "justBuild has been disabled by this Mission/Server";
}; 


