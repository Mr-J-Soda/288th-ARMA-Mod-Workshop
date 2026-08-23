////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;

_x = _obj getVariable "JBID";
_side = _this select 1;
_name = format ["RALLY%1" , _x ];
_co = mapGridPosition _obj;

 _FOB_1 = createMarker [format ["RALLY%1" , _x ], _obj];
 

  _FOB_1 setMarkerText format ["RESPAWN (%1)" , _co];
_pos = getposatl _obj;
 _FOB_1 setMarkerPos _pos;
 _FOB_1 setMarkerType "loc_Tourism";
 _FOB_1 setMarkerSize [0.8,0.8];
   _FOB_1 setMarkerColor "ColorRed";   
  _FOB_1 setMarkerAlpha 1;
  _resp = [_side,_pos,format ["RESPAWN (%1)" , _co]] call BIS_fnc_addRespawnPosition; 
_obj setVariable ["RESPAWN",_resp,true];
