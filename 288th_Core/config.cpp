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
};
