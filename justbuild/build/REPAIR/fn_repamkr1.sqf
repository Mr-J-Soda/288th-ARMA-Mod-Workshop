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


 _REPZ_1 = createMarker [format ["Repair-%1" , _x], _obj]; 
 
    _REPZ_2 = createMarker [format ["Rearm-%1" , _x], _obj];


  _REPZ_1 setMarkerShape "RECTANGLE";
  _REPZ_1 setMarkerText "";
  //_REPZ_1 setMarkerType "mil_circle";
  _REPZ_1 setMarkerColor "ColorRed";
  _REPZ_1 setMarkerBrush "DiagGrid";
  _REPZ_1 setMarkerPos (getpos _obj);
  _REPZ_1 setMarkerAlpha 0.3;
  _REPZ_1 setMarkerSize [9,9];
  //_marker = ["_REPZ_1",_TRIG,true] call BIS_fnc_markerToTrigger;
 _obj allowdamage false;  

  _REPZ_2 setMarkerText format ["Rearm-%1" , _x]; 
_REPZ_2 setMarkerPos (getpos _obj);
_REPZ_2 setMarkerType "loc_Fuelstation";
_REPZ_2 setMarkerSize [1,1];
  _REPZ_1 setMarkerAlpha 1; 
    _REPZ_2 setMarkerAlpha 1; 
_trgctrl = _obj getVariable "TRIGGER";

 if (isNil "_trgctrl") then{
///[_obj,_obj2,obj4,_x] remoteExecCall ["jstbld_fnc_repamkr1",0,true];
  _TRIG = createtrigger ["EmptyDetector", getpos _obj];
  _TRIG setTriggerActivation ["ANYPLAYER", "Present", true];
  _TRIG setTriggerArea [6, 6, 45, false];
  ///_TRIG setTriggerText format ["Rearm-%1" , _x];
   _obj setVariable ["TRIGGER",_TRIG,true];
_TRIG setTriggerStatements ["(""LandVehicle"" countType thislist  > 0) && ((getpos (thislist select 0)) select 2 < 1)", "_xhandle = (thislist select 0) spawn jstbld_fnc_x_reload", "hint 'Exiting Rearming Area'"];
 ///hint "no trigger";
  };