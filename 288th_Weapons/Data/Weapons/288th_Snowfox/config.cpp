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
	class 288th_Snowfox
	{
		CfgMagazines[] =
		{
			"288th_762_Mag",
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
		displayName = "[288th DJP] Snowfox";
		descriptionshort = "Special Oni Derived Armament Snowfox";
		baseWeapon = "288th_Snowfox";
		recoil = "recoil_lim";
		hiddenSelectionsTextures[] =
		{
			"288th_Weapons\Data\Weapons\288th_Snowfox\m14_ebr01_Fiy_Yellow_CO.paa",
			"288th_Weapons\Data\Weapons\288th_Snowfox\m14_ebr01_Fiy_CO.paa"
		};
		magazines[] =
		{
			"288th_762_Mag"
		};
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
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M12_Sight";
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
	};
};
