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
  _obj2 setPosworld (_obj modelToWorldworld [-2.03,2.418,-0.164]);
 _obj2 setDir (_dirdog+90);
_obj2 setVectorUP (surfaceNormal getPosWorld _obj);   
 _obj6 allowdamage false; 
  [_obj6, false] remoteExec ["enableSimulationGlobal",2];
 _obj6 setPosWorld (_obj modelToWorldWorld [2.267,2.554,-0.557]);
 _obj6 setDir (_dirdog);
 _obj6 setVectorUP (surfaceNormal getPosWorld _obj);
  _obj3 allowdamage false; 
  [_obj3, false] remoteExec ["enableSimulationGlobal",2];
 _obj3 setPosWorld (_obj modelToWorldWorld [2.239,2.723,0.008]);
 _obj3 setDir (_dirdog - 180);
 _obj3 setVectorUP (surfaceNormal getPosWorld _obj);
 _obj4 setPosWorld (_obj modelToWorldWorld [-0.13,2.92,0.5]);
   _obj4 setDir _dirdog;
   _obj4 setVectorUP (surfaceNormal getPosWorld _obj);
 _obj5 setVectorUP (surfaceNormal getPosWorld _obj);
  _obj5 setPosWorld (_obj modelToWorldWorld [0.1,0.1,5]);

 	 {_x setVectorUP (surfaceNormal getPosWorld _obj);
      }forEach [_obj2,_obj3,_obj4,_obj5,_obj6];