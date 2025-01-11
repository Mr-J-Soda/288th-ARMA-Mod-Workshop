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
	class Rifle_Base_F;
	class 288th_AR1X;
	class 288th_AR3X;
	class 288th_AR4X;
	class 288th_M73X;
	class 288th_M7V_SMG;
	class 288th_CQS_48X;
	class 288th_SSP9;
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

	class 288th_AR1X_SW : 288th_AR1X
	{
		scope = 1;
		scopeArsenal = 1;
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
				item = "acc_flashlight";
			};
		};
	};
	class 288th_AR3X_SW : 288th_AR3X
	{
		scope = 1;
		scopeArsenal = 1;
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
				item = "acc_flashlight";
			};
		};
	};
	class 288th_AR4X_SW : 288th_AR4X
	{
		scope = 1;
		scopeArsenal = 1;
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
				item = "acc_flashlight";
			};
		};
	};
	class 288th_M73X_SW : 288th_M73X
	{
		scope = 1;
		scopeArsenal = 1;
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
				item = "OPTRE_M45_Flashlight";
			};
		};
	};
	class 288th_M7V_SMG_SW : 288th_M7V_SMG
	{
		scope = 1;
		scopeArsenal = 1;
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
	};
	class 288th_CQS_48X_SW : 288th_CQS_48X
	{
		scope = 1;
		scopeArsenal = 1;
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
				item = "acc_flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ACE_muzzle_mzls_B";
			};
		};
	};
	class 288th_SSP9_SW : 288th_SSP9
	{
		scope = 1;
		scopeArsenal = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SC_Reflex_C_Blue";
			};
		};
	};
};
