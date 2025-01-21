class CfgPatches
{
	class 288th_Fixes
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"288th_Core"
		};
	};
};

class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class OPTRE_M73_Smartlink;
	class OPTRE_M6C_Scope;
	class optic_Aco;
	class optic_Hamr;
	class optic_ico_01_black_f;
	class optre_srs99_scope;
	class optic_AMS;
	class muzzle_snds_H;
	class InventoryMuzzleItem_Base_F;
	class OPTRE_M45_Flashlight;

	class InventoryItem_Base_F;
	class ItemCore;
	class U_BasicBody;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
		uniformType = "Neopren";
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			uniformType = "Neopren";
			mass = 0;
		};
	};

	//--------------------------------------------------------------------------------------------//
	
	// FZ:SO Scopes Fix

	//--------------------------------------------------------------------------------------------//

	class 288th_M73_Smartlink : OPTRE_M73_Smartlink
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M73 Smart Link Scope";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons\MG\M73_SmartLink";
			class OpticsModes
			{
				class M73_IS_v2
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						""
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 0.55000001;
					opticsZoomInit = 0.55000001;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class M73_Scope_v2 : M73_IS_v2
				{
					opticsID = 2;
					useModelOptics = 1;
					memoryPointCamera = "opticView2";
					opticsZoomMin = 0.15575001;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discreteinitIndex = 0;
					discretefov[] = { 0.0623,0.046725001,0.03115,0.015575 };
					discreteDistance[] = { 100,300,400,500,600,700,800,900,1000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_M6C_Scope : OPTRE_M6C_Scope
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M6C SmartLink Scope";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons_Pistols\M6C\m6c_scope.p3d";
			inertia = 0.1;
			class OpticsModes
			{
				class OPTRE_M6C_BUIS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						""
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticView2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class OPTRE_M6C_BUISZoom : OPTRE_M6C_BUIS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.15575001;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discretefov[] = { 0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 25,50,75,100,150,200,250,300,350,400 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_MA5_SmartLink : optic_Aco
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] MA5 Smart Link Optic";
		model = "\OPTRE_Weapons\AR\MA5_smartlink";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons\AR\MA5_smartlink";
			inertia = 0.1;
			class OpticsModes
			{
				class OPTRE_SL_Legacy
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						""
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class HAMR_Zoom : OPTRE_SL_Legacy
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.15575001;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_MA5_SmartLink_Grey : optic_Aco
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] MA5 Smart Link Optic (Grey)";
		model = "\OPTRE_Weapons\AR\MA5C_smartlink";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons\AR\MA5C_smartlink";
			inertia = 0.1;
			class OpticsModes
			{
				class OPTRE_SL_Legacy
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						""
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class HAMR_Zoom : OPTRE_SL_Legacy
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.15575001;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_M7_Sight : optic_Aco
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M7 Reflex with Smartlink";
		model = "\OPTRE_Weapons\SMG\m7_sights";
		picture = "\OPTRE_weapons\smg\icons\scope";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class M7SLRDS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] =
					{
						""
					};
				};
				class M7_Zoom : M7SLRDS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.015575;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_M12_Sight : optic_Aco
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M12 Reflex with Smartlink";
		picture = "\OPTRE_weapons\smg\icons\m12_scope.paa";
		model = "\OPTRE_Weapons\smg\m12_holo.p3d";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class M7SLRDS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] =
					{
						""
					};
				};
				class M7_Zoom : M7SLRDS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.015575;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_Hamr_Scope : optic_Hamr
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Mark 4 HAMR with Smartlink";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F_Beta\acc\acco_hamr_f.p3d";
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
				class Hamr2Scope : Hamr2Collimator
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.15575001;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discretefov[] = { 0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_SRS99M_Scope : optre_srs99_scope
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] SRS99M-S1 with Smartlink";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class M15SLRDS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] =
					{
						""
					};
				};
				class M15_Zoom : M15SLRDS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.015575;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class 288th_SS_6_Scope : optic_AMS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] SS-6 with Smartlink";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class M15SLRDS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] =
					{
						""
					};
				};
				class M15_Zoom : M15SLRDS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.015575;
					opticsZoomMax = 0.1246;
					opticsZoomInit = 0.1246;
					discretefov[] = { 0.1246,0.0623,0.046725001,0.03115,0.015575 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 2000;
					memoryPointCamera = "opticView2";
					modelOptics[] =
					{
						"\288th_Fixes\FZSOScopeFix\Optic\BR_Optic"
					};
					visionMode[] = {};
				};
			};
		};
	};
	class Invisable_Supresser_288th : muzzle_snds_H
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Invisable Supresser";
		inertia = 0.1;
		model = "\A3\weapons_f\empty";
		class ItemInfo : InventoryMuzzleItem_Base_F
		{
			mass = 1;
			class MagazineCoef
			{
				initSpeed = 1.00;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.05;
				audibleFire = 0.05;
				visibleFireTime = 0.05;
				audibleFireTime = 0.05;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = 0.8;
				artilleryDispersionCoef = 1.0;
				fireLightCoef = 0.1;
				recoilCoef = 1.0;
				recoilProneCoef = 1.0;
				minRangeCoef = 1.0;
				minRangeProbabCoef = 1.0;
				midRangeCoef = 1.0;
				midRangeProbabCoef = 1.0;
				maxRangeCoef = 1.0;
				maxRangeProbabCoef = 1.0;
			};
		};
	};

	class 288th_Invisable_Flashlight : OPTRE_M45_Flashlight
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Invisable Flashlight";
		inertia = 0.1;
		model = "\A3\weapons_f\empty";
	};
	//--------------------------------------------------------------------------------------------//
};

