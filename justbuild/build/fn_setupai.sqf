////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Mission : Kavala ISIS Insurgeny
//////////////////////////////////////////////////////////////////

params ["_player","_unit"];

_unit setskill ["aimingAccuracy"",0.7];
_unit setskill ["aimingShake",0.7];
_unit setskill ["aimingSpeed",0.7];
_unit setskill ["Endurance",1.0];
_unit setskill ["spotDistance",0.7];
_unit setskill ["spotTime",0.7];
_unit setskill ["spotDistance",0.7];
_unit setskill ["spotTime",0.7];
if ((_player getVariable "Saved_LoadoutEAI") isequalto 1) then {

removeAllWeapons _unit;
removeGoggles _unit;
removeHeadgear _unit;
removeVest _unit;
removeUniform _unit;
removeAllAssignedItems _unit;
clearAllItemsFromBackpack _unit;
removeBackpack _unit;
_unit setUnitLoadout(_player getVariable["Saved_LoadoutAI",[]]);};
