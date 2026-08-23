////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_obj2 = _this select 1; 
_obj3 = _this select 2;
_obj4 = _this select 3;
_obj5 = _this select 4; 
_obj6 = _this select 5;
_dirdog = _this select 6;
_dog = _this select 7;

_objtype =typeOf _obj;

_obj hideObject false;

 _obj2 allowdamage false; 
	[_obj2, false] remoteExec ["enableSimulationGlobal",2];			
 _obj2 setPos (_obj modelToWorld [0,0,-0.7]);
    _obj2 setDir (_dirdog+90); 
   _obj2 setVectorUP (surfaceNormal getPosWorld _obj);
 _obj3 setDir (_dirdog); 
_obj3 setPosWorld (_obj modelToWorldWorld [-0.5,6.3,-0.17]);
  _obj3 setPosATL [(getposATL _obj3) select 0,(getposATL _obj3) select 1,0.0]; 
  _obj3 setVectorUP (surfaceNormal [(getPosATL _obj3) select 0,(getPosATL _obj3) select 1]); 
if ((_obj3 distance _obj) < 6.2) then{
_obj3 setPosWorld (_obj modelToWorldWorld [-0.5,6.8,-0.17]);
  _obj3 setPosATL [(getposATL _obj3) select 0,(getposATL _obj3) select 1,0.0]; 
  _obj3 setVectorUP (surfaceNormal [(getPosATL _obj3) select 0,(getPosATL _obj3) select 1]); };
_obj4 setPosWorld (_obj modelToWorldWorld [-0.16,2.45,0.5]);
   _obj4 setDir (_dirdog); 
   _obj4 setVectorUP (surfaceNormal getPosWorld _obj);
  _obj5 setPosWorld (_obj modelToWorldWorld [-0.28,1.85,4.5]);
   _obj5 setDir (_dirdog); 
   _obj5 setVectorUP (surfaceNormal getPosWorld _obj);
  	 {_x setVectorUP (surfaceNormal getPosWorld _obj);
      }forEach [_obj2,_obj4,_obj5]; 