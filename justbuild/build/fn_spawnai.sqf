////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Mission : Kavala ISIS Insurgeny
//////////////////////////////////////////////////////////////////

params ["_player"];

_player = _this select 0;
_group = group _player;
 _groupai = createGroup (side _player);
_spawn = (_player modelToWorld [2.3,-6.0,0.0]);
 ////_spawn = [getpos _player select 0 + (random 5) - (random 5),getpos _player select 1 + (random 5) - (random 5),getposatl _player select 2];


"288th_SW_FL" createUnit [_spawn, _groupai,""];
"288th_SW_AT" createUnit [_spawn, _groupai,""];
"288th_SW_Autorifleman" createUnit [_spawn, _groupai,""];
"288th_SW_Rifleman" createUnit [_spawn, _groupai,""];
"288th_SW_Medic" createUnit [_spawn, _groupai,""];
  	{
	[_player,_x] call jstbld_fnc_setupai;

	}forEach _groupai; 
	_groupai join _group;
///hint "spawning inf west ";	
	