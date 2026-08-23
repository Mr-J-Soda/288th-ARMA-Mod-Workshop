////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_dog = player;
_obj = _this select 0;
_obj2 = _this select 1; 
_obj4 = _this select 2;
_x = _obj getVariable "ID";
_trig = _obj getVariable "TRIGGER";
///deleteVehicle _TRIG; 

	 deleteMarker format ["Repair-%1" , _x];
deleteMarker format ["Rearm-%1" , _x];
_trig setTriggerActivation ["NONE", "Present", true];
  _trig setTriggerArea [1, 1, 45, false];

  
  deleteVehicle _trig;


deleteVehicle _obj;
deleteVehicle _obj2;
deleteVehicle _obj4;

hint format ["Removed Rearm-%1" , _x];

