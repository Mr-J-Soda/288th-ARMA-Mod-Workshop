////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play = _this select 0;
_obj = createVehicle ["Land_Razorwire_F", [100, 100, 200], [], 0, "NONE"];
[_obj, false] remoteExec ["enableSimulationGlobal",2];

[_obj,_play,0] spawn jstbld_fnc_placeobject1;