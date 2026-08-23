////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_obj = _this select 0;
 
_x = _obj getVariable "JBID";;
_side = _this select 1;
///_name = format ["RALLY%1" , _x ];
_co = mapGridPosition _obj;

	  deleteMarker format ["RALLY%1" , _x ];

_resp = _obj getVariable "RESPAWN";
_resp call BIS_fnc_removeRespawnPosition;

deleteVehicle _obj;


///hint format ["Removed SPAWN-%1-%2-GRID:%3" , _xnato , _x , _co];