////////////////////////////////////////////////////////////////////
//DeRap: Data\Bots\config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:05 2025 : 'file' last modified on Mon Apr 14 19:54:27 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear_Bots
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
class ItemInfo;
class cfgWeapons
{
	class TKE_WarbotUni_U_OP;
	class TKE_WarBotHead;
	class TKE_WarBotArmour;
	class TKE_WarBotArmourP;
	class 288th_WarbotUni: TKE_WarbotUni_U_OP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[288th] XM-27-A Chasis";
		picture = "\288th_Core\Logos\Misriah_Picture_CA.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "288th_WarbotUni";
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class 288th_WarBotHead: TKE_WarBotHead
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		displayName = "[288th] XM-27-A Head";
		picture = "\288th_Core\Logos\Misriah_Picture_CA.paa";
		hiddenSelections[] = {"camo"};
		subItems[] = {"288th_Mk5_NVG"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_WarBotHeadMDMC_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotHead.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 50;
					passThrough = 0.25;
				};
			};
		};
	};
	class 288th_WarBotArmour: TKE_WarBotArmour
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		displayName = "[288th] XM-27-A Armour";
		picture = "\288th_Core\Logos\Misriah_Picture_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_WarBotArmourMDMC_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotArmour.p3d";
			containerClass = "Supply250";
			mass = 25;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_WarBotArmourMDMC_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.3;
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
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 50;
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.3;
				};
			};
		};
	};
	class 288th_WarBotArmourP: TKE_WarBotArmourP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		displayName = "[288th] XM-27-A Armour (Pouches)";
		picture = "\288th_Core\Logos\Misriah_Picture_CA.paa";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_WarBotArmourMDMC_co.paa","\288th_Gear\Data\Bots\TKE_UCMCPouches_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_Warbots\TKE_WarBotArmourP.p3d";
			containerClass = "Supply250";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_WarBotArmourMDMC_co.paa","\288th_Gear\Data\Bots\TKE_UCMCPouches_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.3;
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
					armor = 30;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 50;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 50;
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.3;
				};
			};
		};
	};
};
class CfgVehicles
{
	class TKE_WarbotUni_base;
	class 288th_WarbotUni: TKE_WarbotUni_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 0;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Bots\TKE_BotLegsMDMC_co.paa","\288th_Gear\Data\Bots\TKE_BotTorsoMDMC_co.paa"};
		side = 1;
		displayName = "[288th] XM-27-A Chasis";
		backpack = "";
		uniformClass = "288th_WarbotUni";
	};
};
