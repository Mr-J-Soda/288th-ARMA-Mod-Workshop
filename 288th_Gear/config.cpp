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

/*class CfgGlasses 
{
	class OPTRE_HUD_Glasses;
	class 288thCommandNetworkModule : OPTRE_HUD_Glasses 
	{
		dlc = "288thDJP_Aux";
		author = "Monarch Kinnie / Misriah 288";
		displayName = "Helmet attachment - Command Network Module";
		ace_resistance = 2;
		ace_protection = 1;
		mass = 1;
		model = "288th_Gear\Data\ODST\Attachments\CNM\V_CNM.P3D";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionTextures[] =
		{
			"288th_Gear\Data\ODST\Attachments\CNM\V_CNM.paa",
			"288th_Gear\Data\ODST\Attachments\CNM\V_CNMCO.paa"
		};
		hiddenSelectionMaterials[] =
		{
			"288th_Gear\Data\ODST\Attachments\CNM\V_CNM.rvmat",
			"",
			""
		};
	};
};
class CfgGlasses
{
	class G_Balaclava_TI_blk_F;
	class 288th_Balaclava : G_Balaclava_TI_blk_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Balaclava Black";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		mass = 1;
		sc_grapplinghook = 1;
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_OverlayCracked = "";
	};
};*/
class cfgWeapons
{
	class OPTRE_UNSC_Army_Uniform_OLI;
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class ItemInfo;
	class OPTRE_UNSC_M52D_Armor;
	class VestItem;
	class OPTRE_UNSC_M52D_Armor_Medic;
	class TCF_SLIM_UNSCA_BLK_UNI;
	class VES_CH252A;
	class TCF_Reach_Scout_Helmet;
	class UniformItem;

	class TFAR_anprc152_1;
	class Integrated_radio: TFAR_anprc152_1
	{
		displayName = "AN/PRC-152 1";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		tf_prototype = 0;
		tf_radio = 1;
		ace_arsenal_uniqueBase = "TFAR_anprc152";
	};

	//--------------------------------------------------------------------------------------------//

	// Base Armor Constructor

	//--------------------------------------------------------------------------------------------//

	// Base Uniform
	class 288th_Black_Uniform : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Uniform - Black";
		
