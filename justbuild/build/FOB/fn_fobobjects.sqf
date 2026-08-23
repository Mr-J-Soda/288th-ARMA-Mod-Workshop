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


		switch (_objtype) do
{	case ("Land_BagBunker_Large_F"):   {
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
  
};
	case ("Land_Bunker_01_HQ_F"):   {

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
};
	
	case ("Land_SandbagBarricade_01_F"):   {
 _obj2 allowdamage false; 
  [_obj2, false] remoteExec ["enableSimulationGlobal",2];
 _obj2 setPosWorld (_obj modelToWorldWorld [-0.579,-0.751,-1.386]) ;
_obj2 setDir (_dirdog+90);
	_obj4 setPosWorld (_obj modelToWorldWorld [0.116,-0.554,0.285]);
  _obj4 setDir _dirdog;
	_obj5 setPosWorld (_obj modelToWorldWorld [-0.033,-1.010,-0.085]);
  _obj5 setDir _dirdog;
};

	case ("Land_Cargo_House_V1_F"):   {

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
 };

	case ("Land_Cargo_HQ_V1_F"):   {

 [_obj2, false] remoteExec ["enableSimulationGlobal",2]; 
 _obj2 setPosworld (_obj modelToWorldworld [2.380,0.709,-2.4]);
_obj2 setDir (_dirdog); 
 _obj2 setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
_obj6 setPosWorld (_obj modelToWorldWorld [0.277,1.217,-2.913]);
  _obj6 setDir (_dirdog);
 _obj6 setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
    _obj6 allowdamage false; 
  [_obj6, false] remoteExec ["enableSimulationGlobal",2];_obj3 allowdamage false; 
  [_obj3, false] remoteExec ["enableSimulationGlobal",2];
_obj3 setPosWorld (_obj modelToWorldWorld [0.286,1.232,-2.373]);
 _obj3 setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
 _obj4 setPosWorld (_obj modelToWorldWorld [-1.349,-6.437,-1.646]);
    _obj4 setDir (_dirdog);
	_obj4 setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
 _obj5 setPosWorld (_obj modelToWorldWorld [1.713,-3.105,3.331]);
    _obj5 setDir (_dirdog);
	_obj5 setVectorUP (surfaceNormal [(getPos _obj) select 0,(getPos _obj) select 1]);
 };

	case ("Land_PillboxBunker_01_big_F"):   {

 _obj2 allowdamage false; 
  [_obj2, false] remoteExec ["enableSimulationGlobal",2];	
 _obj2 setPosWorld (_obj modelToWorldWorld [0.267,5.000,0.0729]);
    _obj2 setDir (_dirdog+150);
_obj6 setPosWorld (_obj modelToWorldWorld [-0.323,1.462,0.926]);
 _obj6 setDir (_dirdog -50);
 _obj6 hideObject true;
  _obj4 setPosWorld (_obj modelToWorldWorld [-1.75,5.701,0.379]);
 _obj5 setPosWorld (_obj modelToWorldWorld [-2.517,1.803,4.202]);


};

};

