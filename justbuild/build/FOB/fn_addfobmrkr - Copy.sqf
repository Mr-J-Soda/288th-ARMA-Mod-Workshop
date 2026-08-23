////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////




_obj = _this select 0;
_obj2 = _this select 1; 
_objr = _this select 2;
_obj4 = _this select 3;
_obj5 = _this select 4; 
_obj6 = _this select 5;
_side = _this select 6;
_dog = _this select 7;
_x = _obj getVariable "ID";
_name = format ["FOB%1" , _x ]; ///name used for id

_co = mapGridPosition _obj2;
_xnatogg = selectrandom nameray;
_xnato = _xnatogg; //phonetic name

 //remove action
    if (_obj getVariable "REM" == 0) then {
  
 _remaction = _obj4 addaction ["<t color='#FF0000'>Remove F.O.B.</t>", {_this select 3 remoteExecCall ["jstbld_fnc_delfob",0];},[_obj,_obj2,_objr,_obj4,_obj5,_obj6,_name,_xnato,_x,_side],1.5,true,true,"","",2.5,false,"",""];
  _obj setVariable ["REM",1,true];
  _obj setVariable ["REMACTION",_remaction,true];
 }Else{
 _remaction = _obj getVariable "REMACTION";
 _obj4 removeAction _remaction;
  _remaction2 = _obj4 addaction ["<t color='#FF0000'>Remove F.O.B.</t>", {_this select 3 remoteExecCall ["jstbld_fnc_delfob",0];},[_obj,_obj2,_objr,_obj4,_obj5,_obj6,_name,_xnato,_x,_side],1.5,true,true,"","",2.5,false,"",""];
  _obj setVariable ["REM",1,true];
  _obj setVariable ["REMACTION",_remaction2,true];
 };
 

   if (_obj getVariable "MARKER" == 0) then {
    _obj setVariable ["MARKER",1,true];
   
 //triggerActivated 
 ///_rlist = getpos _obj nearEntities 30;

 
   /// _FOB_1 setMarkerAlpha 0;
 if (_x < 25) then {
_low = true;
[_obj,_obj2,_name,_xnato,_low,_side] remoteExecCall ["jstbld_fnc_fobmkr1",_side,_obj];
}else
{

_low = false;
 [_obj,_obj2,_name,_xnato,_low,_side] remoteExecCall ["jstbld_fnc_fobmkr1",_side,_obj];
};


} Else { 
[_obj,_obj2,_name] remoteExecCall ["jstbld_fnc_fobmkr2",0];

};
 _obj allowdamage false;  
  

/// create marker and repawn point on ammocrate
 