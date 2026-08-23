////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
params ["_obj"];


_objtype = typeof _obj;


switch (_objtype) do
{
	case ("RHS_Stinger_AA_pod_D"): { (550) call jstbld_fnc_subtractcost; };
	case ("B_supplyCrate_F"): { (550) call jstbld_fnc_subtractcost; };


default { (150) call jstbld_fnc_subtractcost; };


};

