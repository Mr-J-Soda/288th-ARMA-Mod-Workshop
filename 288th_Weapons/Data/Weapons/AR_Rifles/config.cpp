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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
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
	class arifle_MXC_F: arifle_MX_Base_F{};
	class arifle_MX_SW_Black_F;
	class arifle_MXM_Black_F;
	class arifle_AK12U_F;
	class SMG_03C_TR_black;
	class srifle_LRR_F;
	class srifle_DMR_07_blk_F;
	class TCF_M28A2;
	class SC_Rifle_AR12;
	class 288th_M6C;
	class 288th_CQS_48X;
	class 288th_M45TAC;
	class OPTRE_M393_DMR;
	class TCF_ARMX_GL_light;
	class UGL_F;
	class OPTRE_M12_SOC;
	class srifle_DMR_03_F;
	class OPTRE_DMR_Base;
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
	class OPTRE_MuzzleSlot;
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
	class 288th_AR1X : arifle_MXC_F
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
		picture = "288th_Weapons\Data\Weapons\AR_Rifles\Scar\data\UI\gear_scarlk_x_ca.paa";
		hiddenSelections[] = {"weapon"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\AR_Rifles\Scar\Data\ScarLK_CO.paa"};
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1.0,1,10};
		baseWeapon = "288th_AR1X";
		magazines[] = {"288th_Stanag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_lim";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "optre_ma5suppressor";
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
			reloadTime = 0.067;
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
			reloadTime = 0.067;
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
		magazines[] = {"288th_Stanag"};
		magazineWell[] = { 288th_Standard_LMG };
		recoil = "recoil_lim";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "optre_ma5suppressor";
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
		magazines[] = {"288th_Stanag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_lim";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "optre_ma5suppressor";
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
	};

	// 288th AR4X
	class 288th_AR4X : TCF_ARMX_GL_light
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
		magazines[] = {"288th_Stanag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_lim";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "optre_ma5suppressor";
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
		class GL_3GL_F : UGL_F
		{
			displayName = "AR4X Underbarrel Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazineWell[] = { 288th_GL };
			magazines[] = 
			{ 
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
				"WNZ_EMP40mm_3GL_Grenade_Magazine",
				"288th_GL_Mag"
			};
			cameraDir = "OP_look";
			discreteDistance[] = { 50,75,100,150,200,250,300,350,400 };
			discreteDistanceCameraPoint[] = { "OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400" };
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
		};
	};

	// 288th Type 115 battle rifle
	class 288th_M28A3_BR : TCF_M28A2
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M28A3 Battle Rifle";
		baseWeapon = "288th_M28A3_BR";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		magazines[] = {"288th_Stanag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_lim";
		pictureWire = "288th_Weapons\Data\Weapons\AR_Rifles\V_M28_HUD_CA.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_MA5";
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
				item = "optre_ma5suppressor";
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
			displayName = "M28A3 Underbarrel Sidearm";
			magazines[] =
			{
				"288th_32Rnd_127x40",
				"288th_32Rnd_127x40_AP",
				"288th_32Rnd_127x40_APT",
				"288th_32Rnd_127x40_Mag_NARQ",
				"288th_16Rnd_Flare_Green",
				"288th_16Rnd_Flare_Red"
			};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.067;
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
			reloadTime = 0.067;
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

	class 288th_M28A3_RG : 288th_M28A3_BR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] RG's M28A3";
		baseWeapon = "288th_M28A3_RG";
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\AR_Rifles\V_MA4_CO_GREEN","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co"};
		class secondary : 288th_M45TAC
		{
			displayName = "Shotgun Modification";
			modes[] =
			{
				"Single"
			};
			magazineWell[] = { 288th_M45TAC };
			magazines[] = { "288th_Loose_Buckshot","288th_Loose_Slugs" };
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
			displayName = "M28A3 Underbarrel w. Shotgun Modification";
			modes[] =
			{
				"Single"
			};
			magazines[] =
			{
				"288th_Slug",
				"288th_Buckshot"
			};
		};
	};

	// 288th AR1K
	class 288th_AR1K : arifle_AK12U_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] AR1K";
		descriptionshort = "Special Oni Derived Armament AR1K";
		baseWeapon = "288th_AR1K";
		magazines[] = {"288th_Stanag"};
		magazineWell[] = {"288th_Standard"};
		recoil = "recoil_lim";
		//hiddenSelectionsTextures = ["\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"];
		visionMode[] = {"Normal","NVG"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_MA5";
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
				item = "optre_ma5suppressor";
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
		displayName = "[288th] M12H";
		descriptionshort = "Special Oni Derived Armament M12H";
		baseWeapon = "288th_M12H";
		magazines[] = { "288th_M12H_Mag" };
		magazineWell[] = { "" };
		//OPTRE_Magwell_M12_SOC
		//recoil = "recoil_trg21";
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

	// 288th Error's DMR
	class 288th_DMR_Error : OPTRE_M393_DMR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		canShootInWater = 1;
		displayName = "[288th] Error's M395";
		descriptionshort = "Error's's DMR";
		magazines[] = { "288th_DMR_M395", "OPTRE_15Rnd_762x51_Mag" };
		magazineWell[] = { "" };
		recoil = "recoil_lim";
		picture = "\OPTRE_Weapons\DMR\icons\M395_Icon.paa";
		baseWeapon = "288th_DMR_Error";
		hiddenSelections[] = { "camo","camo1","camo2" };
		hiddenSelectionsTextures[] = { "288th_Weapons\Data\Weapons\AR_Rifles\Error\mainbody1e_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\Error\mainbody2e_co.paa","288th_Weapons\Data\Weapons\AR_Rifles\Error\muzzlee_co.paa" };
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "OPTRE_DMR_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet" };
				begin1[] = { "\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500 };
				soundBegin[] = { "begin1",1 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin1",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.04;
			dispersion = 5e-05;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
	};

	class 288th_OSHA_Rifle : srifle_DMR_03_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		canShootInWater = 1;
		picture = "288th_Weapons\Data\UI\gear_DMR_03_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "[288th] OSHA Rifle";
		descriptionshort = "A rifle used by OSHA Marines";
		baseWeapon = "288th_OSHA_Rifle";
		magazines[] =
		{
			"288th_Plasma_White_Mag"
		};
		magazineWell[] = {"288th_Standard"};
		modes[] = { "Single","FullAutoSlow" };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		hiddenSelections[] = { "Camo1","Camo2" };
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_MA5";
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\Data\Weapons\AR_Rifles\DMR_03_01_Blue_CO.paa",
			"288th_Weapons\Data\Weapons\AR_Rifles\DMR_03_02_Blue_CO.paa"
		};
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
			mass = 50;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"OPTRE_M12_Suppressor",
					"ACE_muzzle_mzls_B"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"288th_M12_Sight",
					"optic_Holosight",
					"optic_NVS",
					"optic_ERCO_snd_F",
					"optic_Hamr",
					"OPTRE_BMR_Scope",
					"OPTRE_M392_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_BR45_Scope",
					"OPTRE_SRS99C_Scope",
					"OPTRE_SRM_Sight",
					"OPTRE_M7_Sight"
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
					"bipod_01_F_snd"
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		/*class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "OPTRE_DMR_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet" };
				begin1[] = { "\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500 };
				soundBegin[] = { "begin1",1 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin1",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.00122;
			initSpeed = 940;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class FullAutoSlow : Mode_FullAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "OPTRE_DMR_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet" };
				begin1[] = { "\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500 };
				soundBegin[] = { "begin1",1 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin1",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			dispersion = 0.00122;
			reloadTime = 0.15;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};*/
	};
};
