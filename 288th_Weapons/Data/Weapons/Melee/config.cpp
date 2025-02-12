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
	//--------------------------------------------------------------------------------------------//

	// Weapons Base Classes

	//--------------------------------------------------------------------------------------------//

	// Weapons
	class Mode_SemiAuto;
	class Mode_Burst;
	class SlotInfo;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class Shovel_Russian_Rotated;
	class Casey_Energy_Sword_1;

	// 288th Shovel
	class 288th_Shovel : Shovel_Russian_Rotated
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Shovel";
		descriptionshort = "It's a Shovel";
		baseWeapon = "288th_Shovel";
		IMS_Melee_Param_Damage = 1.0;
		allowedSlots[] = {701,801,901 };
		//model = "\ace\addons\apl\ace_entrchtool.p3d";
		//picture = "\ace\addons\trenches\ui\w_entrchtool_ca.paa";
		//hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\Melee\met_CO.paa","\288th_Weapons\Data\Weapons\Melee\wood_CO.paa"};
		class WeaponSlotsInfo
		{
			holsterOffset = "holster";
			holsterScale = 0;
			allowedSlots[] = {701,801,901 };
			mass = 8;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {2000,2000};
				iconScale = 0.1;
			};
			class CowsSlot
			{
				 
				compatibleitems[] = {};
				iconPosition[] = {2000,2000};
				iconScale = 0.1;
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot: PointerSlot
			{
				 
				compatibleitems[] = {};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
	};
	class 288th_Energy_Sword: Casey_Energy_Sword_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Captured Energy Sword";
		baseWeapon = "288th_Energy_Sword";
		model = "288th_Weapons\Data\Weapons\Melee\EnergySword_mlod.p3d";
		IMS_WeaponType = "Energy_Sword";
		IMS_Melee_Param_Damage = 0.5;
		allowedSlots[] = {701,801,901 };
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\Melee\Energy_ca.paa"};
		picture = "288th_Weapons\Data\Weapons\Melee\sword.paa";
		class WeaponSlotsInfo
		{
			holsterOffset = "holster";
			holsterScale = 0;
			allowedSlots[] = {701,801,901 };
			mass = 8;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {2000,2000};
				iconScale = 0.1;
			};
			class CowsSlot
			{
				 
				compatibleitems[] = {};
				iconPosition[] = {2000,2000};
				iconScale = 0.1;
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot: PointerSlot
			{
				 
				compatibleitems[] = {};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
	};
};
