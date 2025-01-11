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
class cfgCloudlets
{
    class Default;
    class SmokeShellWhite : Default
    {
        moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
        size[]={0.36,3.5,12};//{0.1,2,6}
        MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
    };
};
class CfgWeaponCursors
{
	class throw;
	class test: throw
	{
		texture = "288th_Weapons\Data\UI\ak181_reticle2";
	};
};

class CfgMagazineWells
{
	class 288th_Standard
	{
		// Magazines listed by mod
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
			"288th_Plasma_Rainbow_Mag",
			"288th_EHP_Mag",
			"288th_EMP",
			"288th_Incendiary_Mag"
		};
	};
	class 288th_Standard_LMG
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
			"288th_Plasma_Rainbow_Mag",
			"288th_EHP_Mag",
			"288th_EMP",
			"288th_Incendiary_Mag",
			"288th_Stanag_LMG"
		};
	};
	class 288th_GL
	{
		CfgMagazines[] =
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
	};
	class 288th_Gauss
	{
		CfgMagazines[] =
		{
			"288th_7Rnd_Gauss_Slug_Mag"
		};
	};
	class 288th_shotgun
	{
		CfgMagazines[] =
		{
			"288th_Slug",
			"288th_Buckshot",
			"288th_Slug_HEDP",
			"288th_HEDP_Buckshot",
			"288th_Incendiary_Buckshot",
			"288th_Slug_Incendiary",
			"OPTRE_12Rnd_12Gauge_Smoke"
		};
	};
	class 288th_M45TAC
	{
		CfgMagazines[] =
		{
			"288th_Loose_Buckshot",
			"288th_Loose_Slugs",
			"288th_Loose_HEDP_Buckshot",
			"288th_Loose_Slugs_HEDP",
			"288th_Loose_Incendiary_Buckshot",
			"288th_Loose_Slugs_Incendiary",
			"OPTRE_12Rnd_12Gauge_Smoke"
		};
	};
	class 288th_M73X
	{
		CfgMagazines[] =
		{
			"288th_500Rnd_65x85_Box"
		};
	};
	class 288th_M50
	{
		CfgMagazines[] =
		{
			"288th_75Rnd_15x50_Box"
		};
	};
	class 288th_AutoGL
	{
		CfgMagazines[] =
		{
			"288th_AutoGL_Mag",
			"288th_AutoGL_Smoke_Mag"
		};
	};
	class 288th_Sniper
	{
		CfgMagazines[] = 
		{
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"TCF_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"TCF_4Rnd_145x114_Mag_HVAPT",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"TCF_4Rnd_145x114_Mag_HEDPT",
			"TCF_4Rnd_145x114_Mag_SS",
			"TCF_4Rnd_145x114_Mag_SST",
			"TCF_4Rnd_145x114_Mag_NARQ",
			"TCF_4Rnd_145x114_Mag_NARQT"
		};
	};
	class 288th_M12H
	{
		CfgMagazines[] =
		{
			"288th_M12H_Mag"
		};
	};
	class 288th_Beowolf
	{
		CfgMagazines[] =
		{
			"288th_15Rnd_50BW_Mag"
		};
	};
	class 288th_scrapped
	{
		CfgMagazines[] =
		{
			"288th_Scrapmag"
		};
	};
	class 288th_AC_8
	{
		CfgMagazines[] =
		{
			"288th_Autocannon_mag"
		};
	};
	class 288th_Eugen_XM54
	{
		CfgMagazines[] =
		{
			"288th_HV_Flechettes",
			"288th_HEDP_Small"
		};
	};
};

class CfgRecoils
{
	class recoil_M7V_SMG
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
	class recoil_Assault
	{
		muzzleOuter[] =
		{
			"0.075*0.2",
			"1.5",
			"0.315*1",
			"0.21*1"
		};
		kickBack[] =
		{
			"0.005*0.4",
			"0.04*1.4"
		};
		temporary = "0.010*1.2";
		muzzleInner[] = { 0,0,0.050000001,0.050000001 };
		permanent = "0.05*0.4";
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail1913_short;

class cfgWeapons
{
	//--------------------------------------------------------------------------------------------//

