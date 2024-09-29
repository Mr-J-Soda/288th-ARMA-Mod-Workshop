params ["_throwable"];

[
	{
		params ["_throwable"];

		private _veh1 = createVehicle ["SmokeShellRed", (getPosATL _throwable), [], 1, "NONE"];
		private _veh2 = createVehicle ["SmokeShellOrange", (getPosATL _throwable), [], 1, "NONE"];
		private _veh3 = createVehicle ["SmokeShellYellow", (getPosATL _throwable), [], 1, "NONE"];
		private _veh4 = createVehicle ["SmokeShellGreen", (getPosATL _throwable), [], 1, "NONE"];
		private _veh5 = createVehicle ["SmokeShellBlue", (getPosATL _throwable), [], 1, "NONE"];
		private _veh6 = createVehicle ["SmokeShellPurple", (getPosATL _throwable), [], 1, "NONE"];
		deleteVehicle _throwable;
	},
	[_throwable],
	2
] call CBA_fnc_waitAndExecute;