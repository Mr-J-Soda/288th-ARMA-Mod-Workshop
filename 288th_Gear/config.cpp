class CfgPatches
{
	class 288th_Gear
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};

class CfgGlasses 
{
	class G_Balaclava_blk;
	class 288th_Memory_Matrix : G_Balaclava_blk 
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] LLY 0115-1 Memory Matrix";
		ace_resistance = 2;
		ace_protection = 1;
		mass = 1;
		picture = "\288th_Gear\Data\NVG\LLY_0115_1\Memory_Matrix_logo.paa";
		model = "\OPTRE_weapons\backpacks\container.p3d";
	};
	class 288th_Error_Clock : G_Balaclava_blk 
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Error's Alarm Clock";
		ace_resistance = 2;
		ace_protection = 1;
		mass = 1;
		picture = "OPTRE_Weapons\Backpacks\icons\icon_b_fury_nuke_ca.paa";
		model = "\OPTRE_weapons\backpacks\fury.p3d";
	};
	class 288th_Research_Bag : G_Balaclava_blk 
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Research Case";
		ace_resistance = 2;
		ace_protection = 1;
		mass = 1;
		picture = "\288th_Gear\Data\NVG\Research\flask.paa";
		model = "\OPTRE_unsc_units\oni\research_bag.p3d";
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\ONI\data\research_bag_CO.paa"};
	};
	class 288th_Cape: G_Balaclava_blk 
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Cape (Black)";
		ace_resistance = 2;
		ace_protection = 1;
		mass = 1;
		model="288th_Gear\Data\NVG\Cape\cape.p3d";
		picture = "\288th_Gear\Data\NVG\Cape\Cape_Icon_CO.paa";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"288th_Gear\Data\NVG\Cape\DefaultMaterial_CO.paa"};
		autocenter = 0; 
	};
};
class cfgWeapons
{
	class OPTRE_UNSC_Army_Uniform_OLI;
	class HeadgearItem;
	class ItemInfo;
	class OPTRE_UNSC_M52D_Armor;
	class VestItem;
	class OPTRE_UNSC_M52D_Armor_Medic;
	class UniformItem;

	//MA ODST Helmets
	class MA_Helmet_Base;
	class MA_Spartan_Helmet_Base;
	class H_HelmetB;

