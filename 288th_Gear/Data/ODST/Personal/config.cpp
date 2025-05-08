////////////////////////////////////////////////////////////////////
//DeRap: Data\ODST\Personal\config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:06 2025 : 'file' last modified on Mon Apr 14 19:54:27 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear_Personal
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {"288th_M52D_Dummy","288th_M52D_Test"};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
class cfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class VestItem;
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class 288th_Armor_ODST_Rifleman;
	class 288th_CH252D_Dummy: 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Dummy";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa","288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		subItems[] = {"288th_Mk5_NVG"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa","288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			modelSides[] = {6};
			passThrough = 0.1;
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 45;
					hitpointName = "HitFace";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Head
				{
					armor = 45;
					hitPointName = "HitHead";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		ctab_camera = 1;
	};
	class 288th_M52D_Dummy: 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D ODST Armor - Dummy";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Vest","288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Vest2","288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = {6};
			containerClass = "Supply250";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesMarLeft","A_KneesMarRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Smoke","APO_AR","APO_Sniper","CustomKit_Scorch"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 45;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 45;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 45;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 45;
					passThrough = 0.1;
				};
			};
		};
	};
	class 288th_CH252D_Error: 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		displayName = "[288th] CH252D ODST Helmet - Error";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa","288th_Gear\Data\ODST\Personal\Error\ODST_Error_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa","288th_Gear\Data\ODST\Personal\Error\ODST_Error_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			modelSides[] = {6};
			passThrough = 0.1;
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 45;
					hitpointName = "HitFace";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Head
				{
					armor = 45;
					hitPointName = "HitHead";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
	};
	class 288th_CH252D_Error_dp: 288th_CH252D_ODST_Base_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Error";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa"};
		hiddenSelections[] = {"camo","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa"};
			hiddenSelections[] = {"camo","H_Ghillie"};
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 45;
					hitpointName = "HitFace";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Head
				{
					armor = 45;
					hitPointName = "HitHead";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
	};
	class 288th_M52D_Error: 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D ODST Armor - Error";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Vest","288th_Gear\Data\ODST\Personal\Error\ODST_Error_Vest2","288th_Gear\Data\ODST\Personal\Error\ODST_Error_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Personal\Error\ODST_Error_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = {6};
			containerClass = "Supply250";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Smoke","APO_BR","APO_Knife","APO_Sniper","CustomKit_Scorch"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 45;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 45;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 45;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 45;
					passThrough = 0.1;
				};
			};
		};
	};
	class 288th_CH252D_Test: 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Test";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Helmet.paa","288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Helmet.paa","288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			modelSides[] = {6};
			passThrough = 0.1;
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 45;
					hitpointName = "HitFace";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Head
				{
					armor = 45;
					hitPointName = "HitHead";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
	};
	class 288th_CH252D_Test_dp: 288th_CH252D_ODST_Base_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Test";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Helmet.paa"};
		hiddenSelections[] = {"camo","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Helmet.paa"};
			hiddenSelections[] = {"camo","H_Ghillie"};
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 45;
					hitpointName = "HitFace";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Head
				{
					armor = 45;
					hitPointName = "HitHead";
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
	};
	class 288th_M52D_Test: 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D ODST Armor - Test";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\army\data\vest_odst_co.paa","OPTRE_UNSC_Units\army\data\armor_odst_co.paa","288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Personal\Test\ODST_OPFOR_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = {6};
			containerClass = "Supply250";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Smoke","APO_BR","APO_Knife","APO_Sniper","CustomKit_Scorch"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 45;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 45;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 45;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 45;
					passThrough = 0.1;
				};
			};
		};
	};
};