	// Weapons Base Classes

	//--------------------------------------------------------------------------------------------//

	// Weapons
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class SMG_03C_TR_black;
	class srifle_EBR_F;
	class OPTRE_SRS99D;
	class OPTRE_SRS99C_Scope;
	class srifle_LRR_F;
	class SMG_02_F;
	class OPTRE_LongRifle_Base : Rifle_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class OPTRE_M99A2S3 : OPTRE_LongRifle_Base
	{
		class Single;
	};
	class TCF_M28A2;
	class srifle_DMR_03_tan_F;
	class SC_Rifle_AR12;
	class 288th_M6C;
	class LMG_Mk200_F;
	class SC_BaseRifle;
	class arifle_SPAR_01_blk_F;
	class OPTRE_CQS48_Bulldog_Automatic;
	class OPTRE_M45TAC;
	class TCF_M33_T;
	class OPTRE_M247;
	class SC_Rifle_SSR55C;
	class SC_Rifle_Bastard;
	class OPTRE_MachineGun_Base;
	class srifle_DMR_04_F;
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
	class asdg_MuzzleSlot_338;
	class asdg_OpticRail1913;
	class asdg_UnderSlot;
	class asdg_FrontSideRail;
	class OPTRE_Riot_Shield_Icon_Attachments;
	class SlotInfo;
	class Default;
	class MineDetector;
	class UGL_F;
	//--------------------------------------------------------------------------------------------//

	// WEAPONS!!!!!

	//--------------------------------------------------------------------------------------------//


