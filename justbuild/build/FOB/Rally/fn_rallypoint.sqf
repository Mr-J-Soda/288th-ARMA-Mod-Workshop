////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

 _who = 3;


_play = _this select 0;
/////
///if !(isClass(configFile >> "CfgPatches" >> "CUP_BaseData")) then{_obj = createVehicle ["Pole_F", [100, 100, 200], [], 0, "NONE"];}Else{_obj = createVehicle ["Misc_Backpackheap", [100, 100, 200], [], 0, "NONE"];};
/////
_obj = createVehicle ["Pole_F", [100, 100, 200], [], 0, "NONE"];

_obj allowdamage false;
[_obj, false] remoteExec ["enableSimulationGlobal",2];
		 _co = mapGridPosition _obj;
///_resp = [(side _play), _obj,format ["RESPAWN (%1)" , _co]] call BIS_fnc_addRespawnPosition; 
///_obj setVariable ["RESPAWN",_resp,true];
	  	  
[_obj,_play,0] spawn jstbld_fnc_placeobject12;

//Misc_Backpackheap
