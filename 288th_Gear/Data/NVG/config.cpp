#define _ARMA_

class CfgPatches
{
	class 288th_Gear_NVG
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class OPTRE_NVG_CNM_MVI_HURS;
	class OPTRE_NVG_HUL3;
	class OPTRE_NVG_HUL3_Gray;
	class OPTRE_NVG_HURS;
	class OPTRE_NVG_CNM_UAB_HURS;
	class OPTRE_NVG_HUL;
	class OPTRE_NVG_HUL_MVI_HURS;
	class OPTRE_NVG_HUL_UAB_HURS;
	class OPTRE_NVG_HURS_CNM;
	class OPTRE_NVG_HURS_HUL;
	class OPTRE_NVG_MVI_HUL;
	class OPTRE_NVG_MVI_HURS;
	class OPTRE_NVG_MVI_UL;
	class OPTRE_NVG_MVI_UL_CNM;
	class OPTRE_NVG_MVI_UL_HUL;
	class OPTRE_NVG_MVI;
	class OPTRE_NVG_MVI_CNM;
	class OPTRE_NVG_UL;
	class OPTRE_NVG_CNM;
	class OPTRE_NVG_UL_CNM;
	class OPTRE_NVG_UA_CNM;
	class OPTRE_NVG_UA_HUL;
	class OPTRE_NVG_UA_HURS;
	class OPTRE_NVG_UA_HURS_CNM;
	class OPTRE_NVG_UA_HURS_HUL;
	class OPTRE_NVG_UA_UL;
	class OPTRE_NVG_UA_UL_CNM;
	class OPTRE_NVG_UAB_CNM;
	class OPTRE_NVG_UAB_HUL;
	class OPTRE_NVG_UAB_UL;
	class OPTRE_NVG_UAB_UL_CNM;
	class OPTRE_NVG_UAB_UL_HUL;
	class OPTRE_NVG_UL_HUL;
	class OPTRE_NVG_UA;
	class OPTRE_NVG_UA_Spartan;
	class OPTRE_NVG_UAB;
	class OPTRE_NVG_UAB_Spartan;
	class OPTRE_NVG_Visor;
	class 288th_MK2_CNM_MVI_HURS: OPTRE_NVG_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (CNM/MVI/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (CNM/MVI/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (CNM/MVI/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (CNM/MVI/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (CNM/MVI/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (CNM/MVI/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_CNM_MVI_HURS: 288th_MK2_CNM_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (CNM/MVI/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_CNM_UAB_HURS: OPTRE_NVG_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (CNM/UAB/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (CNM/UAB/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (CNM/UAB/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (CNM/UAB/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (CNM/UAB/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (CNM/UAB/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_CNM_UAB_HURS: 288th_MK2_CNM_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (CNM/UAB/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_CNM: OPTRE_NVG_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_CNM: 288th_MK2_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UL: OPTRE_NVG_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UL: 288th_MK2_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HUL: OPTRE_NVG_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HUL: 288th_MK2_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HUL3: OPTRE_NVG_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HUL 3)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HUL 3)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HUL 3)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HUL 3)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HUL 3)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HUL 3)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HUL3: 288th_MK2_HUL3
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HUL 3)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HUL3_Gray: OPTRE_NVG_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HUL 3G)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HUL 3G)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HUL 3G)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HUL 3G)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HUL 3G)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HUL 3G)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HUL3_Gray: 288th_MK2_HUL3_Gray
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HUL 3G)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HURS: OPTRE_NVG_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HURS: 288th_MK2_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HUL_MVI_HURS: OPTRE_NVG_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HUL/MVI/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HUL/MVI/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HUL/MVI/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HUL/MVI/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HUL/MVI/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HUL/MVI/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HUL_MVI_HURS: 288th_MK2_HUL_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HUL/MVI/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HUL_UAB_HURS: OPTRE_NVG_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HUL/UAB/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HUL/UAB/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HUL/UAB/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HUL/UAB/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HUL/UAB/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HUL/UAB/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HUL_UAB_HURS: 288th_MK2_HUL_UAB_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HUL/UAB/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HURS_CNM: OPTRE_NVG_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HURS/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HURS/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HURS/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HURS/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HURS/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HURS/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HURS_CNM: 288th_MK2_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HURS/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_HURS_HUL: OPTRE_NVG_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (HURS/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (HURS/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (HURS/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (HURS/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (HURS/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (HURS/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_HURS_HUL: 288th_MK2_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (HURS/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI: OPTRE_NVG_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI: 288th_MK2_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_CNM: OPTRE_NVG_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_CNM: 288th_MK2_MVI_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_HUL: OPTRE_NVG_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_HUL: 288th_MK2_MVI_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_HURS: OPTRE_NVG_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_HURS: 288th_MK2_MVI_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_UL: OPTRE_NVG_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/UL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/UL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/UL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/UL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/UL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/UL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_UL: 288th_MK2_MVI_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/UL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_UL_CNM: OPTRE_NVG_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/UL/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/UL/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/UL/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/UL/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/UL/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/UL/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_UL_CNM: 288th_MK2_MVI_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/UL/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_MVI_UL_HUL: OPTRE_NVG_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (MVI/UL/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (MVI/UL/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (MVI/UL/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (MVI/UL/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (MVI/UL/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (MVI/UL/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_MVI_UL_HUL: 288th_MK2_MVI_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (MVI/UL/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_CNM: OPTRE_NVG_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_CNM: 288th_MK2_UA_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_HUL: OPTRE_NVG_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_HUL: 288th_MK2_UA_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_HURS: OPTRE_NVG_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/HURS)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/HURS)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/HURS)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/HURS)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/HURS)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/HURS)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_HURS: 288th_MK2_UA_HURS
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/HURS)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_HURS_CNM: OPTRE_NVG_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/HURS/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/HURS/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/HURS/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/HURS/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/HURS/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/HURS/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_HURS_CNM: 288th_MK2_UA_HURS_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/HURS/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_HURS_HUL: OPTRE_NVG_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/HURS/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/HURS/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/HURS/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/HURS/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/HURS/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/HURS/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_HURS_HUL: 288th_MK2_UA_HURS_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/HURS/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_UL: OPTRE_NVG_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/UL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/UL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/UL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/UL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/UL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/UL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_UL: 288th_MK2_UA_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/UL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_UL_CNM: OPTRE_NVG_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA/UL/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA/UL/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA/UL/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA/UL/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA/UL/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA/UL/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_UL_CNM: 288th_MK2_UA_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA/UL/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_CNM: OPTRE_NVG_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_CNM: 288th_MK2_UAB_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_HUL: OPTRE_NVG_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_HUL: 288th_MK2_UAB_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_UL: OPTRE_NVG_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB/UL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB/UL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB/UL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB/UL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB/UL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB/UL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_UL: 288th_MK2_UAB_UL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB/UL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_UL_CNM: OPTRE_NVG_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB/UL/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB/UL/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB/UL/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB/UL/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB/UL/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB/UL/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_UL_CNM: 288th_MK2_UAB_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB/UL/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_UL_HUL: OPTRE_NVG_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB/UL/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB/UL/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB/UL/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB/UL/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB/UL/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB/UL/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_UL_HUL: 288th_MK2_UAB_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB/UL/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UL_CNM: OPTRE_NVG_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UL/CNM)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UL/CNM)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UL/CNM)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UL/CNM)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UL/CNM)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UL/CNM)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UL_CNM: 288th_MK2_UL_CNM
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UL/CNM)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UL_HUL: OPTRE_NVG_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UL/HUL)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UL/HUL)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UL/HUL)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UL/HUL)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UL/HUL)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UL/HUL)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UL_HUL: 288th_MK2_UL_HUL
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UL/HUL)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA: OPTRE_NVG_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA: 288th_MK2_UA
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UA_Spartan: OPTRE_NVG_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UA Spartan)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UA Spartan)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UA Spartan)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UA Spartan)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UA Spartan)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UA Spartan)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UA_Spartan: 288th_MK2_UA_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UA Spartan)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB: OPTRE_NVG_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB: 288th_MK2_UAB
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB)";
		thermalMode[] = {7};
	};
	class 288th_MK2_UAB_Spartan: OPTRE_NVG_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (UAB Spartan)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (UAB Spartan)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (UAB Spartan)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (UAB Spartan)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (UAB Spartan)";
		thermalMode[] = {0};
	};
	class 288th_MK7_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (UAB Spartan)";
		thermalMode[] = {6};
	};
	class 288th_MK8_UAB_Spartan: 288th_MK2_UAB_Spartan
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (UAB Spartan)";
		thermalMode[] = {7};
	};
	class 288th_MK2_Visor: OPTRE_NVG_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface (Visor)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
	};
	class 288th_MK3_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface (Visor)";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_MK4_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface (Visor)";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_MK5_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface (Visor)";
		thermalMode[] = {0,1,7};
	};
	class 288th_MK6_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface (Visor)";
		thermalMode[] = {0};
	};
	class 288th_MK7_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface (Visor)";
		thermalMode[] = {6};
	};
	class 288th_MK8_Visor: 288th_MK2_Visor
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface (Visor)";
		thermalMode[] = {7};
	};
	class 288th_Mk2_NVG: NVGoggles
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 2 Interface";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0,1,2,3,4,5,6,7};
		visionMode[] = {"Normal","NVG","TI"};
		class ItemInfo
		{
			type = 616;
			uniformModel = "";
			modelOff = "";
			mass = 5;
		};
	};
	class 288th_Mk3_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 3 Interface";
		thermalMode[] = {0,1,3,4,7};
	};
	class 288th_Mk4_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 4 Interface";
		thermalMode[] = {0,1,6,7};
	};
	class 288th_Mk5_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 5 Interface";
		thermalMode[] = {0,1,7};
	};
	class 288th_Mk6_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 6 Interface";
		thermalMode[] = {0};
	};
	class 288th_Mk7_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 7 Interface";
		thermalMode[] = {6};
	};
	class 288th_Mk8_NVG: 288th_Mk2_NVG
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Mark 8 Interface";
		thermalMode[] = {7};
	};
	class 288th_Whiskey_NVG: 288th_MK5_MVI
	{
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Whiskey)";
		thermalMode[] = {0,1};
	};
	class catears_nvg1;
	class catears_nvg1_helm;
	class 288th_Johnson_NVG: catears_nvg1
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Johnson)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		modelOptics = "";
	};
	/*class 288th_Johnson_NVG_ALT: catears_nvg1_helm
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Johnson ALT)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
	};*/
};
