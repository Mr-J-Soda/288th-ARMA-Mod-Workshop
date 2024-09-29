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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

class cfgWeapons
{
	class arifle_MSBS65_Mark_black_F;
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

	class 288th_Stevens : arifle_MSBS65_Mark_black_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		dexterity = 2.2;
		audibleFire = 0.1;
		dispersion = 0;
		distanceZoomMax = 1000;
		distanceZoomMin = 100;
		/*initSpeed = 30;*/
		//autoReload = true;
		recoil = "recoil_lim";
		displayName = "[288th DJP] Steven's Apocalypse";
		descriptionshort = "Special Oni Derived Armament";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\Stevens_Gun\AR0M37_1","\288th_Weapons\Data\Weapons\Stevens_Gun\AR0M37_2"};
		baseWeapon = "288th_Stevens";
		magazines[] =
		{
			"288th_Stanag_LMG"
		};
		magazineWell[] = { 288th_Standard_LMG };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		//magazineReloadTime = 3.25;
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		cursor = "test";
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
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor","muzzle_snds_L" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_M7_Sight","288th_M12_Sight","optre_br55hb_scope","TCF_REC_holo","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Evo_sight_riser","OPTRE_M12_Optic","optic_dms","optic_aco_grn","optic_aco","optic_holosight_blk_f","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_erco_blk_f","optic_ams","optic_yorris","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_M12_Laser","acc_flashlight","acc_pointer_ir" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_f_blk" };
			};
		};
	};
};