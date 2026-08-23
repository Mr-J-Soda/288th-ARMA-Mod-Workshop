////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_play = _this select 2;
///_ctrl = _this select 1;
_txt = _this select 3;



_id = (_play) addaction [_txt, 
{

 [_this select 3 select 0,_this select 2,_this select 1] call jstbld_fnc_remobjs;

 (_this select 1) removeAction canc;
  
 
}, [_obj,_play], 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this && (_originaltarget getVariable 'REMOVE')", 2.5];
_remarray2 = _play getVariable "remarray";
_remarray2 pushback _id;

_play setVariable ["remarray",_remarray2,true];