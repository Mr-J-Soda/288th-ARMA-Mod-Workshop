////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_play = _this select 2 ;
_ctrl = _this select 1;

_remarray2 = _play getVariable "remarray";

_delarray = (_play getVariable "remarray");
{_play removeAction _x;
_remarray2 deleteAt (_remarray2 find (_x));
}forEach (_play getVariable "remarray");


if (count (_play getVariable "remarray") > 0) then{
_play removeAction ((_play getVariable "remarray") select 0);
_remarray2 deleteAt (_remarray2 find ((_play getVariable "remarray") select 0));
};
///_play setVariable ["REMOVE",false,true];
_play setVariable ["remarray",_remarray2,true];

_play call jstbld_fnc_cancel;
