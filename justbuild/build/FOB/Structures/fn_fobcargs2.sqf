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
 _obj2 setPosWorld (_obj modelToWorldWorld [1.255,2.875,0.975]);
     _obj2 setDir (_dirdog+90);
   _obj2 setVectorUP (surfaceNormal getPosWorld _obj);
	 _obj6 allowdamage false; 
  [_obj6, false] remoteExec ["enableSimulationGlobal",2];
_obj6 setPosWorld (_obj modelToWorldWorld [-2.043,3.761,0.448]);
  _obj6 setDir (_dirdog);      
  _obj6 setVectorUP (surfaceNormal getPosWorld _obj);
_obj4 setPosWorld (_obj modelToWorldWorld [-0.291,4.175,1.309]);
     _obj4 setDir (_dirdog);
	 _obj4 setVectorUP (surfaceNormal getPosWorld _obj);
	 _obj5 allowdamage false; 
  [_obj5, false] remoteExec ["enableSimulationGlobal",2];
  _obj5 setPosWorld (_obj modelToWorldWorld [-2.087,3.849,1.009]);
  _obj5 setDir (_dirdog+135);   
	 _obj5 setVectorUP (surfaceNormal getPosWorld _obj);