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
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Whiskey)";
		thermalMode[] = {0,1};
	};
	class 288th_Kelkuza_NVG: 288th_MK5_HURS_CNM
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Kelkuza)";
		thermalMode[] = {1};
	};

	class MA_ODST_CustomNVG_17;
	class 288th_Glitch_NVG: MA_ODST_CustomNVG_17
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		scopeCurator = 2;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Glitch)";
		ace_nightVision_grain = 0;
		ace_nightVision_blur = 0;
		ace_nightVision_radBlur = 0;
		ace_nightvision_border = "";
		ace_nightvision_bluRadius = 0.05;
		ace_nightvision_generation = 4;
		ace_nightvision_eyeCups = 0;
		thermalMode[] = {6};
		visionMode[] = {"Normal","NVG","TI"};
	};

	class 288th_Johnson_NVG: NVGoggles
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		dlc = "288DJP";
		author = "Soda / Misriah 288";
		displayName = "[288th] Custom NVG (Johnson)";
		picture = "\288th_Gear\Data\NVG\Catears\icon_black.paa";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;

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

		class ItemInfo 
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\288th_Gear\Data\NVG\Catears\Catears_Black.p3d";
			modelOff = "\288th_Gear\Data\NVG\Catears\Catears_Black.p3d";
			mass = 24;
		};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class CNM_MVI_HURS
		{
			label = "CNM/MVI/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "CNM/MVI/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class CNM_UAB_HURS
		{
			label = "CNM/UAB/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "CNM/UAB/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class CNM
		{
			label = "CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UL
		{
			label = "UL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HUL
		{
			label = "HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HUL3
		{
			label = "HUL 3";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HUL 3";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HUL3G
		{
			label = "HUL 3G";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HUL 3G";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HURS
		{
			label = "HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HUL_MVI_HURS
		{
			label = "HUL/MVI/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HUL/MVI/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HUL_UAB_HURS
		{
			label = "HUL/UAB/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HUL/UAB/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HURS_CNM
		{
			label = "HURS/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HURS/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class HURS_HUL
		{
			label = "HURS/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "HURS/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI
		{
			label = "MVI";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_CNM
		{
			label = "MVI/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_HUL
		{
			label = "MVI/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_HURS
		{
			label = "MVI/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_UL
		{
			label = "MVI/UL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/UL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_UL_CNM
		{
			label = "MVI/UL/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/UL/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class MVI_UL_HUL
		{
			label = "MVI/UL/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "MVI/UL/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_CNM
		{
			label = "UA/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_HUL
		{
			label = "UA/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_HURS
		{
			label = "UA/HURS";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/HURS";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_HURS_CNM
		{
			label = "UA/HURS/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/HURS/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_HURS_HUL
		{
			label = "UA/HURS/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/HURS/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_UL
		{
			label = "UA/UL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/UL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_UL_CNM
		{
			label = "UA/UL/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA/UL/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_CNM
		{
			label = "UAB/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_HUL
		{
			label = "UAB/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_UL
		{
			label = "UAB/UL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB/UL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_UL_CNM
		{
			label = "UAB/UL/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB/UL/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_UL_HUL
		{
			label = "UAB/UL/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB/UL/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UL_CNM
		{
			label = "UL/CNM";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UL/CNM";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UL_HUL
		{
			label = "UL/HUL";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UL/HUL";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA
		{
			label = "UA";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UA_Spartan
		{
			label = "UA Spartan";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UA Spartan";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB
		{
			label = "UAB";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class UAB_Spartan
		{
			label = "UAB Spartan";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "UAB Spartan";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class Visor
		{
			label = "Visor";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Visor";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class NVG_Blank
		{
			label = "Blank";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Blank";
				values[] = {"MK 2","MK 3","MK 4","MK 5","MK 6","MK 7","MK 8"};
			};
		};
		class Custom
		{
			label = "Custom";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Custom";
				values[] = {"Johnson","Glitch","Kelkuza","Whiskey"};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		//CNM/MVI/HURS
		class 288th_MK2_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 2";
		};
		class 288th_MK3_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 3";
		};
		class 288th_MK4_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 4";
		};
		class 288th_MK5_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 5";
		};
		class 288th_MK6_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 6";
		};
		class 288th_MK7_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 7";
		};
		class 288th_MK8_CNM_MVI_HURS
		{
			model = "CNM_MVI_HURS";
			member = "MK 8";
		};

		//CNM/UAB/HURS
		class 288th_MK2_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 2";
		};
		class 288th_MK3_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 3";
		};
		class 288th_MK4_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 4";
		};
		class 288th_MK5_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 5";
		};
		class 288th_MK6_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 6";
		};
		class 288th_MK7_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 7";
		};
		class 288th_MK8_CNM_UAB_HURS
		{
			model = "CNM_UAB_HURS";
			member = "MK 8";
		};

		//CNM
		class 288th_MK2_CNM
		{
			model = "CNM";
			member = "MK 2";
		};
		class 288th_MK3_CNM
		{
			model = "CNM";
			member = "MK 3";
		};
		class 288th_MK4_CNM
		{
			model = "CNM";
			member = "MK 4";
		};
		class 288th_MK5_CNM
		{
			model = "CNM";
			member = "MK 5";
		};
		class 288th_MK6_CNM
		{
			model = "CNM";
			member = "MK 6";
		};
		class 288th_MK7_CNM
		{
			model = "CNM";
			member = "MK 7";
		};
		class 288th_MK8_CNM
		{
			model = "CNM";
			member = "MK 8";
		};

		//UL
		class 288th_MK2_UL
		{
			model = "UL";
			member = "MK 2";
		};
		class 288th_MK3_UL
		{
			model = "UL";
			member = "MK 3";
		};
		class 288th_MK4_UL
		{
			model = "UL";
			member = "MK 4";
		};
		class 288th_MK5_UL
		{
			model = "UL";
			member = "MK 5";
		};
		class 288th_MK6_UL
		{
			model = "UL";
			member = "MK 6";
		};
		class 288th_MK7_UL
		{
			model = "UL";
			member = "MK 7";
		};
		class 288th_MK8_UL
		{
			model = "UL";
			member = "MK 8";
		};

		//HHUL
		class 288th_MK2_HUL
		{
			model = "HUL";
			member = "MK 2";
		};
		class 288th_MK3_HUL
		{
			model = "HUL";
			member = "MK 3";
		};
		class 288th_MK4_HUL
		{
			model = "HUL";
			member = "MK 4";
		};
		class 288th_MK5_HUL
		{
			model = "HUL";
			member = "MK 5";
		};
		class 288th_MK6_HUL
		{
			model = "HUL";
			member = "MK 6";
		};
		class 288th_MK7_HUL
		{
			model = "HUL";
			member = "MK 7";
		};
		class 288th_MK8_HUL
		{
			model = "HUL";
			member = "MK 8";
		};

		//HUL3
		class 288th_MK2_HUL3
		{
			model = "HUL3";
			member = "MK 2";
		};
		class 288th_MK3_HUL3
		{
			model = "HUL3";
			member = "MK 3";
		};
		class 288th_MK4_HUL3
		{
			model = "HUL3";
			member = "MK 4";
		};
		class 288th_MK5_HUL3
		{
			model = "HUL3";
			member = "MK 5";
		};
		class 288th_MK6_HUL3
		{
			model = "HUL3";
			member = "MK 6";
		};
		class 288th_MK7_HUL3
		{
			model = "HUL3";
			member = "MK 7";
		};
		class 288th_MK8_HUL3
		{
			model = "HUL3";
			member = "MK 8";
		};

		//HUL3 Gray
		class 288th_MK2_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 2";
		};
		class 288th_MK3_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 3";
		};
		class 288th_MK4_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 4";
		};
		class 288th_MK5_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 5";
		};
		class 288th_MK6_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 6";
		};
		class 288th_MK7_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 7";
		};
		class 288th_MK8_HUL3_Gray
		{
			model = "HUL3G";
			member = "MK 8";
		};

		//HURS
		class 288th_MK2_HURS
		{
			model = "HURS";
			member = "MK 2";
		};
		class 288th_MK3_HURS
		{
			model = "HURS";
			member = "MK 3";
		};
		class 288th_MK4_HURS
		{
			model = "HURS";
			member = "MK 4";
		};
		class 288th_MK5_HURS
		{
			model = "HURS";
			member = "MK 5";
		};
		class 288th_MK6_HURS
		{
			model = "HURS";
			member = "MK 6";
		};
		class 288th_MK7_HURS
		{
			model = "HURS";
			member = "MK 7";
		};
		class 288th_MK8_HURS
		{
			model = "HURS";
			member = "MK 8";
		};

		//HUL/MVI/HURS
		class 288th_MK2_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 2";
		};
		class 288th_MK3_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 3";
		};
		class 288th_MK4_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 4";
		};
		class 288th_MK5_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 5";
		};
		class 288th_MK6_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 6";
		};
		class 288th_MK7_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 7";
		};
		class 288th_MK8_HUL_MVI_HURS
		{
			model = "HUL_MVI_HURS";
			member = "MK 8";
		};

		//HUL/UAB/HURS
		class 288th_MK2_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 2";
		};
		class 288th_MK3_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 3";
		};
		class 288th_MK4_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 4";
		};
		class 288th_MK5_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 5";
		};
		class 288th_MK6_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 6";
		};
		class 288th_MK7_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 7";
		};
		class 288th_MK8_HUL_UAB_HURS
		{
			model = "HUL_UAB_HURS";
			member = "MK 8";
		};

		//HURS/CNM
		class 288th_MK2_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 2";
		};
		class 288th_MK3_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 3";
		};
		class 288th_MK4_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 4";
		};
		class 288th_MK5_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 5";
		};
		class 288th_MK6_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 6";
		};
		class 288th_MK7_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 7";
		};
		class 288th_MK8_HURS_CNM
		{
			model = "HURS_CNM";
			member = "MK 8";
		};

		//HURS/HUL
		class 288th_MK2_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 2";
		};
		class 288th_MK3_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 3";
		};
		class 288th_MK4_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 4";
		};
		class 288th_MK5_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 5";
		};
		class 288th_MK6_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 6";
		};
		class 288th_MK7_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 7";
		};
		class 288th_MK8_HURS_HUL
		{
			model = "HURS_HUL";
			member = "MK 8";
		};

		//MVI
		class 288th_MK2_MVI
		{
			model = "MVI";
			member = "MK 2";
		};
		class 288th_MK3_MVI
		{
			model = "MVI";
			member = "MK 3";
		};
		class 288th_MK4_MVI
		{
			model = "MVI";
			member = "MK 4";
		};
		class 288th_MK5_MVI
		{
			model = "MVI";
			member = "MK 5";
		};
		class 288th_MK6_MVI
		{
			model = "MVI";
			member = "MK 6";
		};
		class 288th_MK7_MVI
		{
			model = "MVI";
			member = "MK 7";
		};
		class 288th_MK8_MVI
		{
			model = "MVI";
			member = "MK 8";
		};

		//MVI/CNM
		class 288th_MK2_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 2";
		};
		class 288th_MK3_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 3";
		};
		class 288th_MK4_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 4";
		};
		class 288th_MK5_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 5";
		};
		class 288th_MK6_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 6";
		};
		class 288th_MK7_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 7";
		};
		class 288th_MK8_MVI_CNM
		{
			model = "MVI_CNM";
			member = "MK 8";
		};

		//MVI/HUL
		class 288th_MK2_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 2";
		};
		class 288th_MK3_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 3";
		};
		class 288th_MK4_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 4";
		};
		class 288th_MK5_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 5";
		};
		class 288th_MK6_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 6";
		};
		class 288th_MK7_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 7";
		};
		class 288th_MK8_MVI_HUL
		{
			model = "MVI_HUL";
			member = "MK 8";
		};

		//MVI/HURS
		class 288th_MK2_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 2";
		};
		class 288th_MK3_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 3";
		};
		class 288th_MK4_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 4";
		};
		class 288th_MK5_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 5";
		};
		class 288th_MK6_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 6";
		};
		class 288th_MK7_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 7";
		};
		class 288th_MK8_MVI_HURS
		{
			model = "MVI_HURS";
			member = "MK 8";
		};

		//MVI/UL
		class 288th_MK2_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 2";
		};
		class 288th_MK3_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 3";
		};
		class 288th_MK4_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 4";
		};
		class 288th_MK5_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 5";
		};
		class 288th_MK6_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 6";
		};
		class 288th_MK7_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 7";
		};
		class 288th_MK8_MVI_UL
		{
			model = "MVI_UL";
			member = "MK 8";
		};

		//MVI/UL/CNM
		class 288th_MK2_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 2";
		};
		class 288th_MK3_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 3";
		};
		class 288th_MK4_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 4";
		};
		class 288th_MK5_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 5";
		};
		class 288th_MK6_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 6";
		};
		class 288th_MK7_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 7";
		};
		class 288th_MK8_MVI_UL_CNM
		{
			model = "MVI_UL_CNM";
			member = "MK 8";
		};

		//MVI/UL/HUL
		class 288th_MK2_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 2";
		};
		class 288th_MK3_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 3";
		};
		class 288th_MK4_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 4";
		};
		class 288th_MK5_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 5";
		};
		class 288th_MK6_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 6";
		};
		class 288th_MK7_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 7";
		};
		class 288th_MK8_MVI_UL_HUL
		{
			model = "MVI_UL_HUL";
			member = "MK 8";
		};

		//UA/CNM
		class 288th_MK2_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UA_CNM
		{
			model = "UA_CNM";
			member = "MK 8";
		};

		//UA/HUL
		class 288th_MK2_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 2";
		};
		class 288th_MK3_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 3";
		};
		class 288th_MK4_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 4";
		};
		class 288th_MK5_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 5";
		};
		class 288th_MK6_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 6";
		};
		class 288th_MK7_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 7";
		};
		class 288th_MK8_UA_HUL
		{
			model = "UA_HUL";
			member = "MK 8";
		};

		//UA/HURS
		class 288th_MK2_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 2";
		};
		class 288th_MK3_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 3";
		};
		class 288th_MK4_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 4";
		};
		class 288th_MK5_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 5";
		};
		class 288th_MK6_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 6";
		};
		class 288th_MK7_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 7";
		};
		class 288th_MK8_UA_HURS
		{
			model = "UA_HURS";
			member = "MK 8";
		};

		//UA/HURS/CNM
		class 288th_MK2_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UA_HURS_CNM
		{
			model = "UA_HURS_CNM";
			member = "MK 8";
		};

		//UA/HURS/HUL
		class 288th_MK2_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 2";
		};
		class 288th_MK3_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 3";
		};
		class 288th_MK4_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 4";
		};
		class 288th_MK5_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 5";
		};
		class 288th_MK6_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 6";
		};
		class 288th_MK7_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 7";
		};
		class 288th_MK8_UA_HURS_HUL
		{
			model = "UA_HURS_HUL";
			member = "MK 8";
		};

		//UA/UL
		class 288th_MK2_UA_UL
		{
			model = "UA_UL";
			member = "MK 2";
		};
		class 288th_MK3_UA_UL
		{
			model = "UA_UL";
			member = "MK 3";
		};
		class 288th_MK4_UA_UL
		{
			model = "UA_UL";
			member = "MK 4";
		};
		class 288th_MK5_UA_UL
		{
			model = "UA_UL";
			member = "MK 5";
		};
		class 288th_MK6_UA_UL
		{
			model = "UA_UL";
			member = "MK 6";
		};
		class 288th_MK7_UA_UL
		{
			model = "UA_UL";
			member = "MK 7";
		};
		class 288th_MK8_UA_UL
		{
			model = "UA_UL";
			member = "MK 8";
		};

		//UA/UL/CNM
		class 288th_MK2_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UA_UL_CNM
		{
			model = "UA_UL_CNM";
			member = "MK 8";
		};

		//UAB/CNM
		class 288th_MK2_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UAB_CNM
		{
			model = "UAB_CNM";
			member = "MK 8";
		};

		//UAB/HUL
		class 288th_MK2_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 2";
		};
		class 288th_MK3_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 3";
		};
		class 288th_MK4_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 4";
		};
		class 288th_MK5_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 5";
		};
		class 288th_MK6_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 6";
		};
		class 288th_MK7_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 7";
		};
		class 288th_MK8_UAB_HUL
		{
			model = "UAB_HUL";
			member = "MK 8";
		};

		//UAB/UL
		class 288th_MK2_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 2";
		};
		class 288th_MK3_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 3";
		};
		class 288th_MK4_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 4";
		};
		class 288th_MK5_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 5";
		};
		class 288th_MK6_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 6";
		};
		class 288th_MK7_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 7";
		};
		class 288th_MK8_UAB_UL
		{
			model = "UAB_UL";
			member = "MK 8";
		};

		//UAB/UL/CNM
		class 288th_MK2_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UAB_UL_CNM
		{
			model = "UAB_UL_CNM";
			member = "MK 8";
		};

		//UAB/UL/HUL
		class 288th_MK2_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 2";
		};
		class 288th_MK3_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 3";
		};
		class 288th_MK4_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 4";
		};
		class 288th_MK5_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 5";
		};
		class 288th_MK6_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 6";
		};
		class 288th_MK7_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 7";
		};
		class 288th_MK8_UAB_UL_HUL
		{
			model = "UAB_UL_HUL";
			member = "MK 8";
		};

		//UL/CNM
		class 288th_MK2_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 2";
		};
		class 288th_MK3_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 3";
		};
		class 288th_MK4_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 4";
		};
		class 288th_MK5_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 5";
		};
		class 288th_MK6_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 6";
		};
		class 288th_MK7_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 7";
		};
		class 288th_MK8_UL_CNM
		{
			model = "UL_CNM";
			member = "MK 8";
		};

		//UL/HUL
		class 288th_MK2_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 2";
		};
		class 288th_MK3_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 3";
		};
		class 288th_MK4_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 4";
		};
		class 288th_MK5_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 5";
		};
		class 288th_MK6_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 6";
		};
		class 288th_MK7_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 7";
		};
		class 288th_MK8_UL_HUL
		{
			model = "UL_HUL";
			member = "MK 8";
		};

		//UA
		class 288th_MK2_UA
		{
			model = "UA";
			member = "MK 2";
		};
		class 288th_MK3_UA
		{
			model = "UA";
			member = "MK 3";
		};
		class 288th_MK4_UA
		{
			model = "UA";
			member = "MK 4";
		};
		class 288th_MK5_UA
		{
			model = "UA";
			member = "MK 5";
		};
		class 288th_MK6_UA
		{
			model = "UA";
			member = "MK 6";
		};
		class 288th_MK7_UA
		{
			model = "UA";
			member = "MK 7";
		};
		class 288th_MK8_UA
		{
			model = "UA";
			member = "MK 8";
		};

		//UA Spartan
		class 288th_MK2_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 2";
		};
		class 288th_MK3_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 3";
		};
		class 288th_MK4_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 4";
		};
		class 288th_MK5_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 5";
		};
		class 288th_MK6_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 6";
		};
		class 288th_MK7_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 7";
		};
		class 288th_MK8_UA_Spartan
		{
			model = "UA_Spartan";
			member = "MK 8";
		};

		//UAB
		class 288th_MK2_UAB
		{
			model = "UAB";
			member = "MK 2";
		};
		class 288th_MK3_UAB
		{
			model = "UAB";
			member = "MK 3";
		};
		class 288th_MK4_UAB
		{
			model = "UAB";
			member = "MK 4";
		};
		class 288th_MK5_UAB
		{
			model = "UAB";
			member = "MK 5";
		};
		class 288th_MK6_UAB
		{
			model = "UAB";
			member = "MK 6";
		};
		class 288th_MK7_UAB
		{
			model = "UAB";
			member = "MK 7";
		};
		class 288th_MK8_UAB
		{
			model = "UAB";
			member = "MK 8";
		};

		//UAB Spartan
		class 288th_MK2_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 2";
		};
		class 288th_MK3_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 3";
		};
		class 288th_MK4_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 4";
		};
		class 288th_MK5_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 5";
		};
		class 288th_MK6_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 6";
		};
		class 288th_MK7_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 7";
		};
		class 288th_MK8_UAB_Spartan
		{
			model = "UAB_Spartan";
			member = "MK 8";
		};

		//Visor
		class 288th_MK2_Visor
		{
			model = "Visor";
			member = "MK 2";
		};
		class 288th_MK3_Visor
		{
			model = "Visor";
			member = "MK 3";
		};
		class 288th_MK4_Visor
		{
			model = "Visor";
			member = "MK 4";
		};
		class 288th_MK5_Visor
		{
			model = "Visor";
			member = "MK 5";
		};
		class 288th_MK6_Visor
		{
			model = "Visor";
			member = "MK 6";
		};
		class 288th_MK7_Visor
		{
			model = "Visor";
			member = "MK 7";
		};
		class 288th_MK8_Visor
		{
			model = "Visor";
			member = "MK 8";
		};

		//Blank
		class 288th_MK2_NVG
		{
			model = "NVG_Blank";
			member = "MK 2";
		};
		class 288th_MK3_NVG
		{
			model = "NVG_Blank";
			member = "MK 3";
		};
		class 288th_MK4_NVG
		{
			model = "NVG_Blank";
			member = "MK 4";
		};
		class 288th_MK5_NVG
		{
			model = "NVG_Blank";
			member = "MK 5";
		};
		class 288th_MK6_NVG
		{
			model = "NVG_Blank";
			member = "MK 6";
		};
		class 288th_MK7_NVG
		{
			model = "NVG_Blank";
			member = "MK 7";
		};
		class 288th_MK8_NVG
		{
			model = "NVG_Blank";
			member = "MK 8";
		};

		//Customs
		class 288th_Whiskey_NVG
		{
			model = "Custom";
			member = "Whiskey";
		};
		class 288th_Kelkuza_NVG
		{
			model = "Custom";
			member = "Kelkuza";
		};
		class 288th_Glitch_NVG
		{
			model = "Custom";
			member = "Glitch";
		};
		class 288th_Johnson_NVG
		{
			model = "Custom";
			member = "Johnson";
		};
	};
};
