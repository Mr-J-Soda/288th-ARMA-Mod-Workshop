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
	class 288th_CH252_Marine;
	class HeadgearItem;
	class ItemInfo;
	class VestItem;
	
	class 288th_CH252_Hercules : 288th_CH252_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252 Hercules Helmet";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
			"288th_Gear\Data\Marine\Marine_test_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		optreHUDStyle = "ODST_1";
		
		grad_slingHelmet_allow = true;
		ctab_camera = 1;
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
				"288th_Gear\Data\Marine\Marine_test_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
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
	};
	class 288th_CH252_Hercules_Orion : 288th_CH252_Hercules
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252 Hercules Helmet (Blue)";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Hercules\OrionVisor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
				"288th_Gear\Data\ODST\Units\Hercules\OrionVisor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
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
	};
	class 288th_CH252_Hercules_Wendigo : 288th_CH252_Hercules
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252 Hercules Helmet (Green)";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Hercules\WendigoVisorConcept.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
				"288th_Gear\Data\ODST\Units\Hercules\WendigoVisorConcept.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
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
	};
	class 288th_CH252_Hercules_Kelkuza : 288th_CH252_Hercules
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252 Hercules Helmet (Kelkuza)";
		model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
		subItems[] = {"288th_Mk6_NVG"};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Kel_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Helmet.paa",
				"288th_Gear\Data\ODST\Units\Hercules\ODST_Kel_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
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
	};

	class 288th_M52D_Hercules_Rifleman : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Hercules (Rifleman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Armor.paa"
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
	class 288th_M52D_Hercules_Demolitions : 288th_M52D_Hercules_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Hercules (Demolitions)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Armor.paa"
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
	class 288th_M52D_Hercules_Marksman : 288th_M52D_Hercules_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Hercules (Marksman)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Armor.paa"
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
	class 288th_M52D_Hercules_Sniper : 288th_M52D_Hercules_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		Scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D Hercules (Sniper)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Armor.paa"
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
	class 288th_M52D_Hercules_Medic : 288th_M52D_Hercules_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Hercules (Medic)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Medic.paa"
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
	class 288th_M52D_Hercules_Ghillie : 288th_M52D_Hercules_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Hercules (Ghillie)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Units\Hercules\ODST_Hercules_Armor.paa"
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