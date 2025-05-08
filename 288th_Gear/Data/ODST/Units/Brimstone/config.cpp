////////////////////////////////////////////////////////////////////
//DeRap: Data\ODST\Units\Brimstone\config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:06 2025 : 'file' last modified on Mon Apr 14 19:54:28 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear_Brimstone
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {"288th_CH252D_ODST_Brimstone","288th_CH252D_ODST_Brimstone_Red","288th_CH252D_ODST_Brimstone_Blue","288th_CH252D_ODST_Brimstone_Gold","288th_CH252D_ODST_Brimstone_Galaxy","288th_CH252D_ODST_Brimstone_Orange","288th_CH252D_ODST_Brimstone_Purple","288th_CH252D_ODST_Brimstone_Silver","288th_CH252D_ODST_Brimstone_Green","288th_CH252D_ODST_Brimstone_Yellow","288th_CH252D_ODST_Brimstone_White","288th_CH252D_ODST_Brimstone_Black","288th_M52D_Brimstone_Rifleman","288th_M52D_Brimstone_Rifleman_Blue","288th_M52D_Brimstone_Rifleman_Green","288th_M52D_Brimstone_Rifleman_Yellow","288th_M52D_Brimstone_Rifleman_White","288th_M52D_Brimstone_Demolitions","288th_M52D_Brimstone_Demolitions_Blue","288th_M52D_Brimstone_Demolitions_Green","288th_M52D_Brimstone_Demolitions_Yellow","288th_M52D_Brimstone_Demolitions_White","288th_M52D_Brimstone_Marksman","288th_M52D_Brimstone_Marksman_Blue","288th_M52D_Brimstone_Marksman_Green","288th_M52D_Brimstone_Marksman_Yellow","288th_M52D_Brimstone_Marksman_White","288th_M52D_Brimstone_Sniper","288th_M52D_Brimstone_Sniper_Blue","288th_M52D_Brimstone_Sniper_Green","288th_M52D_Brimstone_Sniper_Yellow","288th_M52D_Brimstone_Sniper_White","288th_M52D_Brimstone_Medic","288th_M52D_Brimstone_Medic_Blue","288th_M52D_Brimstone_Medic_Green","288th_M52D_Brimstone_Medic_Yellow","288th_M52D_Brimstone_Medic_White"};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
class cfgWeapons
{
	class 288th_Armor_ODST_Rifleman;
	class VES_CH252A;
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class HeadgearItem;
	class ItemInfo;
	class VestItem;
	class 288th_Brimstone_Helmet: VES_CH252A
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Default_Visor"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\aa_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Default_Visor"};
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
			mass = 5;
		};
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Brimstone_Helmet_Gold: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Gold)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Gold_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Blue: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Blue_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Silver: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Silver)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Silver_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Purple: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Purple_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Orange: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Orange_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Red: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Red_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Galaxy: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Galaxy_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Green: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Green_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Yellow: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Yellow_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_White: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_White_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Brimstone_Helmet_Black: 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A Brimstone (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\AirAssault\Airborn_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\AirAssault\CH252A_Black_Visor"};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone: 288th_CH252D_ODST_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Base.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_dp: 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Red: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Red)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Red","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Red","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Red_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Red)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Blue: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Blue)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Blue","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Blue","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Blue_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Blue)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Gold: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Gold)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Gold","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Gold","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Gold_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Gold)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Galaxy: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Galaxy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Galaxy","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Galaxy","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Galaxy_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Galaxy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Orange: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Orange)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Orange","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Orange","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Orange_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Orange)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Purple: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Purple)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Purple","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Purple","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Purple_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Purple)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Silver: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Silver)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Silver","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Silver","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Silver_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Silver)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Green: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Green","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Green","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Green_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Yellow: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Yellow)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Yellow","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Yellow","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Yellow_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Yellow)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_White: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (White)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_White","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_White","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_White_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (White)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Black: 288th_CH252D_ODST_Brimstone
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Black)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Black","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet","288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Visor_Black","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Brimstone_Black_dp: 288th_CH252D_ODST_Brimstone_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D Brimstone (Black)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST\ODST_Brimstone_Helmet"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_M52D_Brimstone_Rifleman: 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = {6};
			containerClass = "Supply250";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesMarLeft","A_KneesMarRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class 288th_M52D_Brimstone_Rifleman_Blue: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Blue (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Blue.paa"};
	};
	class 288th_M52D_Brimstone_Rifleman_Green: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Green (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Green.paa"};
	};
	class 288th_M52D_Brimstone_Rifleman_Yellow: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Yellow (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Yellow.paa"};
	};
	class 288th_M52D_Brimstone_Rifleman_White: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone White (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_White.paa"};
	};
	class 288th_M52D_Brimstone_Demolitions: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","CustomKit_Scorch"};
			containerClass = "Supply250";
			modelSides[] = {6};
			mass = 5;
		};
	};
	class 288th_M52D_Brimstone_Demolitions_Blue: 288th_M52D_Brimstone_Demolitions
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Blue (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Blue.paa"};
	};
	class 288th_M52D_Brimstone_Demolitions_Green: 288th_M52D_Brimstone_Demolitions
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Green (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Green.paa"};
	};
	class 288th_M52D_Brimstone_Demolitions_Yellow: 288th_M52D_Brimstone_Demolitions
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Yellow (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Yellow.paa"};
	};
	class 288th_M52D_Brimstone_Demolitions_White: 288th_M52D_Brimstone_Demolitions
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone White (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_White.paa"};
	};
	class 288th_M52D_Brimstone_Marksman: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = {6};
			containerClass = "Supply250";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","APO_AR","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		};
	};
	class 288th_M52D_Brimstone_Marksman_Blue: 288th_M52D_Brimstone_Marksman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Blue (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Blue.paa"};
	};
	class 288th_M52D_Brimstone_Marksman_Green: 288th_M52D_Brimstone_Marksman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Green (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Green.paa"};
	};
	class 288th_M52D_Brimstone_Marksman_Yellow: 288th_M52D_Brimstone_Marksman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone Yellow (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Yellow.paa"};
	};
	class 288th_M52D_Brimstone_Marksman_White: 288th_M52D_Brimstone_Marksman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Brimstone White (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_White.paa"};
	};
	class 288th_M52D_Brimstone_Sniper: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","CustomKit_Scorch"};
			containerClass = "Supply250";
			modelSides[] = {6};
			mass = 5;
		};
	};
	class 288th_M52D_Brimstone_Sniper_Blue: 288th_M52D_Brimstone_Sniper
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Blue (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Blue.paa"};
	};
	class 288th_M52D_Brimstone_Sniper_Green: 288th_M52D_Brimstone_Sniper
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Green (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Green.paa"};
	};
	class 288th_M52D_Brimstone_Sniper_Yellow: 288th_M52D_Brimstone_Sniper
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Yellow (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Yellow.paa"};
	};
	class 288th_M52D_Brimstone_Sniper_White: 288th_M52D_Brimstone_Sniper
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone White (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_White.paa"};
	};
	class 288th_M52D_Brimstone_Medic: 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor_medic.paa"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_BR","APO_SMG","APO_AR","APO_Sniper","CustomKit_Scorch"};
			containerClass = "Supply250";
			modelSides[] = {6};
			mass = 5;
		};
	};
	class 288th_M52D_Brimstone_Medic_Blue: 288th_M52D_Brimstone_Medic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Blue (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Blue_medic.paa"};
	};
	class 288th_M52D_Brimstone_Medic_Green: 288th_M52D_Brimstone_Medic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Green (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Green_medic.paa"};
	};
	class 288th_M52D_Brimstone_Medic_Yellow: 288th_M52D_Brimstone_Medic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone Yellow (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_Yellow_medic.paa"};
	};
	class 288th_M52D_Brimstone_Medic_White: 288th_M52D_Brimstone_Medic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D Brimstone White (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2","288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Units\Brimstone\Fireteam\ODST_Brimstone_Armor_White_medic.paa"};
	};
};
