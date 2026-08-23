////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////


_play = _this select 0;
 ///remove actions 
_play call jstbld_fnc_cancel;
 _items = items _play;

if (("ACE_EntrenchingTool" in _items) or (justBuild_NOTOOLx == false)) then
{

///ROAD BLK stuff

///concrete barrier(0)
plrdbarco = (_play) addaction ["<t color='#FF0000'>CONCRETE BARRIER</t>", "justbuild\build\RDBLK\placerdbarco.sqf", [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///roadcone(1)
plrdcn = (_play) addaction ["<t color='#FF0000'>ROAD CONE</t>", "justbuild\build\RDBLK\placerdcone.sqf", [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///woodbarrier(2)
plrdbarwo = (_play) addaction ["<t color='#FF0000'>TRAFFIC BARRIER</t>", "justbuild\build\RDBLK\placerdbarwo.sqf", [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];



///traffic gate
plrdbarga = (_play) addaction ["<t color='#FF0000'>TRAFFIC GATE</t>", "justbuild\build\RDBLK\placerdbarga.sqf", [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

///cancel
canc = (_play) addaction ["<t color='#FF0000'>Cancel Placement</t>", {(_this select 1) call jstbld_fnc_cancel;}, [], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5];

}else {hint "Need Entrenching tool";};

