////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_obj2 = _this select 1; 
_obj4 = _this select 2;
_side = _this select 3;

_x = _obj getVariable "ID";
_name = format ["REP%1" , _x ];


_xnato = selectrandom nameray;

   if (_obj getVariable "MARKER" isEqualTo 0) then {
    _obj setVariable ["MARKER",1,true];
   
 //triggerActivated 
 
  if (true) then {
  
  

 
[_obj] remoteExecCall ["jstbld_fnc_repamkr1",_side,_obj];
 

   //remove action
    if (_obj getVariable "REM" isEqualTo 0) then {

 _remaction = _obj4 addaction ["<t color='#FF0000'>Remove Rearm</t>", {_this select 3 remoteExecCall ["jstbld_fnc_delrepa",0,true];},[_obj,_obj2,_obj4,_x],1.5,true,true,"","",2.5,false,"",""];
  _obj setVariable ["REM",1,true];
  _obj setVariable ["REMACTION",_remaction,true];
 }Else{
 _remaction = _obj getVariable "REMACTION";
 _obj4 removeAction _remaction;
  _remaction2 =  _obj4 addaction ["<t color='#FF0000'>Remove Rearm</t>", {_this select 3 remoteExecCall ["jstbld_fnc_delrepa",0,true];},[_obj,_obj2,_obj4,_x],1.5,true,true,"","",2.5,false,"",""];
   _obj setVariable ["REM",1,true];
  _obj setVariable ["REMACTION",_remaction2,true];
 };
 
 
 };

} Else { _obj setVariable ["MARKER",0,true];
[_obj] remoteExecCall ["jstbld_fnc_repamkr2",0,true];

};
 _obj allowdamage false;  
  

/// create marker and repawn point on ammocrate
 