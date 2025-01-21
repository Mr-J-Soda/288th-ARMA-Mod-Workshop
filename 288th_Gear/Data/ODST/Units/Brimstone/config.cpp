class CfgPatches
{
	class 288th_Gear
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] =
		{
			
		};
		weapons[] =
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
	class VES_CH252A;
	class HeadgearItem;
	class ItemInfo;
	class VestItem;

	class 288th_Brimstone_Helmet : VES_CH252A
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Default_Visor"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\aa_helmet";
			hiddenSelections[] = { "camo","camo2" };
			hiddenSelectionsMaterials[] = { "V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat" };
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
				"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Default_Visor"
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
			mass = 5;
		};
		grad_slingHelmet_allow = true;
		ctab_camera = 1;
	};
	class 288th_Brimstone_Helmet_Gold : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Gold)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Gold_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Blue : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Blue)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Blue_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Silver : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Silver)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Silver_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Purple : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Purple)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Purple_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Orange : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Orange)";
		
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Orange_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Galaxy : 288th_Brimstone_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Galaxy)";
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\Airborn_Brimstone_Helmet",
			"288th_Gear\Data\ODST\Units\Brimstone\CH252A_Galaxy_Visor"
		};
		grad_slingHelmet_allow = true;
	};
	class 288th_Brimstone_Helmet_Ghost : 288th_Brimstone_Helmet_Galaxy
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252A Brimstone (Ghost)";
	};

	class 288th_M52D_Brimstone_Rifleman : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Brimstone (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"
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
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_BaseLeft",
				"AS_BaseRight",
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
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
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
	class 288th_M52D_Brimstone_Demolitions : 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Brimstone (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"
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
	class 288th_M52D_Brimstone_Marksman : 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Brimstone (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"
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
	class 288th_M52D_Brimstone_Sniper : 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D Brimstone (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"
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
	class 288th_M52D_Brimstone_Medic : 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Brimstone (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Medic.paa"
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
	class 288th_M52D_Brimstone_Ghillie : 288th_M52D_Brimstone_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Brimstone (Ghillie)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Brimstone\ODST_Brimstone_Armor.paa"
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
				//"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
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
};