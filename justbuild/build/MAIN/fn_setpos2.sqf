////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



///_play = _this select 1;
_obj = _this select 0;
_who = 3;
_dog = player;
call jstbld_fnc_cancel;
_dog removeAction setposadd;
_dog removeAction setposcanc;
detach _obj;
_objtype =typeOf _obj;
_obj setposatl (getposatl _obj);

_obj setVariable ["Placed",1,true];
_obj setVariable ["Placedt",1,true];
//_obj setPosasl [(getposasl _obj) select 0,(getposasl _obj) select 1,((getposasl _obj) select 2) + 0.5];
//





_pos = (getposatl _obj select 2) - (getpos _obj select 2 );

////RHS Newat
if (_objtype isEqualTo "rhs_D30_at_msv") then
{ 
if (_dog distance (screenToWorld [0.5,0.5]) < 25) then
{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
[_obj] call jstbld_fnc_jbanimation;
hint "Placed A.T.";
} Else {
hint "Too far";};

};


/////CAMPEND
if (_objtype isEqualTo "Land_Dome_big_F") then
{ 
if (_dog distance (screenToWorld [0.5,0.5]) < 75) then
{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
[_obj] call jstbld_fnc_jbanimation;
[(getPos _obj), (getDir _obj), "CAMP_ENDURANCE"] call (compile (preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"));
hint "PlacedCAMP ENDURANCE.";
} Else {
hint "Too far";};

};



////SINGLE HESCO
if (_objtype isEqualTo "Land_HBarrier_1_F") then
{ 
_obj setPosatl [_dog modelToWorld [0,4,0] select 0,_dog modelToWorld [0,4,0] select 1,(_dog modelToWorld [0,4,0] select 2)];
_obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )];

 [_obj] call jstbld_fnc_jbanimation;
};


///sandbags///sandbagscurve


if (_objtype isEqualTo "Land_BagFence_Long_F")  then
{ 
_obj setPosatl [_dog modelToWorld [0,4,0] select 0,_dog modelToWorld [0,4,0] select 1,(_dog modelToWorld [0,4,0] select 2)];
_obj setPosatl [getpos _obj select 0,getpos _obj select 1,(getposatl _obj select 2) - (getpos _obj select 2 )];

  if ((getposatl _obj select 2) < 0.1) then
{_obj setPosatl [getpos _obj select 0,getpos _obj select 1,0.07];};
  
  if ((getposatl _obj select 2) < 0.3) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]);};
 _dog removeAction plsa2;
_dog removeAction plsa1;
_dog removeAction canc;

[_obj] call jstbld_fnc_jbanimation;





};

if (_objtype isEqualTo "Land_BagFence_Round_F") then
{ 
_obj setPosatl [_dog modelToWorld [0,3,0] select 0,_dog modelToWorld [0,3,0] select 1,(_dog modelToWorld [0,3,0] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);


_obj setDir ((getDir _dog)+ 180);
 _dog removeAction plsa2;
_dog removeAction plsa1;
_dog removeAction canc;

[_obj] call jstbld_fnc_jbanimation;


} ;








/////HMG

if (_objtype isEqualTo "B_HMG_01_high_F") then
{ 
_obj setPosatl [_dog modelToWorld [0.3,2,0] select 0,_dog modelToWorld [0.3,2,0] select 1,(_dog modelToWorld [0.3,2,0] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 hint "Placed M.G.";
 [_obj] call jstbld_fnc_jbanimation;
};

/////ALT,RHS HMG

if (_objtype isEqualTo "RHS_M2StaticMG_D") then
{ 
_obj setPosatl [_dog modelToWorld [0.3,2,0] select 0,_dog modelToWorld [0.3,2,0] select 1,(_dog modelToWorld [0.3,2,0] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 [_obj] call jstbld_fnc_jbanimation;
hint "Placed M.G."; 
};


///AA

if (_objtype isEqualTo "RHS_Stinger_AA_pod_D") then

{ 
_obj setPosatl [_dog modelToWorld [0,3,0] select 0,_dog modelToWorld [0,3,0] select 1,(_dog modelToWorld [0,3,0] select 2)];
 if ((getposatl _obj select 2) < 0.1) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]);
  };
 hint "Placed A.A.";
[_obj] call jstbld_fnc_jbanimation;


};


///mortar

if (_objtype isEqualTo "B_Mortar_01_F") then
{ 
_obj setPosatl [_dog modelToWorld [0.4,2,0.1] select 0,_dog modelToWorld [0.4,2,0.3] select 1,(_dog modelToWorld [0.4,2,0.1] select 2)];

 if ((getposatl _obj select 2) < 0.1) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]);
  };
  [_obj] call jstbld_fnc_jbanimation;
 hint "Placed Mortar";
};



