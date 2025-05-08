class CfgPatches
{
	class 288th_Weapons_Vehicles
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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class autocannon_Base_F;
class player;

class CfgAmmo
{
	class Sh_82mm_AMOS;
	class SAG6_82mm_AB: Sh_82mm_AMOS
	{
		triggerOnImpact = 0;
		submunitionConeType[] = {"poissondisc",1};
		submunitionConeAngle = 1;
		triggerDistance = 10;
		deleteParentWhenTriggered = 1;
		submunitionCount = 0;
		submunitionInitSpeed = 0.0001;
		submunitionParentSpeedCoef = 0;
		triggerSpeedCoef = 0.01;
		submunitionAmmo = "SAG6_82mm_AB_sub";
	};
	class ammo_Bomb_SDB;
	class SAG6_82mm_AB_sub: ammo_Bomb_SDB
	{
		ace_frag_charge = 400;
		ace_frag_classes = "[""ACE_frag_medium_HD"",""ACE_frag_small"",""ACE_frag_small_HD""]";
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 2700;
		ace_frag_skip = 0;
		ace_rearm_caliber = 82;
		ace_vehicle_damage_incendiary = 0.1;
		CraterEffects = "GrenadeCrater";
		timetolive = 0.01;
		explosionTime = 0;
		hit = 25;
		indirectHit = 25;
		indirectHitRange = 14;
		caliber = 10;
		warheadName = "HE";
		model = "\A3\weapons_f\ammo\shell";
	};
	class SAG6_82mm_WP: Sh_82mm_AMOS
	{
		craterEffects = "ImpactEffectsMedium";
		triggerOnImpact = 0;
		submunitionConeType[] = {"poissondisc",16};
		submunitionConeAngle = 15;
		triggerDistance = 50;
		deleteParentWhenTriggered = 1;
		triggerSpeedCoef[] = {0.2,0.3,0.4,0.5,0.6};
		submunitionAmmo = "SAG6_82mm_WP_sub";
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionEffects = "GrenadeExplosion";
		explosionEffectsDir = "explosionDir";
		explosionForceCoef = 1;
		explosionPos = "explosionPos";
		explosionTime = 0;
		class EventHandlers{};
	};
	class MissileBase;
	class SAG6_82mm_WP_sub: MissileBase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		simulation = "shotMissile";
		initTime = 0;
		timeToLive = 90;
		thrustTime = 90;
		thrust = 10;
		maxSpeed = 20;
		deflecting = 40;
		deflectionSlowDown = 0.8;
		deflectionDirDistribution = 1;
		airFriction = 60;
		sideAirFriction = 1;
		explosionDir = "explosionDir";
		explosionEffects = "SAG6_WPExplosion";
		explosionEffectsDir = "explosionDir";
		explosionEffectsRadius = 5;
		explosionForceCoef = 1;
		explosionPos = "explosionPos";
		CraterEffects = "SAG6_WPCrater";
		EffectsFire = "CannonFire";
		effectFlare = "FlareShell";
		EffectFly = "ArtilleryTrails";
		effectsMissile = "FX_Missile_AA";
		effectsSmoke = "SmokeShellWhite";
		hit = 90;
		indirectHit = 25;
		indirectHitRange = 3;
		explosive = 1;
		audibleFire = 20;
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		tracerEndTime = 5;
		tracerScale = 1.3;
		tracerStartTime = 0.005;
		ace_vehicle_damage_incendiary = 1;
		ACE_damageType = "fire";
		soundHit1[] = {"A3\Sounds_F\debugsound",1,1,10};
		multiSoundHit[] = {"soundHit1",1};
		SoundSetExplosion[] = {""};
		class HitEffects{};
		smokeColor[] = {1,1,1,1};
	};
};

class CfgMagazines
{
	class OPTRE_300Rnd_30mm_HE2;
	class OPTRE_1Rnd_C2GMLS_missiles;
	class CA_Magazine;
	class 288th_350Rnd_20mm_HE : OPTRE_300Rnd_30mm_HE2
	{
		author = "Article 2 Studios";
		displayName = "350Rnd 30mm HE";
		displayNameShort = "30mm HE";
		ammo = "OPTRE_B_30mm_HE2";
		initSpeed = 1070;
		count = 350;
	};
	class 288th_250Rnd_20mm_AP : OPTRE_300Rnd_30mm_HE2
	{
		author = "Article 2 Studios";
		displayName = "250Rnd 30mm AP";
		displayNameShort = "30mm AP";
		ammo = "OPTRE_B_30mm_AP2";
		initSpeed = 1070;
		count = 250;
	};
	class 288th_Class_4_Guided : OPTRE_1Rnd_C2GMLS_missiles
	{
		displayName = "12x C4GMLS";
		displayNameShort = "Class-4 MR";
		descriptionShort = "Class-4 Self-Guided Missiles";
		count = 12;
		ammo = "288th_Class_4";
		pylonWeapon = "288th_Class_Guided";
	};