class SlotInfo;
class CowsSlot : SlotInfo
{
	compatibleItems[] += {"288th_M73_Smartlink", "288th_M6C_Scope", "288th_M7_Sight", "288th_M12_Sight", "288th_Hamr_Scope", "288th_SRS99M_Scope", "288th_SS_6_Scope", "OPTRE_M7_Sight", "OPTRE_HMG38_CarryHandle", "OPTRE_M12_Optic", "OPTRE_M12_Optic_Red", "OPTRE_M12_Optic_Green", "OPTRE_M6C_Scope", "OPTRE_M6G_Scope", "Optre_Recon_Sight", "Optre_Recon_Sight_Red", "Optre_Recon_Sight_Green", "Optre_Recon_Sight_Desert", "Optre_Recon_Sight_UNSC", "Optre_Recon_Sight_Snow", "OPTRE_BR45_Scope", "OPTRE_BR55HB_Scope", "OPTRE_BR55HB_Scope_Grey", "OPTRE_BMR_Scope", "OPTRE_M392_Scope", "OPTRE_M393_Scope", "OPTRE_M393_ACOG", "OPTRE_M393_EOTECH", "OPTRE_SRM_Sight", "OPTRE_SRS99C_Scope", "OPTRE_SRS99_Scope", "OPTRE_M73_SmartLink", "OPTRE_MA5_SmartLink", "OPTRE_MA5C_SmartLink", "OPTRE_MA5_BUIS"};
};
class CowsSlot_Rail : CowsSlot
{
	class compatibleItems
	{
		288th_M73_Smartlink = 1;
		288th_M6C_Scope = 1;
		288th_M7_Sight = 1;
		288th_M12_Sight = 1;
		288th_Hamr_Scope = 1;
		288th_SRS99M_Scope = 1;
		288th_SS_6_Scope = 1;
		OPTRE_M7_Sight = 1;
		OPTRE_HMG38_CarryHandle = 1;
		OPTRE_M12_Optic = 1;
		OPTRE_M12_Optic_Red = 1;
		OPTRE_M12_Optic_Green = 1;
		OPTRE_M6C_Scope = 1;
		OPTRE_M6G_Scope = 1;
		Optre_Recon_Sight = 1;
		Optre_Recon_Sight_Red = 1;
		Optre_Recon_Sight_Green = 1;
		Optre_Recon_Sight_Desert = 1;
		Optre_Recon_Sight_UNSC = 1;
		Optre_Recon_Sight_Snow = 1;
		OPTRE_M73_SmartLink = 1;
		OPTRE_MA5_SmartLink = 1;
		OPTRE_MA5C_SmartLink = 1;
		OPTRE_MA5_BUIS = 1;
		OPTRE_BR45_Scope = 1;
		OPTRE_BR55HB_Scope = 1;
		OPTRE_BR55HB_Scope_Grey = 1;
		OPTRE_BMR_Scope = 1;
		OPTRE_M392_Scope = 1;
		OPTRE_M393_Scope = 1;
		OPTRE_M393_ACOG = 1;
		OPTRE_M393_EOTECH = 1;
		OPTRE_SRM_Sight = 1;
		OPTRE_SRS99C_Scope = 1;
		OPTRE_SRS99_Scope = 1;
	};
};

class CfgMarkers
{
	class MEU1st_SA
    {
        name="[Halo] 1st MEU";
        icon="Halo_MapMarkers_SA\icons\markers\1stMeu_SA.paa";
        color[]={1,1,1,1};
        size=42;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class Hastati_SA
    {
        name="[Halo] Hastati Company";
        icon="Halo_MapMarkers_SA\icons\markers\Hastati_SA.paa";
        color[]={1,1,1,1};
        size=42;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class Rhino_SA
    {
        name="[Halo] Rhino Company";
        icon="Halo_MapMarkers_SA\icons\markers\RhinoC_SA.paa";
        color[]={0,0,0,0};
        size=42;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class SpecWar13_SA
    {
        name="[Halo] Special Warfare Group 13";
        icon="Halo_MapMarkers_SA\icons\markers\SpecWar13_SA.paa";
        color[]={0,0,0,0};
        size=42;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class STB5th_SA
    {
        name="[Halo] 5th STB";
        icon="Halo_MapMarkers_SA\icons\markers\5th_STB_SA.paa";
        color[]={0,0,0,0};
        size=50;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class fLEET39TH_SA
    {
        name="[Halo] 39th Fleet";
        icon="Halo_MapMarkers_SA\icons\markers\39th_Fleet_Shield_blacked.paa";
        color[]={0,0,0,0};
        size=50;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class Spartan_SA
    {
        name="[Halo] Spartan Operations";
        icon="Halo_MapMarkers_SA\icons\markers\Spartan_SA.paa";
        color[]={0,0,0,1};
        size=40;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };

    class WhiteTeam_SA
    {
        name="[Halo] SII White Team";
        icon="Halo_MapMarkers_SA\icons\markers\WhiteTeam_SA.paa";
        color[]={0,0,0,1};
        size=40;
        shadow = 0;
        scope = 1;
		scopeCurator = 1;
        markerClass = "Halo_map_markers_Facs_SA";
    };
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic
		{
			speed = "1.05/(2/3)";
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5/(1/3)";
};