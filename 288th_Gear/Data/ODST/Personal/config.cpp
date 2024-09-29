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
	class ItemInfo;
	class HeadgearItem;
	class VestItem;
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class 288th_Armor_ODST_Rifleman;

	class 288th_CH252D_Dummy : 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Dummy";
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa",
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa",
				"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
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
		ctab_camera=1;
	};
	/*class 288th_CH252D_Dummy_dp : 288th_CH252D_ODST_Base_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Dummy";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa",
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa",
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
		
		class ItemInfo: HeadgearItem
		{
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Helmet.paa",
				"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Visor.paa",
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
	};*/
	class 288th_M52D_Dummy : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D ODST Armor - Dummy";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Vest",
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Vest2",
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Personal\Dummy\ODST_Dummy_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			// If it can be used for underwater breathing
			vestType = "Rebreather";
			// Base model (probably don't change)
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = { 6 };
			// Carry capacity of vest
			containerClass = "Supply250";
			// Comment out (with the two slashes) whatever you want to appear on the armor. Selections are explained below. *** Left and Right are from the model's perspective ***.
			// All basic testures for the armor can be found at "Arma 3\!Workshop\@Operation TREBUCHET\Addons\OPTRE_UNSC_Units\Army\data"
			hiddenSelections[] =
			{
				// Default model textures, in order: vest, vest armor, ODST legs, ghillie suit, ODST armor (corresponds to hiddenSelectionsTextures)
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",

				// Basic vest piece, (from vest_odst_co texture in OPTRE)
				//"A_Base",

				// Basic chest armor (from armor_odst_co texture in OPTRE)
				//"A_ChestArmor",

				// Self explanatory, goes on the shoulders (from ghillie_woodland_co texture in OPTRE)
				"A_Ghillie",

				// ODST Kneepads (from legs_co texture in OPTRE)
				//"A_KneesLeft",
				//"A_KneesRight",

				// Marine Kneepads (from legs_co texture in OPTRE)
				"A_KneesMarLeft",
				"A_KneesMarRight",

				// Main chest piece of the ODST armor (from odst_armor_co texture in OPTRE)
				//"A_ODST",

				// Shin armor (from legs_co texture in OPTRE)
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",

				// Blue touchpad on the left forearm (from odst_armor_co texture in OPTRE)
				//"A_TacPad",

				// Thigh Armor (from legs_co texture in OPTRE)
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",

				// Marine shoulder pieces (from armor_odst_co texture in OPTRE)
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",

				// ODST shoulder pieces (from odst_armor_co texture in OPTRE)
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",

				// Last few Marine shoulders (from armor_odst_co texture in OPTRE)
				"AS_SmallLeft",
				"AS_SmallRight",

				// This whole next bit is a bit odd, so here goes: Each of these is an addon for the armor. The AR, BR, SMG, and Sniper magazine addons are made in a marine varient that ends up 
				// clipping into the ODST chest, labeled AP, and an ODST varient that has only 2 mags but avoids the clipping issue, labeled APO. AP_Pack is a chest pack for only marines, AP_Thigh
				// and MGThigh are leg softpacks, small and large. AP_Knife and APO_Knife and shoulder and butt knives, respectively. AP_rounds is sniper rounds strapped to the left shoulder piece.
				// AP_GL is a 40mil grenade sash around the midriff. Highly recommend testing what goes with what to avoid conflicts, because there is a fair few. Otherwise, go ham.
				// I am unsure of where these textures come from.
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
				//"AP_Thigh",
				//"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				//"APO_BR",
				//"APO_Knife",
				//"APO_SMG",
				"APO_Sniper",

				//A Belt across the chest filled with explosives
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

	class 288th_CH252D_Error : 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Error";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa",
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa",
				"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Visor.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
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
	class 288th_CH252D_Error_dp : 288th_CH252D_ODST_Base_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Error";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa",

		};
		hiddenSelections[] =
		{
			"camo",
			"H_Ghillie"
		};
		
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Helmet.paa",

			};
			hiddenSelections[] =
			{
				"camo",
				"H_Ghillie"
			};
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
	class 288th_M52D_Error : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D ODST Armor - Error";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Vest",
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Vest2",
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Personal\Error\ODST_Error_Armor.paa"
		};
		class ItemInfo : VestItem
		{
			// If it can be used for underwater breathing
			vestType = "Rebreather";
			// Base model (probably don't change)
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 5;
			modelSides[] = { 6 };
			// Carry capacity of vest
			containerClass = "Supply250";
			// Comment out (with the two slashes) whatever you want to appear on the armor. Selections are explained below. *** Left and Right are from the model's perspective ***.
			// All basic testures for the armor can be found at "Arma 3\!Workshop\@Operation TREBUCHET\Addons\OPTRE_UNSC_Units\Army\data"
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
				"AP_Smoke",
				"APO_BR",
				"APO_Knife",
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

	/*class 288th_Ram_Helmet : OPTRE_UNSC_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] UNSC Scout Helmet (Ram)";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Helmets\Scout_Ram_Helmet.paa",
			"288th_Gear\Data\ODST\Visors\Ram_Visor.paa"
		};
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor = 45;
				hitpointName = "HitFace";
				passThrough = 0.1;
			};
			class Head
			{
				armor = 45;
				hitPointName = "HitHead";
				passThrough = 0.1;
			};
		};
	};

	class 288th_Armor_ODST_RAM : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		Scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D ODST Armor - Ram";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Vests\ODST_Brimstone_vest",
			"288th_Gear\Data\ODST\Vests\ODST_Brimstone_vest2",
			"288th_Gear\Data\ODST\Armor\ODST_Ram_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Armor\ODST_Ram_Armor.paa"
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
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				//"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				//"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				//"APO_Knife",
				//"APO_SMG",
				//"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};*/

};
