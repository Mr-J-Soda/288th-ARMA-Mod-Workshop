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
	class OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR;
	class 288th_Armor_ODST_Rifleman;
	//class ItemInfo;
	class VestItem;

	class 288th_CH252_Marine : OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252 Marine Helmet";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Marine\Marine_test_Helmet.paa",
			"288th_Gear\Data\Marine\Marine_test_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		
		grad_slingHelmet_allow = true;
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		optreHUDStyle = "ODST_1";
		/*class ItemInfo : ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
			};
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\Marine\Marine_test_Helmet.paa",
				"288th_Gear\Data\Marine\Marine_test_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
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
		};*/
	};
	class 288th_CH252_Marine_OSHA : 288th_CH252_Marine
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252 Marine Helmet (OSHA)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Helmet.paa",
			"288th_Gear\Data\Marine\Marine_test_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		
		grad_slingHelmet_allow = true;
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		optreHUDStyle = "ODST_1";
		/*class ItemInfo : ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie",
				"H_Collar"
			};
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Helmet.paa",
				"288th_Gear\Data\Marine\Marine_test_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			/*class HitpointsProtectionInfo
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
		};*/
	};

	class 288th_Armor_Marine : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Team Leader)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Marine\Marines_Test_Vest.paa",
			"288th_Gear\Data\Marine\Marine_test_Armor.paa",
			"288th_Gear\Data\Marine\Marines_Test_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
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
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_Ghillie",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
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
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_OSHA : 288th_Armor_Marine
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52A Marine (OSHA)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Vest.paa",
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Armor.paa",
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_ShinArmorLeft","AP_Frag","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_MediumLeft","AS_SmallRight","AP_AR","AP_GL","AP_Knife","AP_MGThigh","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_OSHA_H : 288th_Armor_Marine
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52A Marine (OSHA)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Vest_H.paa",
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Armor_H.paa",
			"288th_Gear\Data\Marine\OSHA\Marine_OSHA_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","AP_Frag","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_MediumLeft","AS_SmallRight","AP_AR","AP_GL","AP_Knife","AP_MGThigh","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Rifleman : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Rifleman)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Marksman : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Marksman)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_MediumLeft","AS_SmallRight","AP_AR","AP_GL","AP_Knife","AP_MGThigh","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_AutoRifleman : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (AutoRifleman)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_ODST","A_TacPad","AS_MediumLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_MediumRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_AR","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Breacher : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Breacher)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_ODST","A_TacPad","AS_MediumLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_Pack","AP_Rounds","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Grenadier : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Grenadier)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_ShinArmorLeft","A_ShinArmorRight","A_Ghillie","A_ODST","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_Knife","AP_MGThigh","AP_AR","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Medic : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Medic)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","AS_LargeLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_BR","AP_GL","AP_Knife","AP_MGThigh","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
	class 288th_Armor_Marine_Sniper : 288th_Armor_Marine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52A Marine (Sniper)";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesLeft","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
			containerClass = "Supply250";
			modelSides[] = { 6 };
			mass = 5;
			/*class HitpointsProtectionInfo
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
			};*/
		};
	};
};