////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////




_obj = _this select 0;
_obj2 = _this select 1; 
_name = _this select 2;
_side = _this select 3;
_obj setVariable ["MARKER",0,true];
	_xjb = _obj getVariable "JBID";
 

	deleteMarker format ["FOB%1" , _xjb ];
_resp = _obj getVariable "RESPAWN";
_resp call BIS_fnc_removeRespawnPosition;    
