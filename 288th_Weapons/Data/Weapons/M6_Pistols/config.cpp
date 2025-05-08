class CfgPatches
{
	class 288th_Weapons_M6_Pistols
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
			"288th_32Rnd_127x40_EHP",
			"288th_Taser_Mag",
			"288th_Taser_Long_Mag"
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
	class 288th_Temp_Big_Iron
	{
		CfgMagazines[] =
		{
			"288th_Temp_Yellow_Tracer",
			"288th_Temp_Purple_Plasma"
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

class Single;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class GunParticles;

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
	deagleBase[] = {0,0.01,0.15,0.005,0.01,0.15,0.1,0,-0.003,0.13,0,0};
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
	class tcf_M6D;
	class OPTRE_M6D_Carbine_F;

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
	class OPTRE_MuzzleSlot;
	class OPTRE_CowsSlot_Rail;
	class OPTRE_Pointers;
	class OPTRE_Riot_Shield_Icon_Attachments;
	class OPTRE_M6C_Riot_Shield;
	class muzzle_snds_acp;
	class InventoryMuzzleItem_Base_F;
	class OPTRE_M6C_compensator: muzzle_snds_acp
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 2;
		scopeArsenal = 2;
		displayName = "M6C Compensator";
		model = "\OPTRE_Weapons_Pistols\M6C\m6c_comp.p3d";
		descriptionShort = "M6C Compensator";
		inertia = 0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 1;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "OPTRE_muzzleFlash_suppressed";
			soundTypeIndex = 2;
			class MuzzleCoef
			{
				dispersionCoef = "0.75f";
				artilleryDispersionCoef = 1;
				fireLightCoef = "0.1f";
				recoilCoef = "0.25f";
				recoilProneCoef = "0.25f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};

	// Improved M6C Pistol
	class 288th_M6C : OPTRE_M6C
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th] M6C/SOCOM Magnum";
		descriptionshort = "12.7mm Automatic Handgun";
		baseWeapon = "288th_M6C";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		reloadAction = "SCI_FI_Pistol_Reload";
		reloadMagazineSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		reloadSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OPTRE_M6_Pistol_Shot_SoundSet","4Five_Tail_SoundSet","4Five_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","4Five_silencerTail_SoundSet","4Five_silencerInteriorTail_SoundSet"};
			};
			dispersion = 5e-05;
			reloadTime = 0.075;
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 25;
			midRangeProbab = 0.1;
			maxRange = 100;
			maxRangeProbab = 0.05;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class FullAuto: Single
		{
			dispersion = 5e-05;
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
			//"TCF_12Rnd_127x40_Mag_NARQ"
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
	//Halo 1 style Pistol
	class 288th_M6D_PDWS : tcf_M6D
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayname = "[288th] M6D PDWS";
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
		reloadAction = "SCI_FI_Pistol_Reload";
		reloadMagazineSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		reloadSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
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
		displayName = "[288th] Model 33";
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

	// Temp's Big Iron
	class 288th_Temp_Iron: hgun_Pistol_heavy_02_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Temp's Big Iron";
		descriptionshort = "A big iron on her hip";
		baseWeapon = "288th_Temp_Iron";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\M6_Pistols\Temp\signalis_Eu_K508_black_co.paa"};
		pictureWire = "\TCF_WEAPONRY\Weapons\Handguns\M33\V_M33_HUD_CA";
		cursor = "OPTRE_M6C";
		magazineWell[] = { 288th_Temp_Big_Iron };
		magazines[] =
		{
			"288th_Temp_Yellow_Tracer",
			"288th_Temp_Purple_Plasma"
		};
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
		magazines[] ={"288th_32Rnd_127x40","288th_32Rnd_127x40_AP","288th_32Rnd_127x40_APT","288th_32Rnd_127x40_Mag_NARQ"};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
		displayname = "[288th] FNX-99 Tactical";
		descriptionshort = "12.7mm Automatic Handgun";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M6_Pistols\Pistol_Heavy_01_ggg_CO"};
		picture = "a3\Weapons_F_Enoch\Pistols\Pistol_Heavy_01\Data\UI\gear_pistol_heavy_01_green_X_ca.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		reloadAction = "SCI_FI_Pistol_Reload";
		reloadMagazineSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		reloadSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OPTRE_M6_Pistol_Shot_SoundSet","4Five_Tail_SoundSet","4Five_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","4Five_silencerTail_SoundSet","4Five_silencerInteriorTail_SoundSet"};
			};
			dispersion = 5e-05;
			reloadTime = 0.075;
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 25;
			midRangeProbab = 0.1;
			maxRange = 100;
			maxRangeProbab = 0.05;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class FullAuto: Single
		{
			dispersion = 5e-05;
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
	class 288th_M6D_SMG: OPTRE_M6D_Carbine_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		picture = "\OPTRE_Weapons_Pistols\M6D_Carbine\Data\icons\weapon\black.paa";
		baseWeapon = "288th_M6D_SMG";
		displayName = "[288th] M6D SMG";
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons_Pistols\M6D\Data\camo\black\M6D_Main_co.paa","\OPTRE_Weapons_Pistols\M6D\Data\M6D_Emmisve_co.paa","\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa","\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa"};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		cursor = "OPTRE_M6C";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OPTRE_M6_Pistol_Shot_SoundSet","4Five_Tail_SoundSet","4Five_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","4Five_silencerTail_SoundSet","4Five_silencerInteriorTail_SoundSet"};
			};
			dispersion = 5e-05;
			reloadTime = 0.075;
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 25;
			midRangeProbab = 0.1;
			maxRange = 100;
			maxRangeProbab = 0.05;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class FullAuto: Single
		{
			dispersion = 5e-05;
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
			//"TCF_12Rnd_127x40_Mag_NARQ"
		};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_288_pistols";
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
				item = "OPTRE_M6D_Carbine_Suppressor";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6D_Carbine_Vis_Red";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: OPTRE_CowsSlot_Rail
			{
				iconPosition[] = {0.4,0.32};
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight_riser",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optre_m7_sight",
					"288th_M7_Sight",
					"288th_M6C_Scope",
					"optre_m6c_scope",
					"OPTRE_M6D_Scope_Black",
					"OPTRE_M12_Optic",
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
			mass = 18;
		};
	};
};