	class 288th_Reinfoced_Detector : MineDetector
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] Reinfoced Mine Detector";
		descriptionshort = "Reinfoced Detector";
		baseWeapon = "288th_Reinfoced_Detector";
		detectRange = 30;
		class ItemInfo
		{
			mass = 25;
		};
		picture = "\A3\Weapons_F\Items\data\UI\gear_MineDetector_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_minedetector.p3d";
	};
	class OPTRE_M73: OPTRE_MachineGun_Base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
		};
	};

	class 288th_M99A2S3 : OPTRE_M99A2S3
	{
		/*class Single : Single
		{
			reloadTime = 2;
		};*/
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		baseWeapon = "288th_M99A2S3";
		displayName = "[288th DJP] M99A2S3 Stanchion Gauss Rifle";
		description = "UNSC M99A2S3 stanchion gauss rifle";
		descriptionShort = "5.4mm Anti-Material Special Applications Gauss Rifle";
		model = "\OPTRE_Weapons\Sniper\M99";
		modelOptics = "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic";
		opticType = 1;
		optics = 1;
		opticsID = 1;
		useModelOptics = 1;
		opticsZoomMin = 0.0099999998;
		opticsZoomMax = 0.25;
		opticsZoomInit = 0.25;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		magazineWell[] = { 288th_Gauss };
		opticsPPEffects[] =
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = { 0,1,5,6,7 };
		discretefov[] = { 0.25,0.050000001,0.025,0.0099999998 };
		discreteinitIndex = 0;
		discreteDistance[] = { 50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000 };
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 2000;
		class WeaponSlotsInfo
		{
			mass = 120;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		magazines[] =
		{
			"288th_7Rnd_Gauss_Slug_Mag"
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
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
				begin1[] = {"288th_Weapons\Data\Weapons\SRS99\M99A2S3.OGG",2.5,1,1500};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.99526,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 2;
			dispersion = 0;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_gm6";
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 800;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.25;
		};
	};

	// LMG/HMG
	class SC_Rifle_PKMP : SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		maxZeroing = 1000;
		baseWeapon = "SC_Rifle_PKMP";
		displayName = "PKMP";
		descriptionshort = "PKMP - Heavy Machine Gun";
		model = "\sc_weapons_2\data\pkmp\pkmp.p3d";
		magazines[] = { "SC_200Rnd_338_Mag" };
		reloadAction = "GestureReloadSPAR_02";
		handAnim[] = { "OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm" };
		drySound[] = { "A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.6,1,10 };
		reloadMagazineSound[] = { "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",1,1,10 };
		changeFiremodeSound[] = { "A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.7,1,5 };
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		inertia = 1;
		ace_arsenal_hide = 0;
		recoil = "recoil_Assault";
		modes[] = { "FullAutoFast","FullAutoSlow" };
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "sc_weapons_2\data\pkmp\textures\body_co.paa","sc_weapons_2\data\pkmp\textures\mag_co.paa" };
		cursor = "OPTRE_M73";
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
			reloadTime = 0.05;
			textureType = "fastAuto";
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M12_Optic";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "Ace_muzzle_mzls_338";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 140;
			allowedSlots[] = { 901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"Ace_muzzle_mzls_338",
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l"
				};
			};
			class CowsSlot : asdg_OpticRail1913 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"OPTRE_M12_Optic",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
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
					"optic_mrd_black"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser",
					"OPTRE_M12_Laser",
					"acc_pointer_ir",
					"ACE_acc_pointer_red",
					"ace_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot : asdg_UnderSlot 
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
			};
		};
	};
	class 288th_PKMP : SC_Rifle_PKMP
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		maxZeroing = 1000;
		baseWeapon = "288th_PKMP";
		displayName = "[288th DJP] PKMP HMG";
		descriptionshort = "Special Oni Derived Armament PKMP";
		magazines[] = { "SC_200Rnd_338_Mag" };
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		inertia = 1;
		recoil = "recoil_Assault";
		modes[] = { "FullAutoFast","FullAutoSlow" };
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "sc_weapons_2\data\pkmp\textures\body_co.paa","sc_weapons_2\data\pkmp\textures\mag_co.paa" };
		cursor = "OPTRE_M73";
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
			reloadTime = 0.05;
			textureType = "fastAuto";
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "Optre_Evo_sight_riser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "Ace_muzzle_mzls_338";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 140;
			allowedSlots[] = { 901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"Ace_muzzle_mzls_338",
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l"
				};
			};
			class CowsSlot : asdg_OpticRail1913 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight_riser",
					"OPTRE_M12_Optic",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
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
					"optic_mrd_black"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser",
					"OPTRE_M12_Laser",
					"acc_pointer_ir",
					"ACE_acc_pointer_red",
					"ace_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot : asdg_UnderSlot 
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
			};
		};
	};

	class 288th_M73X : OPTRE_M73
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] M73X HMG";
		baseWeapon = "288th_M73X";
		descriptionshort = "Special Oni Derived Armament M73X";
		recoil = "recoil_lim";
		magazineWell[] = { 288th_M73X };
		magazines[] = { "288th_500Rnd_65x85_Box" };
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M73X\M73_co.paa"};
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 500;
		cursor = "OPTRE_M73";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M73_Smartlink";
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
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 170;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor","optre_m7_silencer","optre_m6_silencer","OPTRE_M393_Suppressor","OPTRE_M12_Suppressor","OPTRE_MA37KSuppressor","OPTRE_M6C_compensator","OPTRE_SRS99D_Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_M73_Smartlink","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","288th_M6C_Scope","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m73_smartlink","optre_m7_sight","optre_m393_acog","optre_hmg38_carryhandle","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_MA5_BUIS","OPTRE_M12_Optic","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","TCF_M7_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_01_F_khk","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_02_F_lush","bipod_02_F_arid","bipod_03_F_blk","bipod_03_F_oli" };
			};
		};
		modes[] = { "FullAutoFast","FullAutoSlow" };
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
			reloadTime = 0.1;
			textureType = "fastAuto";
		};
	};

	class 288th_M50 : TCF_M33_T
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] M50 HMG";
		baseWeapon = "288th_M50";
		descriptionshort = "Special Oni Derived Armament M50";
		inertia = 1;
		recoil = "recoil_m320";
		magazineWell[] = { 288th_M50 };
		magazines[] = { "288th_75Rnd_15x50_Box" };
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 75;
		cursor = "OPTRE_M73";
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
				item = "ACE_muzzle_mzls_B";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 90;
			allowedSlots[] = { 901 };
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "ACE_muzzle_mzls_B" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m73_smartlink","optre_m7_sight","optre_m393_acog","optre_hmg38_carryhandle","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_MA5_BUIS","OPTRE_M12_Optic","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","TCF_M7_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_01_F_khk","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_02_F_lush","bipod_02_F_arid","bipod_03_F_blk","bipod_03_F_oli" };
			};
		};
		modes[] = { "FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"DMR02_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType{};
			dispersion = 5e-05;
			reloadTime = 0.225;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};

	class 288th_M247_Makeshift : OPTRE_M247
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] Scrapped M247";
		descriptionshort = "A scrapped together heavy weapon";
		magazines[] = { "288th_Scrapmag" };
		magazineWell[] = { "288th_scrapped" };
		baseWeapon = "288th_M247_Makeshift";
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M41";
		class WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{

				};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"TCF_REC_holo"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M45_Flashlight_red"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TCF_REC_holo";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M45_Flashlight_red";
			};
		};
		modes[] = { "FullAuto" };
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
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"SC_Ravager_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime = 0.15;
		};
		hiddenSelections[] = { "mainbody1","mainbody2","magazine","stock","details","barrel_sights" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\MG\data\M247_mainbody1_CO.paa","\OPTRE_Weapons\MG\data\M247_mainbody2_CO.paa","\OPTRE_Weapons\MG\data\M247_magazine_CO.paa","\OPTRE_Weapons\MG\data\M247_stock_CO.paa","\OPTRE_Weapons\MG\data\M247_details_CO.paa","\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa" };
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 25;
	};

	//288th Auto GL Rifle
	class 288th_M318 : LMG_Mk200_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] M318 Auto GL";
		baseWeapon = "288th_M318";
		descriptionshort = "Special Oni Derived Armament M318";
		magazineWell[] = { 288th_AutoGL };
		magazines[] = { "288th_AutoGL_Mag","288th_AutoGL_Smoke_Mag"};
		picture = "\a3\Weapons_F_Enoch\Machineguns\M200\Data\UI\icon_LMG_Mk200_black_F_ca.paa";
		hiddenSelectionsTextures[] = { "a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa" };
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";
		class WeaponSlotsInfo
		{
			mass = 95;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					
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
					"TCF_M393_EOTECH_v2",
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
		modes[] = { "FullAutoSlow" };
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
			reloadTime = 0.38;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};

	//Shotguns
	class 288th_CQS_48X : OPTRE_CQS48_Bulldog_Automatic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] CQS-48X";
		descriptionshort = "Special Oni Derived Armament CQS-48X";
		baseWeapon = "288th_CQS_48X";
		recoil = "recoil_lim";
		magazines[] =
		{
			"288th_Buckshot",
			"288th_Slug"
		};
		magazineWell[] = { 288th_shotgun };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
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
				item = "ACE_muzzle_mzls_B";
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
					"ACE_muzzle_mzls_B"
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
		modes[] = { "Single","FullAuto" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
	};
	class 288th_Bulldog_Riot_Shield: 288th_CQS_48X
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		baseWeapon = "288th_Bulldog_Riot_Shield";
		displayName = "[288th DJP] Riot Shield (CQS-48X)";
		model = "\OPTRE_Weapons\RiotShield\riotshield_Bulldog.p3d";
		hiddenSelections[] = {"camoShield","camoWindshield","camoBody","camoDecal"};
		hiddenSelectionsTextures[] = {"OPTRE_Weapons\RiotShield\data\police\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\OPTRE_Weapons\bulldog\data\chihuahua\Body_co.paa","\OPTRE_Weapons\bulldog\data\decal\cqs48as\DecalSheet_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_Weapons\RiotShield\data\body.rvmat","OPTRE_Weapons\riotshield\data\glass.rvmat","\OPTRE_Weapons\bulldog\data\chihuahua\body.rvmat","\OPTRE_Weapons\bulldog\data\decal\cqs48as\decal.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\bulldog_human.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\spartan\bulldog_spartan.rtm"};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye2"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = {180,180,180};
			ambient[] = {0.9,0.9,0.9};
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = {0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: OPTRE_Riot_Shield_Icon_Attachments{};
		};
	};

	class 288th_M45TAC : OPTRE_M45TAC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] M45 Confetti";
		descriptionshort = "Special Oni Derived Armament M45";
		fireSpreadAngle = 1;
		canShootInWater = 1;
		magazineWell[] = { 288th_M45TAC };
		magazines[] = { "288th_Loose_Buckshot","288th_Loose_Slugs" };
		baseWeapon = "288th_M45TAC";
		picture = "\OPTRE_weapons\shotgun\icons\M452.paa";
		/*ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 12;*/
		hiddenSelections[] = {"camo","camo_details","camo_pellet","camo_slug","camo_attach"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\Shotgun\shotgun_co.paa","288th_Weapons\Data\Weapons\unsc_decals_ca.paa","optre_weapons\shotgun\data\shell_pellet_co.paa","optre_weapons\shotgun\data\shell_slug_co.paa","optre_weapons\shotgun\data\shotgunattach_co.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M12_Optic";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ACE_muzzle_mzls_B";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M45_Flashlight_red";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_m6_silencer",
					"ACE_muzzle_mzls_B"
				};
			};
			class CowsSlot : CowsSlot
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
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optre_m7_sight",
					"OPTRE_M12_Optic"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M45_Flashlight",
					"OPTRE_M45_Flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_M45_Flashlight_yellow",
					"OPTRE_M45_Flashlight_cyan",
					"OPTRE_M45_Flashlight_purple",
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			reloadTime = 1.25;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 75;
			midRangeProbab = 0.35;
			maxRange = 200;
			maxRangeProbab = 0.45;
			distanceZoomMin = 60;
			distanceZoomMax = 60;
			recoil = "recoil_single_ksg";
			recoilProne = "recoil_single_prone_ksg";
		};
	};

	class 288th_Kel_Stomper: SC_Rifle_Bastard
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] Kelkuza's Stomper";
		baseWeapon = "288th_Kel_Stomper";
		descriptionshort = "Kelkuza's custom 'Stomper' Shotgun";
		maxZeroing = 1000;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"sc_weapons_2\data\Bastard\textures\DefaultMaterial_co.paa"};
		magazines[] ={"288th_Buckshot","288th_Slug"};
		magazineWell[] = { 288th_shotgun };
		visionMode[] ={"Normal","NVG"};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		cursor = "OPTRE_M45";
		pictureWire = "\OPTRE_Weapons\bulldog\data\wire\bulldog.paa";
		picture = "\OPTRE_Weapons\MA37K\icons\ma37k_icon.paa";
		modes[] = { "Single","FullAuto" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.15;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.15;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
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
				item = "ACE_muzzle_mzls_B";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"ACE_muzzle_mzls_B"
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
			class UnderBarrelSlot : UnderBarrelSlot
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleitems[] = { ,"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	class 288th_Eugen_XM54 : srifle_DMR_04_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] XM54 Super Confetti";
		baseWeapon = "288th_Eugen_XM54";
		descriptionshort = "Eugen's custom 'XM54' Shotgun";
		maxZeroing = 1000;
		magazines[] ={"288th_HV_Flechettes","288th_HEDP_Small"};
		magazineWell[] = { 288th_Eugen_XM54 };
		visionMode[] ={"Normal","NVG"};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolSmart";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolSmart";
		Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=8;
		cursor = "OPTRE_M45";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M12_Optic";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M45_Flashlight_red";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 75;
			class CowsSlot : CowsSlot
			{
				iconPosition = [0.52,0.38];
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"288th_Hamr_Scope",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_M12_Sight",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_mrco_2d",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"optic_aco",
					"optic_aco_grn",
					"optic_aco_grn_smg",
					"optic_aco_smg",
					"optic_ams",
					"optic_arco_ak_blk_f",
					"optic_arco_blk_f",
					"optic_dms",
					"optic_erco_blk_f",
					"optic_ERCO_snd_F",
					"optic_Hamr",
					"optic_hamr",
					"optic_Holosight",
					"optic_holosight_blk_f",
					"optic_holosight_smg_blk_f",
					"optic_ico_01_black_f",
					"optic_khs_blk",
					"optic_lrps",
					"optic_mrco",
					"optic_mrd_black",
					"optic_nightstalker",
					"optic_NVS",
					"optic_sos",
					"optic_yorris",
					"OPTRE_BMR_Scope",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"Optre_Evo_sight",
					"Optre_Evo_sight_riser",
					"optre_hmg38_carryhandle",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"optre_m7_sight",
					"OPTRE_M12_Optic",
					"optre_m73_smartlink",
					"optre_m392_scope",
					"optre_m393_acog",
					"optre_m393_eotech",
					"optre_m393_scope",
					"OPTRE_MA5_BUIS",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Snow",
					"Optre_Recon_Sight_UNSC",
					"OPTRE_SRM_Sight",
					"optre_srs99_scope",
					"OPTRE_SRS99C_Scope",
					"optre_srs99c_scope",
					"SC_Reflex_C1_Red",
					"SC_Reflex_C_Blue",
					"SC_Reflex_C_Red",
					"SC_Reflex_Chevron_R",
					"SC_Reflex_R_Blue",
					"SC_Reflex_R_Green",
					"SC_Reflex_R_Yellow",
					"SC_T1",
					"SC_TSO55",
					"SC_X11",
					"tcf_m6D_Smartlink",
					"TCF_M393_EOTECH_v2",
					"TCF_REC_holo",
					"TCF_SENT_CG",
					"TCF_SENT_CGGre",
					"TCF_SENT_CGRed",
				};
			};
			class PointerSlot : PointerSlot
			{
				iconPosition = [0.3,0.43];
				iconScale = 0.2;
				compatibleitems[] =
				{
					"OPTRE_M45_Flashlight",
					"OPTRE_M45_Flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_M45_Flashlight_yellow",
					"OPTRE_M45_Flashlight_cyan",
					"OPTRE_M45_Flashlight_purple",
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		modes[] = { "Single" };
	};
	
	class 288th_Autocannon : SC_Rifle_SSR55C
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th DJP] AC-8 Autocannon";
		descriptionshort = "Special Oni Derived Armament AC-8";
		model="\sc_weapons\data\ssr55\ssr55c.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\288th_Weapons\Data\Weapons\SRS99\SSR_Body_NBlue.paa",
			"sc_weapons\data\ssr55\textures\mag_co.paa"
		};
		baseWeapon = "288th_Autocannon";
		/*recoil = "recoil_lim";*/
		recoil = "recoil_m320";
		magazines[] =
		{
			"288th_Autocannon_mag"
		};
		magazineWell[] = { 288th_AC_8 };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		cursor = "OPTRE_M41R";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SC_T1";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 95;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
		
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"SC_T1"
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
		modes[] = { "Single","FullAuto" };
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.25;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class FullAuto : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		allowedslots[] = {901};
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Commando\VK.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows = 5;
		HUD_TotalPosibleBullet = 10;
	};
};
