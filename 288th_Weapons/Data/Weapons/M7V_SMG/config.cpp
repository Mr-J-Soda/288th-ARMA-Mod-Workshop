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
	class 288th_M7V_SMG
	{
		CfgMagazines[] =
		{
			"288th_45ACP_Mag_AP",
			"288th_45ACP_Mag_EHP"
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
	class SMG_01_F;
	class optre_m7;
	class SC_Rifle_Ghoul;
	class OPTRE_M7_Riot_Shield;
	class hgun_PDW2000_F;
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
	class OPTRE_Riot_Shield_Icon_Attachments;

	// 288th SMGs
	class 288th_M7V_SMG : SMG_01_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] M7V SMG";
		descriptionshort = "Special Oni Derived Armament M7V SMG";
		baseWeapon = "288th_M7V_SMG";
		magazines[] =
		{
			288th_45ACP_Mag_AP
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\Data\Weapons\M7V_SMG\M7V_SMG.paa",
			"\a3\weapons_f\data\vectoratt_co.paa",
			"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
		magazineWell[] = { 288th_M7V_SMG };
		recoil = "recoil_M7V_SMG";
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		//pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubMachineGuns\M7_icon.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 60;
		handAnim[] = { "OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_01\data\Anim\SMG_01.rtm" };
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
				item = "acc_flashlight_smg_01";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 25;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M12_Suppressor",
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight_riser",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_erco_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optre_m7_sight",
					"optre_m392_scope",
					"OPTRE_M12_Optic"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"acc_flashlight_smg_01",
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
	class 288th_M7K_SMG : SC_Rifle_Ghoul
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] M7K SMG";
		descriptionshort = "Special Oni Derived Armament M7K SMG";
		baseWeapon = "288th_M7K_SMG";
		maxZeroing = 300;
		magazines[] ={"288th_45ACP_Mag_AP"};
		magazineWell[] = { 288th_M7V_SMG };
		recoil = "recoil_M7V_SMG";
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		inertia = 0.25;
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 60;
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
				item = "optre_ma5suppressor";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 25;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"ace_muzzle_mzls_smg_01"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight_riser",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"optre_m7_sight",
					"OPTRE_M12_Optic",
					"SC_Reflex_Chevron_R"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"acc_flashlight",
					"OPTRE_M12_Laser"
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
		modes[] = {"FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 5e-05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 5e-05;
		};
	};
	class 288th_M7X_SMG: OPTRE_M7
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] M7X SMG";
		descriptionshort = "Special Oni Derived Armament M7X SMG";
		baseWeapon = "288th_M7X_SMG";
		magazines[] ={288th_45ACP_Mag_AP};
		magazineWell[] = { 288th_M7V_SMG };
		recoil = "recoil_M7V_SMG";
		visionMode[] ={"Normal","NVG"};
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		//pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubMachineGuns\M7_icon.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 60;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M7V_SMG\m7_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa"};
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M7_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M7_Silencer";
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
					"OPTRE_M7_Silencer"
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
					"288th_M7_Sight",
					"optre_m7_sight"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Vis_Red_Laser",
					"OPTRE_M7_Flashlight"
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
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class 288th_M7X_Riot_Shield: OPTRE_M7_Riot_Shield
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		baseWeapon = "288th_M7X_Riot_Shield";
		displayName = "[288th DJP] Riot Shield (M7X)";
		hiddenSelections[] = {"camoShield","camoWindshield","camo","camo1"};
		hiddenSelectionsTextures[] = {"OPTRE_Weapons\RiotShield\data\police\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","288th_Weapons\Data\Weapons\M7V_SMG\m7_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_Weapons\RiotShield\data\body.rvmat","OPTRE_Weapons\riotshield\data\glass.rvmat","optre_weapons\smg\data\m7_m7.rvmat","optre_weapons\smg\data\m7_magazine.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\m7_human.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\spartan\m7_spartan.rtm"};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		magazines[] ={288th_45ACP_Mag_AP};
		magazineWell[] = { 288th_M7V_SMG };
		recoil = "recoil_M7V_SMG";
		visionMode[] ={"Normal","NVG"};
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		//pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubMachineGuns\M7_icon.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 60;
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
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M7_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M7_Silencer";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"OPTRE_M7_Silencer"
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
					"288th_M7_Sight",
					"optre_m7_sight",
					"TCF_SENT_CG",
					"TCF_SENT_CGGre",
					"TCF_SENT_CGRed",
					"OPTRE_M12_Optic"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Vis_Red_Laser",
					"OPTRE_M7_Flashlight"
				};
			};
			class WeaponSlotsInfo: WeaponSlotsInfo
			{
				class UnderBarrelSlot: OPTRE_Riot_Shield_Icon_Attachments{};
			};
		};
	};
	class 288th_M7X_SMG_V : 288th_M7X_SMG
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		autoReload = true;
		magazineReloadTime = 2.0;
	};
	class 288th_Avisa_SMG : hgun_PDW2000_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th DJP] Avisa's Gloria";
		descriptionshort = "Dildo not included";
		baseWeapon = "288th_Avisa_SMG";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		modes[] = { "Single","FullAuto" };
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
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
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 0.025;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class FullAuto: Single
		{
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
			"TCF_12Rnd_127x40_Mag_NARQ"
		};
		magazineWell[] = { 288th_M6C };
		recoil = "recoil_M7V_SMG";
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		handAnim[] = { "OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_01\data\Anim\SMG_01.rtm" };
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
				item = "optre_ma5suppressor";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M7_Flashlight";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 25;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"OPTRE_M12_Suppressor"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Evo_sight_riser"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Vis_Red_Laser",
					"OPTRE_M7_Flashlight"
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

	// 288th M7V SMG Sidearm
	/*class 288th_M7V_SMG_2 : 288th_M7V_SMG
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		canShootInWater = 1;
		type = 2;
		displayName = "[288th DJP] M7V SMG";
		baseWeapon = "288th_M7V_SMG_2";
		model = "\A3\Weapons_F_beta\Smgs\SMG_01\SMG_01_F.p3d";
	};*/
};