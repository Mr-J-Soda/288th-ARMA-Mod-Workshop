////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play = _this select 0;

_pos = _play modelToWorld [0,1.5,0];
_closeobj = nearestObjects [_pos, ["RHS_Stinger_AA_pod_D","B_Mortar_01_F","Land_Razorwire_F","Land_HelipadCircle_F","Land_PortableLight_double_F","RoadCone_F","Land_BarGate_F","RHS_M2StaticMG_D","RoadBarrier_F"], 6];
_closeobjfinal = _closeobj select {("placed" in allVariables _x) or ("a3a_respool" in allVariables _x)};

_play setVariable ["REMOVE",true,true];
{
_pos = _play modelToWorld [0,1.7,0];
_dis = (_pos distance _x)*0.67;
_objtype =typeOf _x;



switch (_objtype) do
{	case ("RHS_Stinger_AA_pod_D"):   {_type = "A.A.";
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
 }, [_obj,_ctrl], -1,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this && (_originaltarget getVariable 'REMOVE')", 2.5];

}Else{
///_dog removeAction canc; 
///_dog call jstbld_fnc_cancel;
_play setVariable ["REMOVE",false,true];
if (_this select 1) then {["Nothing close by"] remoteExec ["hint",_play];
};};

