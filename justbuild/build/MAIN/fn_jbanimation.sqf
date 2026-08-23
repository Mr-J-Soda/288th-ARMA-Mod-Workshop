////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////
//////////////////////////////////////


_obj = _this select 0;


_obj remoteExec ["jstbld_fnc_addjustbuildobject",0];

_objtype =typeOf _obj;

_play = _this select 1;
_play playMoveNow "AinvPknlMstpSnonWnonDr_medic5";
_play call jstbld_fnc_cancel;
////quick
sleep 0.7;
if ((_objtype isEqualTo "RoadCone_F") or 
(_objtype isEqualTo "Land_PortableLight_double_F") or 
	(_objtype isEqualTo "RoadBarrier_F") or 
	(_objtype isEqualTo "B_supplyCrate_F") or 
 
(_objtype isEqualTo "Land_BagFence_Round_F") or
(_objtype isEqualTo "Land_BagFence_Long_F") or 
(_objtype isEqualTo "Land_Razorwire_F") or
(_objtype isEqualTo "Pole_F") or
(_objtype isEqualTo "Misc_Backpackheap") or
(_objtype isEqualTo "Land_HBarrier_3_F"))

then{


_play switchmove ",";
 /////runs script to select which list if any to reopen
 [_obj,_play] call jstbld_fnc_OTHERlist;
	_play enableSimulation true;
	if (((justBuild_arsenalx ==0 ) or (justBuild_arsenalx ==2 )) && (_objtype isEqualTo "B_supplyCrate_F")) then {	   
    [_obj] remoteExecCall ["jstbld_fnc_supplyaction",0,_obj];};
    }Else{

sleep 2.75;
///Long
	if ((_objtype isEqualTo "Land_Cargo_Patrol_V1_F") or 
	(_objtype isEqualTo "Land_Cargo_House_V1_F") or 
	(_objtype isEqualTo "Land_HBarrierTower_F") or 
	(_objtype isEqualTo "Land_BagBunker_Tower_F") or 
	(_objtype isEqualTo "Land_Cargo_Tower_V1_F") or
	(_objtype isEqualTo "CamoNet_Blufor_big_F") or 
(_objtype isEqualTo "Land_MedicalTent_01_Floor_dark_F") or 
(_objtype isEqualTo "CamoNet_INDP_big_F") or 
(_objtype isEqualTo "CamoNet_OPFOR_big_F") or 
(_objtype isEqualTo "Land_IRMaskingCover_01_F") or
 (_objtype isEqualTo "Land_BagBunker_Large_F") or
  (_objtype isEqualTo "rhs_D30_msv") or
    (_objtype isEqualTo "RHS_Stinger_AA_pod_D") or
	  (_objtype isEqualTo "rhs_D30_at_msv") or
	  (_objtype isEqualTo "Land_PillboxBunker_01_big_F") or
	  (_objtype isEqualTo "Land_Bunker_01_HQ_F") or	  
	(_objtype isEqualTo "Land_Cargo_HQ_V1_F")) 
///New emplacments
///cup
///rhs
//vanill





      then {
if (_objtype isEqualTo "Land_Dome_big_F") then
{ deleteVehicle _obj;};
sleep 3.5;
_play switchmove ",";
 /////runs script to select which list if any to reopen
 [_obj,_play] call jstbld_fnc_OTHERlist;
	_play enableSimulation true;

            }Else{
	
			
			//////Normal
			
                _play switchmove ",";
                /////runs script to select which list if any to reopen
               [_obj,_play] call jstbld_fnc_OTHERlist;
	           _play enableSimulation true;
	


			   
                    };
			};
			


	


