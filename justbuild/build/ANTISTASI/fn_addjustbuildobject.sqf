////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

params ["_obj"];

if ((isDedicated) or (isServer)) then {

if !(isnil "staticsToSave" ) then {  

staticsToSave pushBack _obj;

publicVariable "staticsToSave";

};
};
