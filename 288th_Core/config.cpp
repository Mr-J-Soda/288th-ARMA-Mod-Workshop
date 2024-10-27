class CfgPatches
{
	class 288th_Core
	{
		author = "Soda / Misriah 288";
		name = "288th_DJP_Aux";
		url = "https://discord.gg/BQjMahV5MY";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Vehicles","OPTRE_UNSC_Units","OPTRE_Weapons","OPTRE_Weapons_Ammo","OPTRE_Weapons_Rockets","OPTRE_MJOLNIR","OPTRE_MJOLNIR_data_anims","OPTRE_Ins_Units","A3_Characters_F","A3_Characters_F_Common","A3_Characters_F_Heads","A3_Weapons_F","A3_Data_F","A3_Data_F_Mark","V_FZ_Armor","OPTRE_ACE_Compat","OPTRE_FC_ACE_Compat","TCF_BLUFOR","TCF_Civillians","TCF_END","TCF_EQUIPMENT","TCF_INDFOR","TCF_Main","TCF_MISC","TCF_MUNITIONS","TCF_OBJECTS","TCF_OPFOR","TCF_VEHICLES","ace_common","ace_interact_menu","ace_explosives","ace_medical","ace_medical_engine","ace_medical_treatment"};
	};
};
	//PHAN_UNSC_GV_list_insert[] = {"288th_Hornet"}; Was an attemp to add 288th vehicles to the sci-fi+ drop script, didn't work, keeping here until figure out why
	
class CfgFunctions
{
	class 288th_DJP
	{
		tag = "288";
		class ACE_Compat
		{
			file = "288th_Core\Functions";
			class 288thBiofoam
			{
				file = "288th_Core\Functions\fn_288thBiofoam.sqf";
			};
			class 288thEMK
			{
				file = "288th_Core\Functions\fn_288thEMK.sqf";
			};
			class throwMultiSmoke
			{
				file = "288th_Core\Functions\fn_throwMultiSmoke.sqf";
			};
		};
	};
	class 288th_DJP_Air
	{
		tag = "Air";
		class PelicanMagLiftSystem
		{
			file = "288th_Core\Functions";
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
		};
	};
	class PLP
	{
		class Arsenal
		{
			class ArsenalSearch
			{
				file = "288th_Core\Functions\fn_ArsenalSearch.sqf";
				postInit = 1;
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue = "";
	};
};
class Extended_PostInit_EventHandlers
{
	HIG_droneAlt_Post_Init = "HIG_droneAlt_Post_Init_Var = [] execVM ""\288th_Core\Functions\init.sqf""";
	RS_Init = "RS_Init_Var = [] execVM ""\288th_Core\Functions\RemoveStamina.sqf""";
	class ace_advanced_fatigue
	{
		init = "";
	};
};
class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0;
		horizontalRadius = 0;
	};
	class Secondary
	{
		verticalRadius = 0;
		horizontalRadius = 0;
	};
};
class CfgMarkerColors
{
	class Default
	{
		scope = 1;
	};
	class atlas_ColorCyan: Default
	{
		name = "Cyan";
		color[] = {0,1,1,1};
		scope = 2;
	};
	class atlas_ColorGrey: Default
	{
		name = "Grey";
		color[] = {0.518,0.537,0.549,1};
		scope = 2;
	};
	class atlas_ColorGold: Default
	{
		name = "Gold";
		color[] = {1,0.843,0,1};
		scope = 2;
	};
	class atlas_ColorMagenta: Default
	{
		name = "Magenta";
		color[] = {1,0,1,1};
		scope = 2;
	};
	class atlas_ColorNavy: Default
	{
		name = "Navy";
		color[] = {0,0,0.502,1};
		scope = 2;
	};
	class atlas_ColorOlive: Default
	{
		name = "Olive";
		color[] = {0.502,0.502,0,1};
		scope = 2;
	};
	class atlas_ColorBrown: Default
	{
		name = "Brown";
		color[] = {0.5,0.25,0,1};
		scope = 2;
	};
	class atlas_ColorOrange: Default
	{
		name = "Orange";
		color[] = {1,0.647,0,1};
		scope = 2;
	};
	class atlas_ColorPink: Default
	{
		name = "Pink";
		color[] = {1,0.753,0.796,1};
		scope = 2;
	};
	class atlas_ColorTeal: Default
	{
		name = "Teal";
		color[] = {0,0.502,0.502,1};
		scope = 2;
	};
	class atlas_ColorMonument: Default
	{
		name = "Monument";
		color[] = {0.3,0.3,0.3,1};
		scope = 2;
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class TransAnimBase;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			speed = 2;
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			speed = 3;
		};
	};
};