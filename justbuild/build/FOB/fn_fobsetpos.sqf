////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_play = _this select 1;
_dirt = (getDir _play);
_obj setposworld (getposworld _obj);
_play call jstbld_fnc_cancel;
_objtype =typeOf _obj;

_play removeAction setposadd;
_play removeAction setposcanc;
detach _obj;
_obj setVariable ["Placed",1,true];
_obj setVariable ["Placedt",1,true];
_obj setVariable ["Placedfob",true,true];
_obj hideObject false;

_pos = (getposatl _obj select 2) - (getpos _obj select 2 );

_obj setVariable ["JBID",(missionNameSpace getVariable "jbcount"),true];

		switch (_objtype) do
{	case ("Land_BagBunker_Large_F"):   {

 if ((_obj getVariable "BARE") isEqualTo 1) then {
 [_obj,_play] call jstbld_fnc_fobbare;
}else{

[_obj,_play] call jstbld_fnc_fobwood;
};


};
	case ("Land_Bunker_01_HQ_F"):   {

[_obj,_play] call jstbld_fnc_fobconc;
};
	case ("Land_SandbagBarricade_01_F"):   {

[_obj,_play] call jstbld_fnc_fobsmall;
};
	case ("Land_Cargo_House_V1_F"):   {

[_obj,_play] call jstbld_fnc_fobcargs;
};
	case ("Land_Cargo_HQ_V1_F"):   {

[_obj,_play] call jstbld_fnc_fobcargl;
};
	case ("Land_PillboxBunker_01_big_F"):   {
_obj hideObject false;
[_obj,_play] call jstbld_fnc_fobpillb;
};
	case ("Pole_F"):   {
[_obj,_play] call jstbld_fnc_rallypoint2;
};
	case ("Misc_Backpackheap"):   {
[_obj,_play] call jstbld_fnc_rallypoint2;
};
};