///AT

if (_objtype isEqualTo "B_static_AA_F") then
{ 
_obj setPosatl [_dog modelToWorld [0,2,0] select 0,_dog modelToWorld [0,2,0] select 1,(_dog modelToWorld [0,2,0] select 2)];

 if ((getposatl _obj select 2) < 0.1) then
{_obj setVectorUP (surfaceNormal [(getPosATL _obj select 0),(getPosATL _obj select 1)]);
  };
  [_obj] call jstbld_fnc_jbanimation;
 hint "Placed A.T.";
};


////GMG
if (_objtype isEqualTo "B_GMG_01_high_F") then
{ 
_obj setPosatl [_dog modelToWorld [0.3,2,0] select 0,_dog modelToWorld [0.3,2,0] select 1,(_dog modelToWorld [0.3,2,0] select 2)];

 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
  [_obj] call jstbld_fnc_jbanimation;
};


 
 
 
 /// crate
if (_objtype isEqualTo "B_supplyCrate_F") then
{_obj setPosatl [_dog modelToWorld [0.3,2,0] select 0,_dog modelToWorld [0.3,2,0] select 1,(_dog modelToWorld [0.3,2,0] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 if ((justBuild_arsenalx ==0 ) or (justBuild_arsenalx ==2 )) then {
[_obj] remoteExecCall ["jstbld_fnc_supplyaction",0,_obj];
};
///items side specific
if (side player isEqualTo opfor) Then 
{
  _obj addBackpackCargoGlobal ["O_UAV_01_backpack_F", 2];
 _obj addBackpackCargoGlobal ["O_Static_Designator_02_weapon_F", 1];

 }Else{
  _obj addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
     _obj addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 1]; 
};  


      _obj addBackpackCargoGlobal ["B_Patrol_Respawn_bag_F", 2];
 _obj addItemCargoGlobal ["ACE_EntrenchingTool", 10];
_obj addBackpackCargoGlobal ["ACE_TacticalLadder_Pack", 5];
 [_obj] call jstbld_fnc_jbanimation;
hint "Placed Crate";
};


//////////
/// fob(radio
///////


if (_objtype isEqualTo "Land_BagBunker_Large_F") then
{_obj setVariable ["Placedt",1,true];
if 
(_dog distance (screenToWorld [0.5,0.5]) < 25)  then
{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 _obj setDir ((getDir _dog)+180);

 
 ///_objr = (_this select 3) select 1;
 ///crate _obj2
 _obj2 = createVehicle ["B_supplyCrate_F", [100, 100, 200], [], 0, "NONE"];
  _obj2 allowdamage false; 
 _obj2 setPos (_obj modelToWorld [0.0,0.5,0.3]) ;
  _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
 
  if !(justBuild_arsenalx > 1) then {
[_obj2] remoteExecCall ["jstbld_fnc_supplyaction",0,_obj2];
};
 

 _obj2 addItemCargoGlobal ["ACE_EntrenchingTool", 10];
  _obj2 addBackpackCargoGlobal ["B_Patrol_Respawn_bag_F", 2];
_obj2 addBackpackCargoGlobal ["ACE_TacticalLadder_Pack", 5];
  _obj2 attachto [_obj,[0,0,0.1]];
  _obj2 setDir ((getDir _obj)+30);
    //ladder _obj6
	_obj6 = createVehicle ["ACE_TacticalLadder_Pack", [100, 100, 200], [], 0, "NONE"];
 _obj6 setPos (_obj modelToWorld [3.84,4.031,-0.434]) ;
 _obj6 setDir ((getDir _dog) - 180);
 _obj6 attachto [_obj,[3.84,4.031,-0.434]];
  _obj6 setDir ((getDir _dog) - 180);
 	_obj3 = createVehicle ["ACE_TacticalLadder_Pack", [100, 100, 200], [], 0, "NONE"];
 _obj3 setPos (_obj modelToWorld [2.707,4.079,-0.122]) ;
 _obj3 setDir ((getDir _dog) - 180);
 _obj3 attachto [_obj,[2.707,4.079,-0.122]];
  _obj3 setDir ((getDir _dog) - 180);
 //banner and flag_obj4,_obj5
if (side player isEqualTo opfor) Then 
{ 
 _obj4 = createVehicle ["Banner_01_CSAT_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 attachto [_obj,[-0.13,2.48,0.5]];
  _obj5 = createVehicle ["Flag_Red_F", [100, 100, 200], [], 0, "NONE"];
 _obj5 attachto [_obj,[0,2.7,5]]; 

  _obj2 addBackpackCargoGlobal ["O_UAV_01_backpack_F", 2];

      
 _obj2 addBackpackCargoGlobal ["O_Static_Designator_02_weapon_F", 3];
  
  
     
	 ocount = ocount + 1 ;
	  publicvariable "ocount";
	 _x = ocount;
	 _xn = nameray select (_x) ;
	 _obj setVariable ["ID",_x,true];
	  _obj setVariable ["MARKER",0,true];
        _obj setVariable ["REM",0,true];
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj,_obj4,_obj5,_obj6],1.5,true,true,"","",2.5,false,"",""];
 /// _obj4 addaction ["<t color='#FF0000'>Remove</t>", "justbuild\build\FOB\delfob.sqf",[_obj,_obj2,_objr,_obj4,_obj5,_obj6,_x],];
	// ((_this select 0 distance (getpos _obj4) < 3) && (player isEqualTo (leader player))
		 
	 
///[[_obj],"fnc_addfobmrkr",true,true] spawn BIS_fnc_MP;
  
    [_obj] call jstbld_fnc_jbanimation;
  
  hint "Placed F.O.B.";
  
  
  
  
  } else {

 _obj4 = createVehicle ["Banner_01_NATO_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 attachto [_obj,[-0.13,2.48,0.5]];
  _obj5 = createVehicle ["Flag_Blue_F", [100, 100, 200], [], 0, "NONE"];
 _obj5 attachto [_obj,[0,2.7,5]];
 _obj2 addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
      _obj2 addBackpackCargoGlobal ["B_Static_Designator_01_weapon_F", 3];   
	 bcount = bcount + 1;
 publicvariable "bcount";	 
	 _x = bcount;
	 _xn = nameray select (_x) ;
	 _obj setVariable ["ID",_x,true];
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {call jstbld_fnc_addfobmrkr;},[_obj,_obj2,_obj,_obj4,_obj5,_obj6],1.5,true,true,"","",2.5,false,"",""];
 
 
//,1.5,true,true,"","((getpos player) distance (getpos _target) < 2)  ",50,false,"",""];
 /// _obj4 addaction ["<t color='#FF0000'>Remove</t>", "justbuild\build\FOB\delfob.sqf",[_obj,_obj2,_objr,_obj4,_obj5,_obj6,_x]];
	 
	 
	 
	/// [[_obj],"fnc_addfobmrkr",true,true] spawn BIS_fnc_MP;
	 
	   [_obj] call jstbld_fnc_jbanimation;
	 hint "Placed F.O.B.";
	 
	 
	 };
	 

  } Else {
hint "Too far";} ;
};




