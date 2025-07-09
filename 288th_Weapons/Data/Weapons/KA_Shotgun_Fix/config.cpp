class CfgPatches
{
	class KA_Shotgun_Fix
	{
		name = "KA_Shotgun_Fix";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.64;
		requiredAddons[] = {"A3_weapons_f"};
		author = "Soda / Misriah 288";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class rhsusf_8Rnd_00Buck;
	class keltec15bmag: rhsusf_8Rnd_00Buck
	{
		author="DirtySaSaLaa";
		ammo="KA_ammo_12g_00buckshot";
		displayName="KSG 15Rnd";
		displaynameshort="KSG 15Rnd";
		count=15;
		mass=8;
		scope = 1;
		scopeArsenal = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class PointerSlot_Rail;
class InventoryMuzzleItem_Base_F;
class asdg_OpticRail1913;
class MuzzleSlot_556;
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class KA_KSG_Laser_IR: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_ANPEQ15_Black_IR: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_ANPEQ15_Tan_IR: KA_ANPEQ15_Black_IR
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_ANPEQ15_Black_Red;
	class KA_KSG_Laser_RED: KA_ANPEQ15_Black_Red
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_ANPEQ15_Black_Green;
	class KA_KSG_Laser_GREEN: KA_ANPEQ15_Black_Green
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_KSG_Flashlight: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_KSG_Laser_IR_single: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_KSG_Laser_RED_single: KA_ANPEQ15_Black_Red
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_KSG_Laser_GREEN_single: KA_ANPEQ15_Black_Green
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class KA_KSG_Flashlight_single: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class 288th_KSG_Flashlight: KA_KSG_Flashlight_single
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] KSG Flashlight";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KA_KSG_Black: Rifle_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		magazines[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\KA_KSG\ui\attachment_top2.paa";
				iconPosition[]={0.25,0.34999999};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
				iconPicture="\KA_KSG\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.15000001,0.44999999};
				iconScale=0.2;
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			mass=73.5;
		};
	};
	class KA_KSG_Green: KA_KSG_Black
	{
		scope = 1;
		scopeArsenal = 1;
	};
	class 288th_KSG_12: KA_KSG_Black
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] KSG 12";
		descriptionShort="SHOTGUN";
		magazineWell[] = { 288th_KSG_12 };
		magazines[] = { "288th_Loose_Normal_Buckshot","288th_Loose_Slugs" };
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		cursor = "OPTRE_M45";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Shotgun\Shotgun.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_Shotgun";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_Shotgun";
		Eye = "OPTRE_EYE_HUD_AmmoCount_Shotgun";
		HUD_BulletInARows = 1;
		HUD_TotalPosibleBullet = 12;
		baseWeapon = "288th_KSG_12";
		//reloadAction = "WBK_HaloShotgun_Reload";
		//reloadMagazineSound[] = {"\OPTRE_Wbk_WeaponImprovements\reload\shotgun_reload.ogg",2,1,25};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ACE_muzzle_mzls_B";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "288th_KSG_Flashlight";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =	{"ACE_muzzle_mzls_B"};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optic_aco_grn",
					"optic_aco",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"288th_KSG_Flashlight"
				};
			};
		};
		modes[]={"Single"};
		recoil = "recoil_gm6";
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[]=	{"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_01",0.19952624,	1,	10	};
				closure2[]=	{"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_02",0.19952624,	1,	10	};
				soundClosure[]=	{"closure1",0.5,"closure2",	0.5	};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"KA_KSG\sounds\shot1.wss",
					1,
					1,
					1400
				};
				begin2[]=
				{
					"KA_KSG\sounds\shot2.wss",
					1.1,
					1,
					1400
				};
				begin3[]=
				{
					"KA_KSG\sounds\shot3.wss",
					1.1,
					1,
					1400
				};
				begin4[]=
				{
					"KA_KSG\sounds\shot4.wss",
					1.1,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001,
					"begin4",
					0.34
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=0.95;
			dispersion = 5e-05;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
};
