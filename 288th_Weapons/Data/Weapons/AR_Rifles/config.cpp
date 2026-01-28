class CfgPatches
{
	class 288th_Weapons_ARs
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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Single;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

class cfgWeapons
{

	// Weapons
	class WeaponSlotsInfo;
	class Rifle_Base_F;
	class Rifle;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
		};
		class Single;
		class FullAuto;
	};
	class arifle_MXC_Black_F: arifle_MX_Base_F{};
	class arifle_MX_SW_Black_F;
	class arifle_MXM_Black_F;
	class arifle_AK12_F;
	class SMG_03C_TR_black;
	class srifle_LRR_F;
	class srifle_DMR_07_blk_F;
	class arifle_ARX_blk_F;
	class 288th_M6C;
	class 288th_CQS_48X;
	class 288th_M90A;
	class OPTRE_M393_DMR;
	class arifle_MX_GL_Black_F;
	class UGL_F;
	class OPTRE_M12_SOC;
	class srifle_DMR_03_F;
	class OPTRE_DMR_Base;
	class WRS_Weapon_AR_Bronze;
	class OPTRE_BR55HB;
	class OPTRE_MA5B;
	class WRS_Weapon_AR_Ver1;
	class UBS_F;
	// Attachment Slots
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class MuzzleSlot_556;
	class CowsSlot_Rail;
	class PointerSlot_Rail;
	class UnderBarrelSlot_Rail;
	class OPTRE_CowsSlot_Rail;
	class asdg_SlotInfo;
	class asdg_FrontSideRail;
	class asdg_OpticRail1913;
	class OPTRE_MuzzleSlot;
	class asdg_MuzzleSlot_556;
	class OPTRE_M26_Shotgun_F;
	class OPTRE_UnderBarrelSlot_rail;
	class OPTRE_Pointers : asdg_FrontSideRail
	{
		class compatibleItems;
	};
	class OPTRE_Commando: OPTRE_DMR_Base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_BR45_Scope";
			};
		};
	};

	// 288th AR1X
	class 288th_AR1X : arifle_MXC_Black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] AR1X";
		descriptionshort = "Special Oni Derived Armament AR1X";
		model = "288th_Weapons\Data\Weapons\AR_Rifles\Scar\ScarLK_F.p3d";
		//picture = "288th_Weapons\Data\Weapons\AR_Rifles\Scar\data\UI\gear_scarlk_x_ca.paa";
		hiddenSelections[] = {"weapon"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\Data\ScarLK_CO.paa"};
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1.0,1,10};
		baseWeapon = "288th_AR1X";
		magazines[] = {"288th_30Rnd_65x85_Mag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_Assault";
		visionMode[] = {"Normal","NVG"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_MA5";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 75;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator",
					"muzzle_snds_M"
				};
			};
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
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Single
		{
			//reloadTime = 0.05;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: FullAuto
		{
			/*reloadTime = 0.15;*/
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class Burst: FullAuto
		{
			reloadTime = 0.05;
			autoFire = 0;
			burst = 3;
			displayName = "Burst";
			textureType = "burst";
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
		};
	};

	// 288th AR2X
	class 288th_AR2X : arifle_MX_SW_Black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] AR2X";
		descriptionshort = "Special Oni Derived Armament AR2X";
		baseWeapon = "288th_AR2X";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]={"\288th_Weapons\Data\Weapons\AR_Rifles\mxlmgblak.paa"};
		magazines[] = {"288th_150Rnd_65x85_Mag","288th_EHP_LMG","288th_Silver_LMG"};
		magazineWell[] = { "288th_Standard" };
		recoil = "recoil_Assault";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		cursor = "OPTRE_MA5";
		modes[] = { "FullAutoFast","FullAutoSlow" };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = { "MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet" };
			};
			dispersion = 5e-05;
			reloadTime = 0.15;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow
		{
			dispersion = 5e-05;
			reloadTime = 0.075;
			textureType = "fastAuto";
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator",
					"muzzle_snds_M"
				};
			};
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
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	// 288th AR3X
	class 288th_AR3X : arifle_MXM_Black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] AR3X";
		descriptionshort = "Special Oni Derived Armament AR3X";
		baseWeapon = "288th_AR3X";
		magazines[] = {"288th_30Rnd_65x85_Mag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_Assault";
		visionMode[] ={	"Normal","NVG"	};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]={"\288th_Weapons\Data\Weapons\AR_Rifles\mxmblak.paa"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_MA5";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator",
					"muzzle_snds_M"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"288th_SS_6_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			/*reloadTime = 0.05;*/
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			/*reloadTime = 0.15;*/
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
	};

	// 288th AR4X
	class 288th_AR4X : arifle_MX_GL_Black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] AR4X";
		descriptionshort = "Special Oni Derived Armament AR4X";
		baseWeapon = "288th_AR4X";
		magazines[] = {"288th_30Rnd_65x85_Mag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_Assault";
		visionMode[] =	{"Normal","NVG"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[]={"\288th_Weapons\Data\Weapons\AR_Rifles\mxrifleblak.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_MA5";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 75;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator",
					"muzzle_snds_M"
				};
			};
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
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
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
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			/*reloadTime = 0.05;*/
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			/*reloadTime = 0.15;*/
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class Burst: FullAuto
		{
			reloadTime = 0.05;
			autoFire = 0;
			burst = 3;
			displayName = "Burst";
			textureType = "burst";
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
		};
		class GL_3GL_F : UGL_F
		{
			displayName = "AR4X Underbarrel Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazineWell[] = { "288th_GL","UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM" };
			magazines[] = 
			{ 
				"288th_Potato",
				"288th_GL_Mag",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
				"WNZ_EMP40mm_3GL_Grenade_Magazine"
			};
			cameraDir = "OP_look";
			discreteDistance[] = { 50,75,100,150,200,250,300,350,400 };
			discreteDistanceCameraPoint[] = { "OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400" };
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
		};
	};

	// 288th Type 115 battle rifle
	class 288th_M28A3_BR : arifle_ARX_blk_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M28A3 Battle Rifle";
		descriptionshort = "Special Oni Derived Armament M28A3";
		baseWeapon = "288th_M28A3_BR";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		magazines[] = {"288th_30Rnd_65x85_Mag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_Assault";
		picture = "\288th_Weapons\Data\Weapons\AR_Rifles\M28A3\arifle_ARX_blk_F_X_CA.paa";
		pictureWire = "\288th_Weapons\Data\Weapons\AR_Rifles\V_M28_HUD_CA.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_MA5";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
		muzzles[] = {"this","Secondary"};
		reloadAction = "GestureReloadARX";
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\AR_Rifles\M28A3\V_M28_CO.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};

		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator",
					"muzzle_snds_M"
				};
			};
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
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		class secondary : 288th_M6C
		{
			canShootInWater = 1;
			displayName = "M28A3 Underbarrel Sidearm";
			magazines[] ={"288th_32Rnd_127x40"};
			picture = "";
			recoil = "recoil_ARX_secondary";
			reloadAction = "GestureReloadARX2";
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class SilencedSound
			{
				soundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
			};
			class StandardSound
			{
				soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class SilencedSound
			{
				soundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
			};
			class StandardSound
			{
				soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
			};
		};
	};

	class 288th_M28A3_Breach : 288th_M28A3_BR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M28A3 Breacher Battle Rifle";
		baseWeapon = "288th_M28A3_Breach";
		class secondary : 288th_CQS_48X
		{
			canShootInWater = 1;
			displayName = "M28A3 Underbarrel w. Shotgun Modification";
			modes[] =	{"Single"};
			magazines[] ={"288th_Slug","288th_Buckshot"};
			picture = "";
			recoil = "recoil_ARX_secondary";
			reloadAction = "GestureReloadARX2";
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
		};
	};

	class 288th_M28A3_FOWL : 288th_M28A3_Breach
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] XM28A3 FOWL";
		baseWeapon = "288th_M28A3_FOWL";
		//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_01_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\AR_Rifles\M28A3\V_XM28_CO.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag"};
		magazineWell[] = {"OPTRE_Magwell_M392_DMR"};
		recoil = "recoil_ebr";
		cursor = "OPTRE_M392";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows = 1;
		HUD_TotalPosibleBullet = 15;
		modes[] = {"Single"};
		class secondary : 288th_M90A
		{
			canShootInWater = 1;
			displayName = "M28A3 Underbarrel w. Shotgun Modification";
			magazines[] ={"288th_Loose_Normal_Buckshot"};
			picture = "";
			recoil = "recoil_ARX_secondary";
			reloadAction = "GestureReloadARX2";
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
		};
	};

	class 288th_M28A3_Kelkuza : OPTRE_M26_Shotgun_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Kelkuza's Stomper";
		baseWeapon = "288th_M28A3_Kelkuza";
		modes[] = { "FullAutoSlow","FullAutoFast" };
		visionMode[] ={"Normal","NVG"};
		magazines[] = {"288th_150Rnd_65x85_Mag","288th_EHP_LMG","288th_Silver_LMG"};
		magazineWell[] = { "288th_Standard" };
		recoil = "recoil_M7V_SMG";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		canShootInWater = 1;
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1,1500};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLK.ogg",1,1.1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1,300};
				begin2[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\sound\ScarLKSilenced.ogg",1,1.1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			dispersion = 5e-05;
			reloadTime = 0.15;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		muzzles[] = {"this","secondary"};
		class FullAutoFast : FullAutoSlow
		{
			dispersion = 5e-05;
			reloadTime = 0.0667;
			textureType = "fastAuto";
		};
		class secondary : 288th_CQS_48X
		{
			canShootInWater = 1;
			displayName = "Shotgun Modification";
			magazines[] =
			{
				"288th_Incendiary_Buckshot",
				"288th_Slug"
			};
			picture = "";
			modes[] = { "FullAutoSlow" };
			class FullAutoSlow : Mode_FullAuto
			{
				class BaseSoundModeType;
				class StandardSound : BaseSoundModeType
				{
					soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
				};
				class SilencedSound : BaseSoundModeType
				{
					SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
				};
				dispersion = 5e-05;
				reloadTime = 0.25;
				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 150;
				midRangeProbab = 0.7;
				maxRange = 250;
				maxRangeProbab = 0.2;
			};
			cursor = "OPTRE_M45";
			recoil = "recoil_gm6";
			fireSpreadAngle = 0.95;
			autoFire = 0;
			reloadTime = 0.35;
			reloadAction = "OPTRE_GestureReload_M26_LMG_Shotgun";
			drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10};
			reloadMagazineSound[] = {"\OPTRE_Wbk_WeaponImprovements\reload\shotgun_reload.ogg",2,1,25};
		};
	};


	// 288th AR1G
    class 288th_AR1G : WRS_Weapon_AR_Bronze
    {
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        scope = 2;
        scopeArsenal = 2;
        ace_arsenal_hide = 0;
        canShootInWater = 1;
        displayName = "[288th] AR1G";
        descriptionshort = "Special Oni Derived Armament AR1G";
        baseWeapon = "288th_AR1G";
        magazines[] = {"288th_30Rnd_65x85_Mag"};
        magazineWell[] = {"288th_Standard"};
        recoil = "recoil_Assault";
        //hiddenSelectionsTextures = ["\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"];
        visionMode[] = {"Normal","NVG"};
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
        ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
        Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
        Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
        HUD_BulletInARows = 2;
        HUD_TotalPosibleBullet = 30;
        cursor = "OPTRE_MA5";
        //picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "288th_M7_Sight";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m7_sight",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
				};
			};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
			};
		};
    };

	//288th M12H
	class 288th_M12H : OPTRE_M12_SOC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M12H SMG";
		descriptionshort = "Special Oni Derived Armament M12H";
		baseWeapon = "288th_M12H";
		magazines[] = { "288th_65Rnd_127x30" };
		magazineWell[] = { "288th_M12H" };
		recoil = "recoil_M7V_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 64;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M12_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"OPTRE_M12_Suppressor"
				};
			};
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
					"288th_M12_Sight",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	//Butcher's BR55
	class 288th_Butcher_BR55HB: OPTRE_BR55HB
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Butchers Blaster";
		descriptionshort = "Special Oni Derived Armament BR55HB";
		baseWeapon = "288th_Butcher_BR55HB";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Butcher\br55_1_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\Butcher\br55_2_co.paa"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag"};
		magazineWell[] = {"OPTRE_Magwell_BR55"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_BR45_Scope";
			};
		};
	};

	//Steven's Grey Wolf
	/*class 288th_Stevens_Rifle: WRS_Weapon_AR_Ver1
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Stevens' Grey Wolf";
		descriptionshort = "Special Oni Derived Armament Grey Wolf";
		baseWeapon = "288th_Stevens_Rifle";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\AR_Rifles\Stevens\WRS_Greywolf_Black_CO_Test2"};
		hiddenSelectionsMaterials[] = {"\WBK_SciFi_Weaponary\textures\greywolf\greywolf.rvmat"};
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag_Tracer","OPTRE_100Rnd_30x06_Mag","OPTRE_100Rnd_30x06_Mag_Tracer"};
		magazineWell[] = {"OPTRE_Magwell_HMG38"};
		visionMode[] = {"Normal","NVG"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_MA5";
		recoil = "recoil_Assault";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 40;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_Hamr_Scope";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer"
				};
			};
		};
	};*/

	//Smith's Grot
	/*class 288th_Smith_Rifle: arifle_MSBS65_UBS_Black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MSBS Breacher Rifle";
		descriptionshort = "Special Oni Derived Armament Grot";
		baseWeapon = "288th_Smith_Rifle";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		magazines[] = {"288th_30Rnd_65x85_Mag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_Assault";
		pictureWire = "\288th_Weapons\Data\Weapons\AR_Rifles\V_M28_HUD_CA.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_MA5";
		muzzles[] = {"this","UBS_Smith"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ico_01_black_f";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class UBS_Smith : 288th_M90A
		{
			modes[] ={"Single"};
			magazineWell[] = { 288th_Shotgun_Pump };
			magazines[] = { "288th_Loose_Normal_Buckshot","288th_Loose_Slugs" };
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
			autoFire = 0;
			ballisticsComputer = 0;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			displayName = "$STR_A3_C_CfgWeapons_arifle_MSBS65_UBS_base_F_UBS_F0";
			drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10};
			fireSpreadAngle = 0.95;
			maxZeroing = 50;
			muzzleEnd = "konec granatometu";
			muzzlePos = "usti granatometu";
			recoil = "recoil_MSBS65_ubs";
			reloadAction = "GestureReloadMSBS_UBS";
			reloadMagazineSound[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_Shotgun_Reload_01",3.98107,1,10};
			reloadTime = 0.35;
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class SilencedSound
			{
				soundSetShot[] = {"Msbs65_01_Shot_Silencer_Auto_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};
			};
			class StandardSound
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0667;
			dispersion = 5e-05;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class SilencedSound
			{
				soundSetShot[] = {"Msbs65_01_Shot_Silencer_Auto_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};
			};
			class StandardSound
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};
			};
		};
	};*/

	//Custom MA5B
	class 288th_MA5B: OPTRE_MA5B
	{
		canShootInWater = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MA5B";
		descriptionshort = "Special Oni Derived Armament MA5B";
		magazines[] = {"OPTRE_60Rnd_762x51_Mag"};
		magazineWell[] = {"OPTRE_Magwell_MA5B"};
		baseWeapon = "288th_MA5B";
		recoil = "recoil_Assault";
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\AR_Rifles\MA5B\weapon_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\MA5B\smartlink_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\MA5B\cover_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\MA5B\ma5_reticle_Yellow.paa"};
		/*scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;*/
		class FlashLight
		{
			color[] = {180,160,130};
			ambient[] = {0.9,0.8,0.7};
			intensity = 100;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 10;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 100;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = {0};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_MA5_SmartLink";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 55;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"288th_MA5_SmartLink",
					"288th_MA5_SmartLink_Grey",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =	{};
			};
		};
	};
	class 288th_MA5BGL: 288th_MA5B
	{
		canShootInWater = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MA5B-GL";
		model = "\OPTRE_Weapons\AR\MA5BGL.p3d";
		descriptionshort = "Special Oni Derived Armament MA5B";
		picture = "\OPTRE_weapons\ar\icons\ma5bgl_icon.paa";
		muzzles[] = {"this","288th_M301UGL"};
		baseWeapon = "288th_MA5BGL";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_UGL.paa";
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5CGL_icon.paa";
		class 288th_M301UGL: UGL_F
		{
			canShootInWater = 1;
			displayName = "M301 Grenade Launcher";
			descriptionShort = "M301 GL";
			cursor = "EmptyCursor";
			cursorAim = "OPTRE_GRNDLNCH";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3"};
			discreteDistanceInitIndex = 0;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_UGL_reload",1,1,10};
			magazines[] = {"288th_Potato","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = { "288th_GL","UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM" };
			class Single: Single
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
				};
				reloadTime = 0.1;
			};
		};
	};
	class 288th_Fade_MA5BGL: 288th_MA5BGL
	{
		canShootInWater = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Fade's MA5B-GL";
		muzzles[] = {"this","288th_M301UGL"};
		baseWeapon = "288th_Fade_MA5BGL";
		magazines[] = {"288th_60Rnd_308_Mag"};
		magazineWell[] = {"288th_MA5B_308"};
		recoil = "recoil_lim";
		hiddenSelectionsTextures[] = 
		{
			"288th_Weapons\Data\Weapons\AR_Rifles\Fade\weapon_co.paa",
			"288th_Weapons\Data\Weapons\AR_Rifles\Fade\smartlink_co.paa",
			"288th_Weapons\Data\Weapons\AR_Rifles\Fade\cover_co.paa",
			"288th_Weapons\Data\Weapons\AR_Rifles\Fade\ma5_reticle_red.paa"
		};
		class 288th_M301UGL: UGL_F
		{
			canShootInWater = 1;
			displayName = "Shotgun";
			descriptionShort = "Shotgun";
			cursor = "OPTRE_M45";
			cursorAim = "EmptyCursor";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3"};
			discreteDistanceInitIndex = 0;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_UGL_reload",1,1,10};
			recoil = "recoil_lim";
			magazines[] ={"288th_Buckshot","288th_Slug"};
			magazineWell[] = { 288th_Shotgun };
			class Single: Single
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
				};
				reloadTime = 0.2;
			};
		};
	};
};