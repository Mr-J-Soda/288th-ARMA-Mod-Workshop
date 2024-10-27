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

class cfgVehicles
{

	class Weapon_Bag_Base;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ANPRC_521_Black;
	class B_Soldier_base_F;
	class SC_MercerJumppack_Black;
	class SC_Jumppack_RO_Black;
	class TCF_wnato_kitbag;
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

	class 288th_ILCS_Backpack : Weapon_Bag_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName = "[288th DJP] ILCS Backpack";
		model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
		allowedSlots[] = {901};
		maximumLoad = 600;
		mass = 30;
		hiddenSelections[] =
		{
			"camo1",
			"AP_Heavy"
		};
		hiddenSelectionsTextures[] =
		{
			"288th_Gear\Data\Backpacks\ODST_Basic_Backpack.paa"
		};
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 288th_RTO_pack : OPTRE_ANPRC_521_Black
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th DJP] AN/PRC-521";
		allowedSlots[] = {901};
		maximumLoad = 600;
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
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"optre_unsc_units\army\data\commopack_Blk_co.paa"
		};
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 288th_MedicRTO_pack : OPTRE_ANPRC_521_Black
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th DJP] AN/PRC-521 - Medic";
		allowedSlots[] = {901};
		maximumLoad = 600;
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
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"288th_Gear\Data\Backpacks\ODST_Medic_RTOpack.paa"
		};
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 288th_RTO_pack_Black : TCF_RUCKSACK_UNSC_URB_RAD_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th DJP] Mil-Tech Radio (Black)";
		allowedSlots[] = { 901 };
		maximumLoad = 600;
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
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 288th_RTO_pack_Wood : TCF_RUCKSACK_UNSC_CLS_RAD_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th DJP] Mil-Tech Radio (Woodland)";
		allowedSlots[] = { 901 };
		maximumLoad = 600;
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
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};

	class 288th_Zeus_pack : 288th_RTO_pack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] AN/PRC-521 (Zeus)";
		model = "\A3\weapons_f\empty";
		tf_range = 100000;
	};

	class 288th_Jumppack_S10_SOLA : SC_Jumppack_RO_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th DJP] S10 SOLA Jumppack";
		allowedSlots[] = {901};
		maximumLoad = 600;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,0.1},{0.22,-0.25,0.1} };
	};
	class 288th_Jumppack_S10_SOLA_RTO : SC_Jumppack_RO_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th DJP] S10 SOLA RTO Jumppack";
		allowedSlots[] = {901};
		maximumLoad = 600;
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
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,0.1},{0.22,-0.25,0.1} };
	};
	class 288th_Jumppack_S12_SOLA : SC_Jumppack_RO_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		isbackpack = 1;
		displayName = "[288th DJP] S12 SOLA Jumppack";
		model = "\OPTRE_weapons\backpacks\jetpack.p3d";
		picture = "\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\288th_Gear\Data\Backpacks\jetpack_co.paa" };
		allowedSlots[] = {901};
		maximumLoad = 600;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,0.1},{0.22,-0.25,0.1} };
	};
	class 288th_Jumppack_S12_SOLA_RTO : 288th_Jumppack_S12_SOLA
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] S12 SOLA RTO Jumppack";
		tf_isolatedAmount = 0.65;
		tf_range = 40000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class 288th_Test_Jetpack : NSM_neutral_XD_1_backpack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		ace_arsenal_hide = 0;
		isbackpack = 1;
		displayName = "[288th DJP] Test Jetpack";
		model = "\OPTRE_weapons\backpacks\jetpack.p3d";
		picture = "\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\288th_Gear\Data\Backpacks\jetpack_co.paa" };
		allowedSlots[] = {901};
		maximumLoad = 600;
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
		NSM_jumppack_jump_types[] = 
		{
            {
                "Forward Jump",// Name of jump
                {
                    12,		//forward velo  [meters/second] (0)
                    20,		//verticle velo [meters/second] (1)
                    1,		//cost          [no units]      (2)
                    0,		//angle         [degrees]       (3)
                    0,		//directional   [bool, 0 = false, 1 = true] (4)
                    0		//can prone jump [bool, 0 = false, 1 = true] (5)
                }
            },
            {"Short Jump",{25,7,0,1,1,1}},
			{"Vertical Jump",{0,20,1,0,0,0}},
        };
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"}; // Not used
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 288th_Flightpack : 288th_Test_Jetpack
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th DJP] Flightpack";
		maximumLoad = 600;
		tf_hasLRradio = 0;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 300; 
        NSM_jumppack_recharge = 1;
		NSM_jumppack_jump_types[] = 
		{
			{"Short Jump",{25,7,20,0,1,1}}
            {
                "Vertical Jump",// Name of jump
                {
                    0,		//forward velo  [meters/second] (0)
                    20,		//verticle velo [meters/second] (1)
                    20,		//cost          [no units]      (2)
                    0,		//angle         [degrees]       (3)
                    0,		//directional   [bool, 0 = false, 1 = true] (4)
                    0		//can prone jump [bool, 0 = false, 1 = true] (5)
                }
            },
        };
	};
	class 288th_Flightpack_RTO : 288th_Flightpack
	{
		displayName = "[288th DJP] Flightpack RTO";
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

	class 288th_Kitbag : TCF_wnato_kitbag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		displayName = "[288th DJP] Kitbag";
		allowedSlots[] = { 901 };
		maximumLoad = 600;
		mass = 30;
		transportMaxWeapons = 20;
		transportMaxMagazines = 200;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};

	/*class 288th_MQ_49_AD : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] MQ-94 Assault Drone Backpack";
		mass = 10;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_MQ_94";
			displayName = "MQ-94 Assault Drone";
			dissasembleTo[] = {};
		};
	};*/
	class 288th_Remote_M41_Bag : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Remote M41 LAAG Backpack";
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
	class 288th_Remote_M68_Bag : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Remote M68 Gauss Backpack";
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
	class 288th_Remote_M79_Bag : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Remote M79 AA Backpack";
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
	class 288th_Remote_AU_44_Bag : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Remote AU-44 Backpack";
		mass = 100;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_Remote_AU_44";
			displayName = "Remote AU-44";
			dissasembleTo[] = {};
		};
	};
	class 288th_SupplyPod_Bag : 288th_ILCS_Backpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[288th DJP] Deployable Supply Pod";
		mass = 500;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "288th_SupplyPod";
			displayName = "Supply Pod";
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
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,0.1},{0.22,-0.25,0.1} };
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
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,0.1},{0.22,-0.25,0.1} };
		model = "\OPTRE_weapons\backpacks\jetpack_on.p3d";
		hiddenSelections[] = {"camo1","camo"};
		hiddenSelectionsTextures[] = {"optre_vehicles\pelican\data\bolt_blue_ca.paa","optre_weapons\backpacks\data\jetpack_co.paa"};
	};

	#define CREATEBACK(DESIGNATION) \
	class 288th_ICLS_Backpack_##DESIGNATION : 288th_ILCS_Backpack \
	{ \
		displayName = [288th DJP] ILCS Backpack - DESIGNATION; \
		hiddenSelectionsTextures[] = \
		{ \
			288th_Gear\Data\Backpacks\ODST_##DESIGNATION##_Backpack.paa, \
		}; \
	};

	CREATEBACK(Red);
	CREATEBACK(Orange);
	CREATEBACK(Yellow);
	CREATEBACK(Green);
	CREATEBACK(Teal);
	CREATEBACK(Blue);
	CREATEBACK(Purple);
	CREATEBACK(Pink);
	CREATEBACK(White);
	CREATEBACK(Black);
};