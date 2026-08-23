////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_dog = player;
_obj = _this select 0;
_obj2 = _this select 1; 
_objr = _this select 2;
_obj4 = _this select 3;
_obj5 = _this select 4; 
_obj6 = _this select 5;
_xnato = _this select 7;
_x = _this select 8;
_side = _this select 9;
_co = mapGridPosition _obj2;
_xjb = _obj getVariable "JBID";
_name = format ["FOB%1" , _xjb ]; ///name used for id
deleteMarker _name;


_resp = _obj getVariable "RESPAWN";
_resp call BIS_fnc_removeRespawnPosition;

deleteVehicle _obj;
deleteVehicle _obj2;
deleteVehicle _objr;
deleteVehicle _obj4;

deleteVehicle _obj5;
deleteVehicle _obj6;

hint format ["Removed FOB-%1-%2-GRID:%3" , _xnato , _x , _co];