
////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play = player;
_play setVariable ["REMOVE",true,true];
_pos = _play modelToWorld [0,1.5,0];
_closeobj = nearestObjects [_pos, ["RHS_Stinger_AA_pod_D","CamoNet_Blufor_big_F","CamoNet_INDP_big_F","CamoNet_OPFOR_big_F","Land_IRMaskingCover_01_F","CamoNet_Blufor_F","CamoNet_INDP_F","CamoNet_OPFOR_F","Land_IRMaskingCover_02_F","B_Mortar_01_F","Land_Razorwire_F","Land_HelipadCircle_F","Land_PortableLight_double_F","RoadCone_F","Land_BarGate_F","RHS_M2StaticMG_D","RoadBarrier_F"], 8];
_closeobjfinal = _closeobj select {(_x getVariable "Placed" isEqualTo 1)};


{
_dis = _play distance _x;
_objtype =typeOf _x;
_ctrl = 0;


switch (_objtype) do
{	case ("RHS_Stinger_AA_pod_D"):   {_type = "A.A.";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("CamoNet_Blufor_big_F"):   {_type = "Camo Net";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("CamoNet_INDP_big_F"):   {_type = "Camo Net";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("CamoNet_OPFOR_big_F"):   {_type = "Camo Net";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("Land_IRMaskingCover_01_F"):   {_type = "Camo Net";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

    case ("CamoNet_Blufor_F"):   {_type = "Camo Net SM";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("CamoNet_INDP_F"):   {_type = "Camo Net SM";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  
				  
	case ("CamoNet_OPFOR_F"):   {_type = "Camo Net SM";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("Land_IRMaskingCover_02_F"):   {_type = "Camo Net SM";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("Land_BarGate_F"):   {_type = "Traffic Gate";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("RHS_M2StaticMG_D"):   {_type = "M.G.";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("RoadCone_F"):   {_type = "Road Cone";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

	case ("Land_PortableLight_double_F"):   {_type = "Flood Light";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  
	
	case ("Land_HelipadCircle_F"):   {_type = "Helipad";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  
	
	case ("Land_Razorwire_F"):   {_type = "RazorWire";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  
	
	case ("B_Mortar_01_F"):   {_type = "Mortar";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  
	
    case ("RoadBarrier_F"):   {_type = "Traffic Barrier (Wood)";
    _txt = "Remove  " + _type + format ["(%1m)",_dis];
	[_x,_ctrl,_play,_txt] call jstbld_fnc_remaction;                                 };									  

///

};
}foreach _closeobjfinal;
 
 
 if ((count _closeobjfinal ) > 0) then {

 ///cancel 
canc = (_play) addaction ["<t color='#FF0000'>Cancel </t>", {
 [_this select 3 select 0,_this select 3 select 1,_this select 1] call jstbld_fnc_remcanc;
_this select 1 removeAction canc;
 }, [_obj,_ctrl], 1.5,  true,  true,  "", "Alive _originaltarget && (_originaltarget getVariable 'REMOVE')", 2.5];

}Else{hint "Nothing close by"};

