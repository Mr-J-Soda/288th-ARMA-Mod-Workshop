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
 _obj2 setPosWorld (_obj modelToWorldWorld [-0.579,-0.751,-1.386]);
_obj2 setDir (_dirdog+90);
/*
_obj2 setPosWorld (_obj modelToWorldWorld [-0.579,-0.751,-0.25]) ;
_line = lineIntersectsSurfaces [(_obj modelToWorldWorld [-0.579,-0.751,0]),(_obj modelToWorldWorld [-0.579,-0.751,-1.55]), _play,_obj2];
if !(isNil "_line") then {
_obj2 setPosasl (_line select 0 select 0);
_obj2 setVectorUP (_line select 0 select 1);}else{
_obj2 setPosWorld (_obj modelToWorldWorld [-0.579,-0.751,-1.386]);};
*/
_obj4 setPosWorld (_obj modelToWorldWorld [0.116,-0.554,0.285]);
 _obj4 setVectorDirAndUp [(vectorDir _obj),(vectorUp _obj)];
 _obj5 setPosWorld (_obj modelToWorldWorld [-0.033,-1.010,-0.085]);
  _obj5 setVectorDirAndUp [(vectorDir _obj),(vectorUp _obj)];