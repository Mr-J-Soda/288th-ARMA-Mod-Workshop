class CfgPatches
{
	class 288th_Weapons
	{
		author = "Festive Neira / Misriah 288";
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
	class 288th_Rail
	{
		CfgMagazines[] =
		{
			"288th_Railgun_Mag",
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
	//--------------------------------------------------------------------------------------------//

	// Weapons Base Classes

	//--------------------------------------------------------------------------------------------//

	// Weapons
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class OPTRE_FC_Railgun;
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

	// 288th Railgun
	class 288th_Railgun : OPTRE_FC_Railgun
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] ARC-920 Railgun";
		descriptionshort = "Special Oni Derived Armament ARC-920 Railgun";
		baseWeapon = "288th_Railgun";
		magazines[] =
		{
			"288th_Railgun_Mag"
		};
		magazineWell[] = { 288th_Rail };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\data\Weapons\Railgun\288th_Railgun"
		};
		modes[] = { "Single","FullAuto" };
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
				begin1[] = { "\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000 };
				soundBegin[] = { "begin1",2.0 };
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
			reloadTime = 1.5;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			dispersion = 5e-05;
			soundContinuous = 0;
			autoReload = 1;
			ballisticsComputer = 0;
			canLock = 0;
			autoFire = 1;
			aiRateOfFire = 15;
			aiRateOfFireDistance = 500;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000 };
				soundBegin[] = { "begin1",2.0 };
			};
			reloadTime = 1;
		};
	};
};
