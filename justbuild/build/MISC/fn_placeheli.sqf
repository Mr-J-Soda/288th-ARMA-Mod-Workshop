////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
_obj = createVehicle ["land_optre_bootcamp_landing_pad", [100, 100, 200], [], 0, "NONE"];

[_obj,_play,0] spawn jstbld_fnc_placeobject1;



