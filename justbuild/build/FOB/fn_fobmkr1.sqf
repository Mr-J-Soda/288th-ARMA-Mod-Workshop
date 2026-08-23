////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_obj2 = _this select 1; 
_xnato = _this select 3;
_name = _this select 2;
_side = _this select 5;
_low = _this select 4;
_x = _obj getVariable "ID";
_co = mapGridPosition _obj2;

_xjb = _obj getVariable "JBID";
 
_FOB_1 = createMarker [format ["FOB%1" , _xjb ] , _obj2];
_pos = getposatl _obj2;
_FOB_1 setMarkerPos _pos;
_FOB_1 setMarkerType "mil_triangle";
_FOB_1 setMarkerSize [1.3,1.3];
  _FOB_1 setMarkerColor "ColorGreen";   
  _FOB_1 setMarkerAlpha 1;
 if (_low) then { 
 _FOB_1 setMarkerText format ["FOB %1" , _xnato];
_resp = [_side,_pos,format ["FOB %1 -- %2",_xnato,_co]] call BIS_fnc_addRespawnPosition; 
_obj setVariable ["RESPAWN",_resp,true];
 }else{
_resp = [_side,_pos,format ["FOB %1 -- %2",_x,_co]] call BIS_fnc_addRespawnPosition; 
_obj setVariable ["RESPAWN",_resp,true];
_FOB_1 setMarkerText format ["FOB %1" , _x];
};
