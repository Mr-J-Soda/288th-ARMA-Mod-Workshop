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
	class 288th_CH252D_ODST_Base;
	class 288th_CH252D_ODST_Base_dp;
	class ItemInfo;
	class VestItem;

	class 288th_CH252D_ODST_Onyx : 288th_CH252D_ODST_Base
	{
		dlc = "288thDJP_Aux";
		scope = 2;
		scopeArsenal = 2;
		optreVarietys[] =
		{
			"",
			"",
			"_broken"
		};
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] CH252D Onyx";
		//optreHUDStyle = "";
		//MJOLNIR_isHelmet = 1; 
		//MJOLNIR_helmetOverlay = "\OPTRE_Suit_Scripts\textures\OPTRE_MJOLNIR_hudBackground.paa";    //Filepath for the hud overlay texture
    	//MJOLNIR_helmetOutline = "\OPTRE_Suit_Scripts\textures\OPTRE_MJOLNIR_hudHelmetOutline.paa";    //Filepath for the hud outline texture
		/*subItems[] = {"TFAR_anprc152_1"};
		ace_hearing_protection = 1.00;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.00;  // Muffling of the sound (0 to 1, higher means more muffling)*/
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Helmet.paa","288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Visor.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
		hiddenSelectionsMaterials[] = {"288th_Gear\Data\ODST\Units\Onyx\helmet.rvmat","288th_Gear\Data\ODST\Units\Onyx\visor.rvmat"};
		descriptionShort = "This modified CH252D helmet incorporates the latest iteration of VISR v2.43.";
		grad_slingHelmet_allow = true;
	};
	class 288th_Armor_ODST_Onyx : 288th_Armor_ODST_Rifleman
	{
		dlc = "288thDJP_Aux";
		scope = 2;
		scopeArsenal = 2;
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] M52D Onyx";
		//MJOLNIR_isarmor = 1;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		descriptionShort = "An upgraded variant of the standard issue M52D, first fielded in 2525.";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch" };
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Vest.paa","288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Vest2.paa","288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Legs.paa","optre_unsc_units\army\data\ghillie_woodland_co","288th_Gear\Data\ODST\Units\Onyx\ODST_Onyx_Armor2.paa"};
		hiddenSelectionsMaterials[] = {"288th_Gear\Data\ODST\Units\Onyx\Vest.rvmat","288th_Gear\Data\ODST\Units\Onyx\Armor.rvmat","288th_Gear\Data\ODST\Units\Onyx\Legs.rvmat","","288th_Gear\Data\ODST\Units\Onyx\Armor_2.rvmat"};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR",/*"APO_BR",*/"APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
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