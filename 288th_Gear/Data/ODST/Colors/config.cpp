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

class cfgWeapons
{

	class HeadgearItem;
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class ItemInfo;
	class 288th_Armor_ODST_Rifleman;
	class VestItem;

	// Color Helmets
	class 288th_CH252D_ODST_Red : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Red";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Red_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Red_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Red_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Red";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Red_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Blue : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Blue";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Blue_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Blue_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Blue_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Blue";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Blue_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Yellow : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Yellow";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Yellow_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Yellow_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Yellow_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Yellow";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Yellow_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Green : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Green";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Green_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Green_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Green_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Green";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Green_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Orange : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Orange";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Orange_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Orange_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Orange_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Orange";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Orange_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Purple : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Purple";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Purple_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Purple_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Purple_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Purple";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Purple_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Teal : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Teal";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Teal_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Teal_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Teal_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Teal";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Teal_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_White : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - White";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_White_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_White_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_White_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - White";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_White_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Pink : 288th_CH252D_ODST_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Pink";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Pink_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Pink_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Pink_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Pink";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Pink_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Trans : 288th_CH252D_ODST_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Trans";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Trans_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Colors\Helmets\ODST_Trans_Helmet.paa",
				"288th_Gear\Data\ODST\Visors\ODST_Base_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Trans_dp : 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Trans";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Colors\Helmets\ODST_Trans_Helmet.paa",
		};
		;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
		};
		grad_slingHelmet_allow = true;
	};

	//Color Armor
	class 288th_Armor_ODST_Red : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Red";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Red_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Red_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Blue : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Blue";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Blue_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Blue_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Yellow : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Yellow";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Yellow_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Yellow_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Green : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Green";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Green_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Green_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Orange : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Orange";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Orange_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Orange_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Purple : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Purple";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Purple_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Purple_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Teal : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Teal";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Teal_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Teal_Armor.paa"
		};
	};
	class 288th_Armor_ODST_White : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - White";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_White_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_White_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Pink : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] M52D ODST Armor - Pink";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Pink_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Pink_Armor.paa"
		};
	};
	class 288th_Armor_ODST_Trans : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D ODST Armor - Trans";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Trans_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Colors\Armor\ODST_Trans_Armor.paa"
		};
	};
};