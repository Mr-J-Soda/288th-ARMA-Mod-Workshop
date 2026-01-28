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
	class OPTRE_UNSC_Rucksack;
	class ace_gunbag;
	class TCF_RUCKSACK_UNSC_URB_RAD_F;
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

	class MA_Backpack_Base;
	class 288th_Rucksack_Radio: MA_Backpack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] AN-PRC-497";
		model = "MA_Armor\data\Backpacks\Marine_Rucksack\Marine_Rucksack.p3d";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad = 500;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\Marine_Rucksack\ANPRC_497\Attachments_co.paa","MA_Armor\data\Backpacks\Marine_Rucksack\ANPRC_497\Radio_Box_co.paa","MA_Armor\data\Backpacks\Marine_Rucksack\ANPRC_497\Main_Shell_co.paa","MA_Armor\data\Backpacks\Marine_Rucksack\ANPRC_497\Side_Box_co.paa","MA_Armor\data\Backpacks\Marine_Rucksack\Marine_Rucksack_CO.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio = 1;
	};
	class 288th_M52D_Rucksack: MA_Backpack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack";
		model = "MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
		picture = "\MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad = 500;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Red: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Red)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_RD.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Orange: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Orange)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_OR.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Yellow: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Yellow)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_YW.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Green: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_GN.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Blue: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Blue)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_BL.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Purple: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Purple)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_PR.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Pink: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Pink)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_PK.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_Teal: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (Teal)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_TL.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};
	class 288th_M52D_Rucksack_White: 288th_M52D_Rucksack
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M52D Rucksack (White)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\ODST\Brimstone_MA\Backpack\Backpack_CO_WT.paa","MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"};
	};

	//IKEA Shark
	class B_Kitbag_Base;
	class 288th_Blahaj: B_Kitbag_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "288th_Gear\Data\Backpacks\IKEA\backpack_blahaj.p3d";
		displayName = "[288th] Blahaj";
		picture = "288th_Gear\Data\Backpacks\IKEA\blahaj_ico.paa";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\IKEA\blahaj_co.paa"};
		maximumLoad = 500;
		mass = 30;
		autocenter = 0; 
	};
	class 288th_Blahaj_Pirate: 288th_Blahaj
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "288th_Gear\Data\Backpacks\IKEA\backpack_blahaj.p3d";
		displayName = "[288th] Blahaj (Pirate)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\IKEA\Blahaj_Pirate_co.paa"};
	};
	class 288th_Blahaj_Green: 288th_Blahaj
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "288th_Gear\Data\Backpacks\IKEA\backpack_blahaj.p3d";
		displayName = "[288th] Blahaj (Green)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\IKEA\Blahaj_Green_co.paa"};
	};
	class 288th_Blahaj_Lava: 288th_Blahaj
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "288th_Gear\Data\Backpacks\IKEA\backpack_blahaj.p3d";
		displayName = "[288th] Blahaj (Lava)";
		hiddenSelectionsTextures[] = {"288th_Gear\Data\Backpacks\IKEA\Blahaj_Lava_co.paa"};
	};

	class 288th_Invisible_Backpack: 288th_M52D_Rucksack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Armor Upgrade (Storage)";
		model = "\A3\weapons_f\empty";
		allowedSlots[] = {901};
		maximumLoad = 500;
		mass = 30;
	};
	class 288th_RTO_Invisible: 288th_RTO_pack_1
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
	class 288th_Zeus_pack: 288th_RTO_pack_1
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
		NSM_jumppack_jump_types[] = {{"Short Jump",{25,7,0,1,1,1}},{"Forward Jump",{12,20,1,0,0,0}},{"Vertical Jump",{0,20,1,0,0,0}}};
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
	class 288th_Kitbag: OPTRE_UNSC_Rucksack
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
	class 288th_Kitbag_AT: 288th_Kitbag
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		ace_arsenal_hide = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		hiddenSelections[] = {"camo","camo2","B_Medic","B_Radio"};
		class TransportItems
		{
			class _xx_288th_M41_Twin_HEAT_SACLOS
			{
				name = "288th_M41_Twin_HEAT_SACLOS";
				count = 1;
			};
			class _xx_288th_M41_Twin_HE
			{
				name = "288th_M41_Twin_HE";
				count = 1;
			};
			class _xx_288th_M41_Twin_HEAT_Thermal
			{
				name = "288th_M41_Twin_HEAT_Thermal";
				count = 1;
			};
		};
	};
	class 288th_Kitbag_M247Z: 288th_Kitbag
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		ace_arsenal_hide = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		hiddenSelections[] = {"camo","camo2","B_Medic","B_Radio"};
		class TransportItems
		{
			class _xx_288th_65x85_M247Z
			{
				name = "288th_65x85_M247Z";
				count = 2;
			};
		};
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
	class 288th_Remote_M41_Bag: 288th_M52D_Rucksack
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
	class 288th_Remote_M68_Bag: 288th_M52D_Rucksack
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
	class 288th_Remote_M79_Bag: 288th_M52D_Rucksack
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
	class 288th_Remote_AU_44_Bag: 288th_M52D_Rucksack
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
	class 288th_Remote_M12_Bag: 288th_M52D_Rucksack
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
};
class XtdGearModels
{
	class CfgVehicles
	{
		class M52D_Backpack
		{
			label = "M52D";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				label = "M52D";
				values[] = {"Basic","Red","Orange","Yellow","Green","Teal","Blue","Purple","Pink","White","Invisible"};
			};
		};
		class Blahaj
		{
			label = "Blahaj";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				label = "Blahaj";
				values[] = {"Basic","Pirate","Green","Lava"};
			};
		};
		class Misc
		{
			label = "Misc";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				label = "Misc";
				values[] = {"LAAG","Gauss","AA","Mortar","MLSM","Boat"};
			};
		};
		class Radio
		{
			label = "Radio";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				label = "Radio";
				values[] = {"497","515","Mil-Tech","Zeus","Invisible"};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgVehicles
	{
		//M52D
		class 288th_M52D_Rucksack
		{
			model = "M52D_Backpack";
			camo = "Basic";
		};
		class 288th_M52D_Rucksack_Red
		{
			model = "M52D_Backpack";
			camo = "Red";
		};
		class 288th_M52D_Rucksack_Orange
		{
			model = "M52D_Backpack";
			camo = "Orange";
		};
		class 288th_M52D_Rucksack_Yellow
		{
			model = "M52D_Backpack";
			camo = "Yellow";
		};
		class 288th_M52D_Rucksack_Green
		{
			model = "M52D_Backpack";
			camo = "Green";
		};
		class 288th_M52D_Rucksack_Blue
		{
			model = "M52D_Backpack";
			camo = "Blue";
		};
		class 288th_M52D_Rucksack_Purple
		{
			model = "M52D_Backpack";
			camo = "Purple";
		};
		class 288th_M52D_Rucksack_Pink
		{
			model = "M52D_Backpack";
			camo = "Pink";
		};
		class 288th_M52D_Rucksack_Teal
		{
			model = "M52D_Backpack";
			camo = "Teal";
		};
		class 288th_M52D_Rucksack_White
		{
			model = "M52D_Backpack";
			camo = "White";
		};
		class 288th_Invisible_Backpack
		{
			model = "M52D_Backpack";
			camo = "Invisible";
		};
		//Blahaj
		class 288th_Blahaj
		{
			model = "Blahaj";
			camo = "Basic";
		};
		class 288th_Blahaj_Pirate
		{
			model = "Blahaj";
			camo = "Pirate";
		};
		class 288th_Blahaj_Green
		{
			model = "Blahaj";
			camo = "Green";
		};
		class 288th_Blahaj_Lava
		{
			model = "Blahaj";
			camo = "Lava";
		};
		//Deployables
		class 288th_Remote_M41_Bag
		{
			model = "Misc";
			camo = "LAAG";
		};
		class 288th_Remote_M68_Bag
		{
			model = "Misc";
			camo = "Gauss";
		};
		class 288th_Remote_M79_Bag
		{
			model = "Misc";
			camo = "AA";
		};
		class 288th_Remote_AU_44_Bag
		{
			model = "Misc";
			camo = "Mortar";
		};
		class 288th_Remote_M12_Bag
		{
			model = "Misc";
			camo = "MLMS";
		};
		class 288th_Boat_Bag
		{
			model = "Misc";
			camo = "Boat";
		};
		//Radios
		class 288th_RTO_Invisible
		{
			model = "Radio";
			camo = "Invisible";
		};
		class 288th_Zeus_pack
		{
			model = "Radio";
			camo = "Zeus";
		};
		class 288th_RTO_pack_1
		{
			model = "Radio";
			camo = "515";
		};
		class 288th_Rucksack_Radio
		{
			model = "Radio";
			camo = "497";
		};
		class 288th_RTO_pack_Black
		{
			model = "Radio";
			camo = "Mil-Tech";
		};
	};
};
