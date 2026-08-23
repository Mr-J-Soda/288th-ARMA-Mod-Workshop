////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


 fnc_addrprmrkr = {
_obj = (_this select 0);

 //triggerActivated 
 _rlist = getpos _obj nearEntities 30;
  _FOBT_1 = createtrigger ["EmptyDetector", getpos _obj];
  _FOBT_1 setTriggerActivation ["ANYPLAYER", "Present", true];
  _FOBT_1 setTriggerArea [7, 7, 45, false];
  _FOBT_1 setTriggerStatements ["(""LandVehicle"" countType thislist  > 0) && ((getpos (thislist select 0)) select 2 < 1)", "_xhandle = (thislist select 0) spawn jstbld_fnc_x_reload", "hint 'Exiting Rearming Area'"];
  _FOBZ_1 = createMarker ["love_1", _obj]; 
  _FOBZ_1 setMarkerShape "RECTANGLE";
  _FOBZ_1 setMarkerText "";
  //_FOBZ_1 setMarkerType "mil_circle";
  _FOBZ_1 setMarkerColor "ColorRed";
  _FOBZ_1 setMarkerBrush "DiagGrid";
  _FOBZ_1 setMarkerPos (getpos _obj);
  _FOBZ_1 setMarkerAlpha 0.3;
  _FOBZ_1 setMarkerSize [9,9];
  //_marker = ["_FOBZ_1",_FOBT_1,true] call BIS_fnc_markerToTrigger;
 _obj allowdamage false;  
    _FOBZ_2 = createMarker ["love2_1", _obj];
  _FOBZ_2 setMarkerText "ReArm"; 
_FOBZ_2 setMarkerPos (getpos _obj);
_FOBZ_2 setMarkerType "loc_Fuelstation";
_FOBZ_2 setMarkerSize [1.1,1.1];
};


fnc_dir = {
  // Converts azimuth angle to BIS vectorDir array
// Author: Ruger392, a.k.a. Lt. Col. Ruger of Air Combat Command
_return = [0, 1, 0]; // North
_angle = _this select 0;
_xlen = tan _angle;
// Determine quadrant and special cases and return

if ((_angle > 0) && (_angle < 90)) then {_return = [_xlen, 1, 0]};

if ((_angle > 90) && (_angle < 180)) then {_return = [-_xlen, -1, 0]};

if ((_angle > 180) && (_angle < 270)) then {_return = [-_xlen, -1, 0]};

if ((_angle > 270) && (_angle < 360)) then {_return = [_xlen, 1, 0]};

if (_angle isEqualTo 90) then {_return = [1, 0, 0]};

if (_angle isEqualTo 180) then {_return = [0, -1, 0]};

if (_angle isEqualTo 270) then {_return = [-1, 0, 0]};
_return;};