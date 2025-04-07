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
	class ItemInfo;
	class OPTRE_FC_Elite_Armor_Minor;
	class OPTRE_FC_Elite_Helmet_Minor;
	class OPTRE_FC_Elite_Armor_Major;
	class OPTRE_FC_Elite_Helmet_Major;
	class OPTRE_FC_Elite_Armor_Ultra;
	class 288th_Elite_Armor_Minor: OPTRE_FC_Elite_Armor_Minor
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Armor (Minor)";
		hiddenSelectionsTextures[] = 
		{
			"\288th_Gear\Data\Covies\Minor_Body_Armor_CO.paa",
			"\288th_Gear\Data\Covies\Minor_Legs_and_Arms_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class 288th_Elite_Helmet_Minor: OPTRE_FC_Elite_Helmet_Minor
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Helmet (Minor)";
		hiddenSelectionsTextures[] = 
		{
			"\288th_Gear\Data\Covies\Minor_Helmet_CO.paa"
		};
		subItems[] = {"288th_Mk5_NVG"};
		grad_slingHelmet_allow = true;
	};
	class 288th_Elite_Armor_Major: OPTRE_FC_Elite_Armor_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Armor (Major)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Major_Body_Armor_SpecOps_CO.paa",
			"\288th_Gear\Data\Covies\Major_Legs_and_Arms_SpecOps_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class 288th_Elite_Helmet_Major: OPTRE_FC_Elite_Helmet_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Helmet (Major)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Major_Helmet_SpecOps_CO.paa"
		};
		subItems[] = {"288th_Mk5_NVG"};
		grad_slingHelmet_allow = true;
	};
	class 288th_Elite_Armor_Officer: OPTRE_FC_Elite_Armor_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Armor (Officer)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Officer_Body_Armor_SpecOps_CO.paa",
			"\288th_Gear\Data\Covies\Officer_Legs_and_Arms_SpecOps_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class 288th_Elite_Helmet_Officer: OPTRE_FC_Elite_Helmet_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Helmet (Officer)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Officer_Helmet_SpecOps_CO.paa"
		};
		subItems[] = {"288th_Mk5_NVG"};
		grad_slingHelmet_allow = true;
	};
	class 288th_Elite_Armor_SpecOps: OPTRE_FC_Elite_Armor_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Armor (SpecOps)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\SpecOps_Body_Armor_SpecOps_CO.paa",
			"\288th_Gear\Data\Covies\SpecOps_Legs_and_Arms_SpecOps_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class 288th_Elite_Helmet_SpecOps: OPTRE_FC_Elite_Helmet_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Helmet (SpecOps)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\SpecOps_Helmet_SpecOps_CO.paa"
		};
		subItems[] = {"288th_Mk5_NVG"};
		grad_slingHelmet_allow = true;
	};
	class 288th_Elite_Armor_Ultra: OPTRE_FC_Elite_Armor_Ultra
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Armor (Ultra)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Ultra_Body_Armor_SpecOps_CO.paa",
			"\288th_Gear\Data\Covies\Ultra_Legs_and_Arms_SpecOps_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class 288th_Elite_Helmet_Ultra: OPTRE_FC_Elite_Helmet_Major
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		displayName="[288th] Sangheili Helmet (Ultra)";
		hiddenSelectionsTextures[]=
		{
			"\288th_Gear\Data\Covies\Ultra_Helmet_Camo_CO.paa"
		};
		subItems[] = {"288th_Mk5_NVG"};
		grad_slingHelmet_allow = true;
	};
};

class CfgVehicles
{
	class OPTRE_FC_Elite_Minor;
	class OPTRE_FC_Elite_Minor2;
	class OPTRE_FC_Elite_Minor3;
	class OPTRE_FC_Elite_MinorAA;
	class OPTRE_FC_Elite_MinorAT;
	class OPTRE_FC_Elite_Major;
	class OPTRE_FC_Elite_Officer;
	class OPTRE_FC_Elite_SpecOps;
	class OPTRE_FC_Elite_SpecOps2;
	class OPTRE_FC_Elite_SpecOps3;
	class OPTRE_FC_Elite_SpecOps4;
	class OPTRE_FC_Elite_Ultra;
	class OPTRE_FC_Elite_Ultra2;
	class OPTRE_FC_Elite_Ultra3;

