class CfgPatches
{
	class 288th_Medical
	{
		author = "Festive Neira / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {"288th_BiofoamItem"};
		weapons[] = {"288th_Biofoam","288th_Emergency_MedKit","288th_PlasmaIV","ACE_Banana"};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};

class cfgWeapons
{
	class ACE_fieldDressing;
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_plasmaIV;
	class ItemInfo;
	class ElasticBandage;
	class ACE_adenosine;
	class OPTRE_Biofoam: ACE_fieldDressing
	{
		scope = 2;
		author = "Article 2 Studios";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		displayName = "$STR_OPTRE_Ace_Medical_Biofoam_Canister";
		descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		descriptionUse = "$STR_OPTRE_Ace_Medical_Biofoam";
		ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};
	class 288th_Biofoam: OPTRE_Biofoam
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		displayName = "[288th] Biofoam Canister";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
		descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		descriptionUse = "Applying Biofoam...";
		ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class 288th_PlasmaIV : ACE_plasmaIV
	{
		scope = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] Plasma IV (2500ml)";
		descriptionShort = "A volume-expanding blood supplement";
		descriptionUse = "Give Plasma (2.5L)";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 12;
		};
	};
	class 288th_CoffeeIV_500 : 288th_PlasmaIV
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		author = "Soda / Misriah 288";
		displayName = "[288th] Coffee IV (500ml)";
		descriptionShort = "Liquid caffeine in a bag";
		descriptionUse = "Give Coffee 500ml";
		picture = "\288th_Medical\Coffee\gear_Coffee_ca";
		hiddenSelectionsTextures[] = {"\288th_Medical\Coffee\IVBag_coffee_500ml_ca.paa"};
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};
	class 288th_CoffeeIV_1000 : 288th_CoffeeIV_500
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		author = "Soda / Misriah 288";
		displayName = "[288th] Coffee IV (1000ml)";
		descriptionUse = "Give Coffee 1000ml";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class 288th_CoffeeIV_250 : 288th_CoffeeIV_500
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		author = "Soda / Misriah 288";
		displayName = "[288th] Coffee IV (250ml)";
		descriptionUse = "Give Coffee 250ml";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};
	class 288th_Emergency_MedKit : OPTRE_Biofoam
	{
		scope = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] Emergency Medkit";
		descriptionShort = "A single use high capacity medkit loaded with medical supplies";
		picture = "\OPTRE_weapons\items\icons\medkit.paa";
		model = "\OPTRE_Weapons\items\MedKit.p3d";
		descriptionUse = "Applying Medkit...";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 16;
		};
	};
	class 288th_Medic_Biofoam : OPTRE_Biofoam
	{
		scope = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] Corpsman Biofoam";
		descriptionShort = "A high capacity Corpsman Biofoam";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
		descriptionUse = "Applying Corpsman Biofoam...";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
	};
	class 288th_Stim : ACE_adenosine
	{
		scope = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] Stim Autoinjector";
		descriptionShort = "A single use quick acting medical injector";
		ACE_isMedicalItem = 1;
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class 288th_Stim_1 : 288th_Stim
	{
		scope = 1;
		scopeArsenal = 1;
		displayName = "[288th] Stim Autoinjector?";
		descriptionShort = "A single use quick acting medical injector?";
		ACE_isMedicalItem = 1;
	};
	/*class 288th_HelloKitt_Bandage: ElasticBandage
	{
		scope = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th] Hello Kitty Band-aid";
		picture = "\288th_Medical\Hello_Kitty.paa";
		ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.6;
		};
	};*/
};
class cfgVehicles
{
	class ACE_morphineItem;
	class OPTRE_BiofoamItem;
	class ACE_MedicalLitterBase;
	class 288th_BiofoamItem : OPTRE_BiofoamItem
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "288th Biofoam";
		faction = "288th_UNSC";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_288th_Biofoam
			{
				name = "288th_Biofoam";
				count = 1;
			};
		};
		mass = 1;
	};
};
class ACE_Medical_Treatment
{
	class Bandaging
	{
		class ElasticBandage;
		class OPTRE_Biofoam: ElasticBandage
		{
			class Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMinor: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMedium: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionLarge: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Crush: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMinor: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushLarge: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMinor: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMedium: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMinor: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMinor: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMinor: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
		};
		class 288th_Biofoam : OPTRE_Biofoam
		{
			class Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMinor: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMedium: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionLarge: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Crush: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMinor: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushLarge: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMinor: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMedium: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMinor: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMinor: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMinor: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
		};
		class 288th_Medic_Biofoam : 288th_Biofoam
		{
			class Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMinor: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionMedium: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class ContusionLarge: Contusion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Crush: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMinor: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CrushLarge: Crush
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMinor: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutMedium: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMinor: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMinor: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMinor: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 10;
				reopeningChance = 0;
			};
		};
		class 288th_Emergency_Medkit : 288th_Biofoam
		{
			class Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AbrasionMinor : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AbrasionMedium : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AbrasionLarge : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class Avulsions : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AvulsionsMinor : Avulsions
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AvulsionsMedium : Avulsions
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class AvulsionsLarge : Avulsions
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class Contusion : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class ContusionMinor : Contusion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class ContusionMedium : Contusion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class ContusionLarge : Contusion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class Crush : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CrushMinor : Crush
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CrushMedium : Crush
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CrushLarge : Crush
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class Cut : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CutMinor : Cut
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CutMedium : Cut
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class CutLarge : Cut
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class Laceration : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class LacerationMinor : Laceration
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class LacerationMedium : Laceration
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class LacerationLarge : Laceration
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class velocityWound : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class velocityWoundMinor : velocityWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class velocityWoundMedium : velocityWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class velocityWoundLarge : velocityWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class punctureWound : Abrasion
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class punctureWoundMinor : punctureWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class punctureWoundMedium : punctureWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
			class punctureWoundLarge : punctureWound
			{
				effectiveness = 20;
				reopeningChance = 0;
			};
		};
		//class 288th_HK_Bandage: ElasticBandage
	};
	class PlasmaIV;
	class Morphine;
	class Adenosine;
	class Medication
	{
		painReduce = 0;
		hrIncreaseLow[] = { 0,0 };
		hrIncreaseNormal[] = { 0,0 };
		hrIncreaseHigh[] = { 0,0 };
		timeInSystem = 120;
		timeTillMaxEffect = 30;
		maxDose = 4;
		onOverDose = "";
		viscosityChange = 0;
		class 288th_Ibuprofen : Morphine
		{
			painReduce = 0.4;
			hrIncreaseLow[] = { 0 };
			hrIncreaseNormal[] = { 0 };
			hrIncreaseHigh[] = { 0 };
			timeInSystem = 3000;
			timeTillMaxEffect = 120;
			maxDose = 12;
			incompatibleMedication[] = {};
			viscosityChange = -1;
		};
		class ACE_Banana : Morphine
		{
			painReduce = 0.0;
			hrIncreaseLow[] = { 9000,9000 };
			hrIncreaseNormal[] = { 9000,9000 };
			hrIncreaseHigh[] = { 9000,9000 };
			timeInSystem = 60;
			timeTillMaxEffect = 1;
			maxDose = 0.1;
			incompatibleMedication[] = {};
			viscosityChange = -100;
		};
		class 288th_Biofoam{
			painReduce = 1;
		};
		class 288th_Stim : Adenosine
		{
			painReduce = 0;
			hrIncreaseLow[] = { 0,0 };
			hrIncreaseNormal[] = { 0,0 };
			hrIncreaseHigh[] = { 0,0 };
			timeInSystem = 0;
			timeTillMaxEffect = 0;
			maxDose = 1000000;
			incompatibleMedication[] = {};
		};
		class 288th_Stim_1 : 288th_Stim
		{
			
		};
	};
	class IV
	{
		class 288th_PlasmaIV : PlasmaIV
		{
			volume = 2500;
		};
		class 288th_CoffeeIV_250 : PlasmaIV
		{
			volume = 250;
		};
		class 288th_CoffeeIV_500 : PlasmaIV
		{
			volume = 500;
		};
		class 288th_CoffeeIV_1000 : PlasmaIV
		{
			volume = 1000;
		};
		/*class 288th_Biofoam : PlasmaIV
		{
			volume = 125;
		};
		class 288th_Medic_Biofoam : PlasmaIV
		{
			volume = 25;
		};*/
		/*class 288th_Emergency_MedKit : PlasmaIV
		{
			volume = 2000;
		};*/
	};
};
class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class PlasmaIV;
	class ElasticBandage;
	class BasicBandage;
	class PersonalAidKit;
	class Adenosine;
	class OPTRE_Biofoam: BasicBandage
	{
		displayName = "Inject Biofoam";
		displayNameProgress = "Injecting Biofoam...";
		treatmentTime = 5;
		items[] = {"OPTRE_Biofoam"};
		callbackSuccess = "288_fnc_288thBiofoam";
		animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Biofoam"}};
		category = "bandage";
	};
	class 288th_Biofoam: OPTRE_Biofoam{
		displayName = "Inject 288th Biofoam";
		displayNameProgress = "Injecting 288th Biofoam...";
		treatmentTime = 5;
		items[] = {"288th_Biofoam"};
		callbackSuccess = "288_fnc_288thBiofoam";
		animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Biofoam"}};
		allowedUnderwater = 1;
		category = "bandage";
	};
	class 288th_Medic_Biofoam: OPTRE_Biofoam{
		displayName = "Inject 288th Corpsman Biofoam";
		displayNameProgress = "Injecting 288th Corpsman Biofoam...";
		treatmentTime = 5;
		items[] = {"288th_Medic_Biofoam"};
		callbackSuccess = "288_fnc_288thBiofoam";
		animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Biofoam"}};
		allowedUnderwater = 1;
		medicRequired = 1;
		consumeItem = 0;
		category = "bandage";
	};
	class ACE_Banana : Morphine{
		displayName = "Banana";
		displayNameProgress = "Committing unga bunga long sleep";
		allowedSelections[] = { "Head" };
		items[] = { "ACE_Banana" };
		treatmentTime = 3;
	};
	class 288th_PlasmaIV : PlasmaIV{
		displayName = "Give Plasma IV (2500ml)";
		displayNameProgress = "Transfusing Plasma";
		treatmentTime = 15;
		items[] = { "288th_PlasmaIV" };
	};
	class 288th_CoffeeIV_250 : PlasmaIV{
		displayName = "Give Coffee IV (250ml)";
		displayNameProgress = "Transfusing Coffee";
		treatmentTime = 6;
		items[] = { "288th_CoffeeIV_250" };
	};
	class 288th_CoffeeIV_500 : PlasmaIV{
		displayName = "Give Coffee IV (500ml)";
		displayNameProgress = "Transfusing Coffee";
		treatmentTime = 9;
		items[] = { "288th_CoffeeIV_500" };
	};
	class 288th_CoffeeIV_1000 : PlasmaIV{
		displayName = "Give Coffee IV (10500ml)";
		displayNameProgress = "Transfusing Coffee";
		treatmentTime = 12;
		items[] = { "288th_CoffeeIV_1000" };
	};
	class 288th_Emergency_MedKit : OPTRE_Biofoam{
		displayName = "Emergency MedKit";
		displayNameProgress = "Hope this works";
		icon = "";
		consumeItem = 1;
		treatmentTime = 12;
		medicRequired = 0;
		allowSelfTreatment = 0;
		allowedSelections[] = { "Body","Head" };
		category = "advanced";
		items[] = { "288th_Emergency_MedKit" };
		callbackStart = "";
		callbackSuccess = "288_fnc_288thEMK";
	};
	/*class 288th_Spirit : PersonalAidKit{
		displayName = "Chears!!!";
		displayNameProgress = "A Cool Refreshing Drink";
		category = "medication";
		condition = "";
		items[] = { "ACE_Can_Spirit" };
		allowedSelections[] = { "Head" };
		treatmentLocations = TREATMENT_LOCATIONS_ALL;
		allowSelfTreatment = 1;
		treatmentTime = 5;
		medicRequired = 0;
		callbackSuccess = QFUNC(fullHeal);
		consumeItem = 1;
		animationMedic = "ace_field_rations_drinkCrouchCan";
		animationMedicProne = "ace_field_rations_drinkProneCan";
		animationMedicSelf = "ace_field_rations_drinkCrouchCan";
		animationMedicSelfProne = "ace_field_rations_drinkProneCan";
		allowedUnderwater = 1;
		litter[] = 
		{
			{},{}
		};
	};*/
	class 288th_Stim : Adenosine
	{
		displayName = "Stim Autoinjector";
		displayNameProgress = "Injecting Democracy!";
		condition = "_patient call ace_medical_status_fnc_isInStableCondition";
		treatmentLocations = "ace_medical_treatment_locationPAK";
		allowSelfTreatment = "ace_medical_treatment_allowSelfPAK";
		medicRequired = "ace_medical_treatment_medicPAK";
		callbackSuccess = "ace_medical_treatment_fnc_fullHeal";
		animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
		animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
		animationMedicSelf = "";
		animationMedicSelfProne = "";
		allowedSelections[] = { "Body","Head" };
		allowedUnderwater = 1;
		treatmentTime = 20;
		consumeItem = 1;
		category = "advanced";
		items[] =
		{
			"288th_Stim"
		};
		litter[] =
		{
			{
				"ACE_MedicalLitter_adenosine"
			}
		};
	};
	class 288th_Stim_1 : 288th_Stim
	{
		displayName = "Stim Autoinjector?";
		displayNameProgress = "Injecting Democracy!";
		category = "advanced";
		condition = "";
		treatmentLocations = 0;
		callbackSuccess = "ace_medical_treatment_fnc_fullHeal";
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
		allowedUnderwater = 1;
		treatmentTime = 5;
		consumeItem = 1;
		medicRequired = 0;
		allowSelfTreatment = 1;
		allowedSelections[] =
		{
			"All"
		};
		items[] =
		{
			"288th_Stim_1"
		};
	};
	class FieldDressing: BasicBandage
	{
		items[] = {"288th_HelloKitt_Bandage"};
	};
};

class ace_medical_replacementItems {
    ItemType_401[] = {
        {"ACE_fieldDressing", 2},
		{"ACE_packingBandage", 4},
		{"ACE_elasticBandage", 4},
		{"ACE_quikClot", 1},
        {"ACE_morphine", 2},
		{"ACE_epinephrine", 1},
        {"ACE_tourniquet", 2},
		{"ACE_splint", 1},
		{"ACE_EarPlugs", 1}
    };
    ItemType_619[] = {
        {"ACE_fieldDressing", 6},
        {"ACE_packingBandage", 10},
		{"ACE_elasticBandage", 10},
		{"ACE_quikClot", 4},
        {"ACE_epinephrine", 4},
        {"ACE_morphine", 8},
		{"ACE_adenosine", 2},
        {"ACE_salineIV_500", 4},
		{"ACE_salineIV_250", 2},
        {"ACE_tourniquet", 4},
        {"ACE_splint", 2},
		{"ACE_surgicalKit", 1},
		{"ACE_bodyBag", 2}
    };
    ACE_atropine[] = {
        {"ACE_adenosine", 1}
    };
};