///
/// repair
///



if (_objtype == "Land_MedicalTent_01_Floor_dark_F") then
{_obj setVariable ["Placedt",1,true];
if (_dog distance (screenToWorld [0.5,0.5]) < 25)  then
{
_obj setPosatl [screenToWorld [0.5,0.5] select 0,screenToWorld [0.5,0.5] select 1,(screenToWorld [0.5,0.5] select 2)];
 _obj setVectorUP (surfaceNormal [(getPosATL _obj) select 0,(getPosATL _obj) select 1]);
///_objr = (_this select 3) select 1;
/// [[_obj],"fnc_addrprmrkr",true,true] spawn BIS_fnc_MP;
///side specific
        if (side player isEqualTo opfor) Then 
{ _obj2 = createVehicle ["Flag_Red_F", [100, 100, 200], [], 0, "NONE"];
 _obj2 setPos (_obj modelToWorld [1.7,4.0,0]) ;  _obj2 allowdamage false;
///end 
 _obj4 = createVehicle ["Box_NATO_AmmoVeh_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 setPos (_obj modelToWorld [3.7,4.0,0]);  _obj4 allowdamage false;

 _obj allowdamage false;    
 
 
 	 ocount2 = ocount2 + 1;
 publicvariable "ocount2";	 
	 _x = ocount2;
	 _xn = nameray select (_x) ;
	 _obj setVariable ["ID",_x,true];
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {call jstbld_fnc_addrepmrkr;},[_obj,_obj2,_obj4],1.5,true,true,"","",2.5,false,"",""];
 
   [_obj] call jstbld_fnc_jbanimation;
 hint "Placed Rearm Station";
  
 
 
 
 
 } else { _obj2 = createVehicle ["Flag_Blue_F", [100, 100, 200], [], 0, "NONE"];
 _obj2 setPos (_obj modelToWorld [1.7,4.0,0]) ; _obj2 allowdamage false;
 
 _obj4 = createVehicle ["Box_NATO_AmmoVeh_F", [100, 100, 200], [], 0, "NONE"];
 _obj4 setPos (_obj modelToWorld [3.7,4.0,0]);  _obj4 allowdamage false;
 
 _obj allowdamage false;    
 
 
 
 	 bcount2 = bcount2 + 1;
 publicvariable "bcount2";	 
	 _x = bcount2;
	 _xn = nameray select (_x) ;
	 _obj setVariable ["ID",_x,true];
	 _obj setVariable ["MARKER",0,true];
	 _obj setVariable ["REM",0,true];
 _obj4 addaction ["<t color='#FF0000'>Toggle Map Marker</t>", {call jstbld_fnc_addrepmrkr;},[_obj,_obj2,_obj4],1.5,true,true,"","",2.5,false,"",""];
 
 

  [_obj] call jstbld_fnc_jbanimation;
 
 hint "Placed Rearm Station";
 
 
 
 
 
 
 };

 
}  Else {
hint "Too far";};
};







///////////////////
////New stuff notes
/////




//////Camo Net
////////////////

//Land_IRMaskingCover_02_F
//Land_IRMaskingCover_01_F   big
//CamoNet_Blufor_big_F  vehicle camo
//CamoNet_Blufor_F  small
//CamoNet_INDP_big_F  vehicle digital
//CamoNet_INDP_F  smallhe
//CamoNet_OPFOR_big_F  vehicle hex
//CamoNet_OPFOR_F  small







///////////////////
///FOBs
////////////


//SmallFOBS
//

///tent FOB


//Land_SatelliteAntenna_01_F _obj2
//Land_PortableGenerator_01_F _obj3
//Land_Laptop_unfolded_F  _obj4
//Land_Tentdome_F _obj
///


///////Cargo smallFOB

//Land_Cargo_House_V1_F



///LargeFOBS
//





//player playaction "RepairingKneel";
_dog removeAction setposcanc;
_dog removeAction setposadd;
