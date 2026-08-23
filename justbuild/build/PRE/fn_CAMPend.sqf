////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_dog = player;
 


///remove actions 
call jstbld_fnc_cancel;
sleep 0.3; _items = items player;


//////ADDON disable/enable

if !(justBuild_Togglex ==3 ) then
{


if ("ACE_EntrenchingTool" in _items) then {
///check if ACE_EntrenchingTool is in inventory
if 
(vehicle player isEqualTo player)   


then {

_obj = createVehicle ["Land_Dome_big_F", [100, 100, 200], [], 0, "NONE"];
_obj setDir (getDir _dog);
///_obj setPos [(getpos _dog) select 0,(getpos _dog) select 1,(getpos _dog) select 2] ;
_obj setPos (screenToWorld [0.5,0.5]) ;
_obj setVariable ["Placed",0,true];
_obj attachto [_dog,[500.3,502.2,23.8]];
[_obj] spawn jstbld_fnc_setpostimer;_dog removeAction plhwa;



sleep 0.5; 
////setposadd = _dog addaction["SET POSITION", {(_this select 3) call jstbld_fnc_setpos;}, [_obj,_obj], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///limit

While {_obj getVariable "Placed" isEqualTo 0} do {
if 
(_dog distance (screenToWorld [0.5,0.5]) < 75)  


then {
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
if (getpos _obj select 2 > 0) then { _obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )]; };
 } Else {
_obj setPosatl getPosATL _obj;
if (getpos _obj select 2 > 0) then { _obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )]; };
 };
///name Hesco Wall";
//sleep 0.2;
};
sleep 5;
if (_obj getVariable "Placed" isEqualTo 0) then {
_dog removeAction setposadd;_dog removeAction setposcanc;
detach _obj;
_obj setPos [(getpos _obj) select 0,(getpos _obj) select 1,((getpos _obj) select 2)];
};

}else {_dog removeAction setposadd;_dog removeAction setposcanc;
hint "Exit Vehicle";
};
}
else { _dog removeAction setposadd;_dog removeAction setposcanc;
_dog removeAction plhwa;
_dog removeAction canc;

hint "Need Entrenching Tool";
};
//////ADDON disable/enable hint


}else { 

hint "justBuild has been disabled by this Mission/Server";
}; 