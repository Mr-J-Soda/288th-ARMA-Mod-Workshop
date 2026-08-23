////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


params ["_obj"];


_id = staticsToSave find _obj;


if !(_id == -1) then { 

staticsToSave deleteAt _id; publicVariable "staticsToSave";

};


if ((_obj getVariable "Placed" isEqualTo 1) or !(_id == -1)) then {

deleteVehicle _obj;

};