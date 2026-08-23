////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_side = _this select 1;
_objtype =typeOf _obj;

if (_objtype == "Pole_F")  then {
missionNameSpace setVariable ["rcount",rcount + 1,true];		 
	 _obj setVariable ["ID",(missionNameSpace getVariable "rcount"),true];

}else{

switch (_side) do
{	
	case (west):   {
missionNameSpace setVariable ["bcount",bcount + 1,true];		 
 _obj setVariable ["ID",(missionNameSpace getVariable "bcount"),true];
 };
case (east):   {
missionNameSpace setVariable ["ocount",ocount + 1,true];		 
	 _obj setVariable ["ID",(missionNameSpace getVariable "ocount"),true];
 };
	case (resistance):   {
missionNameSpace setVariable ["gcount",gcount + 1,true];		 
 _obj setVariable ["ID",(missionNameSpace getVariable "gcount"),true];
 };
};};
 missionNameSpace setVariable ["jbcount",(missionNameSpace getVariable "bcount")+(missionNameSpace getVariable "ocount")+(missionNameSpace getVariable "gcount")+(missionNameSpace getVariable "rcount"),true]; 
_obj setVariable ["JBID",(missionNameSpace getVariable "jbcount"),true];