		ACE_GForceCoef = 0.1;
		scope = 2;
		scopeArsenal = 2;
		class ItemInfo : UniformItem
		{
			uniformClass = "288th_Black_Soldier";
			containerClass = "Supply200";
			mass = 5;
		};
	};
	class 288th_Black_Uniform_S : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Uniform (Slim) - Black";
		
		ACE_GForceCoef = 0.1;
		class ItemInfo : UniformItem
		{
			uniformClass = "288th_Black_Soldier_S";
			containerClass = "Supply200";
			mass = 5;
		};
	};
	class 288th_CH252D_ODST_Base : OPTRE_UNSC_CH252D_Helmet
	{
		/*ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;*/
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Black";
		/*hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Helmets\ODST_Base_Helmet.paa",
			"288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};*/
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
			/*hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Helmets\ODST_Base_Helmet.paa",
				"288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa",
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
			};*/
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa","optre_unsc_units\army\data\odst_helmet_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
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
		grad_slingHelmet_allow = true;
		ctab_camera = 1;
	};
	class 288th_CH252D_ODST_Base_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D ODST Helmet - Black";
		/*hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Helmets\ODST_Base_Helmet.paa"
		};*/
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
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
		grad_slingHelmet_allow = true;
		ctab_camera = 1;
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
			"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa",
			"288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa",
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
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] =
			{
				"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa",
				"288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa",
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
			"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa",
		};
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
	class 288th_Armor_ODST_Rifleman : OPTRE_UNSC_M52D_Armor
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] M52D ODST Armor - Black";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		/*hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"288th_Gear\Data\ODST\Armor\ODST_Legs_Base.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Armor\ODST_Armor_Base.paa"
		};*/
		/*hiddenSelectionsTextures[] = 
		{ 
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"optre_unsc_units\army\data\legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};*/
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
			"288th_Gear\Data\ODST\Trans\ODST_Trans_Legs.paa",
			"OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa",
			"288th_Gear\Data\ODST\Trans\ODST_Trans_Armor.paa"
		};
	};

	//--------------------------------------------------------------------------------------------//

	// Create Uniform for DESIGNATION

	//--------------------------------------------------------------------------------------------//

	#define CREATEUNI(DESIGNATION) \
	class 288th_##DESIGNATION##_Uniform : 288th_Black_Uniform \
	{ \
		displayName = [288th DJP] Uniform - DESIGNATION; \
		 \
		ACE_GForceCoef = 0.1; \
		class ItemInfo : UniformItem \
		{ \
			uniformClass = 288th_##DESIGNATION##_Soldier; \
			containerClass = Supply200; \
			mass = 50; \
		}; \
	}; \
	class 288th_##DESIGNATION##_Uniform_S : 288th_Black_Uniform_S \
	{ \
		displayName = [288th DJP] Uniform (Slim) - DESIGNATION; \
		 \
		ACE_GForceCoef = 0.1; \
		class ItemInfo : UniformItem \
		{ \
			uniformClass = 288th_##DESIGNATION##_Soldier_S; \
			containerClass = Supply200; \
			mass = 50; \
		}; \
	};

	//--------------------------------------------------------------------------------------------//

	// Create Custom Helmet and Armor for USER of HIDDEN type

	//--------------------------------------------------------------------------------------------//

	#define CUSTOMODST(USER, HIDDEN) \
	class 288th_CH252D_ODST_##USER : 288th_CH252D_ODST_Base \
	{ \
		displayName = [288th DJP] CH252D ODST Helmet - USER; \
		  \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\ODST\Helmets\ODST_##USER##_Helmet.paa, \
			288th_Gear\Data\ODST\BasicTextures\ODST_##USER##_Visor.paa, \
			optre_unsc_units\army\data\ghillie_woodland_co.paa, \
			optre_unsc_units\army\data\soft_packs_co.paa \
		}; \
		class HitpointsProtectionInfo \
		{ \
			class Face \
			{ \
				armor = 45; \
				hitpointName = "HitFace"; \
				passThrough = 0.1; \
				explosionShielding = 0.1; \
			}; \
			class Head \
			{ \
				armor = 45; \
				hitPointName = "HitHead"; \
				passThrough = 0.1; \
				explosionShielding = 0.1; \
			}; \
		}; \
	}; \
	class 288th_CH252D_ODST_##USER##_dp : 288th_CH252D_ODST_Base_dp \
	{ \
		displayName = [288th DJP] CH252D ODST Helmet - USER; \
		  \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\ODST\Helmets\ODST_##USER##_Helmet.paa, \
		}; \
		class HitpointsProtectionInfo \
		{ \
			class Face \
			{ \
				armor = 45; \
				hitpointName = "HitFace"; \
				passThrough = 0.1; \
				explosionShielding = 0.1; \
			}; \
			class Head \
			{ \
				armor = 45; \
				hitPointName = "HitHead"; \
				passThrough = 0.1; \
				explosionShielding = 0.1; \
			}; \
		}; \
	}; \
	class 288th_Armor_ODST_##USER : 288th_Armor_ODST_Rifleman \
	{ \
		displayName = [288th DJP] M52D ODST Armor - USER; \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\ODST\Vests\ODST_##USER##_Vest.paa, \
			288th_Gear\Data\ODST\Vests\ODST_##USER##_Vest2.paa, \
			288th_Gear\Data\ODST\Armor\ODST_##USER##_Legs.paa, \
			OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa, \
			288th_Gear\Data\ODST\Armor\ODST_##USER##_Armor.paa \
		}; \
		class ItemInfo : VestItem \
		{ \
			vestType = "Rebreather"; \
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; \
			hiddenSelections[] = HIDDEN; \
			containerClass = "Supply250"; \
			modelSides[] = { 6 }; \
			mass = 5; \
			class HitpointsProtectionInfo \
			{ \
				class Neck \
				{ \
					hitpointName = "HitNeck"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Arms \
				{ \
					hitpointName = "HitArms"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Chest \
				{ \
					hitpointName = "HitChest"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Diaphragm \
				{ \
					hitpointName = "HitDiaphragm"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Abdomen \
				{ \
					hitpointName = "HitAbdomen"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Pelvis \
				{ \
					hitpointName = "HitPelvis"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Body \
				{ \
					hitpointName = "HitBody"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
				class Legs \
				{ \
					hitpointName = "HitLegs"; \
					armor = 45; \
					passThrough = 0.1; \
				}; \
			}; \
		}; \
	};

	//--------------------------------------------------------------------------------------------//

	// Custom Armor Hidden Selections

	//--------------------------------------------------------------------------------------------//

	// Helmet
	#define HELMETHDM \
	{ \
		"camo", \
		"camo2", \
		"camo3", \
		"camo4", \
		"H_Ghillie" \
	}

	// Default
	#define DEFAULTHDN \
	{ \
		"camo", \
		"camo2", \
		"camo3", \
		"camo4", \
		"camo5", \
		"A_KneesMarLeft", \
		"A_KneesMarRight", \
		"A_Ghillie", \
		"AS_LargeLeft", \
		"AS_LargeRight", \
		"AS_MediumLeft", \
		"AS_MediumRight", \
		"AS_ODSTCQBLeft", \
		"AS_ODSTCQBRight", \
		"AS_ODSTSniperLeft", \
		"AS_ODSTSniperRight", \
		"AS_SmallLeft", \
		"AS_SmallRight", \
		"AP_AR", \
		"AP_BR", \
		"AP_Canteen", \
		"AP_GL", \
		"AP_Knife", \
		"AP_MGThigh", \
		"AP_AR", \
		"AP_Pack", \
		"AP_Pistol", \
		"AP_Rounds", \
		"AP_SG", \
		"AP_SMG", \
		"AP_Sniper", \
		"AP_Thigh", \
		"APO_BR", \
		"APO_Knife", \
		"APO_SMG", \
		"APO_Sniper", \
		"CustomKit_Scorch" \
	}

	//--------------------------------------------------------------------------------------------//
	
	// Call Macros

	//--------------------------------------------------------------------------------------------//

	// Uniforms
	CREATEUNI(Urban);
	CREATEUNI(Gray);
	CREATEUNI(Snow);
	CREATEUNI(Woodland);

	//--------------------------------------------------------------------------------------------//
};
class cfgVehicles
{
	class B_Soldier_base_F;

	//--------------------------------------------------------------------------------------------//

	// Basic Soldiers

	//--------------------------------------------------------------------------------------------//

	class 288th_Black_Soldier : B_Soldier_base_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		uniformclass = "288th_Black_Uniform";
		scope = 1;
		faceType = "Man_A3";
		displayName = "[288th DJP] Uniform - Black";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa",
			"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa"
		};
	};
	class 288th_Black_Soldier_S : B_Soldier_base_F
	{
		uniformclass = "288th_Black_Uniform";
		scope = 1;
		faceType = "Man_A3";
		displayName = "[288th DJP] Uniform (Slim) - Black";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_Baseleg"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa",
			"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa"
		};
	};

	//--------------------------------------------------------------------------------------------//

	// Soldier Macro

	//--------------------------------------------------------------------------------------------//

	// Create Soldier for DESIGNATION
	#define CREATESOLD(DESIGNATION) \
	class 288th_##DESIGNATION##_Soldier : 288th_Black_Soldier \
	{ \
		uniformclass = 288th_##DESIGNATION##_Uniform; \
		displayName = [288th DJP] Uniform - DESIGNATION; \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\ODST\Uniforms\ODST_##DESIGNATION##_Uniform.paa, \
			288th_Gear\Data\ODST\Uniforms\ODST_##DESIGNATION##_Uniform.paa \
		}; \
	}; \
	class 288th_##DESIGNATION##_Soldier_S : 288th_Black_Soldier_S \
	{ \
		uniformclass = 288th_##DESIGNATION##_Uniform_S; \
		displayName = [288th DJP] Uniform (Slim) - DESIGNATION; \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\ODST\Uniforms\ODST_##DESIGNATION##_Uniform.paa, \
			288th_Gear\Data\ODST\Uniforms\ODST_##DESIGNATION##_Uniform.paa \
		}; \
	};

	//--------------------------------------------------------------------------------------------//

	// Generate Soldiers

	//--------------------------------------------------------------------------------------------//

	CREATESOLD(Urban);
	CREATESOLD(Gray);
	CREATESOLD(Snow);
	CREATESOLD(Woodland);

	//--------------------------------------------------------------------------------------------//
};