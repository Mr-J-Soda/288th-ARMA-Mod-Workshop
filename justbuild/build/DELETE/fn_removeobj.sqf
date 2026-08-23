////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



_play = _this select 0;
_obj = cursorObject;
//_obj = _this select 1;
if ((isNull _obj) or (_obj distance _play > 25     )) exitWith {["No object found"] remoteExec ["hint",_play];};

 
_objtype =typeOf _obj;
_ctrl = (_obj getVariable "placedfob");
if (!(isNil "_ctrl")&&(
(_objtype isEqualTo "Land_BagBunker_Large_F") or 
(_objtype isEqualTo "Land_CncShelter_F") or 
(_objtype isEqualTo "Land_SandbagBarricade_01_F") or
(_objtype isEqualTo "Land_Bunker_01_HQ_F") or
(_objtype isEqualTo "Land_Cargo_House_V1_F") or
(_objtype isEqualTo "Land_Cargo_HQ_V1_F") or
(_objtype isEqualTo "Land_PillboxBunker_01_big_F") or
(_objtype isEqualTo "Land_MedicalTent_01_Floor_dark_F"))) then
{["Remove via addaction"] remoteExec ["hint",_play]; } Else {





_play call jstbld_fnc_cancel;
///_obj call jstbld_fnc_removeobjGLOBAL;
[_obj,_play] remoteExec ["jstbld_fnc_removeobjGLOBAL",0];



};