	class 8Rnd_82mm_Mo_shells;
	class SAG6_6Rnd_MLMS: 8Rnd_82mm_Mo_shells
	{
		ace_artillerytables_airFriction = -0.0001;
		count = 6;
	};
	class 8Rnd_82mm_Mo_Smoke_white;
	class SAG6_6rnd_MLMS_Smoke: 8Rnd_82mm_Mo_Smoke_white
	{
		ace_artillerytables_airFriction = -0.0001;
		count = 6;
	};
	class 8Rnd_82mm_Mo_guided;
	class SAG6_6rnd_MLMS_GPS: 8Rnd_82mm_Mo_guided
	{
		ace_artillerytables_airFriction = -0.0001;
		count = 6;
	};
	class 8Rnd_82mm_Mo_LG;
	class SAG6_6rnd_MLMS_LG: 8Rnd_82mm_Mo_LG
	{
		ace_artillerytables_airFriction = -0.0001;
		count = 6;
	};
	class SAG6_6Rnd_MLMS_AB: SAG6_6Rnd_MLMS
	{
		ammo = "SAG6_82mm_AB";
		displayName = "HEAB Mortar Shells";
		displayNameShort = "HEAB";
	};
	class SAG6_6Rnd_MLMS_WP: SAG6_6Rnd_MLMS
	{
		ammo = "SAG6_82mm_WP";
		displayName = "WP Mortar Shells";
		displayNameShort = "WP";
	};
};

