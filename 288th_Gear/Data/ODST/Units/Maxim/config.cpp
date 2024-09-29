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
	class 288th_Armor_ODST_Rifleman;
	class 288th_Brimstone_Helmet;
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class OPTRE_UNSC_EOD_Helmet;
	class OPTRE_UNSC_EOD_Helmet_dp;
	class HitpointsProtectionInfo;
	class HeadgearItem;
	class ItemInfo;
	class VestItem;

	class 288th_CH252D_ODST_Maxim : 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D Maxim";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Visor.paa",
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
		
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Helmet.paa",
				"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Visor.paa",
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
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Maxim_dp : 288th_CH252D_ODST_Base_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D Maxim";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Visor.paa",
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
		
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
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
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Maxim_Tempest : 288th_CH252D_ODST_Maxim
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D Maxim (Tempest)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Visor.paa",
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
		
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Helmet.paa",
				"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Visor.paa",
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
		grad_slingHelmet_allow = true;
	};
	class 288th_CH252D_ODST_Maxim_Tempest_dp : 288th_CH252D_ODST_Maxim_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D Maxim (Tempest)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Visor.paa",
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
		
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
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
		grad_slingHelmet_allow = true;
	};

	class 288th_EOD_Maxim_Glitch : OPTRE_UNSC_EOD_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Maxim EOD Helmet (Glitch)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "288th_Gear\Data\ODST\Units\Maxim\Glitch\ODST_Glitch_helmet","288th_Gear\Data\ODST\Units\Maxim\Glitch\EOD_Visor_co.paa" };
		optreVarietys[] = { "_dp","","_broken" };
		optreHUDStyle = "ODST_1";
		
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\EOD_Helmet.p3d";
			mass = 5;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "288th_Gear\Data\ODST\Units\Maxim\Glitch\ODST_Glitch_helmet","288th_Gear\Data\ODST\Units\Maxim\Glitch\EOD_Visor_co.paa" };
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
		grad_slingHelmet_allow = true;
		ctab_camera=1;
	};
	class 288th_EOD_Maxim_Glitch_dp : OPTRE_UNSC_EOD_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Maxim EOD Helmet (Glitch)";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "288th_Gear\Data\ODST\Units\Maxim\Glitch\ODST_Glitch_helmet","288th_Gear\Data\ODST\Units\Maxim\Glitch\EOD_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\EOD_Helmet.p3d";
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "288th_Gear\Data\ODST\Units\Maxim\Glitch\ODST_Glitch_helmet","288th_Gear\Data\ODST\Units\Maxim\Glitch\EOD_Visor_co.paa" };
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
		grad_slingHelmet_allow = true;
		ctab_camera=1;
	};

	class 288th_Maxim_Helmet : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Maxim";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\AA_Helmet_MaximStandard",
			"288th_Gear\Data\ODST\Units\Maxim\CH252A_Silver_Visor"
		};
		class ItemInfo : ItemInfo
		{
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
		ctab_camera=1;
	};
	class 288th_Maxim_Helmet_Red : 288th_Maxim_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Maxim (Red)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\AA_Helmet_MaximStandard",
			"288th_Gear\Data\ODST\Units\Maxim\CH252A_Red_Visor"
		};
		class ItemInfo : ItemInfo
		{
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
	class 288th_Maxim_Helmet_Blue : 288th_Maxim_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Maxim (Blue)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\AA_Helmet_MaximStandard",
			"288th_Gear\Data\ODST\Units\Maxim\CH252A_Blue_Visor"
		};
		class ItemInfo : ItemInfo
		{
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
	class 288th_Maxim_Helmet_Gold : 288th_Maxim_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Maxim (Gold)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\AA_Helmet_MaximStandard",
			"288th_Gear\Data\ODST\Units\Maxim\CH252A_Gold_Visor"
		};
		class ItemInfo : ItemInfo
		{
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
	class 288th_Maxim_Helmet_Fletcher : 288th_Maxim_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Maxim (Fletcher)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Maxim\Fletcher\FletcherHelmet",
			"288th_Gear\Data\ODST\Units\Maxim\CH252A_Blue_Visor"
		};
		class ItemInfo : ItemInfo
		{
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

	class 288th_M52D_Maxim_Rifleman : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Maxim (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
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
	class 288th_M52D_Maxim_Demolitions : 288th_M52D_Maxim_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Maxim (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
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
	class 288th_M52D_Maxim_Marksman : 288th_M52D_Maxim_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Maxim (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = { 6 };
			containerClass = "Supply250";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
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
	class 288th_M52D_Maxim_Sniper : 288th_M52D_Maxim_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D Maxim (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			containerClass = "Supply250";
			modelSides[] = {6};
			mass = 5;
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
	class 288th_M52D_Maxim_Medic : 288th_M52D_Maxim_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Maxim (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\ODST_Maxim_Medic.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = { 6 };
			containerClass = "Supply250";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
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
	class 288th_M52D_Maxim_Temp : 288th_M52D_Maxim_Sniper
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Maxim (Tempest)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Tempest\ODST_Tempest_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
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
	class 288th_M52D_Maxim_Fletcher : 288th_M52D_Maxim_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D Maxim (Fletcher)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Fletcher\FletcherLegs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Maxim\Fletcher\FletcherArmor.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			containerClass = "Supply250";
			modelSides[] = {6};
			mass = 5;
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