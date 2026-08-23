////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_play  = _this select 1;

_obj = (_this select 0);

sleep 30 ;

    
if 
(_obj getVariable "Placed" isEqualTo 0)  
then {
 deletevehicle _obj;
_play call jstbld_fnc_cancel;
  hint "Try Again";
  
	};

  if 
(_obj getVariable "Placedt" isEqualTo 0)  
then {

 deletevehicle _obj;
_play call jstbld_fnc_cancel;
  hint "Try Again";
  };