	class 288th_Elite_Minor: OPTRE_FC_Elite_Minor
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Minor_T25_displayName";
		linkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_Minor2: OPTRE_FC_Elite_Minor2
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Minor_T51_displayName";
		linkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"};
		respawnMagazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"};
	};
	class 288th_Elite_Minor3: OPTRE_FC_Elite_Minor3
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		displayName = "$STR_OPTRE_FC_Units_Elite_Minor_T33_displayName";
		linkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_Needler","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_Needler","Throw","Put"};
		magazines[] = {"OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag"};
		respawnMagazines[] = {"OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag","OPTRE_FC_Needler_Mag"};
	};
	class 288th_Elite_MinorAA: OPTRE_FC_Elite_MinorAA
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Minor_AA_displayName";
		linkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put","OPTRE_FC_T33_FuelRod_Cannon_Guided"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put","OPTRE_FC_T33_FuelRod_Cannon_Guided"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T33_FuelRod_Pack_Guided","OPTRE_FC_T33_FuelRod_Pack_Guided"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T33_FuelRod_Pack_Guided","OPTRE_FC_T33_FuelRod_Pack_Guided"};
	};
	class 288th_Elite_MinorAT: OPTRE_FC_Elite_MinorAT
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Minor_AT_displayName";
		linkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Minor","288th_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put","OPTRE_FC_T33_FuelRod_Cannon"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put","OPTRE_FC_T33_FuelRod_Cannon"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T33_FuelRod_Pack","OPTRE_FC_T33_FuelRod_Pack"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T33_FuelRod_Pack","OPTRE_FC_T33_FuelRod_Pack"};
	};
	class 288th_Elite_Major: OPTRE_FC_Elite_Major
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Major_displayName";
		linkedItems[] = {"288th_Elite_Armor_Major","288th_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Major","288th_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_PlasmaGrenade","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_PlasmaGrenade","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_Officer: OPTRE_FC_Elite_Officer
	{
		scope = 2;
		scopeCurator = 2;
		faceType = "Elite";
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Officer_displayName";
		linkedItems[] = {"288th_Elite_Armor_Officer","288th_Elite_Helmet_Officer","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Officer","288th_Elite_Helmet_Officer","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_SpecOps: OPTRE_FC_Elite_SpecOps
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_SO_T50_displayName";
		linkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"};
		magazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_SpecOps2: OPTRE_FC_Elite_SpecOps2
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_SO_T51_displayName";
		linkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_SpecOps3: OPTRE_FC_Elite_SpecOps3
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_SO_G_displayName";
		linkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T50_ConcussionRifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T50_ConcussionRifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_SpecOps4: OPTRE_FC_Elite_SpecOps4
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_SO_T60_displayName";
		linkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_SpecOps","288th_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T60_PulseCarbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T60_PulseCarbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_Ultra: OPTRE_FC_Elite_Ultra
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Ultra_T51_displayName";
		linkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_Ultra2: OPTRE_FC_Elite_Ultra2
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Ultra_G_displayName";
		linkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T50_ConcussionRifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T50_ConcussionRifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_T50_6rnd_mag","OPTRE_FC_PlasmaGrenade"};
	};
	class 288th_Elite_Ultra3: OPTRE_FC_Elite_Ultra3
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soda / Misriah 288";
		faction = "288th_UNSC";
		displayName = "$STR_OPTRE_FC_Units_Elite_Ultra_T60_displayName";
		linkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"288th_Elite_Armor_Ultra","288th_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"OPTRE_FC_T60_PulseCarbine","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T60_PulseCarbine","Throw","Put"};
		magazines[] = {"OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_T60_Pulse_Carbine_Battery","OPTRE_FC_PlasmaGrenade"};
	};
};