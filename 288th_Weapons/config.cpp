class CfgPatches
{
	class 288th_Weapons
	{
		author = "Soda / Misriah 288";
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
class cfgCloudlets
{
    class Default;
    class SmokeShellWhite : Default
    {
        moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
        size[]={0.36,3.5,12};//{0.1,2,6}
        MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
    };
	class ExploAmmoSmoke;
	class 288th_flametrail: ExploAmmoSmoke
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\cl_exp";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 7;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.5;
		volume = 0.025;
		rubbing = 0.1;
		size[] = {0.35,0.5,0.75};
		sizeCoef = 1;
		color[] = {{1,1,1,0.35},{1,1,1,0.2},{1,1,1,0.05}};
		colorCoef[] = {1.2,1.2,1.2,1.2};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.25;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.8;
		positionVar[] = {0,0,0};
		rotationVelocityVar = 0.1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		damageType = "Fire";
		coreIntensity = 1.25;
		coreDistance = 1;
		damageTime = 3;
	};
	class 288th_flameExplosion: 288th_flametrail
	{
		interval = "0.0075 * fireInterval + 0.0075";
		circleRadius = 1;
		circleVelocity[] = {0,0,0};
		particleShape = "\a3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 15;
		lifeTime = 90;
		moveVelocity[] = {0,0.025,0};
		rotationVelocity = 0;
		weight = 0.075;
		volume = 0.05;
		rubbing = 0.05;
		size[] = {"0.018 * intensity + 1.2","0.018 * intensity + 3","0.018 * intensity + 5","0.018 * intensity + 7.5"};
		color[] = {{1,1,1,0.6},{1,1,1,0.4},{1,1,1,0.22},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {1.7,0.6,0.4,0.3,0.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		lifeTimeVar = 1.7;
		positionVar[] = {"1 + 1.1 * intensity",0.3,"1 + 1.1 * intensity"};
		moveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class CfgWeaponCursors
{
	class throw;
	class test: throw
	{
		texture = "288th_Weapons\Data\UI\ak181_reticle2";
	};
};
class 288th_flametrail
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
	};
	class KA_flame_Light
	{
		simulation = "light";
		type = "SmallFireLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class 288th_flametrail
	{
		simulation = "particles";
		type = "288th_flametrail";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
	};
};
class 288th_flameExplosion
{
	class 288th_flame_Light
	{
		simulation = "light";
		type = "FiredLightMed";
		position = "destructionEffect1";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class 288th_flame_sound
	{
		simulation = "sound";
		type = "Fire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class 288th_flameExplosion
	{
		simulation = "particles";
		type = "288th_flameExplosion";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
};

class CfgMagazineWells
{
	class 288th_Standard
	{
		CfgMagazines[] =
		{
			"288th_30Rnd_65x85_Mag",
			"288th_Plasma_Red_Mag",
			"288th_Plasma_Orange_Mag",
			"288th_Plasma_Yellow_Mag",
			"288th_Plasma_Green_Mag",
			"288th_Plasma_Blue_Mag",
			"288th_Plasma_Purple_Mag",
			"288th_Plasma_Pink_Mag",
			"288th_Plasma_White_Mag",
			"288th_Plasma_Black_Mag",
			"288th_Plasma_Rainbow_Mag",
			"288th_EHP_Mag",
			"288th_Silver_Mag",
			"288th_EMP"
			//"288th_Incendiary_Mag"
		};
	};
	class 288th_GL
	{
		CfgMagazines[] =
		{
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"WNZ_EMP40mm_3GL_Grenade_Magazine",
			"288th_GL_Mag"
		};
	};
	class 288th_Gauss
	{
		CfgMagazines[] =
		{
			"288th_7Rnd_Gauss_Slug_Mag"
		};
	};
	class 288th_shotgun
	{
		CfgMagazines[] =
		{
			"288th_Slug",
			"288th_Buckshot",
			"288th_Slug_HEDP",
			"288th_HEDP_Buckshot",
			"288th_Incendiary_Buckshot",
			"288th_Slug_Incendiary",
			"288th_Flechette_Buckshot",
			"288th_Slug_Flechette",
			"288th_Slug_EMP",
			"288th_Slug_Taser",
			"288th_Slug_SS",
			"288th_Slug_Smoke",
			"288th_Slug_KO"
		};
	};
	class 288th_M45TAC
	{
		CfgMagazines[] =
		{
			"288th_Loose_Normal_Buckshot",
			"288th_Loose_Buckshot",
			"288th_Loose_Slugs",
			"288th_Loose_HEDP_Buckshot",
			"288th_Loose_Slugs_HEDP",
			"288th_Loose_Incendiary_Buckshot",
			"288th_Loose_Slugs_Incendiary",
			"288th_Loose_flechette_Buckshot",
			"288th_Loose_Slugs_flechette",
			"288th_Loose_Slugs_EMP",
			"288th_Loose_Slugs_Taser",
			"288th_Loose_Slugs_SS",
			"288th_Loose_Slugs_KO",
			"288th_Loose_Slug_Smoke"
		};
	};
	class 288th_Shotgun_Pump
	{
		CfgMagazines[] =
		{
			"288th_Loose_Normal_Buckshot",
			"288th_Loose_Slugs",
			"288th_Loose_HEDP_Buckshot",
			"288th_Loose_Slugs_HEDP",
			"288th_Loose_Incendiary_Buckshot",
			"288th_Loose_Slugs_Incendiary",
			"288th_Loose_flechette_Buckshot",
			"288th_Loose_Slugs_flechette",
			"288th_Loose_Slugs_EMP",
			"288th_Loose_Slugs_Taser",
			"288th_Loose_Slugs_SS",
			"288th_Loose_Slugs_KO",
			"288th_Loose_Slug_Smoke"
		};
	};
	class 288th_M73X
	{
		CfgMagazines[] =
		{
			"288th_500Rnd_65x85_Box",
			"288th_500Rnd_65x85_Box_Normal",
			"288th_500Rnd_65x85_Box_EHP",
			"288th_500Rnd_65x85_Box_EHP_Normal"
		};
	};
	class 288th_M99
	{
		CfgMagazines[] = 
		{
			"288th_200Rnd_308",
			"288th_200Rnd_308_Tracer",
			"288th_200Rnd_308_AP",
			"288th_200Rnd_308_APT",
			"288th_200Rnd_308_SLAP",
			"288th_200Rnd_308_SLAPT",
			"288th_200Rnd_308_FMJ",
			"288th_200Rnd_308_FMJT",
			"288th_200Rnd_308_HV",
			"288th_200Rnd_308_HVT",
			"288th_200Rnd_308_HVAP",
			"288th_200Rnd_308_HVAPT",
			"288th_200Rnd_308_HPSAP",
			"288th_200Rnd_308_HPSAPT",
			"288th_200Rnd_308_EHP",
			"288th_200Rnd_308_EHPT",
			"288th_200Rnd_308_SAPHE",
			"288th_200Rnd_308_SAPHET",
			"288th_200Rnd_308_HE",
			"288th_200Rnd_308_HET",
			"288th_200Rnd_308_SS",
			"288th_200Rnd_308_SST",
			"288th_200Rnd_308_UW",
			"288th_200Rnd_308_UWT",
			"288th_200Rnd_308_S",
			"288th_200Rnd_308_ST"
		};
	};
	class 288th_M50
	{
		CfgMagazines[] =
		{
			"288th_75Rnd_15x50",
			"288th_75Rnd_15x50_Tracer",
			"288th_75Rnd_15x50_HVAP",
			"288th_75Rnd_15x50_HVAPT",
			"288th_75Rnd_15x50_HEDP",
			"288th_75Rnd_15x50_HEDPT",
			"288th_75Rnd_15x50_AP",
			"288th_75Rnd_15x50_APT",
			"288th_75Rnd_15x50_HE",
			"288th_75Rnd_15x50_HET",
			"288th_75Rnd_15x50_SS",
			"288th_75Rnd_15x50_SST",
			"288th_75Rnd_15x50_SLAP",
			"288th_75Rnd_15x50_SLAPT",
			"288th_150Rnd_15x50",
			"288th_150Rnd_15x50_Tracer",
			"288th_150Rnd_15x50_HVAP",
			"288th_150Rnd_15x50_HVAPT",
			"288th_150Rnd_15x50_HEDP",
			"288th_150Rnd_15x50_HEDPT",
			"288th_150Rnd_15x50_AP",
			"288th_150Rnd_15x50_APT",
			"288th_150Rnd_15x50_HE",
			"288th_150Rnd_15x50_HET",
			"288th_150Rnd_15x50_SS",
			"288th_150Rnd_15x50_SST",
			"288th_150Rnd_15x50_SLAP",
			"288th_150Rnd_15x50_SLAPT"
		};
	};
	class 288th_MG338
	{
		CfgMagazines[] =
		{
			"288th_120Rnd_86x70_Box",
			"288th_120Rnd_86x70_Box_Tracer",
			"288th_120Rnd_86x70_AP_Box",
			"288th_120Rnd_86x70_APT_Box",
			"288th_120Rnd_86x70_SLAP_Box",
			"288th_120Rnd_86x70_SLAPT_Box",
			"288th_120Rnd_86x70_EHP_Box",
			"288th_120Rnd_86x70_EHPT_Box",
			"288th_120Rnd_86x70_SS_Box",
			"288th_120Rnd_86x70_SST_Box"
		};
	};
	class 288th_AutoGL
	{
		CfgMagazines[] =
		{
			"288th_50Rnd_20mm_HE",
			"288th_50Rnd_20mm_HEDP",
			"288th_50Rnd_20mm_HEDPC",
			"288th_50Rnd_20mm_HEAT",
			"288th_50Rnd_20mm_SMK_W",
			"288th_50Rnd_20mm_SMK_R",
			"288th_50Rnd_20mm_SMK_O",
			"288th_50Rnd_20mm_SMK_Y",
			"288th_50Rnd_20mm_SMK_G",
			"288th_50Rnd_20mm_SMK_B",
			"288th_50Rnd_20mm_SMK_P"
		};
	};
	class 288th_Sniper
	{
		CfgMagazines[] = 
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
	};
	class 288th_M12H
	{
		CfgMagazines[] =
		{
			"288th_65Rnd_127x30",
			"288th_65Rnd_127x30_Tracer",
			"288th_65Rnd_127x30_AP",
			"288th_65Rnd_127x30_APT",
			"288th_65Rnd_127x30_SLAP",
			"288th_65Rnd_127x30_SLAP",
			"288th_65Rnd_127x30_FMJ",
			"288th_65Rnd_127x30_FMJT",
			"288th_65Rnd_127x30_HV",
			"288th_65Rnd_127x30_HVT",
			"288th_65Rnd_127x30_HVAP",
			"288th_65Rnd_127x30_HVAPT",
			"288th_65Rnd_127x30_HPSAP",
			"288th_65Rnd_127x30_HPSAPT",
			"288th_65Rnd_127x30_EHP",
			"288th_65Rnd_127x30_EHPT",
			"288th_65Rnd_127x30_SAPHE",
			"288th_65Rnd_127x30_SAPHET",
			"288th_65Rnd_127x30_HE",
			"288th_65Rnd_127x30_HET",
			"288th_65Rnd_127x30_SS",
			"288th_65Rnd_127x30_SST",
			"288th_65Rnd_127x30_UW",
			"288th_65Rnd_127x30_UWT",
			"288th_65Rnd_127x30_S",
			"288th_65Rnd_127x30_ST"
		};
	};
	class 288th_M247Z
	{
		CfgMagazines[] =
		{
			"288th_65x85_M247Z",
			"288th_65x85_M247Z_HE"
		};
	};
	class 288th_MA5B_308
	{
		CfgMagazines[] =
		{
			"288th_60Rnd_308_Mag",
			"288th_60Rnd_308_Tazer_Mag"
		};
	};
	class 288th_Microgrenades
	{
		CfgMagazines[] =
		{
			"288th_10rnd_Microgrenade",
			"288th_10Rnd_White_Smoke_Microgrenade",
			"288th_10Rnd_Red_Smoke_Microgrenade",
			"288th_10Rnd_Orange_Smoke_Microgrenade",
			"288th_10Rnd_Yellow_Smoke_Microgrenade",
			"288th_10Rnd_Green_Smoke_Microgrenade",
			"288th_10Rnd_Blue_Smoke_Microgrenade",
			"288th_10Rnd_Purple_Smoke_Microgrenade",
			"288th_10Rnd_HE_Microgrenade",
			"288th_10Rnd_HEDP_Microgrenade",
			"288th_10Rnd_HEDPC_Microgrenade",
			"288th_10Rnd_Heat_Microgrenade"
		};
	};
	/*class 288th_AC_8
	{
		CfgMagazines[] =
		{
			"288th_Autocannon_mag"
		};
	};*/
};

class CfgRecoils
{
	class recoil_M7V_SMG
	{
		muzzleOuter[] =
		{
			"0.075*0.2",
			"0.64*1",
			"0.315*1",
			"0.21*1"
		};
		kickBack[] =
		{
			"0.015*1.4",
			"0.04*1.4"
		};
		temporary = "0.010*1.2";
		muzzleInner[] = { 0,0,0.050000001,0.050000001 };
		permanent = "0.05*0.4";
	};
	class recoil_Assault
	{
		muzzleOuter[] =
		{
			"0.075*0.2",
			"1.5",
			"0.315*1",
			"0.21*1"
		};
		kickBack[] =
		{
			"0.005*0.4",
			"0.04*1.4"
		};
		temporary = "0.010*1.2";
		muzzleInner[] = { 0,0,0.050000001,0.050000001 };
		permanent = "0.05*0.4";
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail1913_short;

class cfgWeapons
{
	//--------------------------------------------------------------------------------------------//

	// Weapons Base Classes

	//--------------------------------------------------------------------------------------------//

	// Weapons
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class SMG_03C_TR_black;
	class srifle_EBR_F;
	class OPTRE_SRS99D;
	class OPTRE_SRS99C_Scope;
	class srifle_LRR_F;
	class SMG_02_F;
	class arifle_SDAR_F;
	class OPTRE_LongRifle_Base : Rifle_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class OPTRE_M99A2S3 : OPTRE_LongRifle_Base
	{
		class Single;
	};
	class TCF_M28A2;
	class srifle_DMR_03_tan_F;
	class 288th_M6C;
	class LMG_Mk200_F;
	class arifle_SPAR_01_blk_F;
	class OPTRE_CQS48_Bulldog_Automatic;
	class OPTRE_M45TAC;
	class optre_m250;
	class OPTRE_M247;
	//class SC_Rifle_SSR55C;
	//class SC_Rifle_PKMP;
	//class SC_Rifle_Bastard;
	class OPTRE_MachineGun_Base;
	class srifle_DMR_04_F;
	class OPTRE_M393_DMR;
	class OPTRE_M393S_DMR;
	// Attachment Slots
	class WeaponSlotsInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class MuzzleSlot_556;
	class CowsSlot_Rail;
	class PointerSlot_Rail;
	class UnderBarrelSlot_Rail;
	class asdg_MuzzleSlot_338;
	class asdg_OpticRail1913;
	class asdg_UnderSlot;
	class asdg_FrontSideRail;
	class OPTRE_Riot_Shield_Icon_Attachments;
	class SlotInfo;
	class Default;
	class MineDetector;
	class UGL_F;
	class optre_m319n;
	class TKE_UCNMMG;
	class WRS_Weapon_LMG;
	class OPTRE_M247H_Etilka;
	class OPTRE_AIE_486H_Minigun_MMG_Weapon_Base;
	class OPTRE_M41_SSR_G;
	class OPAEX_M6GGNR: OPTRE_M41_SSR_G
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
	};

	//ACE Keys
	class ACE_ItemCore;
	class ACE_key_master: ACE_ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	class ACE_key_lockpick: ACE_key_master
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	class ACE_key_west: ACE_key_master
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	class ACE_key_east: ACE_key_master
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	class ACE_key_indp: ACE_key_master
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	class ACE_key_civ: ACE_key_master
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
	};
	//--------------------------------------------------------------------------------------------//

	// WEAPONS!!!!!

	//--------------------------------------------------------------------------------------------//

	class OPTRE_M73: OPTRE_MachineGun_Base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
		};
	};
	class OPTRE_Rifle_Base;
	class OPTRE_FC_Plasma_Pistol: OPTRE_Rifle_Base
	{
		initspeed=190;
		LEBA_SWS = 1;
		LEBA_SWS_Tracking_Distance = 30;
		LEBA_SWS_Tracking_Angle = 20;
		LEBA_SWS_Autoaim_Cutoff = 0.2;
		LEBA_SWS_Tracking_Random_Chance = 50;
		LEBA_SWS_Tracking_Speed = 150;
	};
	class OPTRE_FC_T25_Rifle: OPTRE_Rifle_Base
	{
		initspeed=220;
	};
	class OPTRE_FC_T25J_Rifle: OPTRE_FC_T25_Rifle
	{
		initspeed=264;
	};
	class OPTRE_FC_Needler: OPTRE_FC_T25_Rifle
	{
		LEBA_SWS = 1;
		LEBA_SWS_Tracking_Distance = 30;
		LEBA_SWS_Tracking_Angle = 20;
		LEBA_SWS_Autoaim_Cutoff = 0.2;
		LEBA_SWS_Tracking_Random_Chance = 50;
		LEBA_SWS_Tracking_Speed = 150;
	};
	class OPTRE_FC_T50_SRS: OPTRE_Rifle_Base
	{
		initspeed=1300;
	};
	class OPTRE_FC_T51_Repeater: OPTRE_Rifle_Base
	{
		initspeed=286;
	};
	class OPTRE_FC_T51J_Repeater: OPTRE_FC_T51_Repeater
	{
		initspeed=343;
	};
	class OPTRE_FC_Jackal_Shield: OPTRE_Rifle_Base
	{
		initspeed=190;
		LEBA_SWS = 1;
		LEBA_SWS_Tracking_Distance = 30;
		LEBA_SWS_Tracking_Angle = 20;
		LEBA_SWS_Autoaim_Cutoff = 0.2;
		LEBA_SWS_Tracking_Random_Chance = 50;
		LEBA_SWS_Tracking_Speed = 150;
	};

	class 288th_M99A2S3 : OPTRE_M99A2S3
	{
		/*class Single : Single
		{
			reloadTime = 2;
		};*/
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		baseWeapon = "288th_M99A2S3";
		displayName = "[288th] M99A2S3 Stanchion Gauss Rifle";
		description = "UNSC M99A2S3 stanchion gauss rifle";
		descriptionShort = "5.4mm Anti-Material Special Applications Gauss Rifle";
		model = "\OPTRE_Weapons\Sniper\M99";
		modelOptics = "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic";
		opticType = 1;
		optics = 1;
		opticsID = 1;
		useModelOptics = 1;
		opticsZoomMin = 0.0099999998;
		opticsZoomMax = 0.25;
		opticsZoomInit = 0.25;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		magazineWell[] = { 288th_Gauss };
		opticsPPEffects[] =
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = { 0,1,5,6,7 };
		discretefov[] = { 0.25,0.050000001,0.025,0.0099999998 };
		discreteinitIndex = 0;
		discreteDistance[] = { 50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000 };
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 2000;
		class WeaponSlotsInfo
		{
			mass = 120;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		magazines[] =
		{
			"288th_7Rnd_Gauss_Slug_Mag"
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"288th_Weapons\Data\Weapons\SRS99\M99A2S3.OGG",2.5,1,1500};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.99526,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 2;
			dispersion = 0;
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

	// LMG/GMG/HMG
	class 288th_M73X : OPTRE_M73
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M73X HMG";
		baseWeapon = "288th_M73X";
		descriptionshort = "Special Oni Derived Armament M73X";
		recoil = "recoil_lim";
		magazineWell[] = { 288th_M73X };
		magazines[] = { "288th_500Rnd_65x85_Box","288th_500Rnd_65x85_Box_Normal" };
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M73X\M73_co.paa"};
		HUD_BulletInARows = 5;
		HUD_TotalPosibleBullet = 500;
		cursor = "OPTRE_M73";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M73_Smartlink";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 170;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor","optre_m7_silencer","optre_m6_silencer","OPTRE_M393_Suppressor","OPTRE_M12_Suppressor","OPTRE_MA37KSuppressor","OPTRE_M6C_compensator","OPTRE_SRS99D_Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_SS_6_Scope","288th_M73_Smartlink","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","288th_M6C_Scope","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m73_smartlink","optre_m7_sight","optre_m393_acog","optre_hmg38_carryhandle","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_MA5_BUIS","OPTRE_M12_Optic","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","TCF_M7_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_01_F_khk","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_02_F_lush","bipod_02_F_arid","bipod_03_F_blk","bipod_03_F_oli" };
			};
		};
		modes[] = { "FullAutoFast","FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = { "MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet" };
			};
			dispersion = 5e-05;
			reloadTime = 0.15;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow
		{
			reloadTime = 0.1;
			textureType = "fastAuto";
		};
	};
	class 288th_Kennedy_M73: OPTRE_M73
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Kennedy's 'Battle Rifle'";
		baseWeapon = "288th_Kennedy_M73";
		magazines[] = {};
		magazineWell[] = {"OPTRE_Magwell_M73","TCF_Magwell_M73H"};
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\M73X\M73_co.paa"};
		cursor = "OPTRE_M73";
		modes[] = { "FullAutoFast","FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = { "MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet" };
			};
			dispersion = 5e-05;
			reloadTime = 0.1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow
		{
			reloadTime = 0.05;
			textureType = "fastAuto";
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optre_m73_smartlink";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
	};

	class 288th_MMG: TKE_UCNMMG
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M99 MMG";
		baseWeapon = "288th_MMG";
		descriptionShort = "Special Oni Derived Armament M99";
		magazineWell[] = {"288th_M99"};
		magazines[] = {"288th_200Rnd_308"};
		recoil = "recoil_lim";
		//recoil = "recoil_TKE_MMG338";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 200;
		cursor = "OPTRE_M73";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\data\TKE_UCNMMGBack_co.paa","\TKE_Kuiper_Engagements\TKE_Weapons\data\TKE_UCNMMGFront_co.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TKE_4xSight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TKE_10xsight","TKE_10xsightv2","TKE_MRCOSight","TKE_4xSight","TKE_RedDotSight","TKE_ReflexSight","TKE_ThermScope","288th_SS_6_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","288th_M6C_Scope","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m7_sight","optre_m393_acog","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_M12_Optic","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
			};
			mass = 200;
		};
	};
	class 288th_Johnson_MG338 : 288th_MMG
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] MG338";
		baseWeapon = "288th_Johnson_MG338";
		descriptionShort = "Special Oni Derived Armament MG338";
		magazineWell[] = {"288th_MG338"};
		magazines[] = {"288th_120Rnd_86x70_Box"};
		recoil = "recoil_lim";
		//recoil = "recoil_TKE_MMG338";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 120;
		cursor = "OPTRE_M73";
		modes[] = { "FullAutoFast","FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_Cerberus_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet"};
			};
			dispersion = 5e-05;
			reloadTime = 0.17143;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow
		{
			reloadTime = 0.12;
			textureType = "fastAuto";
		};
		/*modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_Cerberus_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.12;
			dispersion = 0.00073;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far_optic1: close
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 9;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
			minRange = 800;
			minRangeProbab = 0.04;
			midRange = 1000;
			midRangeProbab = 0.5;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType = 2;
			autoFire = 0;
			burst = 1;
			aiRateOfFire = 12;
			aiRateOfFireDistance = 1600;
			aiRateOfFireDispersion = 4;
			minRange = 1200;
			minRangeProbab = 0.05;
			midRange = 1600;
			midRangeProbab = 0.5;
			maxRange = 2000;
			maxRangeProbab = 0.01;
		};*/
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TKE_4xSight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TKE_10xsight","TKE_10xsightv2","TKE_MRCOSight","TKE_4xSight","TKE_RedDotSight","TKE_ReflexSight","TKE_ThermScope","288th_SS_6_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","288th_M6C_Scope","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m7_sight","optre_m393_acog","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_M12_Optic","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
			};
			mass = 200;
		};
	};
	class 288th_MMG_Eugen: LMG_Mk200_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M99E1 MMG";
		baseWeapon = "288th_MMG_Eugen";
		descriptionShort = "Special Oni Derived Armament M99";
		magazineWell[] = {"288th_M99"};
		magazines[] = {"288th_200Rnd_308"};
		recoil = "recoil_lim";
		//recoil = "recoil_TKE_MMG338";
		picture = "\a3\Weapons_F_Enoch\Machineguns\M200\Data\UI\icon_LMG_Mk200_black_F_ca.paa";
		hiddenSelectionsTextures[] = { "a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa" };
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 200;
		cursor = "OPTRE_M73";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TKE_4xSight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TKE_10xsight","TKE_10xsightv2","TKE_MRCOSight","TKE_4xSight","TKE_RedDotSight","TKE_ReflexSight","TKE_ThermScope","288th_SS_6_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","288th_M6C_Scope","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m7_sight","optre_m393_acog","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_M12_Optic","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
			};
			mass = 200;
		};
	};

	class 288th_M50 : optre_m250
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M50 HMG";
		baseWeapon = "288th_M50";
		descriptionshort = "Special Oni Derived Armament M50";
		inertia = 1;
		recoil = "recoil_m320";
		magazineWell[] = { 288th_M50 };
		magazines[] = { "288th_75Rnd_15x50" };
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		cursor = "OPTRE_M73";
		maxZeroing = 1000;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "288th_M7_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 90;
			allowedSlots[] = { 901 };
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "ACE_muzzle_mzls_B" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_SS_6_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m73_smartlink","optre_m7_sight","optre_m393_acog","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_MA5_BUIS","OPTRE_M12_Optic","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","TCF_M7_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "optre_m250_bipod" };
			};
		};
		modes[] = { "FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"DMR02_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType{};
			dispersion = 5e-05;
			reloadTime = 0.225;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};
	class 288th_M50_Owlbear: 288th_M50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] Owlbear's SMG";
		baseWeapon = "288th_M50_Owlbear";
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons_MG\m247a1\data\lower_co.paa","\OPTRE_Weapons_MG\m247a1\data\receiver_co.paa","\optre_weapons_mg\m247a1\data\250decal\decal_ca.paa","\OPTRE_Weapons_MG\m247a1\data\50cal_co.paa"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 120;
			allowedSlots[] = { 901 };
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "ACE_muzzle_mzls_B","OPTRE_SRS99D_Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "288th_SS_6_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","288th_M7_Sight","optic_arco_ak_blk_f","optic_dms","optic_aco_grn","optic_aco","optic_arco_blk_f","optic_holosight_blk_f","optic_mrco","optic_khs_blk","optic_hamr","optic_sos","optic_lrps","optic_nightstalker","optic_erco_blk_f","optic_ams","optic_yorris","optic_ico_01_black_f","optic_aco_smg","optic_aco_grn_smg","optic_holosight_smg_blk_f","optic_mrd_black","ace_optic_lrps_2d","ace_optic_lrps_pip","ace_optic_sos_2d","ace_optic_sos_pip","ace_optic_mrco_2d","ace_optic_hamr_2d","ace_optic_hamr_pip","optre_srs99_scope","optre_srs99c_scope","optre_m393_eotech","optre_m73_smartlink","optre_m7_sight","optre_m393_acog","optre_m393_scope","optre_m392_scope","optre_br55hb_scope","OPTRE_BR45_Scope","optre_m6c_scope","OPTRE_M6G_Scope","OPTRE_BMR_Scope","OPTRE_M12_Optic","OPTRE_MA5_BUIS","OPTRE_M12_Optic","OPTRE_SRM_Sight","TCF_M393_EOTECH_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "TCF_M6_Flashlight_IR","TCF_Rifle_Flashlight_IR","TCF_M7_Flashlight_IR","OPTRE_BMR_Laser","OPTRE_BMR_Flashlight","OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M12_Laser","acc_pointer_ir","ACE_acc_pointer_red","ace_acc_pointer_green","ACE_acc_pointer_green_IR","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M45_Flashlight_green","OPTRE_M45_Flashlight_blue","OPTRE_DMR_Light","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "optre_m250_bipod" };
			};
		};
		modes[] = { "FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"DMR02_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
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
			dispersion = 5e-05;
			reloadTime = 0.225;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};

	class 288th_M247Z_Shield: OPTRE_M247H_Etilka
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		baseWeapon = "288th_M247Z_Shield";
		displayName = "[288th] M247Z HMG";
		model = "OPTRE_Weapons_MG\Etilka\M247H_Jorge_Shield.p3d";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 500;
		magazines[] = {"288th_65x85_M247Z"};
		magazineWell[] = {"288th_M247Z"};
		modes[] = {"FullAutoFast","FullAutoSlow"};
		class FullAutoSlow: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"WBK_SCIFI_MG_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"WBK_SCIFI_MG_SILENCED_SoundSet"};
			};
			reloadTime = 0.1;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			soundBurst = 0;
			burst = 1;
			displayName = "$STR_DN_MODE_FULLAUTO";
			textureType = "fullAuto";
		};
		class FullAutoFast : FullAutoSlow
		{
			reloadTime = 0.05;
			textureType = "fastAuto";
		};
		class LinkedItems
		{
			class LinkedItemsOptic{};
			class LinkedItemsPointer{};
		};
	};

	class 288th_M827_MMG: OPTRE_AIE_486H_Minigun_MMG_Weapon_Base
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M827 'Handzaag' HRMG";
		baseWeapon = "288th_M827_MMG";
		recoil = "OPTRE_AIE_486H_Recoil";
		magazines[] = {"OPTRE_AIE_1000Rnd_762x51_M118_Belt_Tracer_Red"};
		magazineWell[] = {"OPTRE_Magwell_AIE_486H"};
		modes[] = {"FullAutoSlow","FullAutoFast"};
		class FullAutoSlow: Mode_FullAuto
		{
			//sounds[] = {"standardsound"};
			class BaseSoundModeType;
			class standardsound
			{
				begin1[] = {"\OPTRE_Weapons_Turrets\AIE_486H\data\sounds\minichaingun-fire-01.wav",0.5,1,2200,{2,36879}};
				soundbegin[] = {"begin1",1};
				soundsetshot[] = {"OPTRE_MMGMinigun762mm_Shot_SoundSet"};
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
			reloadTime = 0.2;
			dispersion = 0.000581776;
			soundContinuous = 0;
			soundBurst = 1;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			textureType = "fullAuto";
		};
		class FullAutoFast : FullAutoSlow
		{
			reloadTime = 0.1;
			textureType = "fastAuto";
		};

	};
	/*class OPTRE_M73A1: LMG_Mk200_F
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		model = "\OPTRE_Weapons_MG\m73a1\m73A1.p3d";
		baseWeapon = "OPTRE_M73A1";
		displayName = "M73A1";
	};
	class OPTRE_M73A1_Short: OPTRE_M73A1
	{
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		model = "\OPTRE_Weapons_MG\m73a1\m73A1_short.p3d";
		baseWeapon = "OPTRE_M73A1_Short";
		displayName = "M73A1 (Para)";
	};*/

	//288th Auto GL Rifle
	class 288th_M318 : LMG_Mk200_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M318 Auto GL";
		baseWeapon = "288th_M318";
		descriptionshort = "Special Oni Derived Armament M318";
		magazineWell[] = { 288th_AutoGL };
		magazines[] = { "288th_50Rnd_30mm_HE"};
		//picture = "\a3\Weapons_F_Enoch\Machineguns\M200\Data\UI\icon_LMG_Mk200_black_F_ca.paa";
		//hiddenSelectionsTextures[] = { "a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa" };
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";
		maxZeroing = 1000;
		class WeaponSlotsInfo
		{
			mass = 95;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2",
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk",
				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		modes[] = { "FullAutoSlow" };
		class FullAutoSlow : Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = { "MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet" };
			};
			dispersion = 5e-05;
			reloadTime = 0.38;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};

	//Shotguns
	class 288th_CQS_48X : OPTRE_CQS48_Bulldog_Automatic
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] CQS-48X";
		descriptionshort = "Special Oni Derived Armament CQS-48X";
		baseWeapon = "288th_CQS_48X";
		recoil = "recoil_lim";
		magazines[] =
		{
			"288th_Buckshot",
			"288th_Slug"
		};
		magazineWell[] = { 288th_shotgun };
		visionMode[] =
		{
			"Normal",
			"NVG"
		};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 30;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "Optre_Recon_Sight";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_ma5suppressor",
					"ACE_muzzle_mzls_B"
				};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"288th_Hamr_Scope",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"OPTRE_M12_Optic",
					"TCF_M393_EOTECH_v2"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"acc_flashlight",
					"acc_pointer_ir"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =
				{

				};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
		modes[] = { "Single","FullAuto" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
	};
	class 288th_CQS_48X_V : 288th_CQS_48X
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 1;
		scopeArsenal = 1;
		autoReload = true;
		magazineReloadTime = 2.0;
		cursor = "EmptyCursor";
		cursoraim = "OPTRE_M45";
		cursorAimOn = "";
	};
	class 288th_Bulldog_Riot_Shield: 288th_CQS_48X
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		baseWeapon = "288th_Bulldog_Riot_Shield";
		displayName = "[288th] Riot Shield (CQS-48X)";
		model = "\OPTRE_Weapons\RiotShield\riotshield_Bulldog.p3d";
		hiddenSelections[] = {"camoShield","camoWindshield","camoBody","camoDecal"};
		hiddenSelectionsTextures[] = {"OPTRE_Weapons\RiotShield\data\police\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\OPTRE_Weapons\bulldog\data\chihuahua\Body_co.paa","\OPTRE_Weapons\bulldog\data\decal\cqs48as\DecalSheet_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_Weapons\RiotShield\data\body.rvmat","OPTRE_Weapons\riotshield\data\glass.rvmat","\OPTRE_Weapons\bulldog\data\chihuahua\body.rvmat","\OPTRE_Weapons\bulldog\data\decal\cqs48as\decal.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\bulldog_human.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\RiotShield\data\anim\spartan\bulldog_spartan.rtm"};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye2"};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {"",""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = {180,180,180};
			ambient[] = {0.9,0.9,0.9};
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = {0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: OPTRE_Riot_Shield_Icon_Attachments{};
		};
	};

	class 288th_M45TAC : OPTRE_M45TAC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		displayName = "[288th] M45 Confetti";
		descriptionshort = "Special Oni Derived Armament M45";
		fireSpreadAngle = 1;
		canShootInWater = 1;
		magazineWell[] = { 288th_M45TAC };
		magazines[] = { "288th_Loose_Buckshot" };
		baseWeapon = "288th_M45TAC";
		picture = "\OPTRE_weapons\shotgun\icons\M452.paa";
		/*ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 12;*/
		hiddenSelections[] = {"camo","camo_details","camo_pellet","camo_slug","camo_attach"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\Shotgun\shotgun_co.paa","288th_Weapons\Data\Weapons\unsc_decals_ca.paa","optre_weapons\shotgun\data\shell_pellet_co.paa","optre_weapons\shotgun\data\shell_slug_co.paa","optre_weapons\shotgun\data\shotgunattach_co.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M12_Optic";
			};
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M45_Flashlight_red";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =
				{
					"optre_m6_silencer",
					"ACE_muzzle_mzls_B"
				};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"288th_M6C_Scope",
					"288th_M7_Sight",
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optre_m7_sight",
					"OPTRE_M12_Optic"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M45_Flashlight",
					"OPTRE_M45_Flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_M45_Flashlight_yellow",
					"OPTRE_M45_Flashlight_cyan",
					"OPTRE_M45_Flashlight_purple",
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 1.25;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 75;
			midRangeProbab = 0.35;
			maxRange = 200;
			maxRangeProbab = 0.45;
			distanceZoomMin = 60;
			distanceZoomMax = 60;
			recoil = "recoil_single_ksg";
			recoilProne = "recoil_single_prone_ksg";
		};
	};
	class 288th_M90A: 288th_M45TAC
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		model = "\OPTRE_Weapons\Shotgun\m90a.p3d";
		displayName = "[288th] M90A CAWS";
		baseWeapon = "288th_M90A";
		magazineWell[] = { 288th_Shotgun_Pump };
		magazines[] = { "288th_Loose_Normal_Buckshot" };
		picture = "\OPTRE_weapons\shotgun\icons\m90caws_icon.paa";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\Shotgun\data\anim\optre_shotgunHALO3_idle.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\benelli_Spartan.rtm"};
		class LinkedItems
		{
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "OPTRE_M45_Flashlight_red";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 45;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =	{};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =	{};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M45_Flashlight",
					"OPTRE_M45_Flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_M45_Flashlight_yellow",
					"OPTRE_M45_Flashlight_cyan",
					"OPTRE_M45_Flashlight_purple",
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
		};
		hiddenSelections[] = {"camo","camo_reticle"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\Shotgun\m90_Wood.paa","#(argb,8,8,3)color(0.215686,0.945098,0.984314,1.0,co)"};
	};
	class 288th_M90A_Glitch: 288th_M90A
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] Baltimore's Boomstick";
		baseWeapon = "288th_M90A_Glitch";
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound","SilencedSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = { "DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet" };
			};
			reloadTime = 0.2;
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 75;
			midRangeProbab = 0.35;
			maxRange = 200;
			maxRangeProbab = 0.45;
			distanceZoomMin = 60;
			distanceZoomMax = 60;
			recoil = "recoil_single_ksg";
			recoilProne = "recoil_single_prone_ksg";
		};
	};
	
	//GLs
	class 288th_M319X : optre_m319n
	{
		canShootInWater = 1;
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] M319X";
		descriptionShort = "Grenade Launcher";
		baseWeapon = "288th_M319X";
		hiddenSelections[] = {"camoBody","camoLogo","camosight","camoreticle","camoScope"};
		hiddenSelectionsTextures[] = {"288th_Weapons\Data\Weapons\GL\gl_co.paa","optre_weapons\gl\data\logos_ca.paa","optre_weapons\br\data\gl\sight_co.paa","optre_weapons\br\data\gl\ubgl_reticle.paa","optre_weapons\gl\data\scope_co.paa"};
		magazines[] = {"288th_Potato","M319_HE_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HEDPC_Grenade_Shell","M319_HEAT_Grenade_Shell","M319_Buckshot","M319_Smoke","M319_Smoke_Orange","M319_Smoke_Green","M319_Smoke_Red","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = { "288th_GL","UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM" };
	};

	class 288th_GL15R : arifle_SDAR_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		reloadTime = 0.5;
		scope = 2;
		scopeArsenal = 2;
		canShootInWater = 1;
		displayName = "[288th] GL15R";
		descriptionshort = "Special Oni Derived Armament GL15R";
		baseWeapon = "288th_GL15R";
		modes[] ={"Single"};
		magazines[] ={"288th_10rnd_Microgrenade"};
		magazineWell[] = { 288th_Microgrenades };
		recoil = "recoil_lim";
		visionMode[] ={"Normal","NVG","TI"};
		class WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] =	{};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] =
				{
					"OPTRE_M6S_Scope",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_erco_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_mrd_black",
					"optre_m7_sight",
					"optre_m392_scope",
					"optre_m6c_scope",
					"OPTRE_M12_Optic"
				};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] =	{};
			};
			class UnderBarrelSlot : UnderBarrelSlot_Rail
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] =	{};
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
			};
		};
	};

	//Pistols
	class OPTRE_M6G;
	class 288th_M6X: OPTRE_M6G
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		canShootInWater = 1;
		displayName = "[288th] M6X Magnum (Special)";
		baseWeapon = "288th_M6X";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\M6_Pistols\M6eXperimental.paa"};
		magazines[] = {"OPTRE_FC_Plasma_Pistol_Battery"};
		magazineWell[] = {};
		modes[] = {"SemiAuto","FullAuto","close","short","medium","far"};
		reloadAction = "SCI_FI_Pistol_Reload";
		reloadMagazineSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		reloadSound[] = {"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",2,1,30};
		initspeed=190;
		LEBA_SWS = 1;
		LEBA_SWS_Tracking_Distance = 30;
		LEBA_SWS_Tracking_Angle = 20;
		LEBA_SWS_Autoaim_Cutoff = 0.2;
		LEBA_SWS_Tracking_Random_Chance = 50;
		LEBA_SWS_Tracking_Speed = 150;
		class SemiAuto: Mode_SemiAuto
		{
			minRangeProbab = 0.5;
			midRange = 25;
			midRangeProbab = 0.1;
			maxRange = 100;
			maxRangeProbab = 0.05;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			sounds[] = {"StandardSound"};
			reloadTime = 0.15;
			dispersion = 0.001;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_FC_Weapons\Data\sounds\Carbine_Fire.ogg",1.0,1,2000};
				soundBegin[] = {"begin1",2.0};
			};
			minRange = 2;
		};
		class FullAuto: Mode_FullAuto
		{
			minRangeProbab = 0.5;
			midRange = 25;
			midRangeProbab = 0.1;
			maxRange = 100;
			maxRangeProbab = 0.05;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			sounds[] = {"StandardSound"};
			reloadTime = 0.15;
			dispersion = 0.001;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_FC_Weapons\Data\sounds\Carbine_Fire.ogg",1.0,1,2000};
				soundBegin[] = {"begin1",2.0};
			};
			minRange = 2;
		};
		class close: FullAuto
		{
			burst = 5;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 125;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 400;
			minRangeProbab = 0.04;
			midRange = 500;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.01;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot : MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] ={};
			};
			class CowsSlot : CowsSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] ={"optre_m6c_scope"};
			};
			class PointerSlot : PointerSlot_Rail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				compatibleitems[] ={"OPTRE_M6G_Flashlight"};
			};
		};
	};
};
