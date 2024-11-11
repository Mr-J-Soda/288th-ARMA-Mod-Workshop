class CfgPatches
{
	class 288th_Weapons
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] =
		{

		};
		magazines[] =
		{

		};
		ammo[] =
		{

		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"288th_Core"
		};
	};
};

class CfgMagazineWells
{
	class 288th_M6C
	{
		CfgMagazines[] =
		{
			"288th_32Rnd_127x40",
			"288th_32Rnd_127x40_AP",
			"288th_32Rnd_127x40_APT",
			"288th_32Rnd_127x40_Mag_NARQ",
			"TCF_12Rnd_127x40_Mag_NARQ",
			"288th_32Rnd_127x40_EHP",
			"288th_Taser_Mag",
			"288th_Taser_Long_Mag"
			//"288th_127x40_Smoke"
		};
	};
	class 288th_Model_33
	{
		CfgMagazines[] =
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F"
		};
	};
	class 288th_Big_Iron
	{
		CfgMagazines[] =
		{
			"288th_Big_Iron_Mag"
		};
	};
	class 288th_HP
	{
		CfgMagazines[] =
		{
			"288th_8Rnd_127_HI_P"
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

class CfgRecoils
{
	288th_M6C_recoil[] = { 0,0,0,0.03,"0.036943*(2)","0.0134348*(4)",0.09,"0.019755*(2)","0.003056*(4)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(4)",0.12,"-0.001177*(2)","-0.000188*(4)",0.12,0,0 };
	288th_M6C_recoilProne[] = { 0,0,0,0.03,"0.036943*(1.5)","0.0134348*(2)",0.09,"0.019755*(1.5)","0.003056*(2)",0.12,0,0,0.18,"-0.003138*(1.5)","-0.0005*(2)",0.12,"-0.001177*(1.5)","-0.000188*(2)",0.12,0,0 };
	class Default;
	class recoil_288_pistols : Default
	{
		muzzleOuter[] =
		{
			"0.075*0.2",
			"0.64*1",
			"0.315*1",
			"0.21*1"
		};
		kickBack[] =
		{
			"0.015*1.4",
			"0.04*1.4"
		};
		temporary = "0.010*1.2";
		muzzleInner[] = { 0,0,0.050000001,0.050000001 };
		permanent = "0.05*0.4";
	};
};

class cfgWeapons
{
	//--------------------------------------------------------------------------------------------//

	// Weapons Base Classes

	//--------------------------------------------------------------------------------------------//

	// Weapons
	class Rifle_Base_F;
	class OPTRE_M6C;
	class TCF_M6GC;
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_02_F;
	class SC_Pistol_SSP9;
	class tcf_M6D;

	// Attachment Slots
	class WeaponSlotsInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class MuzzleSlot_556;
	class CowsSlot_Rail;
	class PointerSlot_Rail;
	class UnderBarrelSlot_Rail;
	class OPTRE_Riot_Shield_Icon_Attachments;
	class OPTRE_M6C_Riot_Shield;

	// Improved M6C Pistol
	class 288th_M6C : OPTRE_M6C
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th DJP] M6C/SOCOM Magnum";
		descriptionshort = "12.7mm Automatic Handgun";
		baseWeapon = "288th_M6C";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 5e-05;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 0.025;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto: Single
		{
			displayName = "FullAuto";
			autoFire = 1;
			textureType = "fullAuto";
			reloadTime = 0.075;
		};
		magazines[] =
		{
			"288th_32Rnd_127x40",
			"288th_32Rnd_127x40_AP",
			"288th_32Rnd_127x40_APT",
			"288th_32Rnd_127x40_Mag_NARQ",
			"TCF_12Rnd_127x40_Mag_NARQ"
		};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons_Pistols\M6C\data\M6C_M6C_co.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M6C_compensator";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 10;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optre_m7_sight",
					"288th_M7_Sight",
					"288th_M6C_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_M12_Optic",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{

				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};
	class 288th_M6C_Riot_Shield: OPTRE_M6C_Riot_Shield
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		baseWeapon = "288th_M6C_Riot_Shield";
		displayName = "[288th DJP] Riot Shield (M6C)";
		model = "\OPTRE_Weapons\RiotShield\riotshield_M6C.p3d";
		hiddenSelections[] = {"camoShield","camoWindshield","camo1"};
		hiddenSelectionsTextures[] = {"OPTRE_Weapons\RiotShield\data\Body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\optre_weapons\pistol\data\m6c_m6c_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_Weapons\RiotShield\data\body.rvmat","OPTRE_Weapons\riotshield\data\glass.rvmat","optre_weapons\pistol\data\m6c_m6c.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\m6c_human.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\spartan\m6c_spartan.rtm"};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 5e-05;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 0.025;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto: Single
		{
			displayName = "FullAuto";
			autoFire = 1;
			textureType = "fullAuto";
			reloadTime = 0.075;
		};
		magazines[] =
		{
			"288th_32Rnd_127x40",
			"288th_32Rnd_127x40_AP",
			"288th_32Rnd_127x40_APT",
			"288th_32Rnd_127x40_Mag_NARQ",
			"TCF_12Rnd_127x40_Mag_NARQ"
		};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye2"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = {180,180,180};
			ambient[] = {0.9,0.9,0.9};
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = {0};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M6C_compensator";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Laser";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optre_m7_sight",
					"288th_M7_Sight",
					"288th_M6C_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_M12_Optic",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot: OPTRE_Riot_Shield_Icon_Attachments{};
		};
	};
	class 288th_M6D_PDWS : tcf_M6D
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th DJP] M6D PDWS";
		descriptionshort = "12.7mm High Power Handgun";
		baseWeapon = "288th_M6D_PDWS";
		maxZeroing = 1000;
		magazines[] ={"288th_8Rnd_127_HI_P"};
		magazineWell[] = { 288th_HP };
		visionMode[] ={"Normal","NVG"};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolSmart";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolSmart";
		Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=8;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "tcf_m6D_Smartlink";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 15;
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"tcf_m6D_Smartlink"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"acc_flashlight_pistol",
					"tcf_m6_flashlight_IR"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{

				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};
	// 288th Model 33
	class 288th_Model_33 : hgun_Pistol_heavy_02_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] Model 33";
		descriptionshort = "Special Oni Derived Armament Model 33";
		baseWeapon = "288th_Model_33";
		cursor = "OPTRE_M6G";
		pictureWire = "\TCF_WEAPONRY\Weapons\Handguns\M33\V_M33_HUD_CA";
		HUD_BulletInARows = 1;
		HUD_TotalPosibleBullet = 6;
		magazines[] =
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F"
		};
		magazineWell[] = { 288th_Model_33 };
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M6C_Scope";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M6G_Flashlight";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 10;
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"optre_m7_sight",
					"288th_M7_Sight",
					"optre_m6c_scope",
					"288th_M6C_Scope",
					"OPTRE_M6G_Scope",
					"OPTRE_M12_Optic",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{

				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	// 288th Big Iron
	class 288th_Big_Iron : hgun_Pistol_heavy_02_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] Big Iron";
		descriptionshort = "A big iron on his hip";
		baseWeapon = "288th_Big_Iron";
		magazines[] =
		{
			288th_Big_Iron_Mag
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\Data\Weapons\M6_Pistols\Big_Iron\Big_Iron.paa"
		};
		magazineWell[] = { 288th_Big_Iron };
		pictureWire = "\TCF_WEAPONRY\Weapons\Handguns\M33\V_M33_HUD_CA";
		cursor = "OPTRE_M6C";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M6C_Scope";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 10;
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"optre_m6c_scope",
					"288th_M6C_Scope",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{

				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	// 288th SSP9
	class 288th_SSP9 : SC_Pistol_SSP9
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th DJP] Auto SSP9";
		descriptionshort = "12.7mm Automatic Handgun";
		baseWeapon = "288th_SSP9";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		cursor = "OPTRE_M6C";
		class FlashLight
		{
			//color[]={170,60,80};
			//ambient[]={0.89999998,0.81,0.69999999};
			color[] = { 80,80,80 };
			ambient[] = { 0.81,0.81,0.81 };
			intensity = 130;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 6;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.12;
			flareMaxDistance = 50;
			dayLight = 1;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = { 0 };
		};
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 5e-05;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 0.025;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto : Single
		{
			displayName = "FullAuto";
			autoFire = 1;
			textureType = "fullAuto";
			reloadTime = 0.075;
		};
		magazines[] =
		{
			"288th_32Rnd_127x40",
			"288th_32Rnd_127x40_AP",
			"288th_32Rnd_127x40_APT",
			"288th_32Rnd_127x40_Mag_NARQ",
			"TCF_12Rnd_127x40_Mag_NARQ"
		};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
		class WeaponSlotsInfo
		{
			mass = 10;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"Invisable_Supresser_288th",
					"Ace_muzzle_mzls_smg_01",
					"optre_ma5suppressor"
				};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"288th_M6C_Scope",
					"optre_m6c_scope",
					"SC_Reflex_R_Blue",
					"SC_Reflex_C_Blue",
					"SC_Reflex_C_Red",
					"SC_Reflex_C1_Red",
					"SC_Reflex_R_Green",
					"SC_Reflex_R_Yellow",
					"Optre_Evo_sight"
				};
				iconScale = 0.1;
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SC_Reflex_C_Blue";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "";
			};
		};
	};

	// 288th FNX-99 Tactical
	class 288th_FNX_99_Tactical: hgun_Pistol_heavy_01_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		baseWeapon = "288th_FNX_99_Tactical";
		magazines[] ={"288th_32Rnd_127x40","288th_32Rnd_127x40_AP","288th_32Rnd_127x40_APT","288th_32Rnd_127x40_Mag_NARQ","TCF_12Rnd_127x40_Mag_NARQ"};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
		displayname = "[288th DJP] FNX-99 Tactical";
		descriptionshort = "12.7mm Automatic Handgun";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M6_Pistols\Pistol_Heavy_01_ggg_CO"};
		picture = "a3\Weapons_F_Enoch\Pistols\Pistol_Heavy_01\Data\UI\gear_pistol_heavy_01_green_X_ca.paa";
		modes[] = { "Single","FullAuto" };
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 5e-05;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 0.025;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto: Single
		{
			displayName = "FullAuto";
			autoFire = 1;
			textureType = "fullAuto";
			reloadTime = 0.075;
		};
		inertia = 0.3;
		aimTransitionSpeed = 1.5;
		dexterity = 1.7;
		initSpeed = 380;
		maxZeroing = 100;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "Optre_Recon_Sight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ace_muzzle_mzls_smg_01";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 20;
			holsterScale = 0.95;
			class MuzzleSlot : MuzzleSlot_556
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"ace_muzzle_mzls_smg_01",
					"optre_ma5suppressor",
					"Invisable_Supresser_288th"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"288th_M6C_Scope",
					"Optre_Evo_sight"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = {0.47,0.55};
				iconScale = 0.3;
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"acc_flashlight_pistol",
					"acc_pointer_IR"
				};
			};
		};
	};
};
