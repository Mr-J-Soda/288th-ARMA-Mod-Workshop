////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:05 2025 : 'file' last modified on Mon Apr 14 19:54:27 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {"288th_CH252D_ODST_Trans","288th_Armor_ODST_Rifleman","288th_Armor_ODST_Trans"};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
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
	class 288th_CH252D_ODST_Base: OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Black";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
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
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_CH252D_ODST_Base_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Black";
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
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
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_CH252D_ODST_Trans: 288th_CH252D_ODST_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Trans";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa","288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa","288th_Gear\Data\ODST\BasicTextures\ODST_Base_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_CH252D_ODST_Trans_dp: 288th_CH252D_ODST_Base_dp
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D ODST Helmet - Trans";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Trans\ODST_Trans_Helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {"camo","H_Ghillie"};
		};
		grad_slingHelmet_allow = 1;
	};
	class 288th_Armor_ODST_Rifleman: OPTRE_UNSC_M52D_Armor
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D ODST Armor - Black";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
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
	class 288th_Armor_ODST_Trans: 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[288th] M52D ODST Armor - Trans";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\army\data\vest_odst_co.paa","OPTRE_UNSC_Units\army\data\armor_odst_co.paa","288th_Gear\Data\ODST\Trans\ODST_Trans_Legs.paa","OPTRE_UNSC_Units\army\data\ghillie_woodland_co.paa","288th_Gear\Data\ODST\Trans\ODST_Trans_Armor.paa"};
	};
	class 288th_Black_Uniform: OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Uniform - Black";
		ACE_GForceCoef = 0.1;
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Black_Soldier";
			containerClass = "Supply200";
			mass = 5;
		};
	};
	class 288th_Black_Uniform_S: OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Uniform (Slim) - Black";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Black_Soldier_S";
			containerClass = "Supply200";
			mass = 5;
		};
	};
	class 288th_Urban_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Urban";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Urban_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Urban_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Urban";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Urban_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Gray_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Gray";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Gray_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Gray_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Gray";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Gray_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Snow_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Snow";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Snow_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Snow_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Snow";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Snow_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Woodland_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Woodland";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Woodland_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Woodland_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Woodland";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Woodland_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_White_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - White";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_White_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_White_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - White";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_White_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Yellow_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Yellow";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Yellow_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Yellow_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Yellow";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Yellow_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Green_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Green";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Green_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Green_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Green";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Green_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Blue_Uniform: 288th_Black_Uniform
	{
		displayName = "[288th] Uniform - Blue";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Blue_Soldier";
			containerClass = "Supply200";
			mass = 50;
		};
	};
	class 288th_Blue_Uniform_S: 288th_Black_Uniform_S
	{
		displayName = "[288th] Uniform (Slim) - Blue";
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformClass = "288th_Blue_Soldier_S";
			containerClass = "Supply200";
			mass = 50;
		};
	};
};
class cfgVehicles
{
	class B_Soldier_base_F;
	class 288th_Black_Soldier: B_Soldier_base_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		uniformclass = "288th_Black_Uniform";
		scope = 1;
		faceType = "Man_A3";
		displayName = "[288th] Uniform - Black";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[] = {"camo","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa"};
	};
	class 288th_Black_Soldier_S: B_Soldier_base_F
	{
		uniformclass = "288th_Black_Uniform";
		scope = 1;
		faceType = "Man_A3";
		displayName = "[288th] Uniform (Slim) - Black";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_Baseleg"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Black_Uniform.paa"};
	};
	class 288th_Urban_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Urban_Uniform";
		displayName = "[288th] Uniform - Urban";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Urban_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Urban_Uniform.paa"};
	};
	class 288th_Urban_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Urban_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Urban";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Urban_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Urban_Uniform.paa"};
	};
	class 288th_Gray_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Gray_Uniform";
		displayName = "[288th] Uniform - Gray";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Gray_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Gray_Uniform.paa"};
	};
	class 288th_Gray_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Gray_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Gray";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Gray_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Gray_Uniform.paa"};
	};
	class 288th_Snow_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Snow_Uniform";
		displayName = "[288th] Uniform - Snow";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Snow_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Snow_Uniform.paa"};
	};
	class 288th_Snow_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Snow_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Snow";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Snow_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Snow_Uniform.paa"};
	};
	class 288th_Woodland_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Woodland_Uniform";
		displayName = "[288th] Uniform - Woodland";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Woodland_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Woodland_Uniform.paa"};
	};
	class 288th_Woodland_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Woodland_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Woodland";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Woodland_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Woodland_Uniform.paa"};
	};
	class 288th_White_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_White_Uniform";
		displayName = "[288th] Uniform - White";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_White_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_White_Uniform.paa"};
	};
	class 288th_White_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_White_Uniform_S";
		displayName = "[288th] Uniform (Slim) - White";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_White_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_White_Uniform.paa"};
	};
	class 288th_Yellow_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Yellow_Uniform";
		displayName = "[288th] Uniform - Yellow";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Yellow_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Yellow_Uniform.paa"};
	};
	class 288th_Yellow_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Yellow_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Yellow";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Yellow_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Yellow_Uniform.paa"};
	};
	class 288th_Green_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Green_Uniform";
		displayName = "[288th] Uniform - Green";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Green_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Green_Uniform.paa"};
	};
	class 288th_Green_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Green_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Green";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Green_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Green_Uniform.paa"};
	};
	class 288th_Blue_Soldier: 288th_Black_Soldier
	{
		uniformclass = "288th_Blue_Uniform";
		displayName = "[288th] Uniform - Blue";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Blue_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Blue_Uniform.paa"};
	};
	class 288th_Blue_Soldier_S: 288th_Black_Soldier_S
	{
		uniformclass = "288th_Blue_Uniform_S";
		displayName = "[288th] Uniform (Slim) - Blue";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Uniforms\ODST_Blue_Uniform.paa","288th_Gear\Data\ODST\Uniforms\ODST_Blue_Uniform.paa"};
	};
};
