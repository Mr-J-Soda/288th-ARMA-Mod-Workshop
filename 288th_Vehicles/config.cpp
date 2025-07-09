class CfgPatches {
	class 288th_UNSC{
		units[] = {
			"288th_SW_Rifleman",
			"288th_SW_AT",
			"288th_SW_Medic",
			"288th_SW_Marksman",
			"288th_SW_Autorifleman",
			"288th_SW_Crewman",
			"288th_SW_Breacher",
			"288th_SW_Grenadier",
			"288th_SW_RTO",
			"288th_SW_FL",
			"288th_SW_SL"
		};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {
			"V_FZ_Units",
			"OPTRE_UNSC_Units",
			"OPTRE_ACE_Compat_Medical"
		};
		author = "Misriah 288 DJP";
		authors[] = {"Misriah 288 DJP"};
	};
};

class CfgEditorCategories
{
	class 288th_Eden
	{
		displayName = "288th";
	};
};
class CfgEditorSubcategories
{
	class 288th_Eden_Helicopter
	{
		displayName = "Helicopter";
	};
	class 288th_Eden_Plane
	{
		displayName = "Plane";
	};
	class 288th_Eden_IFV
	{
		displayName = "IFV";
	};
	class 288th_Eden_APC
	{
		displayName = "APC";
	};
	class 288th_Eden_Car
	{
		displayName = "Cars";
	};
	class 288th_Eden_Tank
	{
		displayName = "Tanks";
	};
	class 288th_Eden_Drone
	{
		displayName = "Drones";
	};
	class 288th_Eden_Misc
	{
		displayName = "Misc";
	};
	class 288th_Eden_SW
	{
		displayName = "Silver Wolves";
	};
	class 288th_Eden_Turret
	{
		displayName = "Turrets";
	};
	class 288th_Eden_Props
	{
		displayName = "Props";
	};
	class 288th_Eden_Ships
	{
		displayName = "Ships";
	};
	class 288th_Eden_Boats
	{
		displayName = "Boats";
	};
	class 288th_Eden_Artillery
	{
		displayName = "Artillery";
	};
	class 288th_Eden_Memes
	{
		displayName = "Memes";
	};
	class 288th_Eden_Elite
	{
		displayName = "Sangheili";
	};
	class 288th_Named
	{
		displayName = "Named Characters";
	};
};
class CfgFactionClasses
{
	class 288th_UNSC
	{
		dlc = "288th";
		displayName = "288th";
		author = "Misriah 288";
		priority = 1;
		side = 1;
		icon = "\288th_Core\Logos\Misriah_Logo_CA.paa";
		flag = "\288th_Core\Logos\Misriah_Logo_CA.paa";
		primaryLanguage = "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
};
class CfgVehicleClasses
{
	class 288th_Subgroups_LandVehicles
	{
		displayName = "Land Vehicles";
	};
	class 288th_Subgroups_AirVehicles
	{
		displayName = "Air Vehicles";
	};
	class 288th_Subgroups_Covenant
	{
		displayName = "Covenant";
	};
	class 288th_Subgroups_SW
	{
		displayName = "Silver Wolves";
	};
	class 288th_Subgroups_Memes
	{
		displayName = "Memes";
	};
};
class CBA_Extended_EventHandlers_base;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class OPTRE_UNSC_hornet_CAP;
class OPTRE_M274_ATV;
class OPTRE_FC_Type26B_Ultra_Banshee;
class OPTRE_M313_UNSC;
class B_supplyCrate_F;
class House;
class components;
class HitHull;
class HitPoints;
class Turrets;
class MainTurret;
class HitFuel;
class CommanderOptics;
class RCWSOptics;
class ViewOptics;
class Optics_Commander_02;
class Optics_Gunner_APC_02;
class ViewGunner;
class Wide;
class Medium;
class Narrow;
class Optics_Gunner_MBT_02;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class cfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
		class EventHandlers;
		class ViewOptics;
		class NewTurret;
		class Components;
	};
	class Air;
	class Plane : Air
	{
		class HitPoints;
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class Plane_CAS_01_base_F : Plane_Base_F
	{
		class Wheels;
		class PilotCamera;
		class Components : Components
		{
			class SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components;
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				class Components;
			};
		};
	};
	class B_Plane_CAS_01_F : Plane_CAS_01_base_F
	{
		class SimpleObject;
		class Viewoptics;
	};
	class Helicopter;
	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Turrets : Turrets
		{
			class CopilotTurret;
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Components;
		class Reflectors
		{
			class Right;
		};
	};
	class B_Plane_Fighter_01_F;
	class OPTRE_Pelican_armed;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F{};
	class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F{};
	class OPTRE_M494: I_APC_Tracked_03_base_F{};
	class OPTRE_M808S;
	/*class B_APC_Wheeled_01_base_F;*/
	class B_APC_Wheeled_01_cannon_F;
	/*: B_APC_Wheeled_01_base_F
	{
		class AnimationSources;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};*/
	class I_APC_Wheeled_03_cannon_F;
	class UGV_01_rcws_base_F;
	class B_UGV_01_rcws_F : UGV_01_rcws_base_F
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class Components;
	};
	class Optics_Gunner_APC_01;
	class WeaponFireGun;
	class TCF_UAV_01_F;
	class CargoTurret;
	class CopilotTurret;
	class Reflectors;
	class HitEngine;
	class HitLTrack;
	class HitRTrack;
	class HitNeck;
	class HitPelvis;
	class HitAbdomen;
	class HitDiaphragm;
	class HitChest;
	class HitArms;
	class HitHands;
	class HitLegs;
	class Items_base_F;
	class Land_packing_crate_lg_blue: Items_base_F
	{
		maximumLoad = 10000;
	};
	class DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class EventHandlers;
	class RotorLibHelicopterProperties;
	class OPTRE_Static_M41;
	class OPTRE_Static_Gauss;
	class OPTRE_Static_AA;
	class OPTRE_UNSC_Soldier_Base;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class OPTRE_Frigate_UNSC;
	class OPTRE_Ammo_SupplyPod_Empty;
	class OPTRE_Ammo_Box_Base;
	class OPTRE_UNSC_falcon;
	class B_AFV_Wheeled_01_up_cannon_F;
	class OPTRE_forklift;
	class OPTRE_AU_44_Mortar;
	class TCF_UNSC_Nightingale;
	class OPTRE_YSS_1000_A;
	class B_UGV_02_Demining_F;
	class B_UGV_02_Science_F;
	class B_UAV_05_F;
	class O_MBT_02_railgun_base_F;
	class OPTRE_M12G1_LRV;
	class OPTRE_M914_RV;
	class Turrets;
	class MainTurret;
	class NewTurret;
	class ViewOptics;
	class AnimationSources;
	class OPTRE_M12R_AA;
	class B_MBT_01_cannon_F;
	class B_HMG_01_F;
	class B_HMG_01_high_F;
	class I_MRAP_03_F;
	class I_MRAP_03_gmg_F;
	class I_MRAP_03_hmg_F;
	class Ship;
	class Boat_F: Ship
	{
		class AnimationSources
		{
			class Gatling;
			class Gatling_flash;
		};
		class Eventhandlers;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Turrets;
		class NewTurret;
		class ViewOptics;
	};
	class optre_catfish_aa_f;

	class Man;
	class CaManbase: Man
	{
		class UserActions
		{
			class Ed_1E_deploy
			{
				displayNameDefault = "Deploy ED-1E";
				priority = -10;
				showWindow = 0;
				hideOnUse = 1;
				displayName = "Deploy ED-1E";
				position = "action";
				radius = 5;
				onlyForPlayer = 1;
				condition = "this == player && alive this && isPlayer this && this == vehicle this && ""ED_1E_Kit"" in (items this )";
				statement = "_pos = this getPos [1.5, getDir this]; _vehicle = (createVehicle [""288th_ED_1E"", _pos, [], 0, ""FLY""]); _vehicle setDir (getDir this); createVehicleCrew _vehicle; this removeItem 'ED_1E_Kit';";
			};
			class Ed_1F_deploy
			{
				displayNameDefault = "Deploy ED-1F";
				priority = -10;
				showWindow = 0;
				hideOnUse = 1;
				displayName = "Deploy ED-1F";
				position = "action";
				radius = 5;
				onlyForPlayer = 1;
				condition = "this == player && alive this && isPlayer this && this == vehicle this && ""ED_1F_Kit"" in (items this )";
				statement = "_pos = this getPos [1.5, getDir this]; _vehicle = (createVehicle [""288th_ED_1F"", _pos, [], 0, ""FLY""]); _vehicle setDir (getDir this); createVehicleCrew _vehicle; this removeItem 'ED_1F_Kit';";
			};
			class Ed_1C_deploy
			{
				displayNameDefault = "Deploy ED-1C";
				priority = -10;
				showWindow = 0;
				hideOnUse = 1;
				displayName = "Deploy ED-1C";
				position = "action";
				radius = 5;
				onlyForPlayer = 1;
				condition = "this == player && alive this && isPlayer this && this == vehicle this && ""Ed_1C_Kit"" in (items this )";
				statement = "_pos = this getPos [1.5, getDir this]; _vehicle = (createVehicle [""288th_Ed_1C"", _pos, [], 0, ""FLY""]); _vehicle setDir (getDir this); createVehicleCrew _vehicle; this removeItem 'Ed_1C_Kit';";
			};
			class MQ_94_deploy
			{
				displayNameDefault = "Deploy MQ-94";
				priority = -10;
				showWindow = 0;
				hideOnUse = 1;
				displayName = "Deploy MQ-94";
				position = "action";
				radius = 5;
				onlyForPlayer = 1;
				condition = "this == player && alive this && isPlayer this && this == vehicle this && ""MQ_94_Kit"" in (items this )";
				statement = "_pos = this getPos [1.5, getDir this]; _vehicle = (createVehicle [""288th_MQ_94"", _pos, [], 0, ""FLY""]); _vehicle setDir (getDir this); createVehicleCrew _vehicle; this removeItem 'MQ_94_Kit';";
			};
		};
	};

	//Heli
	class 288th_Hornet : OPTRE_UNSC_hornet_CAP{
		armor = 225;
		armorStructural = 2;
		fuelCapacity = 350;
		fuelConsumptionRate = 0.02;
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "AV-14 Hornet (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Helicopter";
		vehicleClass = "288th_Subgroups_AirVehicles";
		crew = "288th_SW_Crewman";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = { "288th_Vehicles\Hornet\hornet_hull_green_co" };
		class TextureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] =
				{
					"288th_Vehicles\Hornet\hornet_hull_green_co"
				};
				factions[] = { "288th_UNSC" };
			};
			class Apex
			{
				displayName = "Apex";
				author = "Misriah 288 DJP";
				textures[] =
				{
					"288th_Vehicles\Hornet\hornet_hull_ApexFaction_co"
				};
				factions[] = { "288th_UNSC" };
			};
			class Arctic
			{
				displayName = "Arctic";
				author = "Misriah 288 DJP";
				textures[] =
				{
					"288th_Vehicles\Hornet\hornet_hull_white_co"
				};
				factions[] = { "288th_UNSC" };
			};
			class Black
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Air\hornet\data\hornet_hull_black_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorgreen
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Air\hornet\data\hornet_hull_green_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colortan
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Air\hornet\data\hornet_hull_desert_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Air\hornet\data\hornet_hull_snow_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colormarine
			{
				displayName = "Marines";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Air\hornet\data\hornet_hull_marine_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			factions[] =
			{
				"BLU_F",
				"BLU_T_F",
				"288th_UNSC"
			};
		};
		textureList[] ={"standard",1,"Apex",0,"Arctic",0,"Black",0,"colormarine",0,"colorwhite",0,"colortan",0,"colorgreen",0};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name = "adv_aceCPR_AED";
				count = 1;
			};
			class _xx_ACE_Fortify
			{
				name = "ACE_Fortify";
				count = 1;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 20;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 6;
			};
			class _xx_adv_aceSplint_splint
			{
				name = "adv_aceSplint_splint";
				count = 4;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 20;
			};
			class _xx_288th_Biofoam
			{
				name = "288th_Biofoam";
				count = 32;
			};
		};
		maxSpeed = 750;
		slingLoadMaxCargoMass = 15000;
		liftForceCoef = 3;
		cyclicAsideForceCoef = 3.0;
		cyclicForwardForceCoef = 1.5;
		backrotorforcecoef = 1.8;
		bodyFrictionCoef = 0.3000001;
		mainRotorSpeed = 8;
		backRotorSpeed = 6;
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			autoHoverCorrection[] = { 0.28,2.88,0 };
			defaultCollective = 0.635;
			maxTorque = 1200;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 40000;
			maxTailRotorStress = 5200;
			retreatBladeStallWarningSpeed = 77.222;
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = { "A3\Sounds_F\air\Heli_Light_02\open","db-5",1 };
		soundGetOut[] = { "A3\Sounds_F\air\Heli_Light_02\close","db0",1,50 };
		soundEnviron[] = { "","db-30",1.0 };
		soundDammage[] = { "A3\Sounds_F\air\Heli_Light_02\crash","db-5",1 };
		soundEngineOnInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2","db-5",1.0 };
		soundEngineOnExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2","db-2",1.0,600 };
		soundEngineOffInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2","db-5",1.0 };
		soundEngineOffExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2","db-2",1.0,600 };
		soundLocked[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_1","db-20",1 };
		soundIncommingMissile[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_2","db-20",1 };
		class Sounds
		{
			class Engine
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-10",1.0,900 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext","db-5",1.0,1200 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class RotorHighOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-5",1.0,1500 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class RotorNoiseExt
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext","db-5",1,800 };
				frequency = 1;
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class EngineLowIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int","db-5",1.0 };
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
			};
			class EngineHighIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int","db-5",1.2 };
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
			};
			class ForsageIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db-5",1.0 };
				frequency = "rotorSpeed";
				volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class WindNoiseIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-5",1.0 };
				frequency = "1";
				volume = "0.25*(1-camPos)*(speed factor[1, 150])";
			};
		};
		weapons[] = { "OPTRE_GUA23A","CMFlareLauncher","288th_Class_Guided","OPTRE_missiles_C2GMLS","Laserdesignator_pilotCamera" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","288th_Class_4_Guided","OPTRE_8Rnd_C2GMLS_missiles","OPTRE_8Rnd_C2GMLS_missiles","Laserbatteries" };
		class UserActions
		{
			class AirbrakeEngage
			{
				userActionID = 54;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
				priority = 10;
				showWindow = 0;
				radius = 100000;
				animPeriod = 5;
				onlyForPlayer = 0;
				position = "cargo_door_handle";
			};
			class ThrusterEngage : AirbrakeEngage
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
		};
	};
	class 288th_Falcon : OPTRE_UNSC_falcon{
		armor = 225;
		armorStructural = 2;
		fuelCapacity = 350;
		fuelConsumptionRate = 0.02;
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "UH-144S Falcon (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Helicopter";
		vehicleClass = "288th_Subgroups_AirVehicles";
		crew = "288th_SW_Crewman";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		hiddenSelections[] = { "camo1","camo2","camo3" };
		hiddenSelectionsTextures[] = { "\OPTRE_Vehicles_Air\Falcon\data\falcon_main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\falcon_attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\falcon_interior_co.paa" };
		weapons[] = { "OPTRE_M638","CMFlareLauncher","Laserdesignator_pilotCamera" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries" };
		memoryPointGun = "machinegun_end";
		selectionFireAnim = "muzzleFlash";
		visionMode[] = { "Normal","NVG","Ti" };
		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\optre_vehicles_air\falcon\FalconPylonPic.paa";
				class pylons
				{
					class WingPylonRight1
					{
						maxweight = 560;
						hardpoints[] = { "OPAEX_Hardpoint_UH144" };
						attachment = "OPTRE_16Rnd_Anvil1_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = { 0.35,0.1 };
						turret[] = {};
					};
					class WingPylonLeft1 : WingPylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.35,0.467 };
					};
				};
				class Presets
				{
					class Default
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class CAS_Rockets
					{
						displayName = "CAS: ANVIL I";
						attachment[] = { "OPTRE_16Rnd_Anvil1_missiles","OPTRE_16Rnd_Anvil1_missiles" };
					};
					class CAS_Rockets_Guided
					{
						displayName = "CAS: ANVIL II & III";
						attachment[] = { "OPTRE_16Rnd_Anvil2_missiles","OPTRE_16Rnd_Anvil3_missiles" };
					};
					class CAS_AT
					{
						displayName = "AT";
						attachment[] = { "OPTRE_1Rnd_Jackknife_missile","OPTRE_1Rnd_Jackknife_missile" };
					};
				};
			};
		};
		class UserActions
		{
			class AirbrakeEngage
			{
				userActionID = 54;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
				priority = 10;
				showWindow = 0;
				radius = 100000;
				animPeriod = 5;
				onlyForPlayer = 0;
				position = "cargo_door_handle";
			};
			class ThrusterEngage : AirbrakeEngage
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
		};
		class textureSources
		{
			class Standard
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_STANDARD";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa","\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Green
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_GREEN";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Green\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Green\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Black
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_BLACK";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Tan
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_TAN";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Tan\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Tan\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class White
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_WHITE";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\White\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\White\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Police
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_POLICE";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Police\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Police\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Innie
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_INNIE";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Innie\Falcon_Innie_Standard_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Innie\Falcon_Innie_Standard_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Innie_Woodland
			{
				displayName = "Innie Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Innie\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Innie\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Error
			{
				displayName = "Error";
				author = "Error";
				textures[] = { "288th_Vehicles\Falcon\Error\OPTRE_Falcon_falcon_Main_co.paa","288th_Vehicles\Falcon\Error\OPTRE_Falcon_falcon_Attachments_co.paa","288th_Vehicles\Falcon\Error\OPTRE_Falcon_falcon_Interior_co.paa" };
				factions[] = { "288th_UNSC" };
			};
		};
		textureList[] = { "Standard",1,"Green",1,"Black",1,"Tan",1,"White",1,"Error",1,"Police",1,"Innie",1,"Innie_Woodland",1 };
	};
	class 288th_Pelican : OPTRE_Pelican_armed{
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Helicopter";
		vehicleClass = "288th_Subgroups_AirVehicles";
		crew = "288th_SW_Crewman";
		forceInGarage = 1;
		scope = 2;
		scopecurator = 2;
		scopeArsenal = 2;
		side = 1;
		fuelConsumptionRate = 0.02;
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "D77H-TCI Pelican (288th)";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		armor = 200;
		damageResistance = 0.05;
		fuelCapacity = 5000;
		insideSoundCoef = 0.01;
		noseDownCoef = 0;
		crewCrashProtection = 1;
		crewExplosionProtection = 1;
		altFullForce = 6000;
		altNoForce = 30000;
		maxSpeed = 650;
		maxFordingDepth = 0.75;
		mainBladeRadius = 0.1;
		liftForceCoef = 2;
		bodyFrictionCoef = 0.6777;
		cyclicAsideForceCoef = 4;
		cyclicForwardForceCoef = 2;
		backRotorForceCoef = 1.377;
		transportSoldier = 10;
		cargoCanEject = 1;
		driverCanEject = 0;
		hideWeaponsCargo = 1;
		ejectDeadGunner = 0;
		cargoProxyIndexes[] = { 3,4,5,6,7,8,9,10,11,12 };
		lockDetectionSystem = "2+4+8+16";
		allowTabLock = 1;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		driverCanSee = 31;
		canUseScanner = 1;
		incomingMissileDetectionSystem = "2+4+8+16";
		irScanToEyeFactor = 1;
		irScanRangeMin = 200;
		irScanRangeMax = 10000;
		irScanGround = 1;
		irTarget = 1;
		irTargetSize = 2.0;
		laserScanner = 1;
		laserTarget = 0;
		weaponLockSystem = "2+4+8+16";
		nvScanner = 1;
		radarTarget = 1;
		radarTargetSize = 1.0;
		radarType = 4;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		showAllTargets = 2;
		availableForSupportTypes[] = { "Drop","Transport" };
		cost = 90000;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 16;
			};
		};
		class TransportItems {};
		maximumLoad = 50000;
		selectionFireAnim = "muzzleFlash";
		weapons[] = { "CMFlareLauncher","OPTRE_missiles_Anvil1" };
		magazines[] = { "168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine" };
		slingLoadMaxCargoMass = 500000;
		textureList[] = { "standard",1,"colorgreen",0,"colorblack",0,"colorsnow",0,"colortan",0 };
		class textureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorgreen
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colortan
			{
				displayName = "Tan";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorblack
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorsnow
			{
				displayName = "Snow";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_snow_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colormarine
			{
				displayName = "Marines";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorinnie
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa" };
				factions[] = { "OPTRE_Ins" };
			};
			/*class Maxim
			{
				displayName = "Maxim";
				author = "Fletcher";
				textures[] = { "\288th_Vehicles\Pelican\MaximPelicanExterior_Black_CO.paa" };
				factions[] = { "288th_UNSC" };
			};*/
		};
		class UserActions
		{
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn Air_fnc_PelicanLoadValidate;";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn Air_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class PelLift_LoadDevice
			{
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 2;
				radius = 4;
				showWindow = 0;
				statement = "0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID = 6;
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				animPeriod = 5;
			};
			class RampClose : RampOpen
			{
				userActionID = 51;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				animPeriod = 5;
			};
			class ThrusterEngage : RampOpen
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage : ThrusterEngage
			{
				userActionID = 54;
				displayName = "$STR_OPTRE_Functions_AirBrake_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirBrake_Label";
				textToolTip = "$STR_OPTRE_Functions_AirBrake_Tooltip";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight = 1000;
						hardpoints[] = {"OPAEX_Hardpoint_D77-TC"};
						attachment = "";
						bay = -1;
						priority = 2;
						UIposition[] = {0.1,0.5};
						turret[] = {};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.1,0.1};
					};
					class pylons3: pylons1
					{
						attachment = "";
						priority = 2;
						hardpoints[] = {"OPTRE_Hardpoint_D77_Guided"};
						UIposition[] = {0.25,0.44};
						turret[] = {0};
					};
					class pylons4: pylons1
					{
						mirroredMissilePos = 3;
						attachment = "";
						priority = 2;
						hardpoints[] = {"OPTRE_Hardpoint_D77_Guided"};
						UIposition[] = {0.25,0.16};
						turret[] = {0};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "CAP";
						attachment[] = {"OPTRE_12Rnd_C2GMLS_missiles","OPTRE_12Rnd_C2GMLS_missiles","OPTRE_12Rnd_C2GMLS_missiles","OPTRE_12Rnd_C2GMLS_missiles","OPTRE_1000Rnd_127x99_M41_HE"};
					};
					class CAS_Rockets
					{
						displayName = "CAS: ANVIL I";
						attachment[] = {"OPTRE_32Rnd_Anvil1_missiles","OPTRE_32Rnd_Anvil1_missiles","","","OPTRE_1200Rnd_40mm_HE"};
					};
					class CAS_Rockets_Guided
					{
						displayName = "CAS: ANVIL II & III";
						attachment[] = {"OPTRE_32Rnd_Anvil2_missiles","OPTRE_32Rnd_Anvil3_missiles","","","OPTRE_1200Rnd_40mm_HE"};
					};
					class CAS_AT
					{
						displayName = "AT";
						attachment[] = {"OPTRE_4Rnd_Jackknife_missile","OPTRE_4Rnd_Jackknife_missile","OPTRE_4Rnd_Jackknife_missile","OPTRE_4Rnd_Jackknife_missile","OPTRE_750Rnd_70mm_HE"};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 100;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 200;
						angleRangeHorizontal = 270;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class 288th_Nightingale: TCF_UNSC_Nightingale{
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Helicopter";
		vehicleClass = "288th_Subgroups_AirVehicles";
		crew = "288th_SW_Crewman";
		scope = 2;
		scopecurator = 2;
		scopeArsenal = 2;
		side = 1;
		fuelConsumptionRate = 0.02;
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "EV-41 Nightingale (288th)";
		class UserActions
		{
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn Air_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]";
				animPeriod = 5;
			};
			class RampClose: RampOpen
			{
				userActionID = 51;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
			};
			class ThrusterEngage : RampOpen
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage : ThrusterEngage
			{
				userActionID = 54;
				displayName = "$STR_OPTRE_Functions_AirBrake_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirBrake_Label";
				textToolTip = "$STR_OPTRE_Functions_AirBrake_Tooltip";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		class textureSources
		{
			class TCF_desert
			{
				author = "Vespade";
				displayName = "Desert";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_DES_CO.paa"};
			};
			class TCF_woodland
			{
				author = "Vespade";
				displayName = "Woodland";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_WDL_CO.paa"};
			};
			class TCF_jungle
			{
				author = "Vespade";
				displayName = "Jungle";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_JUN_CO.paa"};
			};
			class TCF_urban
			{
				author = "Vespade";
				displayName = "Urban";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_URB_CO.paa"};
			};
			class TCF_black
			{
				author = "Vespade";
				displayName = "Black";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_BLK_CO.paa"};
			};
			class TCF_frost
			{
				author = "Vespade";
				displayName = "Frost";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_FRO_CO.paa"};
			};
			class TCF_tundra
			{
				author = "Vespade";
				displayName = "Tundra";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_TUN_CO.paa"};
			};
			class TCF_dunes
			{
				author = "Vespade";
				displayName = "Dunes";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_DUN_CO.paa"};
			};
			class TCF_classic
			{
				author = "Vespade";
				displayName = "Classic";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_CLS_CO.paa"};
			};
			class TCF_olive
			{
				author = "Vespade";
				displayName = "Olive";
				textures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_OD3_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_OD3_CO.paa"};
		textureList[] = {"TCF_desert",1,"TCF_woodland",1,"TCF_jungle",1,"TCF_urban",1,"TCF_black",1,"TCF_frost",1,"TCF_tundra",1,"TCF_dunes",1,"TCF_classic",1,"TCF_olive",1};
		slingLoadMaxCargoMass = 10000;
		maximumLoad = 5000;
		armor = 200;
		altFullForce = 10000;
		altNoForce = 20000;
		maxSpeed = 900;
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
	};

	//Misc
	class 288th_mongoose_crate : OPTRE_M274_ATV{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "It's a Box";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		crew = "288th_SW_Crewman";
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Misc";
		vehicleClass = "288th_Subgroups_LandVehicles";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		model = "OPTRE_Buildings\Containers\optre_milcrate_h2agray";
		wheelDamageThreshold = 100;
		wheelDestroyThreshold = 100;
		wheelDamageRadiusCoef = 100;
		wheelDestroyRadiusCoef = 100;
		armor = 100;
		canFloat = 1;
		maximumLoad = 10000;
		class TransportBackpacks {};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};
	class 288th_Banshee_Soda : OPTRE_FC_Type26B_Ultra_Banshee{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "Soda's Banshee";
		cost = 500;
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Misc";
		vehicleClass = "288th_Subgroups_Covenant";
		enableGPS = 1;
		radarTargetSize = 0.1;
		visualTargetSize = 0.1;
		irTargetSize = 0.1;
		camouflage = 0.3;
		armorLights = 1;
		armor = 950;
		maxSpeed = 1000;
		stallSpeed = 10;
		stallWarningTreshold = 0.2;
		wheelSteeringSensitivity = 0;
		damageResistance = 0.00555;
		fuelCapacity = 5000;
		fuelConsumptionRate = 0.03845;
		insideSoundCoef = 0.0116228;
		crewCrashProtection = 0.1;
		crewExplosionProtection = 1.0;
		armorStructural = 5.2;
		explosionShielding = 10;
		OPTRE_thrustTexture = "optre_vehicles\pelican\data\bolt_blue_ca.paa";
		OPTRE_thrustTextureIndex = 1;
		landingAoa = 7 * 3.1415 / 180;
		landingSpeed = 75;
		maximumLoad = 2000;
		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 150;
				visual = "Hit_Hull";
				name = "HitHull";
				minimalHit = 10;
				depends = "0";
				radius = 0.3;
				passThrough = 1;
				explosionShielding = 20;
				material = -1;
			};
		};
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		hiddenselectionstextures[] = { "288th_Vehicles\Banshee\Corps_ultra_CO.paa","288th_Vehicles\Banshee\None_ultra_CO.paa","288th_Vehicles\Banshee\Ailes_ultra_CO.paa","288th_Vehicles\Banshee\Gouvernail_ultra_CO.paa" };
		soundEngineOnInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2","db-5",1.0 };
		soundEngineOnExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2","db-2",1.0,600 };
		soundEngineOffInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2","db-5",1.0 };
		soundEngineOffExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2","db-2",1.0,600 };
		class Sounds
		{
			class Engine
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db8",1.0,1000 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
			};
			class EngineLowOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext","db8",1.0,1200 };
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db8",1.2,1400 };
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db5",0.99,1700 };
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = { 3.14,3.92,2.0,0.5 };
			};
			class WindNoiseOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-5",1.0,150 };
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int","db0",1.0 };
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int","db0",1.2 };
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db0",1.0 };
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-6",1.0 };
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class UserActions
		{
			class AirbrakeEngage
			{
				userActionID = 54;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
				priority = 10;
				showWindow = 0;
				radius = 100000;
				animPeriod = 5;
				onlyForPlayer = 0;
				position = "cargo_door_handle";
			};
			class Flip
			{
				displayNameDefault = "Press SPACEBAR to flip";
				displayName = "Press SPACEBAR to flip";
				position = "";
				radius = 15;
				onlyForPlayer = 1;
				condition = "(alive this) AND !(canmove this)";
				statement = "this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 5]; this setVectorUp surfaceNormal getposATL this;";
			};
			class ThrusterEngage : AirbrakeEngage
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
		};
		weapons[] = { "OPTRE_GUA23A","CMFlareLauncher","288th_Class_Guided","OPAEX_W_GBU1105","Laserdesignator_pilotCamera"  };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","288th_Class_4_Guided","288th_Class_4_Guided","288th_Class_4_Guided","OPAEX_M_GBU1105_1Rnd","Laserbatteries", };
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight = 560;
						hardpoints[] = { "OPAEX_Hardpoint_D77-TC" };
						attachment = "OPTRE_32Rnd_Anvil1_missiles";
						bay = -1;
						priority = 2;
						UIposition[] = { 0.1,0.5 };
						turret[] = {};
					};
					class pylons2 : pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.1,0.1 };
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 300;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 300;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1000;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 300;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 300;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1000;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 100;
						angleRangeHorizontal = 270;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};
					class LaserSensorComponent : SensorTemplateLaser {};
					class NVSensorComponent : SensorTemplateNV {};
				};
			};
		};
		class TransportItems
		{
			class _xx_288th_Stim_1
			{
				name = "288th_Stim_1";
				count = 20;
			};
		};
	};
	class 288th_Rocket_Elephant : OPTRE_M313_UNSC{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		faction = "288th_UNSC";
		displayName = "M313 Rocket Elephant (288th)";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Misc";
		mainRotorSpeed = 3;
		backRotorSpeed = 3;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		armor = 6000;
		maxSpeed = 300;
		vehicleClass = "288th_Subgroups_LandVehicles";
		class UserActions
		{
			class Flip
			{
				displayNameDefault = "Press SPACEBAR to flip... wait, what? How did you do that?";
				displayName = "Press SPACEBAR to flip... wait, what? How did you do that?";
				position = "";
				radius = 15;
				onlyForPlayer = 1;
				condition = "(alive this) AND !(canmove this)";
				statement = "this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 5]; this setVectorUp surfaceNormal getposATL this;";
			};
			class loadingramp_Raise
			{
				userActionID = 60;
				displayName = "Raise Loading Ramp";
				displayNameDefault = "Raise Loading Ramp";
				textToolTip = "Raise Loading Ramp";
				position = "";
				radius = 6;
				priority = 6;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""loadingramp"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""loadingramp"",1]";
				animPeriod = 1;
			};
			class loadingramp_Lower : loadingramp_Raise
			{
				userActionID = 61;
				displayName = "Lower Loading Ramp";
				displayNameDefault = "Lower Loading Ramp";
				textToolTip = "Lower Loading Ramp";
				condition = "((this animationPhase ""loadingramp"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""loadingramp"",0]";
			};
			class ThrusterEngage : loadingramp_Raise
			{
				userActionID = 52;
				displayName = "$STR_OPTRE_Functions_AirThrust_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirThrust_Label";
				textToolTip = "$STR_OPTRE_Functions_AirThrust_Tooltip";
				priority = 10;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 53;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage : ThrusterEngage
			{
				userActionID = 54;
				displayName = "$STR_OPTRE_Functions_AirBrake_Label";
				displayNameDefault = "$STR_OPTRE_Functions_AirBrake_Label";
				textToolTip = "$STR_OPTRE_Functions_AirBrake_Tooltip";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 10)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Tracked\Elephant\Data\consoles_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\exterior_details_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\flooring_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\hull_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\interior_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\tracks_standard_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\tracks2_standard_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorgreen
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\consoles_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\exterior_details_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\flooring_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\hull_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\interior_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\tracks_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\tracks2_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colortan
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\consoles_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\exterior_details_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\flooring_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\hull_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\interior_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks2_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorblack
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\consoles_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\exterior_details_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\flooring_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\hull_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\interior_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\tracks_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\tracks2_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Misriah 288 DJP";
				textures[] = { "OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\consoles_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\exterior_details_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\flooring_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\hull_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\interior_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\tracks_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\snw\tracks2_co.paa" };
				factions[] = { "288th_UNSC" };
			};
		};
		textureList[] = { "standard",1,"colorgreen",1,"colorblack",1,"colortan",1 };
	};

	//APC/IFV
	class 288th_Oryx : OPTRE_M494{
		dlc = "288th";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		displayName = "M494 Oryx IFV (288th)";
		forceInGarage = 1;
		faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";
		crew = "288th_SW_Crewman";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_IFV";
		setMass = 100;
		side = 1;
		armor = 625;
		armorStructural = 5;
		explosionShielding = 0.5;
		engineMOI = 6;
		enginePower = 650;
		peakTorque = 9000;
		maxSpeed = 100;
		fuelCapacity = 30;
		enableRadio = 1;
		enableGPS = 1;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 70;
		idleRpm = 700;
		redRpm = 4000;
		precision = 15;
		brakeDistance = 1.0;
		acceleration = 17;
		textureList[] = { "colorDJP",1,"colorDJPtraining",0,"colorstand",0,"colordes",0,"colortund",0,"colorjung",0,"ins",0,"CMA",0};
		hiddenSelectionsTextures[] = { "\288th_Vehicles\Oryx\oryx_armor_co.paa","\288th_Vehicles\Oryx\oryx_main_co.paa","\288th_Vehicles\Oryx\oryx_net_ca.paa","\288th_Vehicles\Oryx\oryx_net_ca.paa","\288th_Vehicles\Oryx\oryx_net_ca.paa","\288th_Vehicles\Oryx\oryx_turret_co.paa","\288th_Vehicles\Oryx\scorpion_mg_co.paa","\288th_Vehicles\Oryx\oryx_decal_ca.paa" };
		class textureSources
		{
			class colorDJP
			{
				displayName = "288th DJP";
				author = "Misriah 288 DJP";
				textures[] = 
				{ 
					"\288th_Vehicles\Oryx\oryx_armor_co.paa",
					"\288th_Vehicles\Oryx\oryx_main_co.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_turret_co.paa",
					"\288th_Vehicles\Oryx\scorpion_mg_co.paa",
					"\288th_Vehicles\Oryx\oryx_decal_ca.paa" 
				};
			};
			class colorDJPtraining
			{
				displayName = "288th DJP (training)";
				author = "Misriah 288 DJP";
				textures[] =
				{
					"\288th_Vehicles\Oryx\oryx_armor_training_co.paa",
					"\288th_Vehicles\Oryx\oryx_main_training_co.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_net_ca.paa",
					"\288th_Vehicles\Oryx\oryx_turret_training_co.paa",
					"\288th_Vehicles\Oryx\scorpion_mg_co.paa",
					"\288th_Vehicles\Oryx\oryx_decal_ca.paa"
				};
			};
			class colorstand
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_STANDARD";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_armor_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_main_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_turret_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\scorpion_mg_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\Texture\oryx_decal_ca.paa" };
			};
			class colordes
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_TAN";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_armor_desert_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_main_desert_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_turret_desert_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\Scorp_mg_desert_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\Texture\oryx_decal_ca.paa" };
			};
			class colortund
			{
				displayName = "White Digital";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_armor_tundra_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_main_tundra_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_turret_tundra_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\Texture\oryx_decal_ca.paa" };
			};
			class colorjung
			{
				displayName = "Green Digital";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_armor_jungle_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_main_jungle_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_turret_jungle_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\Scorp_mg_jungle_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\Texture\oryx_decal_ca.paa" };
			};
			class ins
			{
				displayName = "$STR_OPTRE_TEXTURESOURCES_INNIE";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_armor_ins_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_main_ins_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_net_ins_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_net_ins_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_net_ins_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\oryx_turret_ins_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\ins\Scorp_mg_ins_co.paa" };
			};
			class CMA
			{
				displayName = "CMA";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_armor_black_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_main_black_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_turret_black_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\Scorp_mg_black_co.paa" };
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -12;
						maxElev = 45;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = { "288th_M73X_V","Laserdesignator_mounted","SmokeLauncher" };
						magazines[] = { "288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","Laserbatteries","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
						turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
						discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500 };
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerForceOptics = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics : RCWSOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = { "Normal","TI" };
							thermalMode[] = { 0,1 };
							thermalResolution[] = { 4096 };
						};
						startEngine = 0;
						viewGunnerInExternal = 1;
						LODTurnedIn = 1100;
						LODTurnedOut = 1100;
						selectionFireAnim = "zasleh3";
					};
				};
				memoryPointGun = "usti hlavne2";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				weapons[] = { "288th_M318_20mm_Autocannon","288th_M73X_V","288th_M41_V","SmokeLauncher" };
				magazines[] = { "288th_350Rnd_20mm_HE","288th_350Rnd_20mm_HE","288th_350Rnd_20mm_HE","288th_350Rnd_20mm_HE","288th_250Rnd_20mm_AP","288th_250Rnd_20mm_AP","288th_250Rnd_20mm_AP","288th_250Rnd_20mm_AP","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_M41_Twin_HEAT_Thermal","288th_M41_Twin_HEAT_Thermal","288th_M41_Twin_HEAT_Thermal","288th_M41_Twin_HEAT_SACLOS","288th_M41_Twin_HEAT_SACLOS","288th_M41_Twin_HEAT_SACLOS","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
				minElev = -12;
				maxElev = 35;
				initElev = 0;
				soundServo[] = { "A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50 };
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				selectionFireAnim = "zasleh2";
				gun = "maingun";
				body = "mainturret";
				gunAxis = "Osa Hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				LODTurnedIn = 1100;
				turretAxis = "OsaVeze";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400 };
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide : ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0 };
						thermalResolution[] = { 4096 };
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium : Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow : Wide
					{
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerForceOptics = 0;
				usePip = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2.5;
				material = -1;
				name = "telo";
				visual = "hull";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitERA_Front
			{
				simulation = "Armor_ERA_Light";
				armorComponent = "ERA_F";
				name = "ERA_F_point";
				armor = -100;
				minimalHit = 1;
				radius = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_F_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				name = "ERA_L_1_point";
				armorComponent = "ERA_L_1a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_1_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				name = "ERA_L_2_point";
				armorComponent = "ERA_L_1b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_2_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_3: HitERA_Front
			{
				name = "ERA_L_3_point";
				armorComponent = "ERA_L_2a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_3_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_4: HitERA_Front
			{
				name = "ERA_L_4_point";
				armorComponent = "ERA_L_2b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_5: HitERA_Front
			{
				name = "ERA_L_5_point";
				armorComponent = "ERA_L_3a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				name = "ERA_R_1_point";
				armorComponent = "ERA_R_1a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_1_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				name = "ERA_R_2_point";
				armorComponent = "ERA_R_1b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_2_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_3: HitERA_Front
			{
				name = "ERA_R_3_point";
				armorComponent = "ERA_R_2a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_3_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_4: HitERA_Front
			{
				name = "ERA_R_4_point";
				armorComponent = "ERA_R_2b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_5: HitERA_Front
			{
				name = "ERA_R_5_point";
				armorComponent = "ERA_R_3a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_5_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor = 2.0;
				material = -1;
				name = "pasL";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.75;
			};
			class HitRTrack: HitRTrack
			{
				armor = 2.0;
				material = -1;
				name = "pasP";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.75;
			};
			class HitEngine: HitEngine
			{
				armor = 2;
				material = -1;
				name = "engine";
				visual = "-";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
	};
	class 288th_Oryx_APC: 288th_Oryx{
		editorSubcategory = "288th_Eden_APC";
		author = "Soda / Misriah 288";
		displayName = "M493 Oryx APC (288th)";
		model = "\OPTRE_Vehicles_Tracked\Oryx\apc_oryx_aie.p3d";
		class AnimationSources
		{
			class Hide_Shield
			{
				displayName = "Hide shield";
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Hide_Rail
			{
				displayName = "Hide rail";
				useSource = 1;
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class muzzle_source
			{
				source = "reload";
				weapon = "OPTRE_AIE_486H_Minigun";
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = "OPTRE_AIE_486H_Minigun";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "OPTRE_AIE_486H_Minigun";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "OPTRE_AIE_486H_Minigun";
			};
			class minigun
			{
				source = "revolving";
				weapon = "OPTRE_AIE_486H_Minigun";
			};
			class CargoDoorAnim
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class HitERA_Front_src
			{
				source = "Hit";
				hitpoint = "HitERA_Front";
				raw = 1;
			};
			class HitERA_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_1";
				raw = 1;
			};
			class HitERA_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_1";
				raw = 1;
			};
			class HitERA_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_2";
				raw = 1;
			};
			class HitERA_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_2";
				raw = 1;
			};
			class HitERA_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_3";
				raw = 1;
			};
			class HitERA_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_3";
				raw = 1;
			};
			class HitERA_Left_4_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_4";
				raw = 1;
			};
			class HitERA_Right_4_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_4";
				raw = 1;
			};
			class HitERA_Left_5_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_5";
				raw = 1;
			};
			class HitERA_Right_5_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_5";
				raw = 1;
			};
			class showera
			{
				displayName = "Attach Explosive Reactive Armor";
				author = "Misriah 288 DJP";
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
				mass = 600;
			};
		};
		class RenderTargets{};
		class Turrets: Turrets
		{
			class AIE_Turret: MainTurret
			{
				class Turrets{};
				gunnerName = "AIE Gunner";
				canHideGunner = -1;
				castGunnerShadow = 1;
				forceHideGunner = 0;
				memoryPointGun = "usti hlavne";
				gunnerCompartments = "Compartment1";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				inGunnerMayFire = 1;
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				weapons[] = {"OPTRE_AIE_486H_Minigun","Laserdesignator_mounted","SmokeLauncher"};
				magazines[] = {"OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","OPTRE_1000Rnd_762x51_Belt_Tracer_Red","Laserbatteries","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				selectionFireAnim = "zasleh";
				gun = "maingun";
				body = "mainturret";
				gunAxis = "AIE_maingun_axis";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerAction = "OPTRE_Gunner_AIE_486H_Sitting";
				gunnerInAction = "OPTRE_Gunner_AIE_486H_Sitting";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerLeftHandAnimName = "maingun";
				gunnerRightHandAnimName = "maingun";
				lodTurnedIn = -1;
				lodTurnedOut = -1;
				lodOpticsOut = 1000;
				optics = 0;
				turretAxis = "AIE_rotation_ring";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				maxElev = 25;
				minElev = -12;
				minTurn = -135;
				maxTurn = 135;
				class HitPoints
				{
					class HitGun
					{
						simulation = "Default";
						armorComponent = "hit_maingun";
						name = "hit_maingun_point";
						armor = 3;
						minimalHit = 0;
						radius = 0.097248;
						passThrough = 1;
						visual = "maingun";
						explosionShielding = 0.4;
					};
					class HitTurret: HitGun{};
					class HitShield
					{
						simulation = "Default";
						armorComponent = "hit_shield";
						name = "hit_shield_point";
						armor = -100;
						minimalHit = 1;
						radius = 0.097248;
						passThrough = 0;
						visual = "-";
						explosionShielding = 0.0;
					};
				};
				class TurnIn
				{
					turnOffset = 0;
				};
				class OpticsIn{};
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = "2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = "0.33 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					maxMoveX = 0;
					maxMoveY = 0;
					maxMoveZ = 0;
					minAngleX = -30;
					minAngleY = -100;
					minFov = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					minMoveX = 0;
					minMoveY = 0;
					minMoveZ = 0;
					speedZoomMaxFOV = 0;
					speedZoomMaxSpeed = 1e+10;
				};
				usePip = 0;
			};
		};
		class Damage
		{
			mat[] = {"OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Body.rvmat","OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Body_Damage.rvmat","OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Wreck.rvmat","OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Turret.rvmat","OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Turret_Damage.rvmat","OPTRE_Vehicles_Tracked\Oryx\data\Texture\Oryx_Wreck.rvmat","optre_weapons_turrets\aie_486h\data\aie.rvmat","A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat","A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"};
			tex[] = {};
		};
	};
	class 288th_Oryx_APC_RCWS: 288th_Oryx_APC{
		editorSubcategory = "288th_Eden_APC";
		author = "Soda / Misriah 288";
		displayName = "M493 Oryx APC RCWS (288th)";
		model = "\OPTRE_Vehicles_Tracked\Oryx\apc_oryx_aie_rcws.p3d";
		class AnimationSources: AnimationSources
		{
			delete ReloadAnim;
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "gunnerview";
					pointDirection = "pip_gunner_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
		};
		class Turrets: Turrets
		{
			class AIE_Turret: AIE_Turret
			{
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				usePip = 1;
				gunnerAction = "Gunner_APC_tracked_03_cannon_F_out";
				gunnerInAction = "Gunner_APC_tracked_03_cannon_F_in";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				turretInfoType = "RscOptics_UGV_gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class OpticsIn: Optics_Gunner_MBT_02{};
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = "0.33 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					maxMoveX = 0;
					maxMoveY = 0;
					maxMoveZ = 0;
					minAngleX = -30;
					minAngleY = -100;
					minFov = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					minMoveX = 0;
					minMoveY = 0;
					minMoveZ = 0;
					speedZoomMaxFOV = 0;
					speedZoomMaxSpeed = 1e+10;
				};
			};
		};
	};
	class 288th_IFV_76 : B_APC_Wheeled_01_cannon_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "IFV-76 Honeybadger (288th)";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_IFV";
		forceInGarage = 1;
		faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";
		crew = "288th_SW_Crewman";
		side = 1;
		setMass = 100;
		armor = 925;
		armorStructural = 5.2;
		explosionShielding = 0.5;
		engineMOI = 6;
		enginePower = 650;
		peakTorque = 9000;
		maxSpeed = 100;
		fuelCapacity = 2000;
		enableRadio = 1;
		enableGPS = 1;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 70;
		idleRpm = 700;
		redRpm = 4000;
		precision = 15;
		brakeDistance = 1.0;
		acceleration = 17;
		canFloat = 1;
		waterAngularDampingCoef = 0;
		waterDamageEngine = 0.1;
		waterLeakiness = 10;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterPPInVehicle = 1;
		waterResistance = 3;
		waterResistanceCoef = 0.5;
		waterspeedcoef = 0.5;
		maxFordingDepth = -2;
		rudderForceCoef = 0.75;
		rudderForceCoefAtMaxSpeed = 0.025;
		typicalCargo[] = {};
		class AnimationSources : AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source = "revolving";
				weapon = "autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HitEngine_src
			{
				source = "Hit";
				hitpoint = "HitEngine";
				raw = 1;
			};
			class HitFuel_src
			{
				source = "Hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class HitHull_src
			{
				source = "Hit";
				hitpoint = "HitHull";
				raw = 1;
			};
			class HitMainGun_src
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
			class HitTurret_src
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class HitSLAT_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_1";
				raw = 1;
			};
			class HitSLAT_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_2";
				raw = 1;
			};
			class HitSLAT_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_3";
				raw = 1;
			};
			class HitSLAT_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_1";
				raw = 1;
			};
			class HitSLAT_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_2";
				raw = 1;
			};
			class HitSLAT_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_3";
				raw = 1;
			};
			class HitSLAT_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_back";
				raw = 1;
			};
			class HitSLAT_front_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front";
				raw = 1;
			};
			class HitSLAT_top_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_back";
				raw = 1;
			};
			class HitSLAT_top_right_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_right";
				raw = 1;
			};
			class HitSLAT_top_left_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_left";
				raw = 1;
			};
			class showBags
			{
				displayName = "$STR_A3_animationsources_showbagsturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showCamonetHull
			{
				displayName = "$STR_A3_animationsources_showcamonethull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showCamonetCannon
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class showCamonetTurret
			{
				displayName = "$STR_A3_animationsources_showcamonetturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				forceAnimatePhase = 1;
				forceAnimate[] = { "showCamonetCannon",1 };
				forceAnimate2[] = { "showCamonetCannon",0 };
				mass = -50;
			};
			class showSLATHull
			{
				displayName = "$STR_A3_animationsources_showslathull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showSLATTurret
			{
				displayName = "$STR_A3_animationsources_showslatturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
		};
		animationList[] = { "showBags",1,"showCamonetHull",0,"showCamonetCannon",0,"showCamonetTurret",0,"showSLATHull",0,"showSLATTurret",0 };
		class textureSources
		{
			class ves_desert
			{
				author = "Vespade";
				displayName = "Desert";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DES_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DES_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DES_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DES_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DES_C_CO.paa" };
			};
			class ves_woodland
			{
				author = "Vespade";
				displayName = "Woodland";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_WDL_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_WDL_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_WDL_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_WDL_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_WDL_C_CO.paa" };
			};
			class ves_jungle
			{
				author = "Vespade";
				displayName = "Jungle";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_JNG_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_JNG_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_JNG_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_JUN_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_JUN_C_CO.paa" };
			};
			class ves_urban
			{
				author = "Vespade";
				displayName = "Urban";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa" };
			};
			class ves_black
			{
				author = "Vespade";
				displayName = "Black";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_BLK_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_BLK_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_BLK_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_BLK_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_BLK_C_CO.paa" };
			};
			class ves_frost
			{
				author = "Vespade";
				displayName = "Frost";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_FRS_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_FRS_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_FRS_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_FRO_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_FRO_C_CO.paa" };
			};
			class ves_tundra
			{
				author = "Vespade";
				displayName = "Tundra";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_TND_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_TND_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_TND_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_TUN_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_TUN_C_CO.paa" };
			};
			class ves_dunes
			{
				author = "Vespade";
				displayName = "Dunes";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DUN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DUN_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DUN_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DUN_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_DUN_C_CO.paa" };
			};
			class ves_classic
			{
				author = "Vespade";
				displayName = "Classic";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_CLS_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_CLS_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_CLS_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_CLS_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_CLS_C_CO.paa" };
			};
			class ves_olive
			{
				author = "Vespade";
				displayName = "Olive";
				textures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa" };
			};
		};
		class TransportItems{};
		hiddenSelectionsTextures[] = { "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa","V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa" };
		textureList[] = { "ves_desert",1,"ves_woodland",1,"ves_jungle",1,"ves_urban",1,"ves_black",1,"ves_frost",1,"ves_tundra",1,"ves_dunes",1,"ves_classic",1,"ves_olive",1 };
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				weapons[] = { "TCF_MG460_APC","288th_M50_V","SmokeLauncher" };
				magazines[] = { "288th_75Rnd_15x50_Box","288th_75Rnd_15x50_Box","288th_75Rnd_15x50_Box","288th_75Rnd_15x50_Box","TCF_40Rnd_HEDP_Belt","TCF_40Rnd_HEDP_Belt","TCF_40Rnd_HEDP_Belt","TCF_40Rnd_HEDP_Belt","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
			};
		};
	};
	class 288th_APC_76 : 288th_IFV_76{
		editorSubcategory = "288th_Eden_APC";
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "APC-76 Honeybadger (288th)";
		class Turrets {};
		class AnimationSources : AnimationSources
		{
			class HideTurret
			{
				animPeriod = 0.001;
				initPhase = "true";
				source = "user";
			};
		};
	};
	class 288th_Pander_III : I_APC_Wheeled_03_cannon_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pander III IFV (288th)";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_IFV";
		forceInGarage = 1;
		faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";
		crew = "288th_SW_Crewman";
		side = 1;
		setMass = 100;
		armor = 600;
		armorStructural = 5;
		explosionShielding = 0.5;
		engineMOI = 6;
		enginePower = 750;
		peakTorque = 9000;
		maxSpeed = 150;
		fuelCapacity = 3000;
		enableRadio = 1;
		enableGPS = 1;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 70;
		typicalCargo[] = {};
		animationList = ["showCamonetHull",0,"showBags",1,"showBags2",1,"showTools",1,"showSLATHull",0];
		textureList[] = {"Blu_Woodland",1,"Blu_Desert",0,"Blu_Arid",0};
		hiddenSelectionsTextures[] = { "\288th_Vehicles\Pander_III\pandur_01_ext_wd.paa","\288th_Vehicles\Pander_III\pandur_02_ext_wd.paa","\288th_Vehicles\Pander_III\pandur_Turret_wd.paa","\288th_Vehicles\Pander_III\pandur_03_ext_wd.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa" };
		class TextureSources
		{
			class Blu_Arid
			{
				displayName = "Arid";
				author = "Misriah 288 DJP";
				textures[] = {"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Blu_Woodland
			{
				displayName = "Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"\288th_Vehicles\Pander_III\pandur_01_ext_wd.paa","\288th_Vehicles\Pander_III\pandur_02_ext_wd.paa","\288th_Vehicles\Pander_III\pandur_Turret_wd.paa","\288th_Vehicles\Pander_III\pandur_03_ext_wd.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Blu_Desert
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = {"\288th_Vehicles\Pander_III\pandur_01_ext_d.paa","\288th_Vehicles\Pander_III\pandur_02_ext_d.paa","\288th_Vehicles\Pander_III\pandur_Turret_d.paa","\288th_Vehicles\Pander_III\pandur_03_ext_d.paa","\288th_Vehicles\Pander_III\camonet_desert_CO.paa","\288th_Vehicles\Pander_III\cage_desert_CO.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		class TransportItems{};
	};

	//Planes
	class 288th_VAF19 : B_Plane_Fighter_01_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "VAF-19 Falchion (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Plane";
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		cost = 10000;
		availableForSupportTypes[] = {"CAS_Bombing"};
		class textureSources
		{
			class Black
			{
				author = "Misriah 288 DJP";
				displayName = "Black";
				factions[] = { "288th_UNSC" };
				textures[] =
				{
					"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_CO",
					"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_A_CO",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co"
				};
			};
			class Raptor
			{
				author = "Misriah 288 DJP";
				displayName = "Raptor";
				factions[] = { "288th_UNSC" };
				textures[] = 
				{
					"\288th_Vehicles\VAF19\raptor.paa",
					"\288th_Vehicles\VAF19\raptorWing.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
			};
			class RaptorNoEagle
			{
				author = "Misriah 288 DJP";
				displayName = "Raptor (No Eagle)";
				factions[] = { "288th_UNSC" };
				textures[] = 
				{
					"\288th_Vehicles\VAF19\raptorNoEagle.paa",
					"\288th_Vehicles\VAF19\raptorNoEagleWing.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
			};
			class Weasel
			{
				author = "Misriah 288 DJP";
				displayName = "Wild Weasel";
				factions[] = { "288th_UNSC" };
				textures[] = 
				{
					"\288th_Vehicles\VAF19\weasel.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
			};
			class Stealth
			{
				author = "Misriah 288 DJP";
				displayName = "Stealth";
				factions[] = { "288th_UNSC" };
				textures[] = 
				{
					"\288th_Vehicles\VAF19\Bayonet_01_fuselage_01_co.paa",
					"\288th_Vehicles\VAF19\Bayonet_01_fuselage_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
			};
			class Maxim
			{
				displayName = "Maxim";
				author = "Misriah 288 DJP";
				textures[] = 
				{
					"\288th_Vehicles\VAF19\Fighter_01_fuselage_01_co.paa",
					"\288th_Vehicles\VAF19\Fighter_01_fuselage_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"\288th_Vehicles\VAF19\Fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
					};
				factions[] = { "288th_UNSC" };
			};
		};
		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 8;
				explosionShielding = 5;
				name = "HitHull";
				passThrough = 1;
				visual = "Hit_Hull";
				radius = 0.45;
				minimalHit = 0.05;
				depends = "0";
				material = -1;
			};
			class HitEngine : HitHull
			{
				armor = 3;
				explosionShielding = 4.5;
				name = "HitEngine";
				passThrough = 0.8;
				visual = "Hit_Engine";
				radius = 0.6;
				minimalHit = 0.05;
			};
			class HitEngine2 : HitEngine
			{
				armor = 3;
				explosionShielding = 4.5;
				name = "HitEngine2";
				passThrough = 0.8;
				visual = "Hit_Engine2";
				radius = 0.6;
				minimalHit = 0.05;
			};
			class HitAvionics : HitHull
			{
				armor = 2.5;
				explosionShielding = 4;
				name = "HitAvionics";
				passThrough = 0.4;
				visual = "";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitFuel : HitHull
			{
				armor = 4;
				explosionShielding = 5;
				name = "HitFuel";
				passThrough = 0.6;
				visual = "Hit_Fuel";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitFuel2 : HitFuel
			{
				armor = 4;
				explosionShielding = 5;
				name = "HitFuel2";
				passThrough = 0.6;
				visual = "Hit_Fuel2";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitGlass1 : HitHull
			{
				armor = 15;
				explosionShielding = 8;
				name = "HitGlass1";
				passThrough = 0;
				visual = "Hit_Glass1";
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitLAileron : HitHull
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitLAileron";
				passThrough = 0.3;
				visual = "Hit_AileronL";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRAileron : HitLAileron
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitRAileron";
				passThrough = 0.3;
				visual = "Hit_AileronR";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitLCRudder : HitHull
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitLCRudder";
				passThrough = 0.3;
				visual = "Hit_RudderL";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRRudder : HitLCRudder
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitRRudder";
				passThrough = 0.3;
				visual = "Hit_RudderR";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitLCElevator : HitHull
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitLCElevator";
				passThrough = 0.3;
				visual = "Hit_ElevatorL";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRElevator : HitLCElevator
			{
				armor = 2.5;
				explosionShielding = 3.5;
				name = "HitRElevator";
				passThrough = 0.3;
				visual = "Hit_ElevatorR";
				radius = 0.35;
				minimalHit = 0.05;
			};
		};
		textureList[] = { "Black",1,"Raptor",1,"RaptorNoEagle",1,"Weasel",1,"Stealth",1,"Maxim",1 };
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_CO",
			"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_A_CO",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co"
		};
		armor = 400;
		crewCrashProtection = 0.005;
		crewExplosionProtection = 0.005;
		maxSpeed = 1200;
		maxOmega = 32000;
		stallSpeed = 100;
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
		visualTarget = .5;
		waterLeakiness = 0.5;
		airBrakeFrictionCoef = 5;
		radarTargetSize = 0.4;
		visualTargetSize = 0.5;
		irTargetSize = 0.1;
		geardowntime = 2;
		gearuptime = 3;
		envelope[] = { 0,0.1,0.8,3,4,4.4,4.5,4.5,4.4,4.1,3.5,2.5,2 };
		/*thrustCoef[] = { 1.5,1.5,1.4,1.4,1.4,1.3,1.3,1.2,1.2,1,1,0.7,0.5 };*/
		fuelCapacity = 2000;
		weapons[] = { "OPTRE_GUA23A","CMFlareLauncher","288th_Class_Guided","OPAEX_W_GBU1105","Laserdesignator_pilotCamera" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","288th_Class_4_Guided","OPAEX_M_GBU1105_1Rnd","Laserbatteries" };
	};
	class 288th_YSS_1000_A: OPTRE_YSS_1000_A{
		displayName = "YSS-1000-A (288th)";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Plane";
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		vehicleClass = "OPTRE_UNSC_Air_class";
		gunnerAction = "Heli_Attack_01_Gunner";
		gunnerInAction = "Heli_Attack_01_Gunner";
		availableForSupportTypes[] = {"CAS_Bombing"};
		cost = 30000;
		crewCrashProtection = 0.005;
		crewExplosionProtection = 0.005;
		fuelCapacity = 2500;
		armor = 475;
		damageResistance = 0.02;
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
		visualTarget = .5;
		waterLeakiness = 0.5;
		radarTargetSize = 0.4;
		visualTargetSize = 0.5;
		irTargetSize = 0.1;
		weapons[] = {"Laserdesignator_pilotCamera","CMFlareLauncher","OPTRE_M6_Laser_Sabre","288th_Class_Guided","OPAEX_W_GBU1105"};
		magazines[] = {"Laserbatteries","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","288th_Class_4_Guided","288th_Class_4_Guided","OPAEX_M_GBU1105_1Rnd","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery"};
		class TextureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
			class urban
			{
				displayName = "Urban";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\urban\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\urban\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\urban\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
			class desert
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\desert\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\desert\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\desert\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
			class woodland
			{
				displayName = "Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\woodland\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\woodland\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\woodland\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
			class arctic
			{
				displayName = "Arctic";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\arctic\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\arctic\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\arctic\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
			class naval
			{
				displayName = "Naval";
				author = "Misriah 288 DJP";
				textures[] = {"OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat3_co.paa"};
				factions[] = {"288th_UNSC"};
			};
		};
		textureList[] = {"standard",1,"urban",1,"desert",1,"woodland",1,"arctic",1,"naval",1};
	};
	class 288th_YSS_1000_A_VTOL: 288th_YSS_1000_A{
		VTOL = 1;
		VTOLYawInfluence = 1.0;
		VTOLPitchInfluence = 1.0;
		VTOLRollInfluence = 1.0;
		displayName = "YSS-1000-A (VTOL) (288th)";
		defaultUserMFDvalues[] = {0.15,1,0.15,1};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0375,0.0375,0.1};
				helmetRight[] = {0.075,0,0};
				helmetDown[] = {0,-0.075,0};
				font = "LucidaConsoleB";
				turret[] = {-2};
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0.5,0.5};
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.5,2.5};
						maxPos[] = {0.5,-1.5};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.234,0.23};
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0,-0.5};
						pos10[] = {0.0068,-0.012};
						projection = 0;
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = {0.105,0.38};
						maxPos[] = {0.105,0.54};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = {0,-0.04};
						maxPos[] = {0,"0)"};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = {0,-0.04};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = {0,0};
						maxPos[] = {0,0.04};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = {0,0.04};
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = {0.885,0.2};
						maxPos[] = {0.885,0.375};
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = {0.105,0.7};
						maxPos[] = {0.105,0.86};
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = {0.795,0.6};
						maxPos[] = {0.795,0.84};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ImpactPointRockets
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.565};
						pos10[] = {0.734,0.795};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1;
						minPos[] = {0,-0.075};
						maxPos[] = {0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ThrustVectoringRotation
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.06,0.145};
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = {0,0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0,0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1toview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2toview";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3toview";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4toview";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.5702,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.569};
					};
				};
				class Draw
				{
					alpha = "user3";
					color[] = {"user0","user1","user2"};
					condition = "(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
					class VelocityLine
					{
						type = "line";
						width = 2;
						points[] = {{"HUDCenter",1},{"VelocityVector",1},{},{"VelocityVector",{0,-0.00491453},1},{"VelocityVector",{0.0025,-0.00425598},1},{"VelocityVector",{0.00433,-0.00245726},1},{"VelocityVector",{0.005,0},1},{"VelocityVector",{0.00433,0.00245726},1},{"VelocityVector",{0.0025,0.00425598},1},{"VelocityVector",{0,0.00491453},1},{"VelocityVector",{-0.0025,0.00425598},1},{"VelocityVector",{-0.00433,0.00245726},1},{"VelocityVector",{-0.005,0},1},{"VelocityVector",{-0.00433,-0.00245726},1},{"VelocityVector",{-0.0025,-0.00425598},1},{"VelocityVector",{0,-0.00491453},1},{}};
					};
					class Static
					{
						type = "line";
						width = 3;
						points[] = {{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0,0},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,-0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{},{{0.1,0.3},1},{{0.1,0.62},1},{},{{0.1,0.3},1},{{0.08,0.3},1},{},{{0.1,0.34},1},{{0.08,0.34},1},{},{{0.1,0.38},1},{{0.08,0.38},1},{},{{0.1,0.46},1},{{0.08,0.46},1},{},{{0.1,0.54},1},{{0.08,0.54},1},{},{{0.1,0.58},1},{{0.08,0.58},1},{},{{0.1,0.62},1},{{0.08,0.62},1},{},{"GForceSource",{0.015,0.01},1},{"GForceSource",{0,0},1},{"GForceSource",{0.015,-0.01},1},{"GForceSource",{0.015,0.01},1},{},{{0.1,0.688},1},{{0.1,0.82},1},{},{{0.1,0.7},1},{{0.08,0.7},1},{},{{0.1,0.74},1},{{0.08,0.74},1},{},{{0.1,0.78},1},{{0.08,0.78},1},{},{{0.1,0.82},1},{{0.08,0.82},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.892},1},{{0.408,0.892},1},{},{{0.6,0.892},1},{{0.592,0.892},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.46,0.07},1},{{0.54,0.07},1},{{0.54,0.035},1},{{0.46,0.035},1},{{0.46,0.07},1},{},{{0.15,0.115},1},{{0.85,0.115},1},{},{{0,0.96},1},{{1.1,0.96},1},{},{{0.48,0.5},1},{{0.49,0.5},1},{},{{0.51,0.5},1},{{0.52,0.5},1},{},{{0.5,0.49},1},{{0.5,0.48},1},{},{{0.5,0.51},1},{{0.5,0.52},1},{},{"WeaponAim",1,{-0.02,0},1},{"WeaponAim",1,{-0.01,0},1},{},{"WeaponAim",1,{0.01,0},1},{"WeaponAim",1,{0.02,0},1},{},{"WeaponAim",1,{0,-0.01},1},{"WeaponAim",1,{0,-0.02},1},{},{"WeaponAim",1,{0,0.01},1},{"WeaponAim",1,{0,0.02},1},{},{"HUDCenter",{-0.165,7.08909e-09},1},{"HUDCenter",{-0.22,9.45212e-09},1},{},{"HUDCenter",{0.165,-1.93397e-09},1},{"HUDCenter",{0.22,-2.57863e-09},1},{},{"HUDCenter",{-0.0825,0.140452},1},{"HUDCenter",{-0.09625,0.16386},1},{},{"HUDCenter",{0.0825,0.140452},1},{"HUDCenter",{0.09625,0.16386},1},{},{"HUDCenter",{-0.142894,0.0810897},1},{"HUDCenter",{-0.16671,0.0946047},1},{},{"HUDCenter",{0.142894,0.0810897},1},{"HUDCenter",{0.16671,0.0946047},1},{},{"HUDCenter",{-0.116673,0.114678},1},{"HUDCenter",{-0.155564,0.152904},1},{},{"HUDCenter",{0.116673,0.114678},1},{"HUDCenter",{0.155563,0.152904},1},{},{{0.0333333,0.148667},1},{{0.054,0.162},1},{{0.135,0.162},1},{{0.135,0.148667},1},{{0.126333,0.139667},1},{{0.118,0.139667},1},{{0.0933333,0.129333},1},{{0.0333333,0.129333},1},{{0.0156667,0.111},1},{{0.00866667,0.115333},1},{{0.0116667,0.136},1},{}};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.29578;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.00-0.011"},1};
						right[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.12,"0.00-0.011"},1};
						down[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.03-0.011"},1};
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.82+0.07",0.728},1};
							right[] = {{"0.86+0.07",0.728},1};
							down[] = {{"0.82+0.07",0.763},1};
						};
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.849,0.76},1},{{0.929,0.76},1},{{0.929,0.725},1},{{0.849,0.725},1},{{0.849,0.76},1},{}};
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869,0.715},1},{{0.909,0.715},1},{{0.889,0.695},1},{{0.869,0.715},1},{}};
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869,0.77},1},{{0.909,0.77},1},{{0.889,0.79},1},{{0.869,0.77},1},{}};
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{"SliderAltitudeSource",{0.024,0.01},1},{"SliderAltitudeSource",{0.009,0},1},{"SliderAltitudeSource",{0.024,-0.01},1},{"SliderAltitudeSource",{0.024,0.01},1},{},{"SliderAltitudeSource",{0.035,0.015},1},{"SliderAltitudeSource",{0.093,0.015},1},{"SliderAltitudeSource",{0.093,-0.015},1},{"SliderAltitudeSource",{0.035,-0.015},1},{"SliderAltitudeSource",{0.035,0.015},1},{},{{0.889,0.2},1},{{0.889,0.375},1},{},{{0.879,0.2},1},{{0.899,0.2},1},{},{{0.879,0.375},1},{{0.899,0.375},1},{}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = {"SliderAltitudeSource",{0.085,"0.00-0.011"},1};
							right[] = {"SliderAltitudeSource",{0.11,"0.00-0.011"},1};
							down[] = {"SliderAltitudeSource",{0.085,"0.03-0.011"},1};
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.885,0.171},1};
							right[] = {{0.925,0.171},1};
							down[] = {{0.885,0.201},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = {{0.13,0.22},1};
						down[] = {{0.13,0.26},1};
						right[] = {{0.2,0.22},1};
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.285},1};
						right[] = {{0.11,0.285},1};
						down[] = {{0.07,0.315},1};
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.325},1};
						right[] = {{0.11,0.325},1};
						down[] = {{0.07,0.355},1};
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.365},1};
						right[] = {{0.11,0.365},1};
						down[] = {{0.07,0.395},1};
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.445},1};
						right[] = {{0.11,0.445},1};
						down[] = {{0.07,0.475},1};
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.525},1};
						right[] = {{0.11,0.525},1};
						down[] = {{0.07,0.555},1};
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.565},1};
						right[] = {{0.11,0.565},1};
						down[] = {{0.07,0.595},1};
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.605},1};
						right[] = {{0.11,0.605},1};
						down[] = {{0.07,0.635},1};
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.683},1};
						right[] = {{0.11,0.683},1};
						down[] = {{0.07,0.713},1};
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.723},1};
						right[] = {{0.11,0.723},1};
						down[] = {{0.07,0.753},1};
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.763},1};
						right[] = {{0.11,0.763},1};
						down[] = {{0.07,0.793},1};
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.803},1};
						right[] = {{0.11,0.803},1};
						down[] = {{0.07,0.833},1};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.889,0.46},1};
						right[] = {{0.939,0.46},1};
						down[] = {{0.889,0.495},1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.899,0.46},1};
						right[] = {{0.949,0.46},1};
						down[] = {{0.899,0.495},1};
					};
					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = {{0.102,0.14},1};
							right[] = {{0.127,0.14},1};
							down[] = {{0.102,0.155},1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 3;
							points[] = {{"ThrustVectoringRotation",{-0.034,-0.006},1},{"ThrustVectoringRotation",{-0.044,0},1},{"ThrustVectoringRotation",{-0.034,0.006},1},{"ThrustVectoringRotation",{-0.034,-0.006},1},{},{"ThrustVectoringRotation",{-0.044,0},1},{"ThrustVectoringRotation",{-0.004,0},1},{}};
						};
					};
					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							pos[] = {{0.103,0.14},1};
							right[] = {{0.123,0.14},1};
							down[] = {{0.103,0.155},1};
						};
					};
					class EngineRPM
					{
						type = "line";
						width = 3;
						points[] = {{{0.89,0.5},1},{{0.89,0.66},1},{},{{0.92,0.5},1},{{0.86,0.5},1},{},{{0.92,0.66},1},{{0.86,0.66},1},{},{{0.91,0.54},1},{{0.87,0.54},1},{},{{0.91,0.58},1},{{0.87,0.58},1},{},{{0.91,0.62},1},{{0.87,0.62},1},{}};
					};
					class EngineRPMLines
					{
						type = "line";
						width = 5;
						points[] = {{{"0.90+0.01",0.66},1},{"rtdrpm1",{"0.90+0.01",0.66},1},{},{{"0.86+0.01",0.66},1},{"rtdrpm2",{"0.86+0.01",0.66},1},{},{}};
					};
					class RPM60Text
					{
						type = "text";
						source = "static";
						text = "60";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.645},1};
						right[] = {{0.955,0.645},1};
						down[] = {{0.925,0.67},1};
					};
					class RPM80Text
					{
						type = "text";
						source = "static";
						text = "80";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.605},1};
						right[] = {{0.955,0.605},1};
						down[] = {{0.925,0.63},1};
					};
					class RPM100Text
					{
						type = "text";
						source = "static";
						text = "100";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.565},1};
						right[] = {{0.955,0.565},1};
						down[] = {{0.925,0.59},1};
					};
					class RPM120Text
					{
						type = "text";
						source = "static";
						text = "120";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.525},1};
						right[] = {{0.955,0.525},1};
						down[] = {{0.925,0.55},1};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302","0.082-0.043"},1};
						right[] = {{"0.84-0.302","0.082-0.043"},1};
						down[] = {{"0.80-0.302","0.117-0.043"},1};
					};
					class HeadingRotationArrow
					{
						condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.52,0.08},1},{{0.5,0.11},1},{{0.48,0.08},1},{{0.52,0.08},1},{}};
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302","0.082+0.001"},1};
							right[] = {{"0.83-0.302","0.082+0.001"},1};
							down[] = {{"0.80-0.302","0.113+0.001"},1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.478,0.075},1},{{0.522,0.075},1},{{0.552,0.095},1},{{0.522,0.115},1},{{0.478,0.115},1},{{0.448,0.095},1},{{0.478,0.075},1},{}};
						};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = {0.15,0.13};
						right[] = {0.21,0.13};
						down[] = {0.15,0.17};
					};
					class HorizonBanking
					{
						type = "line";
						width = 3;
						clipTL[] = {0,0.1};
						clipBR[] = {1,0.9};
						points[] = {{"HorizonBankSource",{0.16,0},1},{"HorizonBankSource",{0.1,0},1},{"HorizonBankSource",{0.085,-0.015},1},{"HorizonBankSource",{0.07,0},1},{"HorizonBankSource",{0.05,0},1},{},{"HorizonBankSource",{-0.16,0},1},{"HorizonBankSource",{-0.1,0},1},{"HorizonBankSource",{-0.085,-0.015},1},{"HorizonBankSource",{-0.07,0},1},{"HorizonBankSource",{-0.05,0},1},{}};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = {{0.809,0.961},1};
						right[] = {{0.859,0.961},1};
						down[] = {{0.809,0.996},1};
					};
					class CoordYNumber: CoordXNumber
					{
						source = "coordinateY";
						pos[] = {{0.899,0.961},1};
						right[] = {{0.949,0.961},1};
						down[] = {{0.899,0.996},1};
					};
					class Time: CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = {{0.605,0.961},1};
						right[] = {{0.655,0.961},1};
						down[] = {{0.605,0.996},1};
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979,0.889},1};
						right[] = {{1.029,0.889},1};
						down[] = {{0.979,0.924},1};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = {{0.979,0.921},1};
						right[] = {{1.029,0.921},1};
						down[] = {{0.979,0.956},1};
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.655,0.961},1};
						right[] = {{0.705,0.961},1};
						down[] = {{0.655,0.996},1};
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.875,0.961},1};
						right[] = {{0.925,0.961},1};
						down[] = {{0.875,0.996},1};
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = {{0.149,0.961},1};
							right[] = {{0.199,0.961},1};
							down[] = {{0.149,0.996},1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.309,0.961},1};
							right[] = {{0.359,0.961},1};
							down[] = {{0.309,0.996},1};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir",{-0.00707107,0.00695019},1},{"TargetingPodDir",{-0.0212132,0.0208506},1},{},{"TargetingPodDir",{0.00707107,0.00695019},1},{"TargetingPodDir",{0.0212132,0.0208506},1},{},{"TargetingPodDir",{0.00707107,-0.00695019},1},{"TargetingPodDir",{0.0212132,-0.0208506},1},{},{"TargetingPodDir",{-0.00707107,-0.00695019},1},{"TargetingPodDir",{-0.0212132,-0.0208506},1},{}};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,-0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,-0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,-0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,-0.0208506},1},{}};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = {{0.215,0.879701},1};
							right[] = {{0.275,0.879701},1};
							down[] = {{0.215,0.928846},1};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.195,0.859},1};
							right[] = {{0.235,0.859},1};
							down[] = {{0.195,0.89},1};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.127+0.13",0.889},1};
							right[] = {{0.302,0.889},1};
							down[] = {{"0.127+0.13",0.924},1};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.125+0.13",0.921},1};
							right[] = {{0.3,0.921},1};
							down[] = {{"0.125+0.13",0.956},1};
						};
						class TOF_source: CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = {{0.269,0.889},1};
							right[] = {{0.319,0.889},1};
							down[] = {{0.269,0.924},1};
						};
						class TargetDistance: CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = {{0.269,0.921},1};
							right[] = {{0.319,0.921},1};
							down[] = {{0.269,0.956},1};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485,0.216239},1};
							right[] = {{0.545,0.216239},1};
							down[] = {{0.485,0.265385},1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "center";
							scale = 1;
							pos[] = {{0.5,0.825641},1};
							right[] = {{0.54,0.825641},1};
							down[] = {{0.5,0.855128},1};
						};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class ILS
							{
								type = "line";
								points[] = {{"ILS_W",{-0.24,0},1},{"ILS_W",{0.24,0},1},{},{"ILS_W",{-0.24,-0.0235897},1},{"ILS_W",{-0.24,0.0235897},1},{},{"ILS_W",{-0.12,-0.0176923},1},{"ILS_W",{-0.12,0.0176923},1},{},{"ILS_W",{0,-0.0235897},1},{"ILS_W",{0,0.0235897},1},{},{"ILS_W",{0.12,-0.0176923},1},{"ILS_W",{0.12,0.0176923},1},{},{"ILS_W",{0.24,-0.0235897},1},{"ILS_W",{0.24,0.0235897},1},{},{"ILS_H",{0,-0.235897},1},{"ILS_H",{0,0.235897},1},{},{"ILS_H",{-0.024,-0.235897},1},{"ILS_H",{0.024,-0.235897},1},{},{"ILS_H",{-0.018,-0.117949},1},{"ILS_H",{0.018,-0.117949},1},{},{"ILS_H",{-0.024,0},1},{"ILS_H",{0.024,0},1},{},{"ILS_H",{-0.018,0.117949},1},{"ILS_H",{0.018,0.117949},1},{},{"ILS_H",{-0.024,0.235897},1},{"ILS_H",{0.024,0.235897},1}};
							};
							class airport
							{
								type = "line";
								points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
							};
						};
					};
					class MGun
					{
						condition = "-2+mgun*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0,-0.002},1},{"ImpactPoint",{0,0.002},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0275214},1},{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class Rockets
					{
						condition = "-2+rocket*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0,-0.002},1},{"ImpactPoint",{0,0.002},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0275214},1},{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 4;
							points[] = {{"ImpactPoint",{0,-0.0982906},1},{"ImpactPoint",{0.01736,-0.0967966},1},{"ImpactPoint",{0.0342,-0.0923637},1},{"ImpactPoint",{0.05,-0.0851197},1},{"ImpactPoint",{0.06428,-0.0752906},1},{"ImpactPoint",{0.0766,-0.0631812},1},{"ImpactPoint",{0.0866,-0.0491453},1},{"ImpactPoint",{0.09397,-0.0336154},1},{"ImpactPoint",{0.09848,-0.0170632},1},{"ImpactPoint",{0.1,0},1},{"ImpactPoint",{0.09848,0.0170632},1},{"ImpactPoint",{0.09397,0.0336154},1},{"ImpactPoint",{0.0866,0.0491453},1},{"ImpactPoint",{0.0766,0.0631812},1},{"ImpactPoint",{0.06428,0.0752906},1},{"ImpactPoint",{0.05,0.0851197},1},{"ImpactPoint",{0.0342,0.0923637},1},{"ImpactPoint",{0.01736,0.0967966},1},{"ImpactPoint",{0,0.0982906},1},{"ImpactPoint",{-0.01736,0.0967966},1},{"ImpactPoint",{-0.0342,0.0923637},1},{"ImpactPoint",{-0.05,0.0851197},1},{"ImpactPoint",{-0.06428,0.0752906},1},{"ImpactPoint",{-0.0766,0.0631812},1},{"ImpactPoint",{-0.0866,0.0491453},1},{"ImpactPoint",{-0.09397,0.0336154},1},{"ImpactPoint",{-0.09848,0.0170632},1},{"ImpactPoint",{-0.1,0},1},{"ImpactPoint",{-0.09848,-0.0170632},1},{"ImpactPoint",{-0.09397,-0.0336154},1},{"ImpactPoint",{-0.0866,-0.0491453},1},{"ImpactPoint",{-0.0766,-0.0631812},1},{"ImpactPoint",{-0.06428,-0.0752906},1},{"ImpactPoint",{-0.05,-0.0851197},1},{"ImpactPoint",{-0.0342,-0.0923637},1},{"ImpactPoint",{-0.01736,-0.0967966},1},{"ImpactPoint",{0,-0.0982906},1},{},{"ImpactPoint",1,"Limit0109",1,{0,-0.0196581},1},{"ImpactPoint",1,"Limit0109",1,{0.014,-0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{"+ 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{0.014,0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{0,0.0196581},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{"- 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,-0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{0,-0.0196581},1},{},{"VelocityVector",0.001,"ImpactPoint",1,"Limit0109",1,{0,0},1},{"VelocityVector",1,"Limit0109",1,{0,0},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.11},1};
							right[] = {"ImpactPoint",{0.045,0.11},1};
							down[] = {"ImpactPoint",{-0.002,0.15},1};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.935,0.797137},1};
							right[] = {{0.975,0.797137},1};
							down[] = {{0.935,0.834487},1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = {{0.95,0.797137},1};
							right[] = {{0.97,0.797137},1};
							down[] = {{0.95,0.834487},1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.96,0.797137},1};
							right[] = {{1,0.797137},1};
							down[] = {{0.96,0.834487},1};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = {{"wppoint",1,{"HorizonBankRotFull",0.015,-0.035},1},{"wppoint",1,{"HorizonBankRotFull",0,0},1},{"wppoint",1,{"HorizonBankRotFull",-0.015,-0.035},1}};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
						width = 2;
						points[] = {{{-0.002,-0.00196581},1},{{0.002,-0.00196581},1},{{0.002,0.00196581},1},{{-0.002,0.00196581},1},{{-0.002,-0.00196581},1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,0.0196581},1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.0294872},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.0294872},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.0294872},1}};
						};
					};
				};
			};
			class HMD_CMPilot: AirplaneHUD
			{
				turret[] = {-1};
				class Draw
				{
					alpha = "user3";
					color[] = {"user0","user1","user2"};
					condition = "on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
					class CMName
					{
						type = "text";
						source = "cmweapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.869,0.849},1};
						right[] = {{0.919,0.849},1};
						down[] = {{0.869,0.884},1};
					};
					class CMCount
					{
						type = "text";
						source = "cmammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979,0.849},1};
						right[] = {{1.029,0.849},1};
						down[] = {{0.979,0.884},1};
					};
				};
			};
			class FA18_MFD_HORIZON
			{
				topLeft = "mfd_center_tl";
				topRight = "mfd_center_tr";
				bottomLeft = "mfd_center_bl";
				borderLeft = 0.1;
				borderRight = 0.1;
				borderTop = 0.1;
				borderBottom = 0.1;
				color[] = {0.082,0.408,0.039,1};
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {1.225,1.1};
				};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5,0.4};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.555};
						pos10[] = {1.5,1.555};
					};
					class Velocity
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.53};
						pos10[] = {1.5,1.53};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.4};
						pos10[] = {0.774,0.67};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
					class LevelM90: Level0
					{
						angle = -90;
					};
				};
				class Draw
				{
					color[] = {0.082,0.408,0.039,1};
					alpha = 1;
					condition = "on";
					enableParallax = 0;
					class Horizont
					{
						clipTL[] = {0.255,0.105};
						clipBR[] = {0.845,0.725};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								width = 3;
								points[] = {{"Level0",{0.75,0},1},{"Level0",{0.1,0},1},{},{"Level0",{-0.1,0},1},{"Level0",{-0.75,0},1}};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{-0.26,-0.032},1};
								right[] = {"LevelM5",{-0.2,-0.032},1};
								down[] = {"LevelM5",{-0.26,0.018},1};
							};
							class VALM_1_5_R
							{
								type = "text";
								source = "static";
								text = -5;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{0.26,-0.032},1};
								right[] = {"LevelM5",{0.32,-0.032},1};
								down[] = {"LevelM5",{0.26,0.018},1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{-0.26,-0.017},1};
								right[] = {"LevelP5",{-0.2,-0.017},1};
								down[] = {"LevelP5",{-0.26,0.033},1};
							};
							class VALP_1_5_R
							{
								type = "text";
								source = "static";
								text = "5";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{0.26,-0.017},1};
								right[] = {"LevelP5",{0.32,-0.017},1};
								down[] = {"LevelP5",{0.26,0.033},1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{-0.26,-0.032},1};
								right[] = {"LevelM10",{-0.2,-0.032},1};
								down[] = {"LevelM10",{-0.26,0.018},1};
							};
							class VALM_1_10_R
							{
								type = "text";
								source = "static";
								text = -10;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{0.26,-0.032},1};
								right[] = {"LevelM10",{0.32,-0.032},1};
								down[] = {"LevelM10",{0.26,0.018},1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{-0.26,-0.017},1};
								right[] = {"LevelP10",{-0.2,-0.017},1};
								down[] = {"LevelP10",{-0.26,0.033},1};
							};
							class VALP_1_10_R
							{
								type = "text";
								source = "static";
								text = "10";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{0.26,-0.017},1};
								right[] = {"LevelP10",{0.32,-0.017},1};
								down[] = {"LevelP10",{0.26,0.033},1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{-0.26,-0.032},1};
								right[] = {"LevelM15",{-0.2,-0.032},1};
								down[] = {"LevelM15",{-0.26,0.018},1};
							};
							class VALM_1_15_R
							{
								type = "text";
								source = "static";
								text = -15;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{0.26,-0.032},1};
								right[] = {"LevelM15",{0.32,-0.032},1};
								down[] = {"LevelM15",{0.26,0.018},1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{-0.26,-0.017},1};
								right[] = {"LevelP15",{-0.2,-0.017},1};
								down[] = {"LevelP15",{-0.26,0.033},1};
							};
							class VALP_1_15_R
							{
								type = "text";
								source = "static";
								text = "15";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{0.26,-0.017},1};
								right[] = {"LevelP15",{0.32,-0.017},1};
								down[] = {"LevelP15",{0.26,0.033},1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{-0.26,-0.032},1};
								right[] = {"LevelM20",{-0.2,-0.032},1};
								down[] = {"LevelM20",{-0.26,0.018},1};
							};
							class VALM_1_20_R
							{
								type = "text";
								source = "static";
								text = -20;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{0.26,-0.032},1};
								right[] = {"LevelM20",{0.32,-0.032},1};
								down[] = {"LevelM20",{0.26,0.018},1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{-0.26,-0.017},1};
								right[] = {"LevelP20",{-0.2,-0.017},1};
								down[] = {"LevelP20",{-0.26,0.033},1};
							};
							class VALP_1_20_R
							{
								type = "text";
								source = "static";
								text = "20";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{0.26,-0.017},1};
								right[] = {"LevelP20",{0.32,-0.017},1};
								down[] = {"LevelP20",{0.26,0.033},1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{-0.26,-0.032},1};
								right[] = {"LevelM25",{-0.2,-0.032},1};
								down[] = {"LevelM25",{-0.26,0.018},1};
							};
							class VALM_1_25_R
							{
								type = "text";
								source = "static";
								text = -25;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{0.26,-0.032},1};
								right[] = {"LevelM25",{0.32,-0.032},1};
								down[] = {"LevelM25",{0.26,0.018},1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{-0.26,-0.017},1};
								right[] = {"LevelP25",{-0.2,-0.017},1};
								down[] = {"LevelP25",{-0.26,0.033},1};
							};
							class VALP_1_25_R
							{
								type = "text";
								source = "static";
								text = "25";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{0.26,-0.017},1};
								right[] = {"LevelP25",{0.32,-0.017},1};
								down[] = {"LevelP25",{0.26,0.033},1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{-0.26,-0.032},1};
								right[] = {"LevelM30",{-0.2,-0.032},1};
								down[] = {"LevelM30",{-0.26,0.018},1};
							};
							class VALM_1_30_R
							{
								type = "text";
								source = "static";
								text = -30;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{0.26,-0.032},1};
								right[] = {"LevelM30",{0.32,-0.032},1};
								down[] = {"LevelM30",{0.26,0.018},1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{-0.26,-0.017},1};
								right[] = {"LevelP30",{-0.2,-0.017},1};
								down[] = {"LevelP30",{-0.26,0.033},1};
							};
							class VALP_1_30_R
							{
								type = "text";
								source = "static";
								text = "30";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{0.26,-0.017},1};
								right[] = {"LevelP30",{0.32,-0.017},1};
								down[] = {"LevelP30",{0.26,0.033},1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{-0.26,-0.032},1};
								right[] = {"LevelM35",{-0.2,-0.032},1};
								down[] = {"LevelM35",{-0.26,0.018},1};
							};
							class VALM_1_35_R
							{
								type = "text";
								source = "static";
								text = -35;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{0.26,-0.032},1};
								right[] = {"LevelM35",{0.32,-0.032},1};
								down[] = {"LevelM35",{0.26,0.018},1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{-0.26,-0.017},1};
								right[] = {"LevelP35",{-0.2,-0.017},1};
								down[] = {"LevelP35",{-0.26,0.033},1};
							};
							class VALP_1_35_R
							{
								type = "text";
								source = "static";
								text = "35";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{0.26,-0.017},1};
								right[] = {"LevelP35",{0.32,-0.017},1};
								down[] = {"LevelP35",{0.26,0.033},1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{-0.26,-0.032},1};
								right[] = {"LevelM40",{-0.2,-0.032},1};
								down[] = {"LevelM40",{-0.26,0.018},1};
							};
							class VALM_1_40_R
							{
								type = "text";
								source = "static";
								text = -40;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{0.26,-0.032},1};
								right[] = {"LevelM40",{0.32,-0.032},1};
								down[] = {"LevelM40",{0.26,0.018},1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{-0.26,-0.017},1};
								right[] = {"LevelP40",{-0.2,-0.017},1};
								down[] = {"LevelP40",{-0.26,0.033},1};
							};
							class VALP_1_40_R
							{
								type = "text";
								source = "static";
								text = "40";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{0.26,-0.017},1};
								right[] = {"LevelP40",{0.32,-0.017},1};
								down[] = {"LevelP40",{0.26,0.033},1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{-0.26,-0.032},1};
								right[] = {"LevelM45",{-0.2,-0.032},1};
								down[] = {"LevelM45",{-0.26,0.018},1};
							};
							class VALM_1_45_R
							{
								type = "text";
								source = "static";
								text = -45;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{0.26,-0.032},1};
								right[] = {"LevelM45",{0.32,-0.032},1};
								down[] = {"LevelM45",{0.26,0.018},1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{-0.26,-0.017},1};
								right[] = {"LevelP45",{-0.2,-0.017},1};
								down[] = {"LevelP45",{-0.26,0.033},1};
							};
							class VALP_1_45_R
							{
								type = "text";
								source = "static";
								text = "45";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{0.26,-0.017},1};
								right[] = {"LevelP45",{0.32,-0.017},1};
								down[] = {"LevelP45",{0.26,0.033},1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{-0.26,-0.032},1};
								right[] = {"LevelM50",{-0.2,-0.032},1};
								down[] = {"LevelM50",{-0.26,0.018},1};
							};
							class VALM_1_50_R
							{
								type = "text";
								source = "static";
								text = -50;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{0.26,-0.032},1};
								right[] = {"LevelM50",{0.32,-0.032},1};
								down[] = {"LevelM50",{0.26,0.018},1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{-0.26,-0.017},1};
								right[] = {"LevelP50",{-0.2,-0.017},1};
								down[] = {"LevelP50",{-0.26,0.033},1};
							};
							class VALP_1_50_R
							{
								type = "text";
								source = "static";
								text = "50";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{0.26,-0.017},1};
								right[] = {"LevelP50",{0.32,-0.017},1};
								down[] = {"LevelP50",{0.26,0.033},1};
							};
							class LevelM60: Level0
							{
								type = "line";
								points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
							};
							class VALM_1_60
							{
								type = "text";
								source = "static";
								text = -60;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{-0.26,-0.032},1};
								right[] = {"LevelM60",{-0.2,-0.032},1};
								down[] = {"LevelM60",{-0.26,0.018},1};
							};
							class VALM_1_60_R
							{
								type = "text";
								source = "static";
								text = -60;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{0.26,-0.032},1};
								right[] = {"LevelM60",{0.32,-0.032},1};
								down[] = {"LevelM60",{0.26,0.018},1};
							};
							class LevelP60: Level0
							{
								type = "line";
								points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_60
							{
								type = "text";
								source = "static";
								text = "60";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{-0.26,-0.017},1};
								right[] = {"LevelP60",{-0.2,-0.017},1};
								down[] = {"LevelP60",{-0.26,0.033},1};
							};
							class VALP_1_60_R
							{
								type = "text";
								source = "static";
								text = "60";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{0.26,-0.017},1};
								right[] = {"LevelP60",{0.32,-0.017},1};
								down[] = {"LevelP60",{0.26,0.033},1};
							};
							class LevelM70: Level0
							{
								type = "line";
								points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
							};
							class VALM_1_70
							{
								type = "text";
								source = "static";
								text = -70;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{-0.26,-0.032},1};
								right[] = {"LevelM70",{-0.2,-0.032},1};
								down[] = {"LevelM70",{-0.26,0.018},1};
							};
							class VALM_1_70_R
							{
								type = "text";
								source = "static";
								text = -70;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{0.26,-0.032},1};
								right[] = {"LevelM70",{0.32,-0.032},1};
								down[] = {"LevelM70",{0.26,0.018},1};
							};
							class LevelP70: Level0
							{
								type = "line";
								points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_70
							{
								type = "text";
								source = "static";
								text = "70";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{-0.26,-0.017},1};
								right[] = {"LevelP70",{-0.2,-0.017},1};
								down[] = {"LevelP70",{-0.26,0.033},1};
							};
							class VALP_1_70_R
							{
								type = "text";
								source = "static";
								text = "70";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{0.26,-0.017},1};
								right[] = {"LevelP70",{0.32,-0.017},1};
								down[] = {"LevelP70",{0.26,0.033},1};
							};
							class LevelM80: Level0
							{
								type = "line";
								points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
							};
							class VALM_1_80
							{
								type = "text";
								source = "static";
								text = -80;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{-0.26,-0.032},1};
								right[] = {"LevelM80",{-0.2,-0.032},1};
								down[] = {"LevelM80",{-0.26,0.018},1};
							};
							class VALM_1_80_R
							{
								type = "text";
								source = "static";
								text = -80;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{0.26,-0.032},1};
								right[] = {"LevelM80",{0.32,-0.032},1};
								down[] = {"LevelM80",{0.26,0.018},1};
							};
							class LevelP80: Level0
							{
								type = "line";
								points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_80
							{
								type = "text";
								source = "static";
								text = "80";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{-0.26,-0.017},1};
								right[] = {"LevelP80",{-0.2,-0.017},1};
								down[] = {"LevelP80",{-0.26,0.033},1};
							};
							class VALP_1_80_R
							{
								type = "text";
								source = "static";
								text = "80";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{0.26,-0.017},1};
								right[] = {"LevelP80",{0.32,-0.017},1};
								down[] = {"LevelP80",{0.26,0.033},1};
							};
							class LevelM90: Level0
							{
								type = "line";
								points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
							};
							class VALM_1_90
							{
								type = "text";
								source = "static";
								text = -90;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM90",{-0.26,-0.032},1};
								right[] = {"LevelM90",{-0.2,-0.032},1};
								down[] = {"LevelM90",{-0.26,0.018},1};
							};
							class VALM_1_90_R
							{
								type = "text";
								source = "static";
								text = -90;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM90",{0.26,-0.032},1};
								right[] = {"LevelM90",{0.32,-0.032},1};
								down[] = {"LevelM90",{0.26,0.018},1};
							};
							class LevelP90: Level0
							{
								type = "line";
								points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_90
							{
								type = "text";
								source = "static";
								text = "90";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP90",{-0.26,-0.017},1};
								right[] = {"LevelP90",{-0.2,-0.017},1};
								down[] = {"LevelP90",{-0.26,0.033},1};
							};
							class VALP_1_90_R
							{
								type = "text";
								source = "static";
								text = "90";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP90",{0.26,-0.017},1};
								right[] = {"LevelP90",{0.32,-0.017},1};
								down[] = {"LevelP90",{0.26,0.033},1};
							};
						};
					};
				};
			};
			class FA18_MFD_HORIZON_NUMBERS
			{
				topLeft = "mfd_center_tl";
				topRight = "mfd_center_tr";
				bottomLeft = "mfd_center_bl";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.082,0.408,0.039,1};
				enableParallax = 0;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
				};
				class Draw
				{
					color[] = {0.082,0.408,0.039,1};
					alpha = 0.7;
					condition = "on";
					enableParallax = 0;
					class ASNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {"PlaneOrientation",{-0.375,"-0.47 + 0.05"},1};
						right[] = {"PlaneOrientation",{"-0.375 + 0.08","-0.47 + 0.05"},1};
						down[] = {"PlaneOrientation",{-0.375,"-0.47 + 0.145"},1};
					};
					class ALTNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {"PlaneOrientation",{0.35,"-0.47 + 0.05"},1};
						right[] = {"PlaneOrientation",{"0.35 + 0.08","-0.47 + 0.05"},1};
						down[] = {"PlaneOrientation",{0.35,"-0.47 + 0.145"},1};
					};
				};
			};
		};
	};
	class 288th_YSS_1000_A_Single: 288th_YSS_1000_A{
		displayName = "YSS-1000-AS (Single) (288th)";
		class Turrets{};
	};
	class 288th_YSS_1000_A_VTOL_Single: 288th_YSS_1000_A_VTOL{
		displayName = "YSS-1000-AS (VTOL) (Single) (288th)";
		class Turrets{};
	};

	//Tanks
	class 288th_M808S : OPTRE_M808S{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Tank";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "M808S Scorpion (288th)";
		numberPhysicalWheels = 20;
		wheelCircumference = 2.23361;
		simulation = "tankX";
		enableRadio = 1;
		enableGPS = 1;
		normalSpeedForwardCoef = 1.2;
		slowSpeedForwardCoef = .75;
		terrainCoef = 1;
		maxSpeed = 120;
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0;
		waterLeakiness = 0;
		engineMOI = 16;
		enginePower = 3000;
		maxOmega = 700;
		peakTorque = 15000;
		torqueCurve = [[0.363636, 0.68], [0.454545, 0.8], [0.545455, 0.95], [0.606061, 0.98], [0.666667, 1], [0.727273, 0.94], [0.848485, 0.8], [1, 0.64]];
		tracksSpeed = 1.75;
		thrustDelay = 0.0;
		clutchStrength = 75.0;
		idleRPM = 1850;
		redRPM = 5000;
		fuelCapacity = 250;
		fuelConsumptionRate = 50;
		brakeIdleSpeed = 0.0;
		tankTurnForce = 1.28e+06;
		tankTurnForceAngMinSpd = 0.6;
		tankTurnForceAngSpd = 0.91;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 42;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 75;
		engineLosses = 1;
		transmissionLosses = 10;
		changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95,0.95,0.95,0.95,0.95,0.95,0.95,0.9,0.9,0.9,0.9,0.9};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "gunnerview";
					pointDirection = "pip_gunner_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
		};
		faction = "288th_UNSC";
		vehicleClass = "OPTRE_UNSC_Armored_class";
		crew = "288th_SW_Crewman";
		cost = 50000;
		damageResistance = 0.04;
		crewVulnerable = 0.01;
		crewExplosionProtection = 0.1;
		armor = 800;
		armorLights = 3;
		armorStructural = 7;
		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 3;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 2;
				radius = 0.3;
			};
			class HitEngine : HitEngine
			{
				armor = 3;
				material = -1;
				name = "engine";
				passThrough = 0.25;
				minimalHit = 0.3;
				explosionShielding = 2;
				radius = 0.2;
			};
			class HitLTrack : HitLTrack
			{
				armor = 3;
				material = -1;
				name = "pasL";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 2;
				radius = 0.75;
			};
			class HitRTrack : HitRTrack
			{
				armor = 3;
				material = -1;
				name = "pasP";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 2;
				radius = 0.75;
			};
		};
		cargoAction[] = {"passenger_flatground_crosslegs"};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets {};
				memoryPointGun = "usti hlavne2";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				weapons[] = {"OPTRE_105mm_M556","288th_M73X_V_2","SmokeLauncher"};
				magazines[] = {"OPTRE_60Rnd_105mm_APBC","OPTRE_60Rnd_105mm_SAPHE","OPTRE_60Rnd_105mm_HEAT","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				minElev = -10;
				maxElev = 20;
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				turretInfoType = "RscWeaponRangeZeroing";
				selectionFireAnim = "zasleh2";
				gun = "Gun";
				body = "Turret";
				gunAxis = "Osa Hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretAxis = "OsaVeze";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide : ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium : Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow : Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerForceOptics = 0;
				usePip = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 6.5;
						material = -1;
						name = "otocVez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 6.5;
						material = -1;
						name = "otocHlaven";
						visual = "Hlaven";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 2;
						radius = 0.25;
					};
				};
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Tracked\M808B2\data\body_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\cing_dv_m808s_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\cing_rt_m808s_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turretbase_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turrethead_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turretguns_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\ghammer_lopo_co.paa"};
		textureList[] = {"colorstand",1,"colornight",1,"colorsand",0,"colorsnow",0,"colorwood",0};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\M808B2\data\body_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\cing_dv_m808s_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\cing_rt_m808s_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turretbase_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turrethead_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\turretguns_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\ghammer_lopo_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorwood
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\M808B2\data\wood\body_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\cing_dv_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\cing_rt_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\turretbase_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\turrethead_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\turretGuns_lopo_wood_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\wood\ghammer_lopo_wood_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorsand
			{
				displayName = "Tan";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\M808B2\data\desert\body_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\cing_dv_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\cing_rt_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\turretbase_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\turrethead_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\turretGuns_lopo_desert_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\desert\ghammer_lopo_desert_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colorsnow
			{
				displayName = "White";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\M808B2\data\snow\body_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\cing_dv_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\cing_rt_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\turretbase_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\turrethead_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\turretGuns_lopo_snow_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\snow\ghammer_lopo_snow_co.paa" };
				factions[] = { "288th_UNSC" };
			};
			class colornight
			{
				displayName = "Night";
				author = "Misriah 288 DJP";
				textures[] = { "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turrethead_lckdw_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\night\turretGuns_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\ghammer_lckdw_lopo_co.paa" };
				factions[] = { "288th_UNSC" };
			};
		};
	};
	class 288th_Timberwolf : B_AFV_Wheeled_01_up_cannon_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Tank";
		forceInGarage = 1;
		side = 1;
		displayName = "MGS-32 Timberwolf (288th)";
		editorPreview = "\TCF_MISC\EditorPreviews\LM_OPCAN_MGS_AR_WDL.jpg";
		armor = 535;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		wheelDamageThreshold = 100;
		wheelDestroyThreshold = 100;
		wheelDamageRadiusCoef = 100;
		wheelDestroyRadiusCoef = 100;
		hiddenSelections[] = { "camo1","camo2","camo3","CamoNet","CamoSlat" };
		hiddenSelectionsTextures[] = { "TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_B.paa","TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_G.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa" };
		hiddenSelectionsMaterials[] = { "TCF_INDFOR\Sedran\vehicles\data\MGS1.rvmat","TCF_INDFOR\Sedran\vehicles\data\MGS2.rvmat" };
		crew = "288th_SW_Crewman";
		animationList[] = { "showCamonetHull",0,"showCamonetCannon",0,"showCamonetTurret",0,"showSLATHull",0 };
		textureList[] = { "WDL",1,"Desert",0 };
		class TextureSources
		{
			class WDL
			{
				displayName = "Sedran Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = { "TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_B.paa","TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_G.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa" };
			};
			class Desert
			{
				displayName = "Sedran Desert";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = { "TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_B_D.paa","TCF_INDFOR\Sedran\vehicles\data\MGS\MGS_AR_G_D.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa" };
			};
		};
	};

	//cars
	class 288th_Railgun_Warthog: OPTRE_M12G1_LRV{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Car";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		crew = "288th_SW_Rifleman";
		displayName = "M12G1X TOG (288th)";
		transportSoldier = 0;
		armor = 250;
		cost = 250000;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				proxyType = "CPCargo";
				showAsCargo = 1;
				maxElev = 30;
				minElev = -20;
				maxTurn = 95;
				minTurn = -95;
				animationSourceHatch = "cargo_front";
				enabledByAnimationSource = "";
				LODTurnedIn = 1200;
				LODTurnedOut = -1;
				viewGunnerInExternal = 1;
				canHideGunner = 1;
				hasGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				isPersonTurret = 2;
				weapons[] = {};
				magazines[] = {};
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = -1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 0;
			};
			class MainTurret: MainTurret
			{
				weapons[] = {"288th_Railgun_V","SmokeLauncher"};
				magazines[] = {"288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","288th_Railgun_Mag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				class Viewoptics: ViewOptics
				{
					minFov = 0.025;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					initFov = 0.85;
					maxFov = 0.9;
				};
			};
		};
		class TransportItems
		{
			class _xx_288th_Biofoam
			{
				name = "288th_Biofoam";
				count = 40;
			};
		};
		class TransportMagazines
		{
			class xx_288th_Stanag
			{
				magazine = "288th_Stanag";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class 288th_AR1X
			{
				weapon = "288th_AR1X";
				count = 3;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa","\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa","\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa","\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"};
			};
			class colornight
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"};
			};
			class colorwood
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\m68_turret_woodland_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"};
			};
			class colorsnow
			{
				displayName = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m68_turret_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
			};
			class colorsand
			{
				displayName = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m68_turret_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"};
			};
			class CMA
			{
				displayName = "CMA";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
			};
		};
		textureList[] = {"colorstand",1,"colornight",1,"colorsand",1,"colorsnow",1,"colorwood",1};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_doors"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa","\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa","\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa","\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"};
	};
	class 288th_salamander: I_MRAP_03_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Car";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage = 1;
		side = 1;
		armor = 250;
		crew = "288th_SW_Rifleman";
		displayName = "M201 Salamander (288th)";
		clutchStrength = 20;
		enginePower = 537;
		maxOmega = 330;
		peakTorque = 1500;
		editorPreview = "288th_Vehicles\Salamander\Unarmed_Salamander.jpg";
		textureList[] = {"colorstand",1,"colorWoodland",0,"Innie",0,"ArmyD",0,"Army",0,"Jackal",0,"Tauri",0,"Eridanus",0,"Digi",0};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa"};
			};
			class colorWoodland
			{
				displayName = "Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02.paa"};
			};
			class Innie
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = { "288th_Vehicles\Salamander\URF_Innie.paa"};
			};
			class Army
			{
				displayName = "Army";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR.paa"};
			};
			class ArmyD
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR_D.paa"};
			};
			class Jackal 
			{
				displayName = "JACKAL";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\JACKAL.paa"};
        	};
			class Tauri
			{
				displayName = "Tauri";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\tauri_Salamander_02.paa"};
        	};
			class Eridanus
			{
				displayName = "Eridanus";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02_Alt.paa"};
        	};
			class Digi
			{
				displayName = "Digi";
				author = "Misriah 288 DJP";
				textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa"};
        	};
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa"};
	};
	class 288th_salamander_Agl: I_MRAP_03_gmg_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Car";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage = 1;
		side = 1;
		armor = 250;
		crew = "288th_SW_Rifleman";
		displayName = "M201 AGL Salamander (288th)";
		clutchStrength = 20;
		enginePower = 537;
		maxOmega = 330;
		peakTorque = 1500;
		editorPreview = "288th_Vehicles\Salamander\armed_Salamander.jpg";
		textureList[] = {"colorstand",1,"colorWoodland",0,"Innie",0,"ArmyD",0,"Army",0,"Jackal",0,"Tauri",0,"Eridanus",0,"Digi",0};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa","288th_Vehicles\Salamander\OPTRE_GHMG_01.paa"};
			};
			class colorWoodland
			{
				displayName = "Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02.paa","288th_Vehicles\Salamander\OPTRE_GHMG_02.paa"};
			};
			class Innie 
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\URF_Innie.paa","288th_Vehicles\Salamander\URF_Innie_TURRET.paa"};
        	};
			class Army
			{
				displayName = "Army";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR.paa","288th_Vehicles\Salamander\ARV_MG.paa"};
			};
			class ArmyD
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR_D.paa","288th_Vehicles\Salamander\ARV_MG.paa"};
			};
        	class Jackal 
			{
				displayName = "JACKAL";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\JACKAL.paa","288th_Vehicles\Salamander\JACKAL_TURRET.paa"};
            };
			class Tauri
			{
				displayName = "Tauri";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\tauri_Salamander_02.paa","288th_Vehicles\Salamander\tauri_GHMG_02.paa"};
        	};
			class Eridanus
			{
				displayName = "Eridanus";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02_Alt.paa","288th_Vehicles\Salamander\OPTRE_GHMG_02_Alt.paa"};
        	};
			class Digi
			{
				displayName = "Digi";
				author = "Misriah 288 DJP";
				textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};
        	};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa","288th_Vehicles\Salamander\OPTRE_GHMG_01.paa"};
	};
	class 288th_salamander_HMG: I_MRAP_03_gmg_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Car";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage = 1;
		side = 1;
		armor = 250;
		crew = "288th_SW_Rifleman";
		displayName = "M201 HMG Salamander (288th)";
		clutchStrength = 20;
		enginePower = 537;
		maxOmega = 330;
		peakTorque = 1500;
		editorPreview = "288th_Vehicles\Salamander\armed_Salamander.jpg";
		textureList[] = {"colorstand",1,"colorWoodland",0,"Innie",0,"ArmyD",0,"Army",0,"Jackal",0,"Tauri",0,"Eridanus",0,"Digi",0};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa","288th_Vehicles\Salamander\OPTRE_GHMG_01.paa"};
			};
			class colorWoodland
			{
				displayName = "Woodland";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02.paa","288th_Vehicles\Salamander\OPTRE_GHMG_02.paa"};
			};
			class Innie 
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\URF_Innie.paa","288th_Vehicles\Salamander\URF_Innie_TURRET.paa"};
        	};
			class Army
			{
				displayName = "Army";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR.paa","288th_Vehicles\Salamander\ARV_MG.paa"};
			};
			class ArmyD
			{
				displayName = "Desert";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\arv_AR_D.paa","288th_Vehicles\Salamander\ARV_MG.paa"};
			};
        	class Jackal 
			{
				displayName = "JACKAL";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\JACKAL.paa","288th_Vehicles\Salamander\JACKAL_TURRET.paa"};
            };
			class Tauri
			{
				displayName = "Tauri";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\tauri_Salamander_02.paa","288th_Vehicles\Salamander\tauri_GHMG_02.paa"};
        	};
			class Eridanus
			{
				displayName = "Eridanus";
				author = "Misriah 288 DJP";
				textures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_02_Alt.paa","288th_Vehicles\Salamander\OPTRE_GHMG_02_Alt.paa"};
        	};
			class Digi
			{
				displayName = "Digi";
				author = "Misriah 288 DJP";
				textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};
        	};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Vehicles\Salamander\OPTRE_Salamander_01.paa","288th_Vehicles\Salamander\OPTRE_GHMG_01.paa"};
	};

	//Drones
	class 288th_Groundhog : B_UGV_01_rcws_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "M-6 ARV Groundhog (288th)";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Drone";
		forceInGarage = 1;
		scope = 2;
		scopeCurator = 2;
		canAccessMineDetector = 1;
		class SimpleObject
		{
			eden = 1;
			animate[] = { {"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_2_2",0},{"wheel_2_3",0},{"daylights",0},{"reverse_light",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"vehicletransported_antenna_hide",0},{"turrethide",1},{"damagehlaven",0},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_3_damper",0},{"wheel_2_3_damper",0},{"wheel_1_2_damper",0},{"wheel_2_2_damper",0},{"mg_muzzle",0},{"gmg_muzzle",0},{"muzzleflashrot",0},{"muzzleflashrot_2",0} };
			hide[] = { "zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","clan","podsvit pristroju","poskozeni" };
			verticalOffset = 1.968;
			verticalOffsetWorld = -0.121;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		crew = "B_UAV_AI";
		typicalCargo[] = { "B_Soldier_F" };
		side = 1;
		setMass = 100;
		wheelDamageThreshold = 100;
		wheelDestroyThreshold = 100;
		wheelDamageRadiusCoef = 100;
		wheelDestroyRadiusCoef = 100;
		armor = 250;
		explosionShielding = 0.5;
		canFloat = 1;
		waterResistance = 0.09;
		maxFordingDepth = 1;
		rudderForceCoef = 0.175;
		rudderForceCoefAtMaxSpeed = 0.025;
		cost = 5000;
		maxSpeed = 120;
		maximumLoad = 5000;
		frontRearSplit = 0.5;
		frontBias = 1;
		rearBias = 1;
		centreBias = 1;
		clutchStrength = 24;
		enginePower = 1000;
		maxOmega = 350;
		peakTorque = 2250;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = { {0.1,0.7},{0.2,0.9},{0.35,0.955},{0.5,1},{0.6,1},{0.7,0.955},{0.8,0.9},{1,0.6} };
		changeGearMinEffectivity[] = { 0.95,0.0,0.85,0.85,0.85,0.85,0.85 };
		switchTime = 0.25;
		latency = 1;
		waterLeakiness = 0;
		transportMaxWeapons = 20;
		transportMaxMagazines = 500;
		transportMaxBackpacks = 20;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.40000001;
		tf_range = 120000;
		cargoCanControlUAV = 1;
		faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";
		hiddenSelections[] = { "camo1","camo2","camo3" };
		hiddenSelectionsTextures[] = { "\288th_Vehicles\Stomper\Black\UGV_3_Turret","\288th_Vehicles\Stomper\Black\UGV_2_Black","\288th_Vehicles\Stomper\Black\UGV_1_Black" };
		class textureSources
		{
			class Black
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				factions[] = { "288th_UNSC" };
				textures[] =
				{
					"\288th_Vehicles\Stomper\Black\UGV_3_Turret",
					"\288th_Vehicles\Stomper\Black\UGV_2_Black",
					"\288th_Vehicles\Stomper\Black\UGV_1_Black"
				};
			};
			class Urban
			{
				displayName = "Urban";
				author = "Misriah 288 DJP";
				factions[] = { "288th_UNSC" };
				textures[] =
				{
					"\288th_Vehicles\Stomper\Urban\UGV_3_Turret",
					"\288th_Vehicles\Stomper\Urban\UGV_2_Urban",
					"\288th_Vehicles\Stomper\Urban\UGV_1_Urban"
				};
			};
			class Maxim
			{
				displayName = "Maxim";
				author = "Misriah 288 DJP";
				factions[] = { "288th_UNSC" };
				textures[] =
				{
					"\288th_Vehicles\Stomper\Maxim\UGV_3_Maxim",
					"\288th_Vehicles\Stomper\Maxim\UGV_2_Maxim",
					"\288th_Vehicles\Stomper\Maxim\UGV_1_Maxim"
				};
			};
			class UNSC
			{
				displayName = "UNSC";
				author = "Misriah 288 DJP";
				factions[] = { "288th_UNSC" };
				textures[] =
				{
					"\288th_Vehicles\Stomper\UNSC\UGV_01_ext_Olive_CO.paa",
					"\288th_Vehicles\Stomper\UNSC\UGV_01_int_CO.paa",
					"\288th_Vehicles\Stomper\UNSC\Turret_olive_CO.paa"
				};
			};
		};
		textureList[] = { "Black",1, "Urban",0, "Maxim",0, "Bees",0, "Beach",0, "UNSC",0, };
		class TransportItems{};
		class CargoTurret;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 10;
						material = 1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "OtocVez";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 10;
						material = 1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "OtocHlaven";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
					};
				};
				isCopilot = 0;
				dontCreateAI = 0;
				body = "mainTurret";
				gun = "mainGun";
				memoryPointGunnerOptics = "PiP1_pos";
				memoryPointGun = "machinegun";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = { "288th_M318_20mm_Autocannon_Small","288th_M73X_V","Laserdesignator_mounted","SmokeLauncher" };
				magazines[] = { "288th_350Rnd_20mm_HE","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","Laserbatteries","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
				soundServo[] = { "A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30 };
				soundServoVertical[] = { "A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30 };
				minElev = -12;
				maxElev = 80;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500 };
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;
				class ViewOptics : RCWSOptics
				{
					visionMode[] = { "Normal","TI" };
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = 1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_flatground_4";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_GETIN_POS_PASSENGER";
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				maxElev = 45;
				minElev = -5;
				maxTurn = 95;
				minTurn = -60;
				isPersonTurret = 1;
			};
		};
		class HitPoints : Hitpoints
		{
			class HitHull
			{
				armor = 0.7;
				material = 50;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitEngine
			{
				armor = 2;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 1.5;
				name = "wheel_1_1";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 1.5;
				name = "wheel_1_2";
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 1.5;
				name = "wheel_1_3";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 1.5;
				name = "wheel_2_1";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 1.5;
				name = "wheel_2_2";
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 1.5;
				name = "wheel_2_3";
			};
		};
	};
	class 288th_Remote_M41 : OPTRE_Static_M41{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		isUav = 1;
		hasDriver = 1;
		getInRadius = 0;
		uavCameraGunnerPos = "GunnerView";
		uavCameraGunnerDir = "Barrel";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		/*faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";*/
		displayName = "Remote M41 LAAG (288th)";
		armor = 600;
		crew = "B_UAV_AI";
		hiddenSelections[] = { "Camo3","camo_sight","camo_turret_decal","camoBase" };
		hiddenSelectionsTextures[] = {"optre_vehicles\warthog\data\turrets\m12_turret_co.paa","optre_vehicles\warthog\data\turrets\sight_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = { "288th_Remote_M41_Bag" };
		};
		class textureSources
		{
			class texTan
			{
				Displayname = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_tan_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texStandard
			{
				Displayname = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\optre_vehicles\warthog\data\turrets\m12_turret_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texWhite
			{
				Displayname = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texBlack
			{
				Displayname = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texGreen
			{
				Displayname = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				selectionFireAnim = "zasleh";
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "MainTurret";
				animationSourceGun = "MainGun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 0;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				memoryPointGun = "machinegun";
				weapons[] = { "OPTRE_M41_LAAG" };
				magazines[] = { "OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41" };
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class ViewGunner : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_Remote_M68 : OPTRE_Static_Gauss{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		isUav = 1;
		hasDriver = 1;
		getInRadius = 0;
		uavCameraGunnerPos = "GunnerView";
		uavCameraGunnerDir = "Barrel";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		/*faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";*/
		displayName = "Remote M68 Gauss (288th)";
		armor = 600;
		crew = "B_UAV_AI";
		hiddenSelections[] = { "Camo3","Camo4","camoBase" };
		hiddenSelectionsTextures[] = {"\optre_vehicles\warthog\data\turrets\m68_turret_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_co.paa","OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = { "288th_Remote_M68_Bag" };
		};
		class textureSources
		{
			class texTan
			{
				Displayname = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\m68_turret_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_tan_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texStandard
			{
				Displayname = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\optre_vehicles\warthog\data\turrets\m68_turret_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texWhite
			{
				Displayname = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\m68_turret_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texBlack
			{
				Displayname = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texGreen
			{
				Displayname = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\m68_turret_woodland_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				selectionFireAnim = "zasleh";
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -15;
				maxElev = 15;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 0;
				stabilizedInAxes = 3;
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				memoryPointGun = "usti hlavne";
				weapons[] = { "OPTRE_M68_GAUSS" };
				magazines[] = { "OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor = 1;
				turretInfoType = "RscWeaponZeroing";
				class Viewoptics : ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
					thermalMode[] = { 5,6 };
				};
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner : ViewOptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class 288th_Remote_M79 : OPTRE_Static_AA{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		isUav = 1;
		hasDriver = 1;
		getInRadius = 0;
		uavCameraGunnerPos = "GunnerView";
		uavCameraGunnerDir = "Barrel";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		/*faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";*/
		displayName = "Remote M79 AA (288th)";
		armor = 600;
		crew = "B_UAV_AI";
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = { "288th_Remote_M79_Bag" };
		};
		hiddenSelections[] = { "Camo3","camoBase" };
				hiddenSelectionsTextures[] = {"\optre_vehicles\warthog\data\turrets\m79_turret_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
		class textureSources
		{
			class texTan
			{
				Displayname = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_tan_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texStandard
			{
				Displayname = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\optre_vehicles\warthog\data\turrets\m79_turret_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texWhite
			{
				Displayname = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texBlack
			{
				Displayname = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texGreen
			{
				Displayname = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\m79_turret_woodland_co.paa","\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_green_co.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_2";
				memoryPointGun[] = { "Rocket_1","Rocket_2" };
				gunAxis = "Osa Hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 0;
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				stabilizedInAxes = 3;
				weapons[] = { "OPTRE_M79_MLRS" };
				magazines[] = { "OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunneroutOptics = "gunneroutview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				hasGunner = 1;
				class Viewoptics : ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
					thermalMode[] = { 5,6 };
				};
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner : ViewOptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class 288th_Remote_AU_44 : OPTRE_AU_44_Mortar{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		isUav = 1;
		hasDriver = 1;
		getInRadius = 0;
		armor = 300;
		uavCameraGunnerPos = "GunnerView";
		uavCameraGunnerDir = "Barrel";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		/*faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";*/
		displayName = "Remote AU-144 (288th)";
		crew = "B_UAV_AI";
		availableForSupportTypes = "[""Artillery""]";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 3;
				weapons[] = {"OPTRE_SGM122_Mortar_122mm"};
				magazines[] = {"OPTRE_10Rnd_122mm_SABOT_81mm_Mo_shells","OPTRE_10Rnd_122mm_SABOT_81mm_Mo_shells","OPTRE_10Rnd_122mm_Mo_shells","OPTRE_10Rnd_122mm_Mo_shells","OPTRE_10Rnd_122mm_Mo_Flare_white","OPTRE_10Rnd_122mm_Mo_IR_Flare_white","OPTRE_10Rnd_122mm_Mo_Smoke_white","OPTRE_10Rnd_122mm_Mo_Smoke_white","OPTRE_10Rnd_122mm_Mo_guided","OPTRE_10Rnd_122mm_Mo_guided","OPTRE_5Rnd_122mm_Mo_LG_SABOT","OPTRE_10Rnd_122mm_Mo_LG","OPTRE_5Rnd_122mm_Mo_Cluster_HE"};
				minelev = -22.5;
				initelev = 0;
				maxelev = 22.5;
				disableSoundAttenuation = 0;
				soundElevation[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.316228,1,10};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.177828,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.316228,1,30};
			};
		};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = { "288th_Remote_AU_44_Bag" };
		};
	};
	class 288th_Ed_1E : B_UGV_02_Demining_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "ED-1E (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Drone";
		crew = "B_UAV_AI";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\B_UGV_02_Demining_F.jpg";
		accelAidForceCoef = 0.7;
		accelAidForceSpd = 0.1;
		accelAidForceYOffset = -0.8;
		accuracy = 0.25;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		ace_tagging_canTag = 1;
		airCapacity = 10;
		allowTabLock = 1;
		alwaysTarget = 0;
		animated = 1;
		armor = 75;
		armorStructural = 25;
		artilleryScanner = 0;
		artilleryTarget = 0;
		fuelCapacity = 10;
		class UserActions
		{
			class Ed_1E_Pickup
			{
				displayNameDefault = "Pick Up Ed-1E";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Pick Up Ed-1E";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				condition = " this == cursorObject && alive this && player == vehicle player ";
				statement = "player addItem 'ED_1E_Kit'; deleteVehicle this";
			};
		};
		cameraSmoothSpeed = 5;
		camouflage = 0.25;
		canAccessMineDetector = 1;
		canFloat = 1;
		canHideDriver = -1;
		canUseScanners = 1;
		clutchStrength = 15;
		cost = 200;
		engineMOI = 2.35;
		enginePower = 100;
		engineStartSpeed = 5;
		engineStartupDelay = 2.5;
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"a3\soft_f_enoch\ugv_02\data\ugv_co.paa","a3\soft_f_enoch\ugv_02\data\tracks_co.paa","a3\soft_f_enoch\ugv_02\data\ugv2_mdf_ca.paa"};
		htMax = 180;
		htMin = 60;
		isUav = 1;
		maxSpeed = 20;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				canAccessMineDetector = 1;
				weapons[] = {"288th_M7X_SMG_V","SmokeLauncher","Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","SmokeLauncherMag","SmokeLauncherMag"};
				gunBeg = "gun_end";
				gunEnd = "gun_start";
				selectionFireAnim = "muzzleFlash";
				memoryPointGunnerOptics = "cam_demining";
				uavCameraGunnerPos = "cam_demining";
				uavCameraGunnerDir = "cam_demining_dir";
				memoryPointGun = "gun_end";
				gunnerOpticsModel = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
				turretInfoType = "RscOptics_UGV_02_Demining_gunner";
				class OpticsIn
				{
					class CameraArm: ViewOptics
					{
						opticsDisplayName = "cam1";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_demining_cam3_F";
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
					class CameraArmZoom: CameraArm
					{
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_demining_cam3_zoom_F";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
					};
					class CameraBottom: ViewOptics
					{
						camPos = "driverview";
						camDir = "driverview_dir";
						opticsDisplayName = "cam2";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_cam1_F";
						initFov = 0.7;
						minFov = 0.7;
						maxFov = 0.7;
					};
					class CameraClaw: ViewOptics
					{
						camPos = "cam_rear";
						camDir = "cam_rear_dir";
						opticsDisplayName = "cam3";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_cam2_F";
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						defaultDisplay = "MineDetectorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
								range = 50;
								resource = "RscCustomInfoMineDetect";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
								range = 50;
								resource = "RscCustomInfoMineDetect";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
				};
			};
		};
		nightVision = 1;
		peakTorque = 1670;
		picture = "\a3\Soft_F_Enoch\UGV_02\Data\UI\UGV_02_Demining_CA.paa";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 30000;
		TFAR_hasIntercom = 0;
		threat[] = {0.4,0,0};
		visualSize = 0.1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				condition = "alive _target";
				displayName = "Interactions";
				distance = 2.5;
				position = "[0,0,0]";
				selection = "";
				class ACE_Pickup_Edit
				{
					displayName = "Pick Up ED-1E";
					showDisabled = 0;
					distance = 6;
					condition = "player == vehicle player && player canAdd ""ED_1E_Kit"" ";
					statement = "player addItem 'ED_1E_Kit'; deleteVehicle this";
				};
			};
		};
		class assembleInfo 
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"ED_1E_Kit"};
			primary = 0;
		};
		/*class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {""};
			displayName = "";
		};*/
	};
	class 288th_Ed_1C : B_UGV_02_Science_F{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "ED-1C (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "288th_UNSC";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Drone";
		accelAidForceCoef = 0.7;
		accelAidForceSpd = 0.1;
		accelAidForceYOffset = -0.8;
		accuracy = 0.25;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		ace_tagging_canTag = 1;
		airCapacity = 10;
		allowTabLock = 1;
		alwaysTarget = 0;
		animated = 1;
		armor = 75;
		armorStructural = 25;
		artilleryScanner = 0;
		artilleryTarget = 0;
		fuelCapacity = 10;
		class UserActions
		{
			class Ed_1C_Pickup
			{
				displayNameDefault = "Pick Up ED-1C";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Pick Up ED-1C";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				condition = " this == cursorObject && alive this && player == vehicle player ";
				statement = "player addItem 'ED_1C_Kit'; deleteVehicle this";
			};
		};
		cameraSmoothSpeed = 5;
		camouflage = 0.25;
		canAccessMineDetector = 1;
		canFloat = 1;
		canHideDriver = -1;
		canUseScanners = 1;
		clutchStrength = 15;
		cost = 200;
		engineMOI = 2.35;
		enginePower = 100;
		engineStartSpeed = 5;
		engineStartupDelay = 2.5;
		htMax = 180;
		htMin = 60;
		isUav = 1;
		maxSpeed = 20;
		nightVision = 1;
		peakTorque = 1670;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 30000;
		TFAR_hasIntercom = 0;
		threat[] = {0.4,0,0};
		visualSize = 0.1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				condition = "alive _target";
				displayName = "Interactions";
				distance = 2.5;
				position = "[0,0,0]";
				selection = "";
				class ACE_Pickup_Edit
				{
					displayName = "Pick Up ED-1C";
					showDisabled = 0;
					distance = 6;
					condition = "player == vehicle player && player canAdd ""ED_1C_Kit"" ";
					statement = "player addItem 'ED_1C_Kit'; deleteVehicle this";
				};
			};
		};
		class assembleInfo 
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"ED_1c_Kit"};
			primary = 0;
		};
	};
	class 288th_Ed_1F : 288th_Ed_1E{
		dlc = "288th";
		author = "Misriah 288 DJP";
		displayName = "ED-1F (288th)";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		class UserActions
		{
			class Ed_1F_Pickup
			{
				displayNameDefault = "Pick Up ED-1F";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Pick Up ED-1F";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				condition = " this == cursorObject && alive this && player == vehicle player ";
				statement = "player addItem 'Ed_1F_Kit'; deleteVehicle this";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				canAccessMineDetector = 1;
				weapons[] = {"288th_CQS_48X_V","SmokeLauncher","Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries","288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_Buckshot","SmokeLauncherMag","SmokeLauncherMag"};
				gunBeg = "gun_end";
				gunEnd = "gun_start";
				selectionFireAnim = "muzzleFlash";
				memoryPointGunnerOptics = "cam_demining";
				uavCameraGunnerPos = "cam_demining";
				uavCameraGunnerDir = "cam_demining_dir";
				memoryPointGun = "gun_end";
				gunnerOpticsModel = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
				turretInfoType = "RscOptics_UGV_02_Demining_gunner";
				class OpticsIn
				{
					class CameraArm: ViewOptics
					{
						opticsDisplayName = "cam1";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_demining_cam3_F";
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
					class CameraArmZoom: CameraArm
					{
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_demining_cam3_zoom_F";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
					};
					class CameraBottom: ViewOptics
					{
						camPos = "driverview";
						camDir = "driverview_dir";
						opticsDisplayName = "cam2";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_cam1_F";
						initFov = 0.7;
						minFov = 0.7;
						maxFov = 0.7;
					};
					class CameraClaw: ViewOptics
					{
						camPos = "cam_rear";
						camDir = "cam_rear_dir";
						opticsDisplayName = "cam3";
						gunnerOpticsModel = "\a3\Weapons_F_Enoch\Reticle\Optics_Gunner_UGV_02_cam2_F";
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						defaultDisplay = "MineDetectorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
								range = 50;
								resource = "RscCustomInfoMineDetect";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
								range = 50;
								resource = "RscCustomInfoMineDetect";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
				};
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				condition = "alive _target";
				displayName = "Interactions";
				distance = 2.5;
				position = "[0,0,0]";
				selection = "";
				class ACE_Pickup_Edit
				{
					displayName = "Pick Up ED-1F";
					showDisabled = 0;
					distance = 6;
					condition = "player == vehicle player && player canAdd ""ED_1F_Kit"" ";
					statement = "player addItem 'ED_1F_Kit'; deleteVehicle this";
				};
			};
		};
		class assembleInfo 
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"ED_1F_Kit"};
			primary = 0;
		};
	};
	class 288th_MQ_94 : TCF_UAV_01_F{
        dlc = "288th";
        author = "Misriah 288 DJP";
        displayName = "MQ-94 Drone (288th)";
        editorCategory = "288th_Eden";
        editorSubcategory = "288th_Eden_Drone";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
        _generalMacro = "";
        scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
        side = 1;
        crew = "B_UAV_AI";
        typicalCargo[] = { "B_UAV_AI" };
        accuracy = 0.5;
        fuelCapacity = 200;
        cost = 10;
		audible = 0.0085;
        camouflage = 0.025;
		class UserActions
		{
			class MQ_94_Pickup
			{
				displayNameDefault = "Pick Up MQ-94";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Pick Up MQ-94";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				condition = " this == cursorObject && alive this && player == vehicle player ";
				statement = "player addItem 'MQ_94_Kit'; deleteVehicle this";
			};
		};
        /*hiddenSelectionsTextures[] = { "\288th_Vehicles\MQ_94\MQ_94_co.paa" };
        textureList[] = { "Blufor",1 };*/
    };

	//Turrets
	class 288th_SRS99XT: B_HMG_01_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
        side = 1;
        crew = "288th_SW_Rifleman";
		displayName = "SRS99XT (288th)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\288th_Vehicles\Turrets\StaticTurret_01_blk_CO.paa","\288th_Vehicles\Turrets\StaticTurret_02_blk_CO.paa","\288th_Vehicles\Turrets\StaticTurret_03_blk_CO.paa"};
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		class ace_csw 
		{
			ammoLoadTime = 5;
			ammoUnloadTime = 5;
			desiredAmmo = 100;
			disassembleWeapon = "288th_SRS99D_Turret_Kit";  // Carryable weapon created above
        	disassembleTurret = "";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			proxyWeapon = "";
		};
		class assembleInfo 
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"288th_SRS99D_Turret_Kit"};
			primary = 0;
		};
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				disableSoundAttenuation = 1;
				discreteDistance = [100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000];
				discreteDistanceInitIndex = 2;
				displayName = "";
				ejectDeadGunner = 1;
				gunnerAction = "gunner_static_low01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				gunnerRightHandAnimName = "OtocHlaven_shake";
				magazines[] = {"288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag"};
				maxElev = 35;
				minElev = -20;
				optics = 1;
				turretInfoType = "RscOptics_crows";
				weapons[] = {"288th_SRS99XT"};
				class ViewOptics: ViewOptics 
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.117;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 0.117;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.004;
					thermalMode = [0,1];
					visionMode = ["Normal","NVG","Ti"];
				};
			};
		};
	};
	class 288th_SRS99XT_High: B_HMG_01_high_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
        side = 1;
        crew = "288th_SW_Rifleman";
		displayName = "SRS99XT [High] (288th)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\288th_Vehicles\Turrets\StaticTurret_01_blk_CO.paa","\288th_Vehicles\Turrets\StaticTurret_02_blk_CO.paa","\288th_Vehicles\Turrets\StaticTurret_03_blk_CO.paa"};
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		class ace_csw 
		{
			ammoLoadTime = 5;
			ammoUnloadTime = 5;
			desiredAmmo = 100;
			disassembleWeapon = "288th_SRS99D_Turret_High_Kit";  // Carryable weapon created above
        	disassembleTurret = ""; 
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			proxyWeapon = "";
		};
		class assembleInfo 
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"288th_SRS99D_Turret_High_Kit"};
			primary = 0;
		};
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				gunnerAction = "gunner_standup01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				initTurn = 0;
				maxTurn = 360;
				minTurn = -360;
				disableSoundAttenuation = 1;
				discreteDistance = [100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000];
				discreteDistanceInitIndex = 2;
				displayName = "";
				ejectDeadGunner = 1;
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				gunnerRightHandAnimName = "OtocHlaven_shake";
				magazines[] = {"288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag","288th_SRS99XT_Mag"};
				maxElev = 35;
				minElev = -20;
				optics = 1;
				turretInfoType = "RscOptics_crows";
				weapons[] = {"288th_SRS99XT"};
				class ViewOptics: ViewOptics 
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.117;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 0.117;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.004;
					thermalMode = [0,1];
					visionMode = ["Normal","NVG","Ti"];
				};
			};
		};
	};

	//artillery
	class 288th_M12_MLMS: OPTRE_M12R_AA{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Artillery";
		faction = "288th_UNSC";
		displayName = "M12M MLMS (288th)";
		crew = "288th_SW_Crewman";
		scope = 2;
		ace_artillerytables_showGunLaying = 2;
		availableForSupportTypes = "[""Artillery""]";
		canUseScanners = 1;
		artilleryScanner = 1;
		laserScanner = 0;
		nvScanner = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_4";
		memoryPointGun[] = {"Rocket_1","Rocket_4"};
		unitInfoType = "RscUnitInfoArtillery";
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "SAG6_M89_MLMS";
			};
			class Missiles_reloading: Missiles_revolving
			{
				source = "reloadMagazine";
			};
			class missiles_alternating
			{
				source = "ammo";
				weapon = "SAG6_M89_MLMS";
			};
		};
		class Turrets: Turrets
		{
			/*class CargoGunner_1: NewTurret
			{
				gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				proxyType = "CPCargo";
				showAsCargo = 1;
				maxElev = 30;
				minElev = -20;
				maxTurn = 95;
				minTurn = -95;
				animationSourceHatch = "cargo_front";
				enabledByAnimationSource = "";
				LODTurnedIn = 1200;
				LODTurnedOut = -1;
				viewGunnerInExternal = 1;
				canHideGunner = 1;
				hasGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				isPersonTurret = 2;
				weapons[] = {};
				magazines[] = {};
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				soundServo[] = {"","db-50",1};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = -1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 0;
			};*/
			class CargoGunner_1: NewTurret
			{
				gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				proxyType = "CPCargo";
				showAsCargo = 1;
				maxElev = 30;
				minElev = -20;
				maxTurn = 95;
				minTurn = -95;
				animationSourceHatch = "cargo_front";
				enabledByAnimationSource = "";
				LODTurnedIn = 1200;
				LODTurnedOut = -1;
				viewGunnerInExternal = 1;
				canHideGunner = 1;
				hasGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				isPersonTurret = 2;
				weapons[] = {};
				magazines[] = {};
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = -1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 0;
			};
			class MainTurret: MainTurret
			{
				ace_fcs_DistanceInterval = 5;
				ace_fcs_Enabled = 0;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_MinDistance = 200;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex = 5;
				canUseScanners = 1;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_4";
				memoryPointGun[] = {"Rocket_1","Rocket_4"};
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				gunAxis = "Osa Hlavne";
				maxCamElev = 45;
				minCamElev = -15;
				minElev = -15;
				maxElev = 90;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				ejectDeadGunner = 1;
				elevationMode = 3;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				stabilizedInAxes = 3;
				weapons[] = {"SAG6_M89_MLMS"};
				magazines[] = {"SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunneroutOptics = "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				hasGunner = 1;
				class Viewoptics: ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {5,6};
				};
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner: Viewoptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa","\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa","\OPTRE_Vehicles\Warthog\data\turrets\m79_turret_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colornight
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorwood
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\m79_turret_woodland_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorsnow
			{
				displayName = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorsand
			{
				displayName = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Sand
			{
				displayName = "Sand";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa","\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Guerrilla
			{
				displayName = "Guerrilla";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Green
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins2_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Innie
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins3_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class CMA
			{
				displayName = "CMA";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		textureList[] = {"colorstand",1,"colornight",1,"colorsand",1,"colorsnow",1,"colorwood",1};
	};
	class 288th_M12_MLMS_AI: 288th_M12_MLMS{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Artillery";
		faction = "288th_UNSC";
		displayName = "M12M MLMS (288th)";
		crew = "288th_SW_Crewman";
		ace_artillerytables_showGunLaying = 2;
		availableForSupportTypes = "[""Artillery""]";
		canUseScanners = 1;
		artilleryScanner = 1;
		laserScanner = 0;
		nvScanner = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_4";
		memoryPointGun[] = {"Rocket_1","Rocket_4"};
		unitInfoType = "RscUnitInfoArtillery";
		scope = 1;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				proxyType = "CPCargo";
				showAsCargo = 1;
				maxElev = 30;
				minElev = -20;
				maxTurn = 95;
				minTurn = -95;
				animationSourceHatch = "cargo_front";
				enabledByAnimationSource = "";
				LODTurnedIn = 1200;
				LODTurnedOut = -1;
				viewGunnerInExternal = 1;
				canHideGunner = 1;
				hasGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				isPersonTurret = 2;
				weapons[] = {};
				magazines[] = {};
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				soundServo[] = {"","db-50",1};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = -1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 0;
			};
			class MainTurret: MainTurret
			{
				ace_fcs_DistanceInterval = 5;
				ace_fcs_Enabled = 0;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_MinDistance = 200;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex = 5;
				canUseScanners = 1;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_4";
				memoryPointGun[] = {"Rocket_1","Rocket_4"};
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				gunAxis = "Osa Hlavne";
				maxCamElev = 45;
				minCamElev = -15;
				minElev = -15;
				maxElev = 90;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				ejectDeadGunner = 1;
				elevationMode = 3;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				stabilizedInAxes = 3;
				weapons[] = {"SAG6_M89_MLMS"};
				magazines[] = {"SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_GPS","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_AB","SAG6_6rnd_MLMS_Smoke","SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_GPS","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_AB","SAG6_6rnd_MLMS_Smoke"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunneroutOptics = "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				hasGunner = 1;
				class Viewoptics: Viewoptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {5,6};
				};
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner: Viewoptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class 288th_M989: OPTRE_M914_RV{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Car";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		displayName = "M989 Ammo Carrier (288th)";
		ace_rearm_defaultSupply = 400;
		secondaryExplosion = 10000;
		class textureSources
		{
			class colorstand
			{
				displayName = "Standard";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa","\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colornight
			{
				displayName = "Black";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorwood
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorsnow
			{
				displayName = "White";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class colorsand
			{
				displayName = "Tan";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Sand
			{
				displayName = "Sand";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa","\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Guerrilla
			{
				displayName = "Guerrilla";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Green
			{
				displayName = "Green";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
				factions[] = { "288th_UNSC" };
			};
			class Innie
			{
				displayName = "Innie";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
				factions[] = { "288th_UNSC" };
			};
			class CMA
			{
				displayName = "CMA";
				author = "Misriah 288 DJP";
				textures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
		textureList[] = {"colorstand",1,"colornight",1,"colorsand",1,"colorsnow",1,"colorwood",1};
	};
	class 288th_Static_MLMS: OPTRE_Static_AA{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "M89 MLMS (288th)";
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		ace_artillerytables_showGunLaying = 2;
		availableForSupportTypes = "[""Artillery""]";
		canUseScanners = 1;
		artilleryScanner = 1;
		radarType = 0;
		armor = 600;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_2";
				memoryPointGun[] = {"Rocket_1","Rocket_2"};
				gunAxis = "Osa Hlavne";
				minElev = -15;
				maxElev = 90;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				stabilizedInAxes = 3;
				weapons[] = {"SAG6_M89_MLMS"};
				magazines[] = {"SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_Smoke","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_GPS","SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_Smoke","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_GPS"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunneroutOptics = "gunneroutview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				hasGunner = 1;
				class Viewoptics: ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {5,6};
				};
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner: Viewoptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class 288th_Remote_M12_MLMS : 288th_Static_MLMS{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		isUav = 1;
		hasDriver = 1;
		getInRadius = 0;
		armor = 300;
		uavCameraGunnerPos = "GunnerView";
		uavCameraGunnerDir = "Barrel";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Turret";
		/*faction = "288th_UNSC";
		vehicleClass = "288th_Subgroups_LandVehicles";*/
		displayName = "Remote M12 MLMS (288th)";
		crew = "B_UAV_AI";
		availableForSupportTypes = "[""Artillery""]";
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = { "288th_Remote_M12_Bag" };
		};
	};
	class 288th_Catfish_MLMS: optre_catfish_aa_f{
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Boats";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "M112M Wet Fire Support Craft (288th)";
		faction = "288th_UNSC";
		crew = "288th_SW_Crewman";
		ace_artillerytables_showGunLaying = 2;
		availableForSupportTypes = "[""Artillery""]";
		canUseScanners = 1;
		artilleryScanner = 1;
		radarType = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_4";
		memoryPointGun[] = {"Rocket_1","Rocket_4"};
		unitInfoType = "RscUnitInfoArtillery";
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "SAG6_M89_MLMS";
			};
			class Missiles_reloading: Missiles_revolving
			{
				source = "reloadMagazine";
			};
			class missiles_alternating
			{
				source = "ammo";
				weapon = "SAG6_M89_MLMS";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (FFV - Left 01)";
				proxyIndex = 1;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-65,95};
				};
				class TurnIn
				{
					limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
					limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
				};
				class TurnOut: TurnIn{};
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (FFV - Left 02)";
				proxyIndex = 2;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn
				{
					limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
					limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
				};
				class TurnOut: TurnIn{};
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (FFV - Right 01)";
				proxyIndex = 3;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn
				{
					limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
					limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
				};
				class TurnOut: TurnIn{};
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (FFV - Right 02)";
				proxyIndex = 4;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn
				{
					limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
					limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
				};
				class TurnOut: TurnIn{};
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (FFV - Rear)";
				proxyIndex = 5;
				isPersonTurret = 1;
				allowLauncherIn = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 60;
				minTurn = -60;
				class TurnIn
				{
					limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
					limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
				};
				class TurnOut: TurnIn{};
			};
			class MainTurret: MainTurret
			{
				ace_fcs_DistanceInterval = 5;
				ace_fcs_Enabled = 0;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_MinDistance = 200;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex = 5;
				canUseScanners = 1;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				LODTurnedOut = 1100;
				LODTurnedIn = 1100;
				LODOpticsIn = 1100;
				LODOpticsOut = 1100;
				ejectDeadGunner = 1;
				minElev = -15;
				maxElev = 90;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				elevationMode = 3;
				hideWeaponsGunner = 0;
				soundServo[] = {"",0.01,1};
				stabilizedInAxes = 3;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				proxyIndex = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				memoryPointGun[] = {"Rocket_1","Rocket_2"};
				weapons[] = {"SAG6_M89_MLMS"};
				magazines[] = {"SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_GPS","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_AB","SAG6_6rnd_MLMS_Smoke","SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS","SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_GPS","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_AB","SAG6_6rnd_MLMS_Smoke"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunneroutview";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
				gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class Viewoptics: ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {5,6};
				};
				class ViewGunner: Viewoptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_2";
			};
		};
		hiddenSelections[] = {"camo","camoInterior","camoSeat","camoWindow","camoBase","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_standard_co.paa","\optre_vehicles\catfish\data\optre_catfish_interior_co.paa","\optre_vehicles\catfish\data\optre_catfish_seats_co.paa","\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\optre_vehicles\warthog\data\turrets\m12_turret_co.paa","\optre_vehicles\warthog\data\turrets\m79_turret_co.paa"};
		class textureSources
		{
			class texTan
			{
				Displayname = "Tan";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_tan_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa","\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texStandard
			{
				Displayname = "Standard";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_standard_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\optre_vehicles\warthog\data\turrets\m12_turret_co.paa","\optre_vehicles\warthog\data\turrets\m79_turret_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texWhite
			{
				Displayname = "White";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texBlack
			{
				Displayname = "Black";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_black_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texGreen
			{
				Displayname = "Green";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_green_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa","\OPTRE_Vehicles\Warthog\data\woodland\m79_turret_woodland_co.paa"};
				factions[] = { "288th_UNSC" };
			};
			class texCheese
			{
				Displayname = "Cheese";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\catfish\data\cheese_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"};
				factions[] = { "288th_UNSC" };
			};
		};
	};

	//Wolves
	class 288th_SW_Rifleman : OPTRE_UNSC_Soldier_Base{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Rifleman";
		cost = 1000;
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 120;
		accuracy = 2.5;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		class Wounds
		{
			tex[] = {};
			mat[] = {"OPTRE_UNSC_Units\Army\data\uniform_a.rvmat","OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat","OPTRE_UNSC_Units\Army\data\uniform_a_injury.rvmat","OPTRE_UNSC_Units\Army\data\uniform_b.rvmat","OPTRE_UNSC_Units\Army\data\uniform_b_injury.rvmat","OPTRE_UNSC_Units\Army\data\uniform_b_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"};
		};
		class EventHandlers : EventHandlers
		{
			init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
		};
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_SlimLeg"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		Items[] = { "288th_Armor_Marine_Rifleman","288th_CH252_Marine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam" };

		linkedItems[] = {"288th_Armor_Marine_Rifleman","288th_Balaclava","288th_CH252_Marine","g_balaclava_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };
		respawnlinkedItems[] = {"288th_Armor_Marine_Rifleman","288th_Balaclava","288th_CH252_Marine","g_balaclava_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };

		weapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put"};
		respawnWeapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put"};

		magazines[] = {"288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };
		respawnMagazines[] = {"288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_AT : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves AT";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		Items[] = { "288th_Armor_Marine_Rifleman","288th_CH252_Marine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam" };

		linkedItems[] = {"288th_Armor_Marine_Rifleman","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Rifleman","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR1X","288th_M57_Launcher","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_AR1X","288th_M57_Launcher","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = { "288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_M57_Cricket_SACLOS","288th_M57_Cricket_Thermal","288th_M57_Cricket_HE","288th_M57_Cricket_SACLOS","288th_M57_Cricket_Thermal","288th_M57_Cricket_HE", };
		respawnMagazines[] = { "288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_M57_Cricket_SACLOS","288th_M57_Cricket_Thermal","288th_M57_Cricket_HE","288th_M57_Cricket_SACLOS","288th_M57_Cricket_Thermal","288th_M57_Cricket_HE", };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Medic : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Medic";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		Items[] = { "288th_Armor_Marine_Medic","288th_CH252_Marine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam" };

		linkedItems[] = {"288th_Armor_Marine_Medic","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Medic","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = { "288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };
		respawnMagazines[] = { "288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Marksman : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Marksman";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_Marksman","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Marksman","288th_Balaclava","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR3X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_AR3X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = { "288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };
		respawnMagazines[] = { "288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Autorifleman : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Autorifleman";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_AutoRifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_AutoRifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_M73X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_M73X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = {"288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40" ,"288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40" };
		respawnMagazines[] = {"288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40" ,"288th_500Rnd_65x85_Box","288th_32Rnd_127x40","288th_500Rnd_65x85_Box","288th_32Rnd_127x40" };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Crewman : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Crewman";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_Rifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Rifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_M7V_SMG","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_M7V_SMG","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = {"288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40" };
		respawnMagazines[] = {"288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40","288th_45ACP_Mag_AP","288th_32Rnd_127x40" };
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Breacher : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Breacher";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_Breacher","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Breacher","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_CQS_48X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_CQS_48X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = {"288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_Buckshot","288th_32Rnd_127x40","288th_Buckshot","288th_32Rnd_127x40","288th_Buckshot","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40" };
		respawnMagazines[] = { "288th_Buckshot","288th_32Rnd_127x40","288th_Buckshot","288th_32Rnd_127x40","288th_Buckshot","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40","288th_Slug","288th_32Rnd_127x40" };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
	};
	class 288th_SW_Grenadier : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Grenadier";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_Grenadier","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Grenadier","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR4X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_AR4X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = { "288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40", "288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40", "288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40", };
		respawnMagazines[] = {"288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40", "288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40","288th_Stanag","3Rnd_HE_Grenade_shell","288th_32Rnd_127x40", };

		backpack = "288th_Kitbag";
		headgearList[] = { "288th_CH252_Marine",1, };
		 
	};
	class 288th_SW_RTO : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves RTO";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine_Rifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_Rifleman","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put" };
		respawnWeapons[] = {"288th_AR1X","288th_FNX_99_Tactical","Binocular","Throw","Put" };

		magazines[] = { "288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };
		respawnMagazines[] = { "288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag" };

		backpack = "288th_RTO_pack_Black";
		headgearList[] = { "288th_CH252_Marine",1, };
		 
	};
	class 288th_SW_FL : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Fireteam Lead";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR1X","288th_FNX_99_Tactical","OPTRE_Smartfinder","Throw","Put" };
		respawnWeapons[] = {"288th_AR1X","288th_FNX_99_Tactical","OPTRE_Smartfinder","Throw","Put" };

		magazines[] = {"288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", };
		respawnMagazines[] = {"288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", };

		backpack = "288th_RTO_pack_Black";
		headgearList[] = { "288th_CH252_Marine",1, };
		 
	};
	class 288th_SW_SL : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Silver Wolves Squad Lead";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_SW";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "288th_Black_Uniform_S";

		linkedItems[] = {"288th_Armor_Marine","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine","288th_CH252_Marine","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"288th_AR1X","288th_M6C","OPTRE_Smartfinder","Throw","Put" };
		respawnWeapons[] = {"288th_AR1X","288th_M6C","OPTRE_Smartfinder","Throw","Put" };

		magazines[] = {"288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", };
		respawnMagazines[] = {"288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40","Laserbatteries","288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", "288th_Stanag","288th_32Rnd_127x40", };

		backpack = "288th_RTO_pack_Black";
		headgearList[] = { "288th_CH252_Marine",1, };
		 
	};

	class 288th_Pvt_Green: OPTRE_UNSC_Army_Soldier_WDL{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pvt. Green (ODST)";
		side = 1;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_named";
		impactDamageMultiplier = 0.01;
		canCarryBackPack = 1;
		oxygenCapacity = 1000;
		accuracy = 5;
		sensitivity = 5;
		camouflage = 0.15;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 5;
		handgunAmmoCoef = 5;
		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		genericNames = "Pvt_Green";
		faction = "288th_UNSC";
		/*vehicleClass = "OPTRE_UNSC_Man_ODST_class";*/
		uniformClass = "288th_Black_Uniform_S";
		model = "\OPTRE_UNSC_Units\Army\uniform_odst.p3d";
		/*identityTypes[] = {"Green01ENG"};*/
		hiddenSelections[] = {"camo","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_black_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_urban_co.paa"};

		linkedItems[] = {"OPTRE_UNSC_M52D_Armor","OPTRE_UNSC_CH252D_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnLinkedItems[] = {"OPTRE_UNSC_M52D_Armor","OPTRE_UNSC_CH252D_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_M12_Frag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_White_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag","288th_Green_Smoke_Mag"};
		backpack = "OPTRE_ILCS_Rucksack_Black";
	};

	//OSHA
	class 288th_OSHA_Marine : 288th_SW_Rifleman{
		dlc = "288th";
		author = "Misriah 288 DJP";
		scope = 2;
		scopeCurator = 2;
		displayName = "OSHA Marine";
		side = 2;
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Memes";
		impactDamageMultiplier = 0.2;
		canCarryBackPack = 1;
		oxygenCapacity = 80;
		accuracy = 2.3;
		sensitivity = 3;
		camouflage = 0.75;
		minFireTime = 3;
		primaryAmmoCoef = 10;
		secondaryAmmoCoef = 3;
		handgunAmmoCoef = 5;
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "OPTRE_UNSC_Army_Uniform_T_URB";

		Items[] = { "288th_Armor_Marine_OSHA","288th_CH252_Marine_OSHA","Shovel_Russian","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam" };

		linkedItems[] = {"288th_Armor_Marine_OSHA","288th_CH252_Marine_OSHA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_OSHA","288th_CH252_Marine_OSHA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"OPTRE_MA5C_AC","OPTRE_M6G","Binocular","Throw","Put" };
		respawnWeapons[] = {"OPTRE_MA5C_AC","OPTRE_M6G","Binocular","Throw","Put" };

		magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag" };
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag" };

		ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5C_AC","OPTRE_M6C_compensator","acc_flashlight_smg_01","288th_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer",30},{},""},{},{"OPTRE_M6G","","OPTRE_M6G",{"OPTRE_8Rnd_127x40_Mag",32},{},""},{"OPTRE_UNSC_Army_Uniform_T_URB",{{"288th_Biofoam",20},{"ACE_CableTie",5},{"OPTRE_8Rnd_127x40_Mag",3,32},{"288th_M12_Frag",5,1},{"288th_White_Smoke_Mag",5,1},{"288th_White_Smoke_Mag",2,1},{"288th_White_Smoke_Mag",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer",10,30}}},{"288th_Armor_Marine_Rifleman",{}},{},"288th_CH252_Marine","G_Balaclava_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"}};

		backpack = "";
		headgearList[] = { "288th_CH252_Marine_OSHA",1, };

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};
	class 288th_OSHA_Marine_H : 288th_OSHA_Marine{

		displayName = "OSHA High-Vis Marine";
		faction = "288th_UNSC";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "OPTRE_UNSC_Army_Uniform_T_URB";

		Items[] = { "288th_Armor_Marine_OSHA_H","288th_CH252_Marine_OSHA","Shovel_Russian","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam","288th_Biofoam" };

		linkedItems[] = {"288th_Armor_Marine_OSHA_H","288th_CH252_Marine_OSHA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};
		respawnlinkedItems[] = {"288th_Armor_Marine_OSHA","288th_CH252_Marine_OSHA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"};

		weapons[] = {"OPTRE_MA5C_AC","OPTRE_M6G","Binocular","Throw","Put" };
		respawnWeapons[] = {"OPTRE_MA5C_AC","OPTRE_M6G","Binocular","Throw","Put" };

		magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag" };
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag" };

		ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5C_AC","OPTRE_M6C_compensator","acc_flashlight_smg_01","288th_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer",30},{},""},{},{"OPTRE_M6G","","OPTRE_M6G",{"OPTRE_8Rnd_127x40_Mag",32},{},""},{"OPTRE_UNSC_Army_Uniform_T_URB",{{"288th_Biofoam",20},{"ACE_CableTie",5},{"OPTRE_8Rnd_127x40_Mag",3,32},{"288th_M12_Frag",5,1},{"288th_White_Smoke_Mag",5,1},{"288th_White_Smoke_Mag",2,1},{"288th_White_Smoke_Mag",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer",10,30}}},{"288th_Armor_Marine_Rifleman",{}},{},"288th_CH252_Marine","G_Balaclava_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","288th_Mk5_NVG"}};
		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		 

	};
	class 288th_Forklift : OPTRE_forklift{
		scope = 2;
		displayName = "S-2 Cargo Transporter";
		dlc = "288th";
		author = "Misriah 288 DJP";
		editorCategory = "288th_Eden";
		editorSubcategory = "288th_Eden_Memes";
		faction = "288th_UNSC";
		crew = "288th_OSHA_Marine_H";
		side = 2;
		textureList[] = { "colorgreen",1,"coloryellow",1,"colorgrey",1 };
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			init = "[_this select 0] call boxloader_tractor_fnc_palletjack_init;";
		};
		class VehicleTransport
		{
			class Cargo
			{
				dimensions[] = {"VTV_Cargo_Base","VTV_Cargo_Corner"};
				parachuteClass = "B_Parachute_02_F";
				canBeTransported = 1;
				parachuteHeightLimit = 10;
			};
			class Carrier
			{
				cargoBayDimensions[] = {"VTV_Carrier_Base","VTV_Carrier_Corner"};
				cargoSpacing[] = {0,0,0};
				cargoAlignment[] = {"front","center"};
				maxLoadMass = 4000;
				disableHeightLimit = 1;
				exits[] = {"VTV_exit_1"};
				unloadingInterval = 2;
				loadingDistance = 0;
				loadingAngle = 0;
				parachuteClassDefault = "B_Parachute_02_F";
				parachuteHeightLimitDefault = 10000;
			};
		};
	};

	//Bikes
	class V12_S1000RR2018_base : Car_F
	{
		class UserActions
		{
			class Flip
			{
				displayNameDefault = "Press SPACEBAR to flip";
				displayName = "Press SPACEBAR to flip";
				position = "";
				radius = 15;
				onlyForPlayer = 1;
				condition = "(alive this) AND !(canmove this)";
				statement = "this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 5]; this setVectorUp surfaceNormal getposATL this;";
			};
			class wheelief
			{
				displayName = "Wheeling (G)";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				condition = "player IN this && ((this animationSourcePhase 'rouarrier') < 0.5) && speed this > 20";
				shortcut = "landGear";
				showWindow = 0;
				statement = "this animateSource [""rouarrier"",1]";
			};
			class wheelie
			{
				displayName = "";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				condition = "player IN this && ((this animationSourcePhase 'rouarrier') >= 0.5)";
				shortcut = "commandBack";
				showWindow = 0;
				statement = "this animateSource [""rouarrier"",0]";
			};
		};
	};
	class V12_S1000RR2018_Rouge: V12_S1000RR2018_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "288th_UNSC";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.682353,0,0,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"V12_S1000RR2018\Data\rvmats\car.rvmat"};
	};
	class V12_S1000RR2018_Origine: V12_S1000RR2018_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "288th_UNSC";
		hiddenSelectionsTextures[] = {"V12_S1000RR2018\Data\textures\remap.paa"};
		hiddenSelectionsMaterials[] = {"V12_S1000RR2018\Data\rvmats\car.rvmat"};
	};
	class V12_S1000RR2018_BrosserD: V12_S1000RR2018_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "288th_UNSC";
	};
	class V12_S1000RR2018_VO: V12_S1000RR2018_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "288th_UNSC";
	};
	class V12_S1000RR2018_OR: V12_S1000RR2018_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "288th_UNSC";
	};

	//Bugs
	class WBK_Antlion_1;
	class WBK_Antlion_1_NoLeap;
	class WBK_Antlion_1_1: WBK_Antlion_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Antlion";
	};
	class WBK_Antlion_1_NoLeap_1: WBK_Antlion_1_NoLeap
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Antlion (No-Leap)";
	};
	class WBK_Antlion_1_0: WBK_Antlion_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
	};
	class WBK_Antlion_1_3: WBK_Antlion_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
	};
	class WBK_Antlion_1_NoLeap_2: WBK_Antlion_1_NoLeap
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Antlion (No-Leap)";
	};
	class WBK_Antlion_1_NoLeap_3: WBK_Antlion_1_NoLeap
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
		displayName = "Antlion (No-Leap)";
	};
	class WBK_AntlionGuardian_1;
	class WBK_AntlionGuardian_1_1: WBK_AntlionGuardian_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
	};
	class WBK_AntlionGuardian_1_2: WBK_AntlionGuardian_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
	};
	class WBK_AntlionGuardian_1_3: WBK_AntlionGuardian_1
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
	};
};

