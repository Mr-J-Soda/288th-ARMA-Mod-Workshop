class CfgPatches
{
	class 288th_Weapons_SRS99
	{
		author = "Festive Neira / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] =
		{

		};
		magazines[] =
		{

		};
		ammo[] =
		{

		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"288th_Core"
		};
	};
};

class CfgWeapons
{
	class OPTRE_SRS99D;

	// SRS99C Sniper Rifle W. Suppressor
	class 288th_SRS99C : OPTRE_SRS99D
	{
		canShootInWater = 1;
		dlc = "288thDJP_Aux";
		author = "Festive Neira / Misriah 288";
		model = "\OPTRE_Weapons\Sniper\SRS99C.p3d";
		displayName = "[288th] SRS99C-S2";
		descriptionshort = "14.5mm Handheld Anti-Materiel Precision Rifle";
		picture = "\OPTRE_weapons\sniper\icons\sniper2.paa";
		magazines[] = 
		{ 
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"TCF_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"TCF_4Rnd_145x114_Mag_HVAPT",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"TCF_4Rnd_145x114_Mag_HEDPT",
			"TCF_4Rnd_145x114_Mag_SS",
			"TCF_4Rnd_145x114_Mag_SST",
			"TCF_4Rnd_145x114_Mag_NARQ",
			"TCF_4Rnd_145x114_Mag_NARQT" 
		};
		magazineWell[] = { "288th_Sniper" };
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Sniper\data\anim\srs99c_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99C_Spartan_handpos.rtm"
		};
		reloadAction = "GestureReloadLRR";
		baseWeapon = "288th_SRS99C";
		hiddenSelections[] =
		{
			"camo",
			"magazine",
			"bipod_legs",
			"bipod_leg_l",
			"bipod_leg_r",
			"leg_l",
			"leg_r"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\Sniper\Data\MainBody_CO.paa",
			"OPTRE_Weapons\Sniper\Data\Bipod_CO.paa",
			"OPTRE_Weapons\Sniper\Data\Mag_CO.paa"
		};
	};
	class 288th_SRS99XT : OPTRE_SRS99D
	{
		displayName = "[288th] SRS99XT";
		scope = 0;
		scopeArsenal = 0;
		ace_arsenal_hide = 1;
		scopeCurator = 0;
		canShootInWater = 1;
		dexterity = 2.2;
		dispersion = 0;
		autoReload = true;
		magazineReloadTime = 2;
		magazines[] = 
		{ 
			"288th_SRS99XT_Mag" 
		};
		magazineWell[] = { "" };
	};

};