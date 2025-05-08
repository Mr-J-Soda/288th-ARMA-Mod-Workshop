////////////////////////////////////////////////////////////////////
//DeRap: Data\Backpacks\config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 16 04:43:05 2025 : 'file' last modified on Mon Apr 14 19:54:27 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 288th_Gear_backpacks
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {"288th_ILCS_Backpack","288th_RTO_pack_Black","288th_RTO_pack_Wood","288th_Invisible_Backpack","288th_Flightpack","288th_Flightpack_RTO","288th_gunbag","288th_Remote_M41_Bag","288th_Remote_M68_Bag","288th_Remote_M79_Bag","288th_Remote_AU_44_Bag","288th_Remote_M12_Bag","288th_Boat_Bag","288th_ICLS_Backpack_Red","288th_ICLS_Backpack_Orange","288th_ICLS_Backpack_Yellow","288th_ICLS_Backpack_Green","288th_ICLS_Backpack_Teal","288th_ICLS_Backpack_Blue","288th_ICLS_Backpack_Purple","288th_ICLS_Backpack_Pink","288th_ICLS_Backpack_White","288th_ICLS_Backpack_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};
class cfgVehicles
{
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ANPRC_521_Black;
	class OPTRE_ANPRC_515;
	class optre_UNSC_Rucksack_Heavy;
	class B_Soldier_base_F;
	class TCF_wnato_kitbag;
	class ace_gunbag;
	class TCF_RUCKSACK_UNSC_URB_RAD_F;
	class TCF_RUCKSACK_UNSC_CLS_RAD_F;
	class TCF_RUCKSACK_UNSC_DUN_RAD_F;
	class TCF_RUCKSACK_UNSC_TUN_RAD_F;
	class B_AssaultPack_blk;
	class NSM_neutral_XD_1_backpack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class NSM_neutral_XD_1_black_backpack: NSM_neutral_XD_1_backpack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class NSM_neutral_XD_1_LTU_backpack: NSM_neutral_XD_1_backpack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class NSM_neutral_XD_1_LTU_black_backpack: NSM_neutral_XD_1_LTU_backpack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 288th_ILCS_Backpack: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th] ILCS Backpack";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Basic_Backpack.paa","optre_weapons\items\data\biofoam_co.paa"};
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_RTO_pack: OPTRE_ANPRC_521_Black
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th] AN/PRC-521";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		hiddenSelections[] = {"camo","camo2","B_Medic","B_Addons"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\soft_backpack_co.paa","optre_unsc_units\army\data\commopack_Blk_co.paa"};
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_RTO_pack_1: OPTRE_ANPRC_515
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th] AN/PRC-515";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		hiddenSelections[] = {"camo","camo2","B_Medic","B_Addons"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\soft_backpack_co.paa","optre_unsc_units\army\data\commopack_Blk_co.paa"};
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_MedicRTO_pack: OPTRE_ANPRC_521_Black
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th] AN/PRC-521 - Medic";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		hiddenSelections[] = {"camo","camo2","B_Medic","B_Addons"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\soft_backpack_co.paa","288th_Gear\Data\Backpacks\ODST_Medic_RTOpack.paa"};
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_RTO_pack_Black: TCF_RUCKSACK_UNSC_URB_RAD_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th] Mil-Tech Radio (Black)";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_RTO_pack_Wood: TCF_RUCKSACK_UNSC_CLS_RAD_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th] Mil-Tech Radio (Woodland)";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_Invisible_Backpack: 288th_ILCS_Backpack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName = "[288th] Armor Upgrade (Storage)";
		model = "\A3\weapons_f\empty";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
	};
	class 288th_RTO_Invisible: 288th_RTO_pack
	{
		displayName = "[288th] Armor Upgrade (Radio)";
		model = "\A3\weapons_f\empty";
		maximumLoad = 500;
		mass = 30;
		tf_isolatedAmount = 0.65;
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class 288th_Zeus_pack: 288th_RTO_pack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] AN/PRC-521 (Zeus)";
		model = "\A3\weapons_f\empty";
		tf_range = 100000;
	};
	class 288th_Test_Jetpack: NSM_neutral_XD_1_backpack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		ace_arsenal_hide = 0;
		isbackpack = 1;
		displayName = "[288th] Test Jetpack";
		model = "\OPTRE_weapons\backpacks\jetpack.p3d";
		picture = "\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\288th_Gear\Data\Backpacks\jetpack_co.paa"};
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 50;
		NSM_jumppack_recharge = 50;
		NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,1,0,0,0}},{"Short Jump",{25,7,0,1,1,1}},{"Vertical Jump",{0,20,1,0,0,0}}};
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_Flightpack: 288th_Test_Jetpack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th] Flightpack";
		maximumLoad = 500;
		tf_hasLRradio = 0;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 300;
		NSM_jumppack_recharge = 1;
		NSM_jumppack_jump_types[] = {{"Short Jump",{25,7,20,0,1,1}},{"Vertical Jump",{0,20,20,0,0,0}}};
	};
	class 288th_Flightpack_RTO: 288th_Flightpack
	{
		displayName = "[288th] Flightpack RTO";
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
	};
	class 288th_Kitbag: TCF_wnato_kitbag
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th] Kitbag";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class 288th_gunbag: ace_gunbag
	{
		ace_gunbag = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th] Recon Gunbag";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\Recon_Gunbag.paa"};
		icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
		mass = 30;
		maximumLoad = 300;
		model = "\z\ace\addons\gunbag\data\ace_gunbag.p3d";
		picture = "\z\ace\addons\gunbag\ui\gunbag_ca.paa";
		scope = 2;
	};
	class 288th_Remote_M41_Bag: 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Remote M41 LAAG Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_M41";
			displayName = "Remote M41 LAAG";
			dissasembleTo[] = {};
		};
	};
	class 288th_Remote_M68_Bag: 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Remote M68 Gauss Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_M68";
			displayName = "Remote M68 Gauss";
			dissasembleTo[] = {};
		};
	};
	class 288th_Remote_M79_Bag: 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Remote M79 AA Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_M79";
			displayName = "Remote M79 AA";
			dissasembleTo[] = {};
		};
	};
	class 288th_Remote_AU_44_Bag: 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Remote AU-144 Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_AU_44";
			displayName = "Remote AU-144";
			dissasembleTo[] = {};
		};
	};
	class 288th_Remote_M12_Bag: 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Remote M12 MLMS Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_M12_MLMS";
			displayName = "Remote M12 MLMS";
			dissasembleTo[] = {};
		};
	};
	class 288th_Boat_Bag: optre_UNSC_Rucksack_Heavy
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th] Deployable Boat Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "B_Boat_Transport_01_F";
			displayName = "Rubber Boat";
			dissasembleTo[] = {};
		};
	};
	class OPTRE_S12_SOLA_Jetpack: OPTRE_ILCS_Rucksack_Black
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		picture = "\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		displayName = "S12 SOLA Jetpack";
		model = "\OPTRE_weapons\backpacks\jetpack.p3d";
		maximumLoad = 1;
		mass = 60;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"optre_weapons\backpacks\data\jetpack_co.paa"};
	};
	class OPTRE_S12_SOLA_Jetpack_On: OPTRE_S12_SOLA_Jetpack
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		model = "\OPTRE_weapons\backpacks\jetpack_on.p3d";
		hiddenSelections[] = {"camo1","camo"};
		hiddenSelectionsTextures[] = {"optre_vehicles\pelican\data\bolt_blue_ca.paa","optre_weapons\backpacks\data\jetpack_co.paa"};
	};
	class 288th_ICLS_Backpack_Red: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Red";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Red_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Orange: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Orange";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Orange_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Yellow: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Yellow";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Yellow_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Green: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Green";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Green_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Teal: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Teal";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Teal_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Blue: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Blue";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Blue_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Purple: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Purple";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Purple_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Pink: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Pink";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Pink_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_White: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - White";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_White_Backpack.paa"};
	};
	class 288th_ICLS_Backpack_Black: 288th_ILCS_Backpack
	{
		displayName = "[288th] ILCS Backpack - Black";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\ODST_Black_Backpack.paa"};
	};
};
