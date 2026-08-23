////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


params ["_obj","_play"];
if ((isDedicated) or (isServer)) then {
if !(isnil "staticsToSave" ) then { 
_id = staticsToSave find _obj;


if !(_id == -1) then { 

staticsToSave deleteAt _id; publicVariable "staticsToSave";

[_obj] remoteExec ["deleteVehicle"];
["Object Deleted"] remoteExec ["hint",_play];
}Else {
if (("placed" in allVariables _obj) or ("a3a_respool" in allVariables _obj)) then {
["Object Deleted"] remoteExec ["hint",_play];
[_obj] remoteExec ["deleteVehicle"];
};
};
}Else {
if (("placed" in allVariables _obj) or ("a3a_respool" in allVariables _obj)) then {
["Object Deleted"] remoteExec ["hint",_play];
[_obj] remoteExec ["deleteVehicle"];
};
};
};