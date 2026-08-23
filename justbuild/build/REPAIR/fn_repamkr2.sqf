////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_obj = _this select 0;
_x = _obj getVariable "ID";
	  deleteMarker format ["Repair-%1" , _x];
deleteMarker format ["Rearm-%1" , _x];
_TRIG = _obj getVariable "TRIGGER";
///deleteVehicle _TRIG;