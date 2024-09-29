_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {

	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base") : {
		_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L" or _veh isKindOf "OPTRE_M808B_UNSC_Driverless" or _veh isKindOf "OPTRE_M850_UNSC_Driverless" or _veh isKindOf "OPTRE_M808S_Driverless") :
	{
		_veh attachTo [_pelican,[0,-7.2, -2.7805]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "O_MBT_02_railgun_F" or _veh isKindOf "288th_Futura") : {
		_veh attachTo [_pelican,[0,-3.25,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "O_MBT_02_railgun_F" or _veh isKindOf "288th_Futura") : {
		//_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh attachTo [_pelican,[0,-3.25,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494" or _veh isKindOf "288th_Oryx" or _veh isKindOf "VES_M494_ORYX") : {
		_veh attachTo [_pelican,[0,-5,-0.75]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_falcon_base") : {
		_veh attachTo [_pelican,[0,-6,-0.6]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_hornet_base") : {
		_veh attachTo [_pelican,[0,-5,-0.35]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
	case (_veh isKindOf "B_Lifeboat"):{
		_veh attachTo [_pelican,[0.0181665,-3.41999,0.530018]];
		_loaded = true;
    	};
	case (_veh isKindOf "Land_Pod_Heli_Transport_04_bench_F"):
	{
		_veh attachTo [_pelican,[0,-6,-0.40]]; //[0,-6.5,0.9]
		_loaded = true;
	};
	case (_veh isKindOf "Land_Pod_Heli_Transport_04_covered_F"):
	{
		_veh attachTo [_pelican,[0,-6,-0.40]]; //[0,-6.5,0.9]
		_loaded = true;
	};
	case (_veh isKindOf "Pod_Heli_Transport_04_base_F"):
	{
		_veh attachTo [_pelican,[0,-6,-0.40]]; //[0,-6.5,0.9]
		_loaded = true;
	};
	case (_veh isKindOf "Pod_Heli_Transport_04_crewed_base_F"):
	{
		_veh attachTo [_pelican,[0,-6,-0.40]]; //[0,-6.5,0.9]
		_loaded = true;
	};
	case (_veh isKindOf "288th_Groundhog") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
		_loaded = true;
	};
	case (_veh isKindOf "B_AFV_Wheeled_01_cannon_F" or _veh isKindOf "B_AFV_Wheeled_01_up_cannon_F" or _veh isKindOf "I_APC_Wheeled_03_cannon_F") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "B_APC_Tracked_01_AA_F") : {
	_veh attachTo [_pelican,[0,-3.6,0.30]];
	_loaded = true;
	};
	case (_veh isKindOf "B_APC_Wheeled_01_cannon_F") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "TCF_Silverback_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "O_Truck_03_repair_F" or _veh isKindOf "vurtual_MTVRBase" or _veh isKindOf "Truck_01_viv_base_F" or _veh isKindOf "B_Truck_01_transport_F" or _veh isKindOf "O_Truck_03_device_F" or _veh isKindOf "O_Truck_03_transport_F" or _veh isKindOf "O_Truck_03_covered_F" or _veh isKindOf "O_Truck_03_ammo_F" or _veh isKindOf "O_Truck_03_fuel_F" or _veh isKindOf "O_Truck_03_medical_F" or _veh isKindOf "O_Truck_03_ammo_F" or _veh isKindOf "O_Truck_02_transport_F" or _veh isKindOf "O_Truck_02_covered_F" or _veh isKindOf "O_Truck_02_medical_F" or _veh isKindOf "O_Truck_02_box_F" or _veh isKindOf "O_Truck_02_fuel_F" or _veh isKindOf "O_Truck_02_Ammo_F" or _veh isKindOf "I_Truck_02_MRL_F") : {
		_veh attachTo [_pelican,[0,-7.2, -1.7805]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "B_APC_Tracked_01_rcws_F" or _veh isKindOf "B_APC_Tracked_01_CRV_F" or _veh isKindOf "I_MBT_03_cannon_F") : {
		_veh attachTo [_pelican,[0,-5,-0.75]];
		_loaded = true;
	};
	case (_veh isKindOf "B_SDV_01_F") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "B_LSV_01_unarmed_F" or _veh isKindOf "B_LSV_01_armed_F" or _veh isKindOf "B_LSV_01_AT_F") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "I_MRAP_03_F" or _veh isKindOf "I_MRAP_03_gmg_F" or _veh isKindOf "I_MRAP_03_hmg_F") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "I_LT_01_scout_F" or _veh isKindOf "I_LT_01_cannon_F" or _veh isKindOf "I_LT_01_AT_F" or _veh isKindOf "I_LT_01_AA_F") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
		_loaded = true;
	};
};

if (_loaded) then {
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
