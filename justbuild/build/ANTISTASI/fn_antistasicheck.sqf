////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_antistasicheck = A3A_saveTarget params ["_serverID", "_campaignID", "_map"];  
 
 
if (isnil "_antistasicheck" ) then {  
 
if (true) exitWith {_bool = false;_bool;};

} 
 
else {  
 
if (true) exitWith {_bool = true;_bool;};

};