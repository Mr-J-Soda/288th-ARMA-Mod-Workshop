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
_obj setposworld (getposworld _obj);
 _obj setDir (_dirdog);
_objtype =typeOf _obj;

_obj hideObject false;

_obj2 allowdamage false; 
  [_obj2, false] remoteExec ["enableSimulationGlobal",2];	
 _obj2 setPosWorld (_obj modelToWorldWorld [0.267,5.000,0.0729]);
    _obj2 setDir (_dirdog+150);
_obj4 setPosWorld (_obj modelToWorldWorld [-1.75,5.701,0.379]);
 _obj4 setVectorDirAndUp [(vectorDir _obj),(vectorUp _obj)];
 _obj5 setPosWorld (_obj modelToWorldWorld [-2.517,1.803,4.202]);
  _obj5 setVectorDirAndUp [(vectorDir _obj),(vectorUp _obj)];