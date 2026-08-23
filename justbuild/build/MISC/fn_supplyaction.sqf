////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////




_obj =_this select 0;
_obj addAction["ACE Arsenal", {[_this select 0, player, true] call ace_arsenal_fnc_openBox}, [], 1.5,  true,  true,  "", "Alive _target", 2.5, false, "", ""]; 
 _obj addAction ["Open Arsenal", {["Open", true] spawn BIS_fnc_arsenal}, [], 1.5,  true,  true,  "", "Alive _target", 2.5, false, "", ""]; 
_obj AddEventHandler ["HandleDamage", {False}];