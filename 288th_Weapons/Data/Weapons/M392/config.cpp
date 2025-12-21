class CfgPatches
{
	class 288th_Weapons_M392
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
	class OPTRE_M392_DMR;
	class OPTRE_M393_DMR;
	class OPTRE_M393S_DMR;

	class WeaponSlotsInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class CowsSlot_Rail;
	class PointerSlot_Rail;
	class UnderBarrelSlot_Rail;
	class MuzzleSlot_556;

	// NSFW DMR
	class 288th_M392_NSFW : OPTRE_M392_DMR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] NSFW M392";
		descriptionshort = "Special Oni Derived Armament M392";
		model = "\OPTRE_Weapons\DMR\M392.p3d";
		baseWeapon = "288th_M392_NSFW";
		recoil = "recoil_Assault";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\data\Weapons\M392\dmr_nsfw"
		};
		//magazines[] = { "288th_DMR_M395" };
		//magazineWell[] = { "" };
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optre_m393_eotech";
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
					"OPTRE_SRM_Sight",
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
	//DMR
	// 288th Whiskey's DMR
	class 288th_DMR_Whiskey : OPTRE_M393_DMR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Whiskey's Gun...of all time";
		descriptionshort = "Whiskey's DMR";
		/*magazines[] ={"288th_32Rnd_127x40","288th_32Rnd_127x40_AP","288th_32Rnd_127x40_APT","288th_32Rnd_127x40_Mag_NARQ"};
		magazineWell[] = { 288th_M6C };*/
		picture = "\OPTRE_Weapons\DMR\icons\M395_Icon.paa";
		baseWeapon = "288th_DMR_Whiskey";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		maxZeroing = 1000;
		hiddenSelections[] = { "camo","camo1","camo2" };
		hiddenSelectionsTextures[] = { "\288th_Weapons\Data\Weapons\M392\Whiskey\mainbody1e_co.paa","\288th_Weapons\Data\Weapons\M392\Whiskey\mainbody2e_co.paa","\288th_Weapons\Data\Weapons\M392\Whiskey\muzzlee_co.paa" };
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_Hamr_Scope";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 55;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"288th_Hamr_Scope",
					"288th_SS_6_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M12_Sight",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"optic_dms",
					"OPTRE_SRM_Sight",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic"
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
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OPTRE_DMR_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
				begin1[] = {"\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400};
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

	// 288th Error's DMR
	class 288th_DMR_Error : OPTRE_M393S_DMR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Error's M395";
		descriptionshort = "Error's's DMR";
		//magazines[] = { "288th_DMR_M395", "OPTRE_15Rnd_762x51_Mag" };
		//magazineWell[] = { "" };
		//recoil = "recoil_Assault";
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
};
