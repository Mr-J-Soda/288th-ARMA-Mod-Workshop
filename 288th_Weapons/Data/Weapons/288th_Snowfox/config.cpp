class CfgPatches
{
	class 288th_Weapons_Snowfox
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
	class 288th_Snowfox
	{
		CfgMagazines[] =
		{
			"288th_20Rnd_308",
			"288th_20Rnd_308_Tracer",
			"288th_20Rnd_308_AP",
			"288th_20Rnd_308_APT",
			"288th_20Rnd_308_SLAP",
			"288th_20Rnd_308_SLAPT",
			"288th_20Rnd_308_FMJ",
			"288th_20Rnd_308_FMJT",
			"288th_20Rnd_308_HV",
			"288th_20Rnd_308_HVT",
			"288th_20Rnd_308_HVAP",
			"288th_20Rnd_308_HVAPT",
			"288th_20Rnd_308_HPSAP",
			"288th_20Rnd_308_HPSAPT",
			"288th_20Rnd_308_EHP",
			"288th_20Rnd_308_EHPT",
			"288th_20Rnd_308_SAPHE",
			"288th_20Rnd_308_SAPHET",
			"288th_20Rnd_308_HE",
			"288th_20Rnd_308_HET",
			"288th_20Rnd_308_SS",
			"288th_20Rnd_308_SST",
			"288th_20Rnd_308_UW",
			"288th_20Rnd_308_UWT",
			"288th_20Rnd_308_S",
			"288th_20Rnd_308_ST"
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
	class srifle_EBR_F;
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

	// 288th Snowfox
	class 288th_Snowfox : srifle_EBR_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Snowfox";
		descriptionshort = "Special Oni Derived Armament Snowfox";
		baseWeapon = "288th_Snowfox";
		recoil = "recoil_lim";
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\Data\Weapons\288th_Snowfox\m14_ebr01_Fiy_Yellow_CO.paa",
			"288th_Weapons\Data\Weapons\288th_Snowfox\m14_ebr01_Fiy_CO.paa"
		};
		magazines[] ={"288th_20Rnd_308"};
		magazineWell[] = { 288th_Snowfox };
		modes[] =
		{
			"FullAuto",
			"Single"
		};
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		cursor = "OPTRE_M392";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\M392_icon.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows = 1;
		HUD_TotalPosibleBullet = 20;
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
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.085;
			dispersion = 5e-05;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
		};
		class FullAuto: Mode_FullAuto 
		{
			aiRateOfFire = 1e-06;
			dispersion = 5e-05;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.085;
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
		};
	};
};