class CfgWeapons
{
	class ACE_fieldDressing;
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class Launcher_Base_F;
	class WeaponSlotsInfo;

	//Drone Kits
	class ED_1E_Kit: ItemCore
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		ACE_isMedicalItem = 0;
		//descriptionShort = "test";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 75;
			allowedSlots[] = {801,701,901};
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		class assembleInfo 
		{
			assembleTo = "288th_Ed_1E";
			base = "";
			displayName = "ED-1E";
			dissasembleTo[] = {""};
			primary = 1;
		};
		/*class assembleInfo
		{
			assembleTo = "288th_Ed_1d";
			base = "";
			displayName = "Prototype Edie";
			dissasembleTo = [];
			primary = 1;
		};*/
		ACE_isTool = 1;
		displayName = "[288th] ED-1E Kit";
		descriptionShort = "Deployable ED-1E";
		picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_B_UGV_02_demining_ca";
		//editorPreview = "\Cytech\Cytech_Gamemode_Assets\Cytech_Inventory\Cytech_Keycards\data\UI\Security_Keycard_CA.paa";
		model = "\a3\Soft_F_Enoch\UGV_02\UGV_02_F";
	};
	class ED_1F_Kit: ED_1E_Kit
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		class assembleInfo 
		{
			assembleTo = "288th_Ed_1F";
			base = "";
			displayName = "ED-1F";
			dissasembleTo[] = {""};
			primary = 1;
		};
		displayName = "[288th] ED-1F Kit";
		descriptionShort = "Deployable ED-1F";
	};
	class ED_1C_Kit: ED_1E_Kit
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		class assembleInfo 
		{
			assembleTo = "288th_Ed_1C";
			base = "";
			displayName = "ED-1C";
			dissasembleTo[] = {""};
			primary = 1;
		};
		displayName = "[288th] ED-1C Kit";
		descriptionShort = "Deployable ED-1C";
		model = "\A3\Supplies_F_Enoch\Bags\B_UGV_02_S_F.p3d";
		picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_B_UGV_02_science_ca";
	};
	class MQ_94_Kit: ED_1E_Kit
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		class assembleInfo 
		{
			assembleTo = "288th_MQ_94";
			base = "";
			displayName = "MQ-94";
			dissasembleTo[] = {""};
			primary = 1;
		};
		picture = "\288th_Vehicles\Icons\uav_img_5";
		displayName = "[288th] MQ-94 Kit";
		descriptionShort = "Deployable MQ-94";
		model = "\TCF_VEHICLES\MQ_94\MQ_94.p3d";
	};

	//Turret Kit
	class 288th_SRS99D_Turret_Kit: Launcher_Base_F
	{
		class ace_csw 
		{
			deploy = "288th_SRS99XT";
			deployTime = 4;
			pickupTime = 4;
			type = "mount";
		};
		/*class ACE_CSW {
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 4;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 4;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_m3Tripod = "prefix_hmg";
            };
        };*/
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[288th] SRS99XT Kit";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		modes = [];
		picture = "\OPTRE_weapons\sniper\icons\sniper.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 250;
		};
	};
	class 288th_SRS99D_Turret_High_Kit: 288th_SRS99D_Turret_Kit
	{
		class ace_csw 
		{
			deploy = "288th_SRS99XT_High";
			deployTime = 4;
			pickupTime = 4;
			type = "mount";
		};
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[288th] SRS99XT Kit (High)";
	};
};

