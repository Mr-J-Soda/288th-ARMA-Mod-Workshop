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
	class H_HelmetB;
	class HeadgearItem;

	class 288th_Beret_Base: H_HelmetB
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		displayName = "[288th] Beret (Unit)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\288thhatthingy.paa"};
		grad_slingHelmet_allow = true;
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};

	class 288th_beret_Brim : 288th_Beret_Base
	{
		displayName = "[288th] Beret (Brimstone)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\Brimstoneberet.paa"};
	};
	class 288th_beret_Herc : 288th_Beret_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		displayName = "[288th] Beret (Hercules)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\Herculesberet.paa"};
	};
	class 288th_beret_Maxim : 288th_Beret_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		displayName = "[288th] Beret (Maxim)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\maximberet.paa"};
	};
	class 288th_beret_Onyx : 288th_Beret_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		displayName = "[288th] Beret (Onyx)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\Onyxberet.paa"};
	};
};