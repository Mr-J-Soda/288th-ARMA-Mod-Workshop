_AOE = 6;
_sparksound = ["spark2","spark3","spark4"] call BIS_fnc_selectRandom;
{
	[_x, true, 180, true] call ace_medical_fnc_setUnconscious;
	_x say3D [_sparksound, 100];
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);