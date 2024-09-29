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
	class 288th_M41
	{
		CfgMagazines[] =
		{
			"288th_M41_Twin_HEAT_SACLOS",
			"288th_M41_Twin_HE",
			"288th_M41_Twin_HEAT_SALH",
			"288th_M41_Twin_HEAT_Thermal",
			"288th_M41_Twin_Flame",
			"OPTRE_M41_Twin_Smoke_W"
		};
	};
	class 288th_Cricket
	{
		CfgMagazines[] =
		{
			"288th_M57_Cricket_SACLOS",
			"288th_M57_Cricket_HE",
			"288th_M57_Cricket_SALH",
			"288th_M57_Cricket_Thermal",
			"288th_M57_Cricket_Flame"
		};
	};
};

class cfgWeapons
{
	class OPTRE_M41_SSR;
	class TCF_M57_Pilum_b;
	class OPAEX_SpartanLaser;
	class TCF_M96_LAW;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class Mode_SemiAuto;


	// Improved M41 Rocket Launchers
	class 288th_M41_Launcher : OPTRE_M41_SSR
	{
		canLock = 2;
		weaponLockDelay = 2;
		weaponLockSystem = 2;
		cmImmunity = 0.75;
		lockAcquire = 1;
		magazines[] ={"288th_M41_Twin_HEAT_SACLOS"};
		magazineWell[] ={"288th_M41"};
		modes[] ={"Single"};
		lockingTargetSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.316228,
			1
		};
		lockedTargetSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.316228,
			2.5
		};
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th DJP] M41 SSR MAV/AW";
		descriptionshort = "AT/AA Handheld ATGM/SAM Launcher";
		baseWeapon = "288th_M41_Launcher";
		picture = "\OPTRE_weapons\rockets\icons\launcher.paa";
		model = "\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"
		};
		modelOptics = "\OPTRE_Weapons\Rockets\M41_Optic.p3d";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Launchers\Double.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_RL";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_RL";
		Eye = "OPTRE_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 2;
		class WeaponSlotsInfo
		{
			mass = 50;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzleEnd2";
				directionName = "muzzlePos2";
				effectName = "RocketBackEffectsNLAWNT";
			};
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] =
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.041999999;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = { 0,1 };
				opticsDisablePeripherialVision = 1;
				discretefov[] = { 0.125,0.0625,0.041999999 };
				discreteInitIndex = 0;
			};
		};
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;
		ace_reloadlaunchers_enabled = 1;
	};

	// Improved M57 Cricket
	class 288th_M57_Launcher : TCF_M57_Pilum_b
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th DJP] M57 'Cricket'";
		descriptionshort = "Light AT/AA Launcher";
		baseWeapon = "288th_M57_Launcher";
		cmImmunity = 0.95;
		lockAcquire = 1;
		magazineWell[] = { 288th_Cricket };
		magazines[] =
		{
			"288th_M57_Cricket_SACLOS",
			"288th_M57_Cricket_HE",
			"288th_M57_Cricket_SALH",
			"288th_M57_Cricket_Thermal"
		};
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;
		ace_reloadlaunchers_enabled = 1;
		cursor = "OPTRE_M41R";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TCF_Pilum_Scope";
			};
		};
	};

	// 288th LAW
	/*class 288th_M96_LAW_Blk: TCF_M96_LAW
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		baseWeapon = "288th_M96_LAW_Blk";
		displayName = "[288th DJP] M96 LAW";
		picture = "\TCF_WEAPONRY\Weapons\icons\atb_Icon.paa";
		UiPicture = "\TCF_WEAPONRY\Weapons\icons\atb_Icon.paa";
		magazines[] = {"TCF_M96_HEAT"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"TCF_WEAPONRY\Weapons\Launchers\m96\data\M96_Blk_co.paa"};
		hiddenSelectionMaterials[] = {""};
		class WeaponSlotsInfo
		{
			mass = 30;
		};
	};*/
};
