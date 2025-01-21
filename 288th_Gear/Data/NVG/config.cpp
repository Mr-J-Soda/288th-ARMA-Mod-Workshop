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

	//Night Vision Goggles
	class NVGoggles;
	class OPTRE_NVG_UL_CNM;

	class 288th_Mk2_NVG : NVGoggles
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		displayName = "[288th DJP] Mark 2 Interface";
		//ace_nightvision_colorPreset[] = {0, {0.0, 0.0, 0.0, 0.0}, {1.3, 1.2, 0.0, 0.9}, {6, 1, 1, 0.0}}; // Green preset
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.050000001;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = { 0,1,2,3,4,5,6,7 };
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		class ItemInfo
		{
			type = 616;
			uniformModel = "";
			modelOff = "";
			mass = 5;
		};
	};
	class 288th_Mk3_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 3 Interface";
		thermalMode[] = { 0,1,3,4,7 };
	};
	class 288th_Mk4_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 4 Interface";
		thermalMode[] = { 0,1,6,7 };
	};
	class 288th_Mk5_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 5 Interface";
		thermalMode[] = { 0,1,7 };
	};
	class 288th_Mk6_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 6 Interface";
		thermalMode[] = { 0 };
	};
	class 288th_Mk7_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 7 Interface";
		thermalMode[] = { 6 };
	};
	class 288th_Mk8_NVG : 288th_Mk2_NVG
	{
		displayName = "[288th DJP] Mark 8 Interface";
		thermalMode[] = { 7 };
	};
	class Example_NVG : OPTRE_NVG_UL_CNM
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] Example Custom NVG";
		//ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}}; // White Phosphor Preset
		//ace_nightvision_bluRadius = 0;
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.050000001;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = { 0,1,7 };
	};
};