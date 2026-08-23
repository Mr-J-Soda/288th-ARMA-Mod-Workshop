class CfgPatches
{
	class Kio_Kkiv_2035
	{
		name = "Kiory's Anti-materiel Rifle - 25 KKiv 2035";
		author = "Kiory";
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F","A3_Anims_F_Exp_A","A3_Data_F","A3_Weapons_F_Gamma","A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Box_KKiv_2035","Weapon_krifle_KKiv_HEDP","Weapon_krifle_KKiv_APFSDS"};
		magazines[] = {"KKiv_Mag_HEDP","KKiv_Mag_APFSDS"};
		weapons[] = {"kio_KKiv_2035"};
		ammo[] = {"Kkiv_25mm_Ball","Kkiv_25mm_Ball_APFSDS"};
	};
};
class CfgSoundShaders
{
	class KKiv_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closure_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closure_02",1}};
		range = 5;
		volume = 0.4466836;
	};
	class KKiv_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",1}};
		volume = 2.0;
		range = 1500;
		rangeCurve = "closeShotCurve";
	};
	class KKiv_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class KKiv_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{200,0.3},{800,0.3}};
		limitation = 1;
	};
	class KKiv_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class KKiv_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class KKiv_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class KKiv_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"KKiv_Closure_SoundShader","KKiv_closeShot_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 2;
	};
	class Rifle_Tail_Base_SoundSet;
	class KKiv_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"KKiv_tailTrees_SoundShader","KKiv_tailForest_SoundShader","KKiv_tailMeadows_SoundShader","KKiv_tailHouses_SoundShader"};
		volumeFactor = 0.7;
	};
	class Rifle_InteriorTail_Base_SoundSet;
	class KKiv_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"KKiv_tailInterior_SoundShader"};
		volumeFactor = 0.7;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class BaseSoundModeType;
	class StandardSound: BaseSoundModeType
	{
		soundSetShot[] = {"KKiv_Shot_SoundSet","KKiv_Tail_SoundSet","KKiv_InteriorTail_SoundSet"};
	};
	class UGL_F;
	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class 288th_KKiv: GM6_base_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		weaponpoolavailable = 1;
		BaseWeapon = "288th_KKiv";
		maxZeroing = 2500;
		_generalMacro = "";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\Kio_KKiv_2035\Kkiv_2035.p3d";
		reloadAction = "GestureReload_KKiv";
		reloadMagazineSound[] = {"Kio_KKiv_2035\Data\Sounds\Reload_KKiv",2,1.1,10};
		handAnim[] = {"OFP2_ManSkeleton","\Kio_KKiv_2035\Data\Anims\Hand_Anim.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 480;
			class MuzzleSlot{};
			/*class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.55,0.25};
				iconScale = 0.2;
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_pointer_IR","acc_flashlight"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.52,0.33};
				iconScale = 0.25;
			};
			class UnderBarrelSlot
			{
				iconPinpoint = "Bottom";
				iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] = {"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"};
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};*/
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				delete compatibleItems;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.52,0.33};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPinpoint = "Bottom";
				iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				delete compatibleItems;
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.55,0.25};
				iconScale = 0.2;
			};
		};
		magazines[] = {"KKiv_Mag_APFSDS","KKiv_Mag_HEDP"};
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		class Single: Mode_SemiAuto
		{
			dispersion = 0;
			soundContinuous = 0;
			reloadTime = 0.4;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 800;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.25;
			/*minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;*/
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"KKiv_Shot_SoundSet","KKiv_Tail_SoundSet","KKiv_InteriorTail_SoundSet"};
			};
			class SilencedSound;
		};
		class ItemInfo
		{
			priority = 1;
		};
		displayName = "[288th] 25 KKiv";
		picture = "\Kio_KKiv_2035\Data\Gear\gear_KKiv_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		class Library
		{
			libTextDesc = "The 25 KKiv 2035 rifle is a 25mm payload rifle that is capable of firing either 25mm High-Explosive Dual Purpose (HEDP), or Armour-Piercing Fin-Stabilized Discarding-Sabot (APFSDS) round with high degree of accuracy of up to 1km and beyond. The rifle is designed for sabotage and long range operations where you need the accuracy of a 12.7mm or comparable caliber, with the capabilities of a rocket launcher, without the launch signature of one.";
		};
		descriptionShort = "25mm Rifle, Model 2035";
		/*ACE_barrelTwist = 375;
		ACE_barrelLength = 750;
		ACE_twistDirection = 1;*/
	};
};
class cfgMagazines
{
	class Default;
	class KKiv_Mag_HEDP: Default
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		weaponpoolavailable = 1;
		picture = "\Kio_KKiv_2035\Data\Gear\gear_KKiv_mag1_x_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		ace_arsenal_hide = -1;
		value = 1;
		displayName = "[288th] 25mm HEDP";
		model = "\Kio_KKiv_2035\Kkiv_Magazine.p3d";
		ammo = "Kkiv_25mm_Ball";
		descriptionShort = "25mm caseless HEDP.";
		displaynameshort = "25mm HEDP";
		class Library
		{
			libTextDesc = "25mm HEDP";
		};
		count = 1;
		initSpeed = 900;
		mass = 2.5;
	};
	class KKiv_Mag_APFSDS: KKiv_Mag_HEDP
	{
		weaponpoolavailable = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		ace_arsenal_hide = -1;
		picture = "\Kio_KKiv_2035\Data\Gear\gear_KKiv_mag2_x_ca.paa";
		displayName = "[288th] 25mm APFSDS";
		model = "\Kio_KKiv_2035\Kkiv_Magazine.p3d";
		ammo = "Kkiv_25mm_Ball_APFSDS";
		descriptionShort = "25mm caseless APFSDS";
		displaynameshort = "25mm APFSDS";
		class Library
		{
			libTextDesc = "25mm APFSDS";
		};
		count = 1;
	};
};
class cfgAmmo
{
	class BulletBase;
	class Kkiv_25mm_Ball: BulletBase
	{
		hit = 60;
		cartridge = "";
		deflectionSlowDown = 0;
		deflecting = 0;
		indirectHit = 45;
		indirectHitRange = 1.8;
		explosive = 1;
		caliber = 3.8;
		cost = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		typicalSpeed = 950;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00076;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(25*0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 25;
			duration = "((round (25^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(25^0.25)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		/*ACE_caliber = 20;
		ACE_bulletLength = 96;
		ACE_bulletMass = 110;
		ACE_dragModel = 7;
		ACE_muzzleVelocityVariationSD = 1;
		airFriction = -0.0006;
		ACE_ballisticCoefficient = 0.6;
		initSpeed = 970;
		ace_ammo_type = "HE";*/
	};
	class B_30mm_APFSDS;
	class Kkiv_25mm_Ball_APFSDS: B_30mm_APFSDS
	{
		cartridge = "";
		hit = 200;
		indirectHit = 8;
		indirectHitRange = 0.2;
		caliber = 6;
		airFriction = -0.0001;
		typicalSpeed = 1320;
		cost = 75;
		tracerEndTime = 1.5;
		irLock = 0;
		/*ACE_caliber = 20;
		ACE_bulletLength = 96;
		ACE_bulletMass = 115;
		ACE_dragModel = 7;
		ACE_muzzleVelocityVariationSD = 1;
		airFriction = -0.0006;
		ACE_ballisticCoefficient = 0.75;
		initSpeed = 1050;
		ace_ammo_type = "AP";*/
	};
};
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReload_KKiv[] = {"GestureReload_KKiv","Gesture"};
		GestureReloadProne_KKiv[] = {"GestureReloadProne_KKiv","Gesture"};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReload_KKiv[] = {"GestureReload_KKiv","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReload_KKiv[] = {"GestureReloadProne_KKiv","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_KKiv[] = {"GestureReload_KKiv_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_KKiv[] = {"GestureReload_KKiv_Context","Gesture"};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_KKiv[] = {"GestureReload_KKiv_ContextAnimDrive","Gesture"};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReload_KKiv[] = {"RifleReloadDeployed_KKiv","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReload_KKiv: GestureReloadBase
		{
			headBobStrength = 0.7;
			headBobMode = 2;
			file = "\Kio_KKiv_2035\Data\Anims\Kkiv_Reload_Standing.rtm";
			speed = 0.2;
			rightHandIKCurve[] = {0,1,0.05,1,0.05625,0,0.9875,0,0.99375,1};
			leftHandIKCurve[] = {1};
			weaponIK = 1;
			mask = "handsWeapon";
		};
		class GestureReloadProne_KKiv: Default
		{
			headBobStrength = 0.7;
			headBobMode = 2;
			file = "\Kio_KKiv_2035\Data\Anims\Kkiv_Reload_Prone.rtm";
			looped = 0;
			speed = 0.2;
			mask = "handsWeapon";
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			rightHandIKCurve[] = {0,1,0.05,1,0.05625,0,0.9875,0,0.99375,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1};
			InterpolateFrom[] = {"AmovPpneMstpSrasWrflDnon",0.02};
		};
		class GestureReload_KKiv_Context: GestureReload_KKiv
		{
			mask = "handsWeapon_context";
		};
		class GestureReload_KKiv_ContextAnimDrive: GestureReload_KKiv_Context
		{
			mask = "handsWeapon_contextAnimDrive";
		};
		class RifleReloadDeployed_KKiv: GestureReload_KKiv
		{
			file = "\Kio_KKiv_2035\Data\Anims\Kkiv_Reload_Prone.rtm";
		};
	};
};