class CfgGroups {
	class WEST 
	{
		class 288th_UNSC{
			name = "288th DJP";

			class Silver_Wolves {
				name = "Silver Wolves";

				class 288th_SW_Patrol {
					name = "Silver Wolves Patrol";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Grenadier";
					};
				};

				class 288th_SW_Fireteam {
					name = "Silver Wolves Fireteam";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
				};

				class 288th_SW_Squad {
					name = "Silver Wolves Squad";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "288th_SW_SL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_RTO";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Autorifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Grenadier";
					};
				};

				class 288th_SW_DT {
					name = "Silver Wolves Demo Team";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Grenadier";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Grenadier";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
				};

				class 288th_SW_BT {
					name = "Silver Wolves Breacher Team";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Breacher";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Breacher";
					};
				};

				class 288th_SW_HWT {
					name = "Silver Wolves Heavy Weapons Team";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Autorifleman";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Autorifleman";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Grenadier";
					};
				};

				class 288th_SW_MT {
					name = "Silver Wolves Medic Team";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
				};

				class 288th_SW_OW {
					name = "Silver Wolves Overwatch";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_RTO";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Marksman";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Marksman";
					};
				};

				class 288th_SW_FOB_Squad {
					name = "Silver Wolves FOB Squad";
					side = 1;
					faction = "288th_UNSC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "288th_SW_SL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "288th_SW_FL";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_RTO";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_RTO";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "288th_SW_Medic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Autorifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Autorifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Marksman";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Marksman";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit12 {
						position[] = {-30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_AT";
					};
					class Unit13 {
						position[] = {35,-35,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit14 {
						position[] = {-35,-35,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit15 {
						position[] = {40,-40,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
					class Unit16 {
						position[] = {-40,-40,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "288th_SW_Rifleman";
					};
				};

			};
		};
	};
	class East
	{
		class 288TH_Covenant
		{
			dlc = "288thDJP_Aux";
			name = "288th Covenant";
			class 288TH_Infantry_Sangheili
			{
				name = "Infantry (Sangheili)";
				class 288TH_Covenant_InfS_Section
				{
					name = "Section";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "288TH_Elite_Minor2";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288TH_Covenant_InfS_SectionAA
				{
					name = "AA Section";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAA";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288TH_Covenant_InfS_SectionAT
				{
					name = "AT Section";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAT";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288TH_Covenant_InfS_Patrol
				{
					name = "Patrol";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class 288TH_Covenant_InfS_Sniper
				{
					name = "Sniper Team";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps2";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class 288TH_Covenant_InfS_Recon
				{
					name = "Recon Team";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Ultra3";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288TH_Covenant_InfS_Command
				{
					name = "Command Team";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_Zealot";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class 288TH_Covenant_InfS_CmdSquad
				{
					name = "Command Squad";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_FieldMarshal";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_Zealot";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_HonorGuard";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_HonorGuard";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
			};
			class 288th_Infantry_COVMixed
			{
				name = "Infantry";
				class 288TH_COVMixed_InfS_Levy
				{
					name = "Levy";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288th_COVMixed_InfS_Section
				{
					name = "Section";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Minor";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Jackal_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Sharpshooter_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288th_COVMixed_InfS_Recon
				{
					name = "Recon Team";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "288TH_Elite_Ultra3";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "288TH_Elite_SpecOps";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
				};
				class 288th_COVMixed_InfS_Command
				{
					name = "Command Team";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.2;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_Zealot2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class 288th_COVMixed_InfS_File
				{
					name = "File";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_Zealot2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Major";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "OPTRE_Jackal_F";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "OPTRE_Jackal_F";
						rank = "PRIVATE";
						position[] = {-20,-5,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Sharpshooter_F";
						rank = "PRIVATE";
						position[] = {25,-5,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Sharpshooter_F";
						rank = "PRIVATE";
						position[] = {-25,-5,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAT";
						rank = "PRIVATE";
						position[] = {30,-5,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAA";
						rank = "PRIVATE";
						position[] = {-30,-5,0};
					};
				};
				class 288th_COVMixed_InfS_SOFile
				{
					name = "Spec Ops File";
					side = 0;
					faction = "288th_UNSC";
					rarityGroup = 0.3;
					dlc = "288thDJP_Aux";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_FC_Elite_Zealot2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "288TH_Elite_Ultra3";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps3_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Infantry2_F";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps_F";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps2_F";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "OPTRE_Jackal_SpecOps3_F";
						rank = "PRIVATE";
						position[] = {-20,-5,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Sharpshooter_F";
						rank = "PRIVATE";
						position[] = {25,-5,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "OPTRE_Jackal_Marksman_F";
						rank = "PRIVATE";
						position[] = {-25,-5,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAT";
						rank = "PRIVATE";
						position[] = {30,-5,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "288TH_Elite_MinorAA";
						rank = "PRIVATE";
						position[] = {-30,-5,0};
					};
				};
			};
		};
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class Pvt_Green
		{
			class FirstNames
			{
				A = " ";
			};
			class LastNames
			{
				0 = "Green";
			};
		};
	};
};
class CfgIdentities
{
	class Male01ENG;
	class Green01ENG: Male01ENG
	{
		name = "Green";
		nameSound = "";
		pitch = 1.5;
	};
};