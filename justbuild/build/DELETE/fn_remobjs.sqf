////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_obj = _this select 0;
_dog = _this select 2;
_ctrl = _this select 1;

////_dog removeAction _this select 1;

_remarray2 = _dog getVariable "remarray";

_delarray = (_dog getVariable "remarray");
{_dog removeAction _x;
_remarray2 deleteAt (_remarray2 find (_x));
}forEach (_dog getVariable "remarray");



[_obj,_dog] remoteExec ["jstbld_fnc_removeobjGLOBAL",0];
///deleteVehicle _obj;
///hint "Object deleted";
if (count (_dog getVariable "remarray") > 0) then{
_dog removeAction ((_dog getVariable "remarray") select 0);
_remarray2 deleteAt (_remarray2 find ((_dog getVariable "remarray") select 0));
};
///_dog setVariable ["REMOVE",false,true];
_dog setVariable ["remarray",_remarray2,true];

///_dog call jstbld_fnc_cancel;

///_dog removeAction canc;
///[_dog,false] call jstbld_fnc_REMlist;