	//MA ODST Helmets
	class 288th_CH252D_Helmet: MA_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th] CH252D (Ice)";
		model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		picture = "\MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_IE.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_CH252D_Helmet_dp: 288th_CH252D_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Ice)";
		model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture = "\MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
		};
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_CH252D_Helmet_Red: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Red)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_RD.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Red_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Red)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Orange: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Orange)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_OR.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Orange_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Orange)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Yellow: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Yellow)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_GD.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Yellow_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Yellow)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Green: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_GN.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Green_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Lime: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Lime)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_LM.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Lime_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Lime)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Teal: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Teal)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_TL.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Teal_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Teal)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Blue: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Blue)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_BL.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Blue_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Blue)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Purple: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Purple)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_PL.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Purple_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Purple)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Pink: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Pink)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_PK.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Pink_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Pink)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_White: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (White)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_WT.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_White_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (White)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Black: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Black)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_BK.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Black_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Black)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Navy: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Navy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_NV.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Navy_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Navy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Maroon: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Maroon)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_MN.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Maroon_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Maroon)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Galaxy: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Galaxy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_GX.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Galaxy_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Galaxy)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Lego: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Lego)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Visor_CO_LO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Lego_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Lego)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};

	//MA ODST Personal Helmets
	class 288th_CH252D_Helmet_Whiskey: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Whiskey)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Whiskey\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\Whiskey\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
		subItems[] = {"288th_Whiskey_NVG"};
	};
	class 288th_CH252D_Helmet_Whiskey_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Whiskey)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Whiskey\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
		subItems[] = {"288th_Whiskey_NVG"};
	};
	class 288th_CH252D_Helmet_Error: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Error)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Error\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\Error\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Error_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Whiskey)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Error\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Butcher: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Butcher)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Butcher\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\Butcher\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Butcher_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Butcher)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Butcher\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Egg: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (RG)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\RG\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\RG\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Egg_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (RG)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\RG\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Bandit: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Bandit)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Bandit\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\Bandit\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_Bandit_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (Bandit)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\Bandit\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};

	//MA ODST ONI Equipment
	class 288th_CH252D_Helmet_ONI: 288th_CH252D_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (ONI)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\ONI\MA_ODST_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets\ONI\MA_ODST_Visor_CO.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};
	class 288th_CH252D_Helmet_ONI_dp: 288th_CH252D_Helmet_dp
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252D (ONI)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets\ONI\MA_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa","MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"};
	};

	//MA Air Assault Helmet
	class 288th_Ch252A_Helmet: MA_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Ice)";
		model = "MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture = "\MA_Armor\data\Icons\AA_Helmet.paa";
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Ice_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Ch252A_Helmet_Black: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Black_co.paa"};
	};
	class 288th_Ch252A_Helmet_White: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_White_co.paa"};
	};
	class 288th_Ch252A_Helmet_Red: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Red_co.paa"};
	};
	class 288th_Ch252A_Helmet_Orange: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Orange_co.paa"};
	};
	class 288th_Ch252A_Helmet_Yellow: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Yellow_co.paa"};
	};
	class 288th_Ch252A_Helmet_Green: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Green_co.paa"};
	};
	class 288th_Ch252A_Helmet_Blue: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Blue_co.paa"};
	};
	class 288th_Ch252A_Helmet_Purple: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Purple_co.paa"};
	};
	class 288th_Ch252A_Helmet_Lime: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Lime_co.paa"};
	};
	class 288th_Ch252A_Helmet_Galaxy: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Galaxy_co.paa"};
	};
	class 288th_Ch252A_Helmet_Maroon: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Maroon_co.paa"};
	};
	class 288th_Ch252A_Helmet_Navy: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Navy_co.paa"};
	};
	class 288th_Ch252A_Helmet_Pink: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Pink_co.paa"};
	};
	class 288th_Ch252A_Helmet_Teal: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\AA_Visor_Teal_co.paa"};
	};

	//MA Air Assault Personal Helmets
	class 288th_Ch252A_Helmet_Kelkuza: 288th_Ch252A_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] CH252A (Kelkuza)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\Kelkuza\AA_Helm_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_AA\Kelkuza\AA_Visor_Kelkuza_co.paa"};
		subItems[] = {"288th_Kelkuza_NVG"};
	};

	//MA MKVB Helmets
	class 288th_MKVB_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Ice)";
		model = "MA_Armor\data\Helmets\MKVB\MKVB_Helm.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\MKVB\MKVB_Helm.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\icon_mk_vb_image.paa";
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_MKVB_Helmet_Red: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Red_CO.paa"};
	};
	class 288th_MKVB_Helmet_Orange: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Orange_CO.paa"};
	};
	class 288th_MKVB_Helmet_Yellow: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Yellow_CO.paa"};
	};
	class 288th_MKVB_Helmet_Green: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Green_CO.paa"};
	};
	class 288th_MKVB_Helmet_Blue: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Blue_CO.paa"};
	};
	class 288th_MKVB_Helmet_Purple: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Purple_CO.paa"};
	};
	class 288th_MKVB_Helmet_White: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_White_CO.paa"};
	};
	class 288th_MKVB_Helmet_Black: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Black_CO.paa"};
	};
	class 288th_MKVB_Helmet_Lime: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Lime_CO.paa"};
	};
	class 288th_MKVB_Helmet_Galaxy: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Galaxy_CO.paa"};
	};
	class 288th_MKVB_Helmet_Maroon: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Maroon_CO.paa"};
	};
	class 288th_MKVB_Helmet_Navy: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Navy_CO.paa"};
	};
	class 288th_MKVB_Helmet_Pink: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Pink_CO.paa"};
	};
	class 288th_MKVB_Helmet_Teal: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\MKVB_Visor_Teal_CO.paa"};
	};

	//MA MK VB Personal Helmets
	class 288th_MKVB_Helmet_Johnson: 288th_MKVB_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VB (Johnson)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\Johnson\MKVB_Helmet_Johnson_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKVB\Johnson\MKVB_Visor_Johnson_CO.paa"};
	};

	//MA Gungnir Helmets
	class 288th_Gungnir_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Ice)";
		model = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		picture = "\MA_Armor\data\Icons\Gungnir_Helmet.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Gungnir_Helmet_Red: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Red_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Orange: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Orange_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Yellow: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Yellow_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Green: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Green_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Blue: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Blue_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Purple: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Purple_CO.paa"};
	};
	class 288th_Gungnir_Helmet_White: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_White_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Black: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Black_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Lime: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Lime_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Galaxy: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Galaxy_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Maroon: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Maroon_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Navy: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Navy_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Pink: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Pink_CO.paa"};
	};
	class 288th_Gungnir_Helmet_Teal: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Gungnir_Helmet_Teal_CO.paa"};
	};

	////MA Gungnir Personal Helmets
	class 288th_Gungnir_Helmet_Eugen: 288th_Gungnir_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VG (Eugen)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Gungnir\Eugen\Gungnir_Helmet_Eugen_CO.paa"};
	};

	//MA Commando Helmet
	class 288th_Commando_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Ice)";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\commando_image.paa";
		model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Commando_Helmet_Red: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Red_CO.paa"};
	};
	class 288th_Commando_Helmet_Orange: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Orange_CO.paa"};
	};
	class 288th_Commando_Helmet_Yellow: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Yellow_CO.paa"};
	};
	class 288th_Commando_Helmet_Green: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Green_CO.paa"};
	};
	class 288th_Commando_Helmet_Blue: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Blue_CO.paa"};
	};
	class 288th_Commando_Helmet_Purple: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Purple_CO.paa"};
	};
	class 288th_Commando_Helmet_White: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_White_CO.paa"};
	};
	class 288th_Commando_Helmet_Black: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Black_CO.paa"};
	};
	class 288th_Commando_Helmet_Lime: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Lime_CO.paa"};
	};
	class 288th_Commando_Helmet_Galaxy: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Galaxy_CO.paa"};
	};
	class 288th_Commando_Helmet_Maroon: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Maroon_CO.paa"};
	};
	class 288th_Commando_Helmet_Navy: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Navy_CO.paa"};
	};
	class 288th_Commando_Helmet_Pink: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Pink_CO.paa"};
	};
	class 288th_Commando_Helmet_Teal: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Teal_CO.paa"};
	};

	//MA Commando Personal Helmets
	class 288th_Commando_Helmet_Glaceon: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (Weekers)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Weekers\Commando_Helmet_Weekers_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\Commando_Visor_Ice_CO.paa"};
	};

	//MA Commando ONI Helmet
	class 288th_Commando_Helmet_ONI: 288th_Commando_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VK (ONI)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\ONI\Commando_Helmet_ONI_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Commando\ONI\Commando_Visor_ONI_CO.paa"};
	};

	//MA Scout Helmet
	class 288th_Scout_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Ice)";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Icon_Scout_image.paa";
		model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Scout_Helmet_Red: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Red_CO.paa"};
	};
	class 288th_Scout_Helmet_Orange: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Orange_CO.paa"};
	};
	class 288th_Scout_Helmet_Yellow: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Yellow_CO.paa"};
	};
	class 288th_Scout_Helmet_Green: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Green_CO.paa"};
	};
	class 288th_Scout_Helmet_Blue: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Blue_CO.paa"};
	};
	class 288th_Scout_Helmet_Purple: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Purple_CO.paa"};
	};
	class 288th_Scout_Helmet_White: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_White_CO.paa"};
	};
	class 288th_Scout_Helmet_Black: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Black_CO.paa"};
	};
	class 288th_Scout_Helmet_Lime: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Lime_CO.paa"};
	};
	class 288th_Scout_Helmet_Galaxy: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Galaxy_CO.paa"};
	};
	class 288th_Scout_Helmet_Maroon: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Maroon_CO.paa"};
	};
	class 288th_Scout_Helmet_Navy: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Navy_CO.paa"};
	};
	class 288th_Scout_Helmet_Pink: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Pink_CO.paa"};
	};
	class 288th_Scout_Helmet_Teal: 288th_Scout_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV S (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Scout\Scout_Visor_Teal_CO.paa"};
	};

	//MA JFO Helmet
	class 288th_JFO_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Ice)";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_image.paa";
		model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_JFO_Helmet_Red: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Red_CO.paa"};
	};
	class 288th_JFO_Helmet_Orange: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Orange_CO.paa"};
	};
	class 288th_JFO_Helmet_Yellow: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Yellow_CO.paa"};
	};
	class 288th_JFO_Helmet_Green: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Green_CO.paa"};
	};
	class 288th_JFO_Helmet_Blue: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Blue_CO.paa"};
	};
	class 288th_JFO_Helmet_Purple: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Purple_CO.paa"};
	};
	class 288th_JFO_Helmet_White: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_White_CO.paa"};
	};
	class 288th_JFO_Helmet_Black: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Black_CO.paa"};
	};
	class 288th_JFO_Helmet_Lime: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Lime_CO.paa"};
	};
	class 288th_JFO_Helmet_Galaxy: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Galaxy_CO.paa"};
	};
	class 288th_JFO_Helmet_Maroon: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Maroon_CO.paa"};
	};
	class 288th_JFO_Helmet_Navy: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Navy_CO.paa"};
	};
	class 288th_JFO_Helmet_Pink: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Pink_CO.paa"};
	};
	class 288th_JFO_Helmet_Teal: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\JFO_Visor_Teal_CO.paa"};
	};

	//MA JFO ONI Helmet
	class 288th_JFO_Helmet_ONI: 288th_JFO_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] JFO (ONI)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\ONI\JFO_Helmet_ONI_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_JFO\ONI\JFO_Visor_ONI_CO.paa"};
	};

	//MA Recon Helmet
	class 288th_Recon_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Ice)";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Icon_recon_image.paa";
		model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Recon_Helmet_Red: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Red_CO.paa"};
	};
	class 288th_Recon_Helmet_Orange: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Orange_CO.paa"};
	};
	class 288th_Recon_Helmet_Yellow: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Yellow_CO.paa"};
	};
	class 288th_Recon_Helmet_Green: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Green_CO.paa"};
	};
	class 288th_Recon_Helmet_Blue: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Blue_CO.paa"};
	};
	class 288th_Recon_Helmet_Purple: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Purple_CO.paa"};
	};
	class 288th_Recon_Helmet_White: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_White_CO.paa"};
	};
	class 288th_Recon_Helmet_Black: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Black_CO.paa"};
	};
	class 288th_Recon_Helmet_Lime: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Lime_CO.paa"};
	};
	class 288th_Recon_Helmet_Galaxy: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Galaxy_CO.paa"};
	};
	class 288th_Recon_Helmet_Maroon: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Maroon_CO.paa"};
	};
	class 288th_Recon_Helmet_Navy: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Navy_CO.paa"};
	};
	class 288th_Recon_Helmet_Pink: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Pink_CO.paa"};
	};
	class 288th_Recon_Helmet_Teal: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\Recon_Visor_Teal_CO.paa"};
	};
	//MA Recon ONI Helmet
	class 288th_Recon_Helmet_ONI: 288th_Recon_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK VR (ONI)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\ONI\Recon_Helmet_ONI_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Recon\ONI\Recon_Visor_ONI_CO.paa"};
	};

	//MA EVA Helmet
	class 288th_EVA_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Ice)";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\Icon_eva_image.paa";
		model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_EVA_Helmet_Red: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Red_CO.paa"};
	};
	class 288th_EVA_Helmet_Orange: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Orange_CO.paa"};
	};
	class 288th_EVA_Helmet_Yellow: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Yellow_CO.paa"};
	};
	class 288th_EVA_Helmet_Green: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Green_CO.paa"};
	};
	class 288th_EVA_Helmet_Blue: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Blue_CO.paa"};
	};
	class 288th_EVA_Helmet_Purple: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Purple_CO.paa"};
	};
	class 288th_EVA_Helmet_White: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_White_CO.paa"};
	};
	class 288th_EVA_Helmet_Black: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Black_CO.paa"};
	};
	class 288th_EVA_Helmet_Lime: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Lime_CO.paa"};
	};
	class 288th_EVA_Helmet_Galaxy: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Galaxy_CO.paa"};
	};
	class 288th_EVA_Helmet_Maroon: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Maroon_CO.paa"};
	};
	class 288th_EVA_Helmet_Navy: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Navy_CO.paa"};
	};
	class 288th_EVA_Helmet_Pink: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Pink_CO.paa"};
	};
	class 288th_EVA_Helmet_Teal: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Teal_CO.paa"};
	};
	class 288th_EVA_Helmet_Meta: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Meta)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Meta_CO.paa"};
	};
	class 288th_EVA_Helmet_Blood: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Blood)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\EVA_Visor_Blood_CO.paa"};
	};

	////MA EVA Personal Helmets
	class 288th_EVA_Helmet_Owlbear: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (OwlBear)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\OwlBear\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\OwlBear\EVA_Visor_CO.paa"};
	};
	class 288th_EVA_Helmet_Spice: 288th_EVA_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] EVA (Spice)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\Spice\EVA_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_EVA\Spice\EVA_Visor_CO.paa"};
	};

	//MA MKV Helmets
	class 288th_MKV_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Ice)";
		model = "MA_Armor\data\Helmets\MKV\MKV_Helmet.p3d";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\Icon_MK_V_image.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformmodel = "MA_Armor\data\Helmets\MKV\MKV_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_MKV_Helmet_Red: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Red_CO.paa"};
	};
	class 288th_MKV_Helmet_Orange: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Orange_CO.paa"};
	};
	class 288th_MKV_Helmet_Yellow: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Yellow_CO.paa"};
	};
	class 288th_MKV_Helmet_Green: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Green_CO.paa"};
	};
	class 288th_MKV_Helmet_Blue: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Blue_CO.paa"};
	};
	class 288th_MKV_Helmet_Purple: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Purple_CO.paa"};
	};
	class 288th_MKV_Helmet_White: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_White_CO.paa"};
	};
	class 288th_MKV_Helmet_Black: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Black_CO.paa"};
	};
	class 288th_MKV_Helmet_Lime: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Lime_CO.paa"};
	};
	class 288th_MKV_Helmet_Galaxy: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Galaxy_CO.paa"};
	};
	class 288th_MKV_Helmet_Maroon: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Maroon_CO.paa"};
	};
	class 288th_MKV_Helmet_Navy: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Navy_CO.paa"};
	};
	class 288th_MKV_Helmet_Pink: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Pink_CO.paa"};
	};
	class 288th_MKV_Helmet_Teal: 288th_MKV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK V (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKV\MKV_Visor_Teal_CO.paa"};
	};

	//MA MKIV Helmets
	class 288th_MKIV_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Ice)";
		model = "MA_Armor\data\Helmets\MKIV\MKIV_Helm.p3d";
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\Icon_MK_IV_image.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformmodel = "MA_Armor\data\Helmets\MKIV\MKIV_Helm.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_MKIV_Helmet_Red: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Red_CO.paa"};
	};
	class 288th_MKIV_Helmet_Orange: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Orange_CO.paa"};
	};
	class 288th_MKIV_Helmet_Yellow: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Yellow_CO.paa"};
	};
	class 288th_MKIV_Helmet_Green: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Green_CO.paa"};
	};
	class 288th_MKIV_Helmet_Blue: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Blue_CO.paa"};
	};
	class 288th_MKIV_Helmet_Purple: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Purple_CO.paa"};
	};
	class 288th_MKIV_Helmet_White: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_White_CO.paa"};
	};
	class 288th_MKIV_Helmet_Black: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Black_CO.paa"};
	};
	class 288th_MKIV_Helmet_Lime: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Lime_CO.paa"};
	};
	class 288th_MKIV_Helmet_Galaxy: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Galaxy_CO.paa"};
	};
	class 288th_MKIV_Helmet_Maroon: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Maroon_CO.paa"};
	};
	class 288th_MKIV_Helmet_Navy: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Navy_CO.paa"};
	};
	class 288th_MKIV_Helmet_Pink: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Pink_CO.paa"};
	};
	class 288th_MKIV_Helmet_Teal: 288th_MKIV_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_MKIV\MKIV_Visor_Teal_CO.paa"};
	};

	//MA Grenadier Helmets
	class 288th_Grenadier_Helmet: MA_Spartan_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Ice)";
		model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Ice_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
					explosionShielding = 0.1;
				};
			};
		};
		picture = "\288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Icon_Grenadier_image.paa";
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		grad_slingHelmet_allow = 1;
		ctab_camera = 1;
	};
	class 288th_Grenadier_Helmet_Red: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Red)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Red_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Orange: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Orange)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Orange_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Yellow: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Yellow)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Yellow_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Green: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Green)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Green_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Blue: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Blue)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Blue_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Purple: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Purple)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Purple_CO.paa"};
	};
	class 288th_Grenadier_Helmet_White: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (White)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_White_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Black: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Black)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Black_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Lime: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Lime)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Lime_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Galaxy: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Galaxy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Galaxy_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Maroon: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Maroon)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Maroon_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Navy: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Navy)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Navy_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Pink: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Pink)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Pink_CO.paa"};
	};
	class 288th_Grenadier_Helmet_Teal: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Teal)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Helmet_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Grenadier_Visor_Teal_CO.paa"};
	};

	////MA Gungnir Personal Helmets
	class 288th_Grenadier_Helmet_Glitch: 288th_Grenadier_Helmet
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] MK IV G (Glitch)";
		optreVarietys[] = {"","","_broken"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Glitch\Grenadier_Helmet_Glitch_CO.paa","288th_Gear\Data\ODST\Brimstone_MA\Helmets_Grenadier\Glitch\Grenadier_Visor_Glitch_CO.paa"};
	};


	//MA Vests
	class M52_ODST_Vest_Base;
	class 288th_ODST_Vest_Base: M52_ODST_Vest_Base
	{
		scope = 1;
		scopeArsenal = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Base)";
		picture = "\MA_Armor\data\Icons\H3ODST_Vest.paa";
		model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		hiddenSelections[] = 
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			"Camo11",
			"Camo12",
			"Camo13",
			"Camo14",
			"Camo15",
			"Camo16",
			"Camo17",
			"Camo18",
			"Camo19",
			"Camo20",
			"Camo21",
			"Camo22",
			"Camo23",
			"Camo24",
			"Camo25",
			"Camo26",
			"Camo27",
			"Camo28",
			"Camo29",
			"CQB_Left",
			"CQB_Right",
			"Marksman_Left",
			"Marksman_Right",
			"ODST_Bracer_Left",
			"ODST_Bracer_Right",
			"ODST_Chest",
			"ODST_Left",
			"ODST_Right",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"LShoulderRadio",
			"RShoulderRadio",
			"StomachPouch",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight",
			"LegPouchL",
			"LegPouchR"
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = 
			{
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5",
				"Camo6",
				"Camo7",
				"Camo8",
				"Camo9",
				"Camo10",
				"Camo11",
				"Camo12",
				"Camo13",
				"Camo14",
				"Camo15",
				"Camo16",
				"Camo17",
				"Camo18",
				"Camo19",
				"Camo20",
				"Camo21",
				"Camo22",
				"Camo23",
				"Camo24",
				"Camo25",
				"Camo26",
				"Camo27",
				"Camo28",
				"Camo29",
				"CQB_Left",
				"CQB_Right",
				"Marksman_Left",
				"Marksman_Right",
				"ODST_Bracer_Left",
				"ODST_Bracer_Right",
				"ODST_Chest",
				"ODST_Left",
				"ODST_Right",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"LShoulderRadio",
				"RShoulderRadio",
				"StomachPouch",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight",
				"LegPouchL",
				"LegPouchR"
			};
			uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"};
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};

	class 288th_ODST_Vest_Rifleman: 288th_ODST_Vest_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Rifleman)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_Rifleman_Blue: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Rifleman_Green: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Rifleman_Yellow: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Rifleman_White: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};

	class 288th_ODST_Vest_Grenadier: 288th_ODST_Vest_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Grenadier)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPouch","WaistBack","WaistGRight","WaistPLeft","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchR"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPouch","WaistBack","WaistGRight","WaistPLeft","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_Grenadier_Blue: 288th_ODST_Vest_Grenadier
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Grenadier)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Grenadier_Green: 288th_ODST_Vest_Grenadier
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Grenadier)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Grenadier_White: 288th_ODST_Vest_Grenadier
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Grenadier)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Grenadier_Yellow: 288th_ODST_Vest_Grenadier
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Grenadier)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	
	class 288th_ODST_Vest_Autorifleman: 288th_ODST_Vest_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Autorifleman)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
	};
	class 288th_ODST_Vest_Autorifleman_Blue: 288th_ODST_Vest_Autorifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Autorifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Autorifleman_Green: 288th_ODST_Vest_Autorifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Autorifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Autorifleman_White: 288th_ODST_Vest_Autorifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Autorifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Autorifleman_Yellow: 288th_ODST_Vest_Autorifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Autorifleman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};

	class 288th_ODST_Vest_Marksman: 288th_ODST_Vest_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Marksman)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
	};
	class 288th_ODST_Vest_Marksman_Blue: 288th_ODST_Vest_Marksman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Marksman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Marksman_Green: 288th_ODST_Vest_Marksman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Marksman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Marksman_White: 288th_ODST_Vest_Marksman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Marksman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Marksman_Yellow: 288th_ODST_Vest_Marksman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Marksman)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};

	class 288th_ODST_Vest_Demolitions: 288th_ODST_Vest_Base
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Demolitions)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","ChestPMLeft","ChestPMRight","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","LegPouchL","LegPouchR"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","ChestPMLeft","ChestPMRight","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","LegPouchL","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_Demolitions_Blue: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Demolitions)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Demolitions_Green: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Demolitions)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Demolitions_White: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Demolitions)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Demolitions_Yellow: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Demolitions)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};

	class 288th_ODST_Vest_Medic: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (Medic)";
		picture = "\MA_Armor\data\Icons\H3ODST_Vest.paa";
		model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_M_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_M_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_Medic_Blue: 288th_ODST_Vest_Medic
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO_BL_M.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Shoulders_CO_BL_M.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Medic_Green: 288th_ODST_Vest_Medic
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO_GN_M.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_Shoulders_CO_GN_M.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Medic_White: 288th_ODST_Vest_Medic
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D White (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO_WT_M.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO_WT_M.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Medic_Yellow: 288th_ODST_Vest_Medic
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_M_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO_YW_M.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Shoulders_CO_YW_M.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
	};

	//MA Personal Vests
	class 288th_ODST_Vest_Whiskey: 288th_ODST_Vest_Marksman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Green (Whiskey)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\Whiskey\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\Whiskey\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\Whiskey\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Green\Whiskey\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Butcher: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Butcher)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ChestPouch","LShoulderRadio","TorsoPouch","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ChestPouch","LShoulderRadio","TorsoPouch","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Butcher\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Eugen: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Eugen)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","ChestPMLeft","ChestPMRight","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","LegPouchL","LegPouchR"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","ChestPMLeft","ChestPMRight","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","LegPouchL","LegPouchR"};
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Eugen\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Egg: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D MISC (RG)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\RG\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\RG\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\RG\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\RG\MA_ODST_Shoulders_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\RG\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
	};
	class 288th_ODST_Vest_Error: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Command (Error)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","TorsoPouch","TorsoPMLeft","TorsoPMRight","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Error\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Error\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Error\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Error\MA_ODST_Shoulders_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Error\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","TorsoPouch","TorsoPMLeft","TorsoPMRight","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_Johnson: 288th_ODST_Vest_Medic
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Command (Johnson)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"};
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\Johnson\ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\Johnson\ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\Johnson\ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\Johnson\ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\Johnson\ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\White\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Glitch: 288th_ODST_Vest_Grenadier
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Command (Glitch)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","LShoulderRadio","RShoulderRadio","ChestPouch","TorsoPouch","TorsoPMLeft","TorsoPMRight","WaistRLeft","WaistGLeft","WaistSRight","LegPouchL"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","LShoulderRadio","RShoulderRadio","ChestPouch","TorsoPouch","TorsoPMLeft","TorsoPMRight","WaistRLeft","WaistGLeft","WaistSRight","LegPouchL"};
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Glitch\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Glitch\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Glitch\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Glitch\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Glitch\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
		};
	};
	class 288th_ODST_Vest_Bandit: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Yellow (Bandit)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ChestPouch","LShoulderRadio","TorsoPouch","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ChestPouch","LShoulderRadio","TorsoPouch","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Yellow\Bandit\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};
	class 288th_ODST_Vest_Weekers: 288th_ODST_Vest_Demolitions
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Blue (Weekers)";
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_CQB_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_Vest_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_Shoulders_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\Blue\Weekers\MA_ODST_Shoulders_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
	};

	//MA ODST ONI Vests
	class 288th_ODST_Vest_ONI: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (ONI)";
		picture = "\MA_Armor\data\Icons\H3ODST_Vest.paa";
		model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\ONI\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\ONI\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\ONI\MA_ODST_Vest_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\ONI\MA_ODST_Shoulders_co.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Vests\ONI\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"};
		};
	};
	class 288th_ODST_Vest_ONI_Alt: 288th_ODST_Vest_ONI
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D (ONI Alt)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"};
		};
	};

	class 288th_ODST_Vest_Experimental_Light: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Experimental (Light Armor)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
			uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"};
			containerClass = "Supply300";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 30;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 30;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 30;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 30;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};
	class 288th_ODST_Vest_Experimental_ULight: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Experimental (Ultra Light Armor)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
			uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"};
			containerClass = "Supply350";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 20;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 20;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20;
					passThrough = 0.1;
				};
			};
		};
	};
	class 288th_ODST_Vest_Experimental_Heavy: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Experimental (Heavy Armor)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
			uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"};
			containerClass = "Supply200";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	class 288th_ODST_Vest_Experimental_UHeavy: 288th_ODST_Vest_Rifleman
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Experimental (Ultra Heavy Armor)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchL","LegPouchR"};
			uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_CQB_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Marksman_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Vest_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","288th_Gear\Data\ODST\Brimstone_MA\Vests\MA_ODST_Shoulders_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa","MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"};
			containerClass = "Supply150";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 60;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 60;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 60;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 60;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 60;
					passThrough = 0.1;
				};
			};
		};
	};

	//MA Uniforms
	class U_B_CombatUniform_mcam;
	class 288th_BDU_ODST_HJ: U_B_CombatUniform_mcam
	{
		scope = 2;
		scopeArsenal = 2;
		ACE_GForceCoef = 0.1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Grey_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Grey)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Grey_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Winter_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Winter)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Winter_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_ERDL_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (ERDL)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_ERDL_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Chip_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (C-Chip)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Chip_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Tiger_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Tiger)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Tiger_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Brown_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Brown)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Brown_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Grassland_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Grassland)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Grassland_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Desert_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Desert_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Woodland_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Woodland_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Error_HJ: 288th_BDU_ODST_HJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Error)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Error_HJ";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};

	class 288th_BDU_ODST_NC: U_B_CombatUniform_mcam
	{
		scope = 2;
		scopeArsenal = 2;
		ACE_GForceCoef = 0.1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (NC)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Grey_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Grey NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Grey_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Winter_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Winter NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Winter_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_ERDL_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (ERDL NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_ERDL_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Chip_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (C-Chip NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Chip_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Tiger_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Tiger NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Tiger_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Brown_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Brown NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Brown_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Grassland_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Grassland NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Grassland_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Desert_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Desert NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Desert_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Woodland_NC: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Woodland NC)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Woodland_NC";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_ONI: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (ONI)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_ONI";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_EGG: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (RG)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_EGG";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
	class 288th_BDU_ODST_Bandit: 288th_BDU_ODST_NC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M56D Uniform (Bandit)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "288th_ODST_BDU_Bandit";
			containerClass = "Supply200";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = {6};
		};
	};
};
class cfgVehicles
{
	//MA Uniform V
	class MA_Marine_BDU_Base;
	class 288th_ODST_BDU_HJ: MA_Marine_BDU_Base
	{
		scope = 2;
		scopeArsenal = 2;
		UniformClass = "MA_Marine_BDU_ODST_HJ";
		model = "\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
		picture = "\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Shoulders_Lower1","Shoulders_Lower2","Shoulders_Upper"};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Grey_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Grey_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Winter_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Winter_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Winter_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Winter_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_ERDL_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_ERDL_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_ERDL_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_ERDL_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Chip_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_CChip_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Tiger_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Tiger_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Tiger_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Tiger_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Brown_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Grassland_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Desert_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Woodland_HJ: 288th_ODST_BDU_HJ
	{
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Error_HJ: 288th_ODST_BDU_HJ
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\Error\MA_ODSTUpperBDU_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\Error\MA_ODSTLowerBDU_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\Error\MA_ODST_Collar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\Error\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};

	class 288th_ODST_BDU_NC: MA_Marine_BDU_Base
	{
		scope = 2;
		scopeArsenal = 2;
		UniformClass = "MA_Marine_BDU_ODST_HJ_NC";
		model = "\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
		picture = "\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Uni_Collar","Shoulders_Lower1","Shoulders_Lower2","Shoulders_Upper"};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Grey_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Grey_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Winter_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Winter_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Winter_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Winter_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_ERDL_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_ERDL_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_ERDL_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_ERDL_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Chip_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_CChip_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Tiger_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Tiger_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Tiger_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Tiger_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Brown_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Grassland_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Desert_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Woodland_NC: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_ONI: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\ONI\MA_ODSTUpperBDU_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\ONI\MA_ODSTLowerBDU_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Grey_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\ONI\MA_ODST_UpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\ONI\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_EGG: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_Grey_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_Grey_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\RG\MA_ODST_UpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\RG\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
	class 288th_ODST_BDU_Bandit: 288th_ODST_BDU_NC
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTLowerBDU_CChip_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODST_Collar_CChip_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\MA_ODSTUpperArmor_CO.paa",
			"288th_Gear\Data\ODST\Brimstone_MA\Uniform\Bandit\MA_ODSTLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
};