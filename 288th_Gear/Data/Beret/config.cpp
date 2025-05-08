////////////////////////////////////////////////////////////////////
//DeRap: Data\Beret\config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:05 2025 : 'file' last modified on Mon Apr 14 19:54:27 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear_beret
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {"288th_Beret_Base","288th_beret_Brim"};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
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
		grad_slingHelmet_allow = 1;
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
	class 288th_beret_Brim: 288th_Beret_Base
	{
		displayName = "[288th] Beret (Brimstone)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Beret\Brimstoneberet.paa"};
	};
};
