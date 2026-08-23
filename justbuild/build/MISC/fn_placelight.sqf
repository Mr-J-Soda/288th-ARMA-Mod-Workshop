////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play = _this select 0;
_obj = createVehicle ["Land_PortableLight_double_F", [100, 100, 200], [], 0, "NONE"];

[_obj,_play,180] spawn jstbld_fnc_placeobject1;