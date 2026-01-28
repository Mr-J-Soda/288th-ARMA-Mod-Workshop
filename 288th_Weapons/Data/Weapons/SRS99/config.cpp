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
	class srifle_EBR_F;
	class Mode_SemiAuto;

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
		magazines[] = { "288th_SRS99XT_Mag" };
		magazineWell[] = { "" };
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OPTRE_SniperRifle_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.35;
			dispersion = 0.00015;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_gm6";
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 800;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.25;
		};
	};
};