class cfgWeapons
{
	class OPTRE_M247H_RCWS;
	class LMG_coax;
	class OPTRE_M247T_Coax;
	class OPTRE_missiles_Anvil2;
	class OPTRE_missiles_C2GMLS;
	class cannon_120mm;
	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_M6GGNR;
	class KA_VC1_Flamethrower;
	class HMG_127;
	class GMG_F;
	class OPTRE_M68_GAUSS;
	class GMG_40mm : GMG_F
	{
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";
	};
	class 288th_M73X_V : OPTRE_M247H_RCWS
	{
		displayName = "[288th] M73X HMG";
		descriptionShort = "HMG";
		magazines[] = { "288th_500Rnd_65x85_Box" };
		modes[] = { "FullAutoFast" };
		tracersEvery = 1;
		lastRoundsTracer = 500;
		canShootInWater = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M73";
		class FullAutoFast : Mode_FullAuto
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
			reloadTime = 0.1;
			textureType = "fastAuto";
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};
	class 288th_M73X_V_1 : LMG_coax
	{
		displayName = "[288th] M73X HMG";
		descriptionShort = "HMG";
		magazines[] = { "288th_500Rnd_65x85_Box" };
		modes[] = { "FullAutoFast" };
		tracersEvery = 1;
		lastRoundsTracer = 500;
		canShootInWater = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M73";
		class FullAutoFast : Mode_FullAuto
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
			reloadTime = 0.1;
			textureType = "fastAuto";
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};
	class 288th_M73X_V_2 : OPTRE_M247T_Coax
	{
		displayName = "[288th] M73X HMG";
		descriptionShort = "HMG";
		magazines[] = { "288th_500Rnd_65x85_Box" };
		modes[] = { "FullAutoFast" };
		tracersEvery = 1;
		lastRoundsTracer = 500;
		canShootInWater = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M73";
		class FullAutoFast : Mode_FullAuto
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
			reloadTime = 0.1;
			textureType = "fastAuto";
			dispersion = 5e-05;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
	};
	class 288th_M50_V : OPTRE_M247H_RCWS
	{
		displayName = "M50X HMG";
		descriptionShort = "HMG";
		magazines[] = { "288th_75Rnd_15x50_Box" };
		tracersEvery = 1;
		lastRoundsTracer = 75;
		canShootInWater = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M73";
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
	class 288th_M41_V : OPTRE_missiles_Anvil2
	{
		displayName = "[288th] M41 SSR";
		descriptionShort = "ATGM/SAM";
		magazines[] = { "288th_M41_Twin_HEAT_SACLOS","288th_M41_Twin_HEAT_SALH","288th_M41_Twin_HEAT_Thermal" };
		cmImmunity = 0.95;
		canLock = 2;
		weaponLockDelay = 2;
		weaponLockSystem = "2 + 16";
		lockAcquire = 1;
		lockingTargetSound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",0.31622776,1 };
		lockedTargetSound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",0.31622776,2.5 };
		magazineReloadTime = 15;
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType {};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",2.5,1,1500 };
				soundBegin[] = { "begin1",1 };
			};
			recoil = "recoil_single_law";
			reloadtime = 1;
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
	};
	class 288th_Class_Guided : OPTRE_missiles_C2GMLS
	{
		displayName = "Class-4 Guided Munitions Launch System";
		descriptionShort = "Class-4 Heavy Self-Guided Missiles";
		magazines[] = { "288th_Class_4_Guided" };
		maxRange = 10000;
		mminRange = 75;
		canlock = 2;
		airLock = 1;
		aiAmmoUsageFlags = "128 + 256";
		weaponLockDelay = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_AGM502";
		reloadTime = 1;
	};
	class 288th_M318_20mm_Autocannon : autocannon_Base_F
	{
		displayName = "M318 30mm Autocannon";
		/*cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";*/
		reloadTime = 0.20;
		muzzles[] = { "HE","AP" };
		class HE : autocannon_Base_F
		{
			displayName = "M318 30mm HE";
			cursor = "EmptyCursor";
			cursorAim = "OPTRE_M638";
			magazines[] = { "288th_350Rnd_20mm_HE" };
			magazineReloadTime = 20;
			class player : player
			{
				class StandardSound
				{
					soundsetshot[] = { "Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet" };
				};
				dispersion = 5e-05;
				reloadTime = 0.24;
			};
			class close : player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 6;
				aiRateOfFire = 0.35;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 5;
				burstRangeMax = 5;
				aiRateOfFire = 0.5;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 3;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class AP : autocannon_Base_F
		{
			displayName = "M318 30mm AP";
			cursor = "EmptyCursor";
			cursorAim = "OPTRE_M638";
			magazines[] = { "288th_250Rnd_20mm_AP" };
			magazineReloadTime = 20;
			class player : player
			{
				class StandardSound
				{
					soundsetshot[] = { "Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet" };
				};
				dispersion = 5e-05;
				reloadTime = 0.24;
			};
			class close : player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 6;
				aiRateOfFire = 0.35;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 5;
				burstRangeMax = 5;
				aiRateOfFire = 0.5;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 3;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 2;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		cursor = "test";
	};
	class 288th_M318_20mm_Autocannon_Small : 288th_M318_20mm_Autocannon
	{
		displayName = "M318 30mm Autocannon";
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";
		reloadTime = 0.24;
		muzzles[] = { "HE" };
		class HE : autocannon_Base_F
		{
			displayName = "M318 30mm HE";
			cursor = "EmptyCursor";
			cursorAim = "OPTRE_M638";
			magazines[] = { "288th_350Rnd_20mm_HE" };
			magazineReloadTime = 40;
			class player : player
			{
				class StandardSound
				{
					soundsetshot[] = { "Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet" };
				};
				dispersion = 5e-05;
				reloadTime = 0.24;
			};
			class close : player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 6;
				aiRateOfFire = 0.35;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 5;
				burstRangeMax = 5;
				aiRateOfFire = 0.5;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 3;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};
	/*class 288th_M50_V : autocannon_Base_F
	{
		displayName = "M50X HMG";
		magazines[] = { "288th_75Rnd_15x50_Box" };
		lastRoundsTracer = 75;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M638";
		reloadTime = 0.20;
		muzzles[] = { "HE" };
		class HE : autocannon_Base_F
		{
			displayName = "M50X HMG";
			cursor = "EmptyCursor";
			cursorAim = "OPTRE_M638";
			magazines[] = { "288th_75Rnd_15x50_Box" };
			magazineReloadTime = 10;
			class player : player
			{
				sounds = ["StandardSound"];
				class StandardSound 
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] =
					{
						"DMR02_Shot_SoundSet",
						"DMR02_tail_SoundSet",
						"DMR02_InteriorTail_SoundSet"
					};
				};
				dispersion = 5e-05;
				reloadTime = 0.225;
			};
			class close : player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 6;
				aiRateOfFire = 0.35;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 5;
				burstRangeMax = 5;
				aiRateOfFire = 0.5;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 3;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far : close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};*/
	/*class OPTRE_M6_Laser: OPTRE_M68_GAUSS
	{
		reloadTime = 0.01;
		magazineReloadTime = 5;
		autoReload = 1;
		displayName = "$STR_OPTRE_Weapons_M6_NDEW";
		descriptionShort = "Laser";
		magazines[] = {"OPTRE_SpLaser_Battery"};
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M6GSL";
		class player: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\Laser_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			reloadTime = 0.01;
			magazineReloadTime = 5;
			autoReload = 1;
			burst = 50;
		};
	};*/
	class 288th_Railgun_V: OPTRE_M68_GAUSS
	{
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M68";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		initFov = 0.75;
		minFov = 0.375;
		maxFov = 1.1;
		reloadTime = 1.3;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 95.2778;
		FCSZeroingDelay = 0;
		maxZeroing = 5000;
		canLock = 0;
		autoFire = 0;
		showAimCursorInternal = 0;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
		displayName = "Experimental Railgun Modification";
		descriptionShort = "Railgun";
		scope = 1;
		scopeArsenal = 1;
		canShootInWater = 1;
		dexterity = 2.2;
		audibleFire = 0.1;
		dispersion = 0;
		magazineReloadTime = 2;
		magazines[] =
		{
			"288th_Railgun_Mag"
		};
		magazineWell[] = { 288th_Soda_Rail };
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000 };
				soundBegin[] = { "begin1",2.0 };
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000 };
				soundBegin[] = { "begin1",2.0 };
			};
			class CompSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000 };
				soundBegin[] = { "begin1",2.0 };
			};
			displayName = "Single";
			autoFire = 0;
			textureType = "semi";
			multiplier = 1;
			burst = 1;
			burstRangeMax = 1;
			dispersion = 0;
			recoil = "288th_M6C_recoil";
			recoilProne = "288th_M6C_recoil";
			aiRateOfFire = 15;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			soundContinuous = false;
			soundBurst = false;
			useAction = false;
			useActionTitle = "";
			showToPlayer = true;
			artilleryDispersion = 0;
			artilleryCharge = 0;
			reloadTime = 1.5;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
	};
	class mortar_82mm;
	class SAG6_M89_MLMS: mortar_82mm
	{
		displayName = "M89 MLMS";
		descriptionShort = "MLMS";
		magazines[] = {"SAG6_6Rnd_MLMS","SAG6_6rnd_MLMS_LG","SAG6_6rnd_MLMS_GPS","SAG6_6rnd_MLMS_Smoke","SAG6_6Rnd_MLMS_AB","SAG6_6Rnd_MLMS_WP"};
		reloadTime = 0.25;
		ballisticsComputer = 0;
		lockAcquire = 1;
		canLock = 0;
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		class Single1: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			artilleryCharge = 0.35;
			artilleryDispersion = 1.9;
			displayName = "$STR_A3_mortar_82mm_Single10";
			maxRange = 2;
			maxRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			minRange = 0;
			minRangeProbab = 0.01;
			reloadSound = "[""A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar"",1,1,20]";
			reloadTime = 0.25;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
			};
		};
		class Single2: Single1
		{
			artilleryCharge = 0.7;
			displayName = "$STR_A3_mortar_82mm_Single20";
		};
		class Single3: Single1
		{
			artilleryCharge = 1;
			displayName = "$STR_A3_mortar_82mm_Single30";
		};
		class Burst1: Mode_Burst
		{
			aiBurstTerminable = 1;
			artilleryCharge = 0.35;
			artilleryDispersion = 2.2;
			burst = 3;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			maxRange = 665;
			maxRangeProbab = 0.5;
			midRange = 290;
			midRangeProbab = 0.7;
			minRange = 60;
			minRangeProbab = 0.5;
			reloadSound = "[""A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar"",1,1,20]";
			reloadTime = 0.25;
			showToPlayer = 1;
			soundBurst = 0;
			soundServo = "["""",0.0001,1]";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
			};
		};
		class Burst2: Burst1
		{
			artilleryCharge = 0.7;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			maxRange = 2660;
			maxRangeProbab = 0.4;
			midRange = 1175;
			midRangeProbab = 0.6;
			minRange = 230;
			minRangeProbab = 0.4;
			showToPlayer = 1;
		};
		class Burst3: Burst1
		{
			artilleryCharge = 1;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			maxRange = 5500;
			maxRangeProbab = 0.3;
			midRange = 2355;
			midRangeProbab = 0.4;
			minRange = 540;
			minRangeProbab = 0.3;
			showToPlayer = 1;
		};
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1,800};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBullet[] = {"emptySound",1};
		soundBurst = 1;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};
		soundLoop[] = {"sound",1};
	};
};