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
	class 288th_Soda
	{
		CfgMagazines[] =
		{
			"288th_Stanag",
			"288th_Plasma_Red_Mag",
			"288th_Plasma_Orange_Mag",
			"288th_Plasma_Yellow_Mag",
			"288th_Plasma_Green_Mag",
			"288th_Plasma_Blue_Mag",
			"288th_Plasma_Purple_Mag",
			"288th_Plasma_Pink_Mag",
			"288th_Plasma_White_Mag",
			"288th_Plasma_Black_Mag",
			"288th_Plasma_Soda_Mag",
			"288th_Soda_Buckshot",
			"288th_EMP",
			"288th_Incendiary_Mag",
			"288th_EHP_Mag",
			"288th_testmag"
		};
	};
	class 288th_Soda_Rail
	{
		CfgMagazines[] =
		{
			"288th_Railgun_Mag_1"
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

class cfgWeapons
{
	class 288th_M28A3_BR;
	class 288th_Railgun;
	class 288th_M6C;
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

	class 288th_Railgun_Underbarrel : 288th_M6C
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		canShootInWater = 1;
		dexterity = 2.2;
		audibleFire = 0.1;
		dispersion = 0;
		autoReload = true;
		magazineReloadTime = 2;
		magazines[] =
		{
			"288th_Railgun_Mag_1"
		};
		magazineWell[] = { 288th_Soda_Rail };
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\SRS99\M99A2S3.OGG",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\SRS99\M99A2S3.OGG",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			class CompSound : BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\SRS99\M99A2S3.OGG",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 0;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 15;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 2;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
	};
	class 288th_Soda_Beowulf : 288th_M28A3_BR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		dexterity = 2.2;
		audibleFire = 0.1;
		dispersion = 0;
		distanceZoomMax = 1000;
		distanceZoomMin = 100;
		/*initSpeed = 30;*/
		//autoReload = true;
		cursor = "test";
		recoil = "recoil_M7V_SMG";
		displayName = "[288th DJP] Soda's M28A3";
		descriptionshort = "Special Oni Derived Armament";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\Soda_Rifle\V_MA4_CO.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co"};
		baseWeapon = "288th_Soda_Beowulf";
		magazines[] =
		{
			"288th_Plasma_Soda_Mag",
			"288th_Soda_Buckshot"
		};
		magazineWell[] = { 288th_Soda };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		magazineReloadTime = 3.25;
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		pictureMjolnirHud = "288th_Weapons\Data\Weapons\AR_Rifles\V_M28_HUD_CA.paa";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 200;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M12_Sight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "Invisable_Supresser_288th";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "Invisable_Supresser_288th","optre_ma5suppressor","muzzle_snds_L" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_M7_Sight","288th_M12_Sight","optre_br55hb_scope","TCF_REC_holo","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green", };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_M12_Laser","acc_flashlight","acc_pointer_ir" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_f_blk" };
			};
		};
		class secondary : 288th_Railgun_Underbarrel
		{
			displayName = "Experimental Railgun Modification";
			modes[] =
			{
				"Single"
			};
		};
		ACE_barrelTwist = 270;
		ACE_barrelLength = 578.6;
		ace_overheating_barrelMass = 5;
		ACE_overheating_mrbs = 12000;
		ACE_overheating_slowdownFactor = 0.8;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	};
};