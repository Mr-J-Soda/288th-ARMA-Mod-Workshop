class CfgPatches
{
	class 288th_Gear
	{
		author = "Festive Neira / Misriah 288";
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

class cfgVehicles
{
	class SC_Workerbot_dummy;

	class 288th_Bot : SC_Workerbot_dummy
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th] Workerbot (UNSC)";
		uniformClass = "SC_Workerbot_Uniform_UNSC";
		hiddenSelections[] = { "camo","camo1","camo2" };
		hiddenSelectionsTextures[] = 
		{ 
			"288th_Gear\Data\Bot\288_Bot_Torso.paa",
			"288th_Gear\Data\Bot\288_Bot_Legs.paa",
			"288th_Gear\Data\Bot\288_Bot_Head.paa"
		};
	};
};

class CfgWeapons
{
	class UniformItem;
	class SC_Uniform_Workerbot_Base;
	class SC_Helmet_Workerbot_Base;
	class 288th_Armor_ODST_Rifleman;
	class HeadgearItem;
	class VestItem;

	class SC_Workerbot_Uniform: SC_Uniform_Workerbot_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Workerbot (Industrial)";
		descriptionshort = "Workerbots are used throughout the galaxy and developed by Cyrus Tech as a quick labor solution for industrial applications, such as asteroid mining, cargo transportation, and ship welding.";
		picture = "Workerbot\AC.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		
	};
	class SC_Workerbot_Head: SC_Helmet_Workerbot_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Workerbot Head (Industrial)";
		picture = "Workerbot\AC.paa";
		model = "\Workerbot\workerbothead.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Workerbot\Workerbot\Head\DefaultMaterial_CO.paa"};
		
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Workerbot\workerbothead.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"Workerbot\Workerbot\Head\DefaultMaterial_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 45;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 45;
					passThrough = 0.5;
				};
			};
		};
		subItems[] = {"Integrated_NVG_TI_1_F"};
	};

	class SC_Workerbot_Uniform_UNSC : SC_Workerbot_Uniform
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		displayName = "[288th DJP] Workerbot Body (UNSC)";
		descriptionshort = "";
		picture = "Workerbot\AC.paa";
		
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			modelSides[] = { 0,1,2,3 };
			uniformClass = "288th_Bot";
			containerClass = "Supply200";
			uniformType = "Neopren";
			mass = 5;
			allowedSlots[] = { 701,801,901 };
			armor = 100;
			passThrough = 0.01;
			explosionShielding = 0.01;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
			};
		};
	};
	class SC_Workerbot_Head_UNSC : SC_Workerbot_Head
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		picture = "Workerbot\AC.paa";
		displayName = "[288th DJP] Workerbot Head (UNSC)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "288th_Gear\Data\Bot\288_Bot_Head" };
		
		class ItemInfo : HeadgearItem
		{
			mass = 5;
			uniformModel = "\Workerbot\workerbothead.p3d";
			hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "288th_Gear\Data\Bot\288_Bot_Head" };
			armor = 100;
			passThrough = 0.01;
			explosionShielding = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
			};
		};
		subItems[] = { "Integrated_NVG_TI_1_F" };
	};
	class 288th_Bot_Armor : 288th_Armor_ODST_Rifleman{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th DJP] Bot Armor Upgrade";
		model = "\A3\weapons_f\empty";
		hiddenSelectionsTextures[] ={};
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
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			mass = 1;
			armor = 100;
			passThrough = 0.01;
			explosionShielding = 0.01;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.01;
					explosionShielding = 0.01;
				};
			};
		};
	};
};