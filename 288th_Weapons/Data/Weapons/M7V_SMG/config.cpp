class CfgPatches
{
	class 288th_Weapons
	{
		author = "Festive Neira / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] ={"288th_M7V_SMG","288th_M7K_SMG","288th_M7X_SMG","288th_M7X_Riot_Shield","288th_M7X_SMG_V"};
		magazines[] ={};
		ammo[] ={};
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

class Single;
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
	class OPTRE_M7_Folded;
	class SMG_05_F;
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
		displayName = "[288th] M7V SMG";
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
	class 288th_M7K_SMG : SMG_05_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M7K SMG";
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
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M7V_SMG\signalis_type84_black_co.paa","288th_Weapons\Data\Weapons\M7V_SMG\signalis_type84_black_acc_co.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "Optre_Evo_sight_riser";
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
					"OPTRE_M12_Suppressor"
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
	};
	class 288th_M7X_SMG: OPTRE_M7
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M7X SMG";
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
	class 288th_M7X_SMG_Folded: OPTRE_M7_Folded
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M7X SMG";
		descriptionshort = "Special Oni Derived Armament M7X SMG";
		baseWeapon = "288th_M7X_SMG_Folded";
		magazines[] ={288th_45ACP_Mag_AP};
		magazineWell[] = { 288th_M7V_SMG };
		//recoil = "recoil_M7V_SMG";
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
		handAnim[] = {"OFP2_ManSkeleton"};
		reloadAction = "GestureReloadPistol";
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
		displayName = "[288th] Riot Shield (M7X)";
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
};