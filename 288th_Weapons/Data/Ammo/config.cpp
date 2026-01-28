class ace_missileguidance_type_HOT;
class ace_missileguidance_type_Hellfire;
class SensorTemplateIR;

class CfgSkeletons
{
	class trilaunchermissile_s
	{
		pivotsModel="";
		isDiscrete = 0;
		skeletonInherit = "";
		skeletonBones[] =
		{
			"mainmissile","",
			"secondaryMissiles", "mainmissile"
		};
	};
	
};
class CfgModels
{
	class Default
	{
		sectionsInherit="";
		sections[] = {};
		skeletonName = "";
	};
	
	class trilaunchermissile:Default {
		skeletonName = "trilaunchermissile_s";
		sectionsInherit = "";
		sections[] = {"Camo1"};
		class Animations {
			class MissileRot
			{
				type="rotation";
				source="time";    // use second muzzle zeroing for rotation
				sourceAddress="loop"; // loop when phase out of bounds
				selection="mainmissile";       // selection we want to rotate
				axis="rocketrot_axis";       // has its own axis
				minValue=0;
				maxValue=1;
				angle0="rad 360";
				angle1="rad 0";
			};
		};
	};

};

class CfgPatches
{
	class 288th_Weapons_Ammo
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
class CfgCloudlets
{
	class ImpactSparksPlasmaBlue1;
	class ImpactSparksPlasmaBlue2;
	class ImpactSparksPlasmaOrange1 : ImpactSparksPlasmaBlue1
	{
		color[] = { {1.3,0.98,0.69,-25} };
		emissiveColor[] = { {15,5,1,1} };
	};
	class ImpactSparksPlasmaOrange2 : ImpactSparksPlasmaBlue2
	{
		color[] = { {1.3,0.98,0.69,-25} };
		emissiveColor[] = { {15,5,1,1} };
	};
	class ImpactSparksPlasmaYellow1 : ImpactSparksPlasmaBlue1
	{
		color[] = { {1.6,1.6,0.5,-25} };
		emissiveColor[] = { {10,10,1,1} };
	};
	class ImpactSparksPlasmaYellow2 : ImpactSparksPlasmaBlue2
	{
		color[] = { {1.6,1.6,0.5,-25} };
		emissiveColor[] = { {10,10,1,1} };
	};
	class ImpactSparksPlasmaPurple1 : ImpactSparksPlasmaBlue1
	{
		color[] = { {0.4,0.1,1.5,-25} };
		emissiveColor[] = { {10,1,15,1} };
	};
	class ImpactSparksPlasmaPurple2 : ImpactSparksPlasmaBlue2
	{
		color[] = { {0.4,0.1,1.5,-25} };
		emissiveColor[] = { {10,1,15,1} };
	};
	class ImpactSparksPlasmaWhite1 : ImpactSparksPlasmaBlue1
	{
		color[] = { {25,25,25,-25} };
		emissiveColor[] = { {25,25,25,1} };
	};
	class ImpactSparksPlasmaWhite2 : ImpactSparksPlasmaBlue2
	{
		color[] = { {25,25,25,-25} };
		emissiveColor[] = { {25,25,25,1} };
	};
	class ImpactSparksPlasmaBlack1 : ImpactSparksPlasmaBlue1
	{
		color[] = { {0,0,0,0.75} };
		emissiveColor[] = { {0,0,0,1} };
	};
	class ImpactSparksPlasmaBlack2 : ImpactSparksPlasmaBlue2
	{
		color[] = { {0,0,0,0.75} };
		emissiveColor[] = { {0,0,0,1} };
	};
};

class CfgLights
{
	class RocketLight;
	class LightPlasmaBlue;
	class SparksLightPlasmaBlue;
	class LightPlasmaOrange : LightPlasmaBlue
	{
		color[] = { 1.3,0.98,0.69 };
	};
	class SparksLightPlasmaOrange : SparksLightPlasmaBlue
	{
		color[] = { 1.3,0.98,0.69 };
	};
	class LightPlasmaYellow : LightPlasmaBlue
	{
		color[] = { 1.6,1.6,0.5 };
	};
	class SparksLightPlasmaYellow : SparksLightPlasmaBlue
	{
		color[] = { 1.6,1.6,0.5 };
	};
	class LightPlasmaPurple : LightPlasmaBlue
	{
		color[] = { 0.4,0.1,1.5 };
	};
	class SparksLightPlasmaPurple : SparksLightPlasmaBlue
	{
		color[] = { 0.4,0.1,1.5 };
	};
	class LightPlasmaWhite : LightPlasmaBlue
	{
		color[] = { 25,25,25 };
	};
	class SparksLightPlasmaWhite : SparksLightPlasmaBlue
	{
		color[] = { 25,25,25 };
	};
	class LightPlasmaBlack : LightPlasmaBlue
	{
		color[] = { 0,0,0 };
	};
	class SparksLightPlasmaBlack : SparksLightPlasmaBlue
	{
		color[] = { 0,0,0 };
	};
	class 288th_plasmaOrange
	{
		color[] = {1,0.37,0,1};
		ambient[] = {1,0.37,0,1};
		diffuse[] = {0.3,0.1,0};
		brightness = 10;
		intensity = 4000;
		drawLight = 0;
		class Attenuation
		{
			start = 0;
			constant = 1;
			linear = 0;
			quadratic = 40;
		};
		position[] = {0,0.2,0};
	};
};

class ImpactPlasmaWhite
{
	class Light1
	{
		simulation = "light";
		type = "LightPlasmaWhite";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class SparksLight
	{
		simulation = "light";
		type = "SparksLightPlasmaWhite";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks1
	{
		simulation = "particles";
		type = "ImpactSparksPlasmaWhite1";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = "ImpactSparksPlasmaWhite2";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSmoke
	{
		simulation = "particles";
		type = "ImpactSmoke";
		position[] = { 0,0,0 };
		intensity = 0;
		interval = 1;
		lifeTime = 0.2;
	};
};
class ImpactPlasmaOrange
{
	class Light1
	{
		simulation = "light";
		type = "LightPlasmaOrange";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class SparksLight
	{
		simulation = "light";
		type = "SparksLightPlasmaOrange";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks1
	{
		simulation = "particles";
		type = "ImpactSparksPlasmaOrange1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = "ImpactSparksPlasmaOrange2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSmoke
	{
		simulation = "particles";
		type = "ImpactSmoke";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.2;
	};
};
class ImpactPlasmaYellow : ImpactPlasmaOrange
{
	class Light1 : Light1
	{
		type = "LightPlasmaYellow";
	};
	class SparksLight : SparksLight
	{
		type = "SparksLightPlasmaYellow";
	};
	class ImpactSparks1 : ImpactSparks1
	{
		type = "ImpactSparksPlasmaYellow1";
	};
	class ImpactSparks2 : ImpactSparks2
	{
		type = "ImpactSparksPlasmaYellow2";
	};
};
class ImpactPlasmaPurple : ImpactPlasmaOrange
{
	class Light1 : Light1
	{
		type = "LightPlasmaPurple";
	};
	class SparksLight : SparksLight
	{
		type = "SparksLightPlasmaPurple";
	};
	class ImpactSparks1 : ImpactSparks1
	{
		type = "ImpactSparksPlasmaPurple1";
	};
	class ImpactSparks2 : ImpactSparks2
	{
		type = "ImpactSparksPlasmaPurple2";
	};
};
class ImpactPlasmaBlack : ImpactPlasmaOrange
{
	class Light1 : Light1
	{
		type = "LightPlasmaBlack";
	};
	class SparksLight : SparksLight
	{
		type = "SparksLightPlasmaBlack";
	};
	class ImpactSparks1 : ImpactSparks1
	{
		type = "ImpactSparksPlasmaBlack1";
	};
	class ImpactSparks2 : ImpactSparks2
	{
		type = "ImpactSparksPlasmaBlack2";
	};
};
class ImpactPlasmaSoda : ImpactPlasmaOrange
{
	class Light1 : Light1
	{
		type = "LightPlasmaBlack";
	};
	class SparksLight : SparksLight
	{
		type = "SparksLightPlasmaBlack";
	};
	class ImpactSparks1 : ImpactSparks1
	{
		type = "ImpactSparksPlasmaBlue1";
	};
	class ImpactSparks2 : ImpactSparks2
	{
		type = "ImpactSparksPlasmaBlue2";
	};
};
class 288th_plasma_blue
{
	class JLTS_Blue_plasma
	{
		simulation = "light";
		type = "PlasmaLight_Blue";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 6;
	};
};
class 288th_plasma_yellow
{
	class JLTS_Yellow_plasma
	{
		simulation = "light";
		type = "288th_plasmaOrange";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 6;
	};
};
class 288th_plasma_red
{
	class JLTS_Red_plasma
	{
		simulation = "light";
		type = "288th_plasmaRed";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 6;
	};
};
class 288th_plasma_green
{
	class JLTS_Green_plasma
	{
		simulation = "light";
		type = "288th_plasmaGreen";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 6;
	};
};
class 288th_plasma_orange
{
	class JLTS_Orange_plasma
	{
		simulation = "light";
		type = "288th_plasmaOrange";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 6;
	};
};

class cfgAmmo
{
	// Ammo Base Classes
	class BulletBase;
	class SensorTemplateIR;
	class M_Titan_AT;
	class OPTRE_M41_Rocket_HEAT_SACLOS;
	class OPTRE_M41_Rocket_HEAP;
	class OPTRE_M41_Rocket_HEAT_Laser;
	class OPTRE_M41_Rocket_HEAT_G;
	class ACE_SatchelCharge_Remote_Ammo_Thrown;
	class SmokeShell;
	class B_127x108_APDS;
	class B_127x108_Ball;
	class B_9x21_Ball;
	class B_45ACP_Ball;
	class B_762x51_Ball;
	class ACE_762x51_Ball_Subsonic;
	class OPTRE_FC_Bolt_Base;
	class ACE_G_40mm_HE;
	class OPTRE_MAC_Round;
	class OPTRE_8Gauge_Pellets;
	class B_30mm_APFSDS;
	class OPTRE_25x130mm_Slug;
	class G_40mm_HE;
	class WNZ_EMP127_ammo;
	class OPTRE_M_C2GMLS_AA;
	class OPTRE_B_145x114_APFSDS;
	class M_NLAW_AT_F;
	class G_40mm_HEDP;
	class B_338_Ball;
	class B_127x99_Ball;
	class OPTRE_B_762x51_Ball;
	class OPTRE_12Gauge_Smoke;
	class B_127x33_Ball;
	class FlareCore;
    class FlareBase: FlareCore {
        timeToLive = 90;
        brightness = 150000;
		intensity = 200000;
        flareSize = 50;
    };
    class F_40mm_White: FlareBase {
        timeToLive = 120;
        brightness = 150000;
		intensity = 200000;
        flareSize = 50;
    };
	class F_40mm_Red;
	class F_40mm_Green;
	class F_40mm_Yellow;
	class F_40mm_Cir: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.01,0.01,0.01,0};
		smokeColor[] = {0.5,0.5,0.25,0};
		brightness = 12;
		intensity = 10000;
        flareSize = 1;
	};
    class Flare_82mm_AMOS_White: FlareCore {
        timeToLive = 90;
        brightness = 80000;
		intensity = 200000;
        flareSize = 50;
    };

	
	//custom 6.5 Rifle Ammo
	class 65x85_APFS : B_762x51_Ball
	{
		caliber = 4.0;
		hit = 16;
		typicalSpeed = 600;
		model = "\288th_Weapons\Data\Ammo\Laser_Red\laser_red.p3d";
		timeToLive = 15;
		tracerScale = 1.0;
		tracerStartTime = 1;
		tracerEndTime = 0.05;
		tracersEvery = 3;
		ACE_muzzleVelocities[] = {950,962,968,972,978};
		ACE_barrelLengths[] = {330.2,406.4,508.0,609.6,660.4};
	};
	class 65x85_APFS_Tracers : 65x85_APFS
	{
		caliber = 4.0;
		hit = 16;
		typicalSpeed = 600;
		model = "\288th_Weapons\Data\Ammo\Laser_Red\laser_red.p3d";
		tracerStartTime = 0;
		tracerEndTime = 10;
		tracersEvery = 1;
		tracerScale = 1.0;
	};
	class 65x85_HEDP : 65x85_APFS
	{
		craterEffects = "ExploAmmoCrater";
		explosive = 0.25;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 18;
		indirectHit = 12;
		indirectHitRange = 0.25;
	};
	class 65x85_DMR : 65x85_APFS
	{
		caliber = 4.0;
		hit = 16;
		typicalSpeed = 600;
		indirectHit = 8;
		indirectHitRange = 0.15;
		explosive = 0.05;
		cost = 100;
		//typicalSpeed = 850;
		//caliber = 1.75;
		craterEffects = "";
		explosionEffects = "";
		explosionSoundEffect = "";
		model = "\288th_Weapons\Data\Ammo\Laser_Green\laser_green.p3d";
		timeToLive = 12;
		tracerScale = .95;
		tracerStartTime = 1;
		tracerEndTime = 0.05;
	};
	class 65x85_SS :  ACE_762x51_Ball_Subsonic
	{
		airFriction = -0.00060194;
        caliber = 2;
        hit = 9;
        typicalSpeed = 320;
        visibleFire = 1;
        audibleFire = 5;
        dangerRadiusBulletClose = 4;
        suppressionRadiusBulletClose = 2;
        ACE_caliber = 7.823;
        ACE_bulletLength = 34.036;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.235};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {305,325,335,340};
        ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
        class CamShakeExplode
        {
            power = 2.23607;
            duration = 0.4;
            frequency = 20;
            distance = 6.7082;
        };
	};
	class 65x85_APFS_Incendiary : 65x85_APFS
	{
		model = "\288th_Weapons\Data\Ammo\Laser_Red\laser_red.p3d";
		timeToLive = 2;
		effectFly = "288th_flametrail";
	};
	class 65x85_APFS_flechette : 65x85_APFS
	{
		timeToLive = 5;
		caliber = 5.0;
		hit = 5;
	};
	class 65x85_EHP : B_762x51_Ball
	{
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0.0;
		cost = 100;
		typicalSpeed = 550;
		caliber = 2.0;
		model = "\288th_Weapons\Data\Ammo\Laser_orange\laser_orange.p3d";
		timeToLive = 15;
		tracerScale = 1.0;
		tracerStartTime = .1;
		tracerEndTime = 10;
		tracersEvery = 1;
	};
	class 65x85_Silver : 65x85_APFS
	{
		hit = 17.5;
	};

	//custom 45 Ammo
	class 45_ball : B_762x51_Ball
	{
		cartridge = "FxCartridge_9mm";
		model = "\288th_Weapons\Data\Ammo\Laser_Red\laser_Red.p3d";
		scope = 2;
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0.0;
		cost = 100;
		typicalSpeed = 600;
		caliber = 2;
		explosive = 0.0;
		timeToLive = 10;
		tracerScale = 0.7;
		tracerstarttime = 0.05;
		tracerendtime = 10;
		tracersEvery = 1;
	};
	class 45_AP : 45_ball
	{
		hit = 15.5;
		caliber = 2.9;
		typicalSpeed = 708;
	};
	class 45_EHP : 45_ball
	{
		hit = 18;
		caliber = 1.8;
	};
	class 45_Silver : 45_ball
	{
		hit = 16.5;
	};

	//Buckshot 
	class 288th_Buckshot_Pellet : OPTRE_8Gauge_Pellets
	{
		//cartridge = "288th_fx_slug_red";
		submunitionConeType[] = { "poissondisc",12 };
		/*submunitionConeAngle[] = {0.5};
		submunitionConeAngleHorizontal[] = {4};*/
		//submunitionConeAngle = 0.8;
		caliber = 4;
		hit = 24;
		thrustTime = 6;
		thrust = 600;
		timeToLive = 10;
		//submunitionAmmo = "B_50BW_Ball_F";
		submunitionAmmo = "65x85_EHP";
		triggerDistance = 100;
		triggerTime = 0.05;
	};
	class 288th_HEDP_Buckshot : 288th_Buckshot_Pellet
	{
		//cartridge = "288th_fx_slug_purple";
		submunitionAmmo = "65x85_HEDP";
	};
	class 288th_Incendiary_Buckshot : 288th_Buckshot_Pellet
	{
		//cartridge = "288th_fx_slug_dred";
		submunitionConeType[] = { "poissondisc",8 };
		submunitionAmmo = "65x85_APFS_Incendiary";
	};
	class 288th_flechette_Buckshot : 288th_Buckshot_Pellet
	{
		//cartridge = "288th_fx_slug_dred";
		submunitionConeType[] = { "poissondisc",10 };
		submunitionAmmo = "65x85_APFS_flechette";
	};
	class 288th_Plasma_Rainbow_Buckshot : 288th_Buckshot_Pellet
	{
		//cartridge = "288th_fx_slug_red";
		submunitionConeType[] = { "poissondisc",8 };
		submunitionAmmo[] = {"65x85_APFS",0.1,"288th_Plasma_Blue",0.1,"288th_Plasma_Green",0.1,"288th_Plasma_Red",0.1,"288th_Plasma_Pink",0.1,"288th_Plasma_Orange",0.1,"288th_Plasma_Yellow",0.1,"288th_Plasma_Purple",0.1,"288th_Plasma_White",0.1,"288th_Plasma_Black",0.1};
	};
	
	//custom Plasma Bullets
	class 288th_Plasma_Blue : 65x85_APFS
	{
		timeToLive = 15;
		tracerScale = 1;
		tracerStartTime = 0.0099999998;
		tracerEndTime = 10;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		model = "\OPTRE_FC_Weapons\data\bolt_blue.p3d";
		airFriction = 0;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaBlue";
			Hit_Foliage_Dead = "ImpactPlasmaBlue";
			Hit_Foliage_Green_big = "ImpactPlasmaBlue";
			Hit_Foliage_Palm = "ImpactPlasmaBlue";
			Hit_Foliage_Pine = "ImpactPlasmaBlue";
			hitFoliage = "ImpactPlasmaBlue";
			hitGlass = "ImpactPlasmaBlue";
			hitGlassArmored = "ImpactPlasmaBlue";
			hitWood = "ImpactPlasmaBlue";
			hitHay = "ImpactPlasmaBlue";
			hitMetal = "ImpactPlasmaBlue";
			hitMetalPlate = "ImpactPlasmaBlue";
			hitBuilding = "ImpactPlasmaBlue";
			hitPlastic = "ImpactPlasmaBlue";
			hitRubber = "ImpactPlasmaBlue";
			hitTyre = "ImpactPlasmaBlue";
			hitConcrete = "ImpactPlasmaBlue";
			hitMan = "ImpactPlasmaBlue";
			hitGroundSoft = "ImpactPlasmaBlue";
			hitGroundRed = "ImpactPlasmaBlue";
			hitGroundHard = "ImpactPlasmaBlue";
			hitWater = "ImpactPlasmaBlue";
			hitVirtual = "ImpactPlasmaBlue";
		};
		soundImpactDefault1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactTyre[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1.25,1,100};
		soundDefault2[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact2.ogg",1.25,1,100};
		soundDefault3[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact3.ogg",1.25,1,100};
		soundDefault4[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact4.ogg",1.25,1,100};
		soundDefault5[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact5.ogg",1.25,1,100};
		soundDefault6[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact6.ogg",1.25,1,100};
		soundDefault7[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact7.ogg",1.25,1,100};
		soundGroundSoft1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundGroundHard1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundGlass1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundGlassArmored1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundMetal1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundVehiclePlate1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundWood1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundHitBody1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1.1,1,100};
		soundHitBuilding1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundHitFoliage1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundPlastic1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundConcrete1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundTyre1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundRubber1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundWater1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundMetalInt1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		soundVehiclePlateInt1[] = {"OPTRE_FC_Weapons\Data\sounds\Plasma_Impact1.ogg",1,1,100};
		hitArmorInt[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitMetalInt[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitGroundSoft[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitGroundHard[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitMan[] = {"soundHitBody1",1};
		hitArmor[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitBuilding[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitFoliage[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitWood[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitGlass[] = {"soundGlass1",1};
		hitGlassArmored[] = {"soundGlassArmored1",1};
		hitConcrete[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitTyre[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitRubber[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitPlastic[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitMetal[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitMetalplate[] = {"soundDefault1",0.2,"soundDefault3",0.2,"soundDefault5",0.2,"soundDefault6",0.2,"soundDefault7",0.2};
		hitWater[] = {"soundWater1",1};
	};
	class 288th_Plasma_Green : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_green.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaGreen";
			Hit_Foliage_Dead = "ImpactPlasmaGreen";
			Hit_Foliage_Green_big = "ImpactPlasmaGreen";
			Hit_Foliage_Palm = "ImpactPlasmaGreen";
			Hit_Foliage_Pine = "ImpactPlasmaGreen";
			hitFoliage = "ImpactPlasmaGreen";
			hitGlass = "ImpactPlasmaGreen";
			hitGlassArmored = "ImpactPlasmaGreen";
			hitWood = "ImpactPlasmaGreen";
			hitHay = "ImpactPlasmaGreen";
			hitMetal = "ImpactPlasmaGreen";
			hitMetalPlate = "ImpactPlasmaGreen";
			hitBuilding = "ImpactPlasmaGreen";
			hitPlastic = "ImpactPlasmaGreen";
			hitRubber = "ImpactPlasmaGreen";
			hitTyre = "ImpactPlasmaGreen";
			hitConcrete = "ImpactPlasmaGreen";
			hitMan = "ImpactPlasmaGreen";
			hitGroundSoft = "ImpactPlasmaGreen";
			hitGroundRed = "ImpactPlasmaGreen";
			hitGroundHard = "ImpactPlasmaGreen";
			hitWater = "ImpactPlasmaGreen";
			hitVirtual = "ImpactPlasmaGreen";
		};
	};
	class 288th_Plasma_Red : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaRed";
			Hit_Foliage_Dead = "ImpactPlasmaRed";
			Hit_Foliage_Green_big = "ImpactPlasmaRed";
			Hit_Foliage_Palm = "ImpactPlasmaRed";
			Hit_Foliage_Pine = "ImpactPlasmaRed";
			hitFoliage = "ImpactPlasmaRed";
			hitGlass = "ImpactPlasmaRed";
			hitGlassArmored = "ImpactPlasmaRed";
			hitWood = "ImpactPlasmaRed";
			hitHay = "ImpactPlasmaRed";
			hitMetal = "ImpactPlasmaRed";
			hitMetalPlate = "ImpactPlasmaRed";
			hitBuilding = "ImpactPlasmaRed";
			hitPlastic = "ImpactPlasmaRed";
			hitRubber = "ImpactPlasmaRed";
			hitTyre = "ImpactPlasmaRed";
			hitConcrete = "ImpactPlasmaRed";
			hitMan = "ImpactPlasmaRed";
			hitGroundSoft = "ImpactPlasmaRed";
			hitGroundRed = "ImpactPlasmaRed";
			hitGroundHard = "ImpactPlasmaRed";
			hitWater = "ImpactPlasmaRed";
			hitVirtual = "ImpactPlasmaRed";
		};
	};
	class 288th_Plasma_Pink : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_purple.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaPink";
			Hit_Foliage_Dead = "ImpactPlasmaPink";
			Hit_Foliage_Green_big = "ImpactPlasmaPink";
			Hit_Foliage_Palm = "ImpactPlasmaPink";
			Hit_Foliage_Pine = "ImpactPlasmaPink";
			hitFoliage = "ImpactPlasmaPink";
			hitGlass = "ImpactPlasmaPink";
			hitGlassArmored = "ImpactPlasmaPink";
			hitWood = "ImpactPlasmaPink";
			hitHay = "ImpactPlasmaPink";
			hitMetal = "ImpactPlasmaPink";
			hitMetalPlate = "ImpactPlasmaPink";
			hitBuilding = "ImpactPlasmaPink";
			hitPlastic = "ImpactPlasmaPink";
			hitRubber = "ImpactPlasmaPink";
			hitTyre = "ImpactPlasmaPink";
			hitConcrete = "ImpactPlasmaPink";
			hitMan = "ImpactPlasmaPink";
			hitGroundSoft = "ImpactPlasmaPink";
			hitGroundRed = "ImpactPlasmaPink";
			hitGroundHard = "ImpactPlasmaPink";
			hitWater = "ImpactPlasmaPink";
			hitVirtual = "ImpactPlasmaPink";
		};
	};
	class 288th_Plasma_Orange : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaOrange";
			Hit_Foliage_Dead = "ImpactPlasmaOrange";
			Hit_Foliage_Green_big = "ImpactPlasmaOrange";
			Hit_Foliage_Palm = "ImpactPlasmaOrange";
			Hit_Foliage_Pine = "ImpactPlasmaOrange";
			hitFoliage = "ImpactPlasmaOrange";
			hitGlass = "ImpactPlasmaOrange";
			hitGlassArmored = "ImpactPlasmaOrange";
			hitWood = "ImpactPlasmaOrange";
			hitHay = "ImpactPlasmaOrange";
			hitMetal = "ImpactPlasmaOrange";
			hitMetalPlate = "ImpactPlasmaOrange";
			hitBuilding = "ImpactPlasmaOrange";
			hitPlastic = "ImpactPlasmaOrange";
			hitRubber = "ImpactPlasmaOrange";
			hitTyre = "ImpactPlasmaOrange";
			hitConcrete = "ImpactPlasmaOrange";
			hitMan = "ImpactPlasmaOrange";
			hitGroundSoft = "ImpactPlasmaOrange";
			hitGroundRed = "ImpactPlasmaOrange";
			hitGroundHard = "ImpactPlasmaOrange";
			hitWater = "ImpactPlasmaOrange";
			hitVirtual = "ImpactPlasmaOrange";
		};
	};
	class 288th_Plasma_Yellow : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaYellow";
			Hit_Foliage_Dead = "ImpactPlasmaYellow";
			Hit_Foliage_Green_big = "ImpactPlasmaYellow";
			Hit_Foliage_Palm = "ImpactPlasmaYellow";
			Hit_Foliage_Pine = "ImpactPlasmaYellow";
			hitFoliage = "ImpactPlasmaYellow";
			hitGlass = "ImpactPlasmaYellow";
			hitGlassArmored = "ImpactPlasmaYellow";
			hitWood = "ImpactPlasmaYellow";
			hitHay = "ImpactPlasmaYellow";
			hitMetal = "ImpactPlasmaYellow";
			hitMetalPlate = "ImpactPlasmaYellow";
			hitBuilding = "ImpactPlasmaYellow";
			hitPlastic = "ImpactPlasmaYellow";
			hitRubber = "ImpactPlasmaYellow";
			hitTyre = "ImpactPlasmaYellow";
			hitConcrete = "ImpactPlasmaYellow";
			hitMan = "ImpactPlasmaYellow";
			hitGroundSoft = "ImpactPlasmaYellow";
			hitGroundRed = "ImpactPlasmaYellow";
			hitGroundHard = "ImpactPlasmaYellow";
			hitWater = "ImpactPlasmaYellow";
			hitVirtual = "ImpactPlasmaYellow";
		};
	};
	class 288th_Plasma_Purple : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaPurple";
			Hit_Foliage_Dead = "ImpactPlasmaPurple";
			Hit_Foliage_Green_big = "ImpactPlasmaPurple";
			Hit_Foliage_Palm = "ImpactPlasmaPurple";
			Hit_Foliage_Pine = "ImpactPlasmaPurple";
			hitFoliage = "ImpactPlasmaPurple";
			hitGlass = "ImpactPlasmaPurple";
			hitGlassArmored = "ImpactPlasmaPurple";
			hitWood = "ImpactPlasmaPurple";
			hitHay = "ImpactPlasmaPurple";
			hitMetal = "ImpactPlasmaPurple";
			hitMetalPlate = "ImpactPlasmaPurple";
			hitBuilding = "ImpactPlasmaPurple";
			hitPlastic = "ImpactPlasmaPurple";
			hitRubber = "ImpactPlasmaPurple";
			hitTyre = "ImpactPlasmaPurple";
			hitConcrete = "ImpactPlasmaPurple";
			hitMan = "ImpactPlasmaPurple";
			hitGroundSoft = "ImpactPlasmaPurple";
			hitGroundRed = "ImpactPlasmaPurple";
			hitGroundHard = "ImpactPlasmaPurple";
			hitWater = "ImpactPlasmaPurple";
			hitVirtual = "ImpactPlasmaPurple";
		};
	};
	class 288th_Plasma_White : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaWhite";
			Hit_Foliage_Dead = "ImpactPlasmaWhite";
			Hit_Foliage_Green_big = "ImpactPlasmaWhite";
			Hit_Foliage_Palm = "ImpactPlasmaWhite";
			Hit_Foliage_Pine = "ImpactPlasmaWhite";
			hitFoliage = "ImpactPlasmaWhite";
			hitGlass = "ImpactPlasmaWhite";
			hitGlassArmored = "ImpactPlasmaWhite";
			hitWood = "ImpactPlasmaWhite";
			hitHay = "ImpactPlasmaWhite";
			hitMetal = "ImpactPlasmaWhite";
			hitMetalPlate = "ImpactPlasmaWhite";
			hitBuilding = "ImpactPlasmaWhite";
			hitPlastic = "ImpactPlasmaWhite";
			hitRubber = "ImpactPlasmaWhite";
			hitTyre = "ImpactPlasmaWhite";
			hitConcrete = "ImpactPlasmaWhite";
			hitMan = "ImpactPlasmaWhite";
			hitGroundSoft = "ImpactPlasmaWhite";
			hitGroundRed = "ImpactPlasmaWhite";
			hitGroundHard = "ImpactPlasmaWhite";
			hitWater = "ImpactPlasmaWhite";
			hitVirtual = "ImpactPlasmaWhite";
		};
	};
	class 288th_Plasma_Black : 288th_Plasma_Blue
	{
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaBlack";
			Hit_Foliage_Dead = "ImpactPlasmaBlack";
			Hit_Foliage_Green_big = "ImpactPlasmaBlack";
			Hit_Foliage_Palm = "ImpactPlasmaBlack";
			Hit_Foliage_Pine = "ImpactPlasmaBlack";
			hitFoliage = "ImpactPlasmaBlack";
			hitGlass = "ImpactPlasmaBlack";
			hitGlassArmored = "ImpactPlasmaBlack";
			hitWood = "ImpactPlasmaBlack";
			hitHay = "ImpactPlasmaBlack";
			hitMetal = "ImpactPlasmaBlack";
			hitMetalPlate = "ImpactPlasmaBlack";
			hitBuilding = "ImpactPlasmaBlack";
			hitPlastic = "ImpactPlasmaBlack";
			hitRubber = "ImpactPlasmaBlack";
			hitTyre = "ImpactPlasmaBlack";
			hitConcrete = "ImpactPlasmaBlack";
			hitMan = "ImpactPlasmaBlack";
			hitGroundSoft = "ImpactPlasmaBlack";
			hitGroundRed = "ImpactPlasmaBlack";
			hitGroundHard = "ImpactPlasmaBlack";
			hitWater = "ImpactPlasmaBlack";
			hitVirtual = "ImpactPlasmaBlack";
		};
	};
	class 288th_Plasma_Soda : B_762x51_Ball
	{
		hit = 24.0;
		scope = 1;
		scopeArsenal = 1;
		typicalSpeed = 1000;
		caliber = 4.5;
		//timeToLive = 10;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 15;
		//model = "\EMP_Systems\blue_tracers\tracer_blue";
		//tracerStartTime = 0;
		//tracerEndTime = 10;
		tracersEvery = 0.75;
		//tracerScale = 1.3;
		coefGravity = 0;
		sideairFriction = 0;
		waterFriction = 0;
		aiAmmoUsageFlags = "64 + 128 + 256";
		cost = 15;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactPlasmaSoda";
			Hit_Foliage_Dead = "ImpactPlasmaSoda";
			Hit_Foliage_Green_big = "ImpactPlasmaSoda";
			Hit_Foliage_Palm = "ImpactPlasmaSoda";
			Hit_Foliage_Pine = "ImpactPlasmaSoda";
			hitFoliage = "ImpactPlasmaSoda";
			hitGlass = "ImpactPlasmaSoda";
			hitGlassArmored = "ImpactPlasmaSoda";
			hitWood = "ImpactPlasmaSoda";
			hitHay = "ImpactPlasmaSoda";
			hitMetal = "ImpactPlasmaSoda";
			hitMetalPlate = "ImpactPlasmaSoda";
			hitBuilding = "ImpactPlasmaSoda";
			hitPlastic = "ImpactPlasmaSoda";
			hitRubber = "ImpactPlasmaSoda";
			hitTyre = "ImpactPlasmaSoda";
			hitConcrete = "ImpactPlasmaSoda";
			hitMan = "ImpactPlasmaSoda";
			hitGroundSoft = "ImpactPlasmaSoda";
			hitGroundRed = "ImpactPlasmaSoda";
			hitGroundHard = "ImpactPlasmaSoda";
			hitWater = "ImpactPlasmaSoda";
			hitVirtual = "ImpactPlasmaSoda";
		};
		model = "\288th_Weapons\Data\Ammo\Laser_Blue\laser_blue.p3d";
		cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 5;
		tracerscale = 1.1;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		effectfly = "288th_plasma_blue";
		brightness = 1000;
		timetolive = 5;
		airfriction = 0;
		deflecting = 0;
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		visibleFire = 0;
		ACE_bulletmass = 15;
		//ACE_ballisticCoefficients[] = {1};
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {838,892,910,919,924};
		ACE_barrelLengths[] = {500};
	};
	class 288th_Soda_Buckshot : 288th_Buckshot_Pellet
	{
		//cartridge = "288th_fx_slug_dred";
		submunitionConeType[] = { "poissondisc",12 };
		submunitionAmmo = "288th_Plasma_Soda";
	};

	//custom Railgun Ammo
	class 288_Railgun : OPTRE_25x130mm_Slug
	{
		hit = 250;
		indirectHit = 30;
		indirectHitRange = 0.50;
		caliber = 50;
		timeToLive = 10;
		typicalSpeed = 5000;
	};
	class 288_Railgun_1 : 288_Railgun
	{
		hit = 150;
		indirectHit = 30;
		indirectHitRange = 0.50;
		caliber = 25;
		timeToLive = 10;
		typicalSpeed = 2000;
		class CamShakeExplode {};
		class CamShakeFire {};
		class CamShakeHit {};
		class CamShakePlayerFire {};
	};
	class 288_SRS99XT_Slugs : B_127x99_Ball
	{
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 10;
		timeToLive = 10;
		typicalSpeed = 1500;
		coefGravity = 0;
		airfriction = 0;
		sideAirFriction = 0;
	};

	class 288th_EMP : WNZ_EMP127_ammo
	{
		hit = 0.1;
		indirectHit = 0;
		indirectHitRange = 0.0;
		scope = 1;
		scopeArsenal = 1;
		timeToLive = 15;
		typicalSpeed = 500;
		caliber = 0.1;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 15;
		model = "\EMP_Systems\blue_tracers\tracer_blue";
		explosive = 0.1;
		ExplosionEffects = "WNZ_EMPGrenadeExplosion";
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		SoundSetExplosion[] = { "EMP_Sparks_SoundSet_GL" };
		tracerScale = 1;
		tracerStartTime = 0.0099999998;
		tracerEndTime = 10;
		airFriction = -0.000103711;
	};
	class 288th_KO_shell : 288th_EMP
	{
		typicalSpeed = 400;
		submunitionConeAngle = 0.01;
		submunitionConeType[] = { "poissondisc",4 };
		submunitionAmmo = "288th_Taser_ammo_KO";
		triggerDistance = 0.5;
		triggerTime = 0.01;
	};

	//Custom M41 Ammo
	class 288th_M41_Rocket_HEAT_SACLOS: M_Titan_AT
	{
		//model = "\288th_Weapons\Data\Ammo\trilaunchermissile.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Titan_AT_long";
		effectsMissile="missile3";
		timeToLive=30;
		cost=500;
		aiAmmoUsageFlags="128 + 512 + 256";
		allowAgainstInfantry=0;
		hit = 1400;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.25;
		fuseDistance = 20;
		irLock=0;
		airLock=2;
		lockType=1;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.85000002;
		manualControl=1;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		simulationStep=0.0020000001;
		airFriction=0.145;
		sideAirFriction=0.30000001;
		maneuvrability=14;
		coefGravity=1;
		missileKeepLockedCone=360;
		missileLockCone=270;
		missileLockMaxDistance=5000;
		missileLockMinDistance=20;
		missileLockMaxSpeed=350;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		initTime=0.1;
		thrustTime=10;
		thrust=100;
		maxSpeed=300;
		typicalSpeed=200;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=340;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						maxTrackableATL=4000;
					};
				};
			};
		};
		class ace_missileguidance: ace_missileguidance_type_HOT
		{
			enabled=1;
		};
	};
	class 288th_M41_Rocket_HE : OPTRE_M41_Rocket_HEAP
	{
		//model = "\288th_Weapons\Data\Ammo\trilaunchermissile.p3d";
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		hit = 150;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 1;
		simulation = "shotRocket";
		irLock = 0;
		airLock = 0;
		cmImmunity = 0.85;
		manualControl = 0;
		weaponLockSystem = 0;
		maxSpeed=300;
		typicalSpeed=200;
		class ace_missileguidance
		{
			enabled = 0;
		};
	};
	class 288th_M41_Rocket_Flame : 288th_M41_Rocket_HE
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		hit = 20;
		indirectHit = 50;
		indirectHitRange = 5;
		explosive = 1;
		simulation = "shotRocket";
		irLock = 0;
		airLock = 0;
		cmImmunity = 0.85;
		manualControl = 0;
		weaponLockSystem = 0;
		WBK_UseDisintegrate = "true";
		explosionEffects = "288th_flameExplosion";
		class ace_missileguidance
		{
			enabled = 0;
		};
	};
	class 288th_M41_Rocket_HEAT_Laser : OPTRE_M41_Rocket_HEAT_Laser
	{
		//model = "\288th_Weapons\Data\Ammo\trilaunchermissile.p3d";
		HIT = 1000;
		indirectHit = 40;
		indirectHitRange = 6;
		explosive = 0.25;
		fuseDistance = 20;
		irLock = 0;
		airLock = 0;
		laserLock = 1;
		nvLock = 0;
		cmImmunity = 0.85;
		manualControl = 0;
		maxControlRange = 10000;
		weaponLockSystem = "4 + 16";
		airFriction = 0.145;
		sideAirFriction = 0.1;
		coefGravity = 1;
		missileKeepLockedCone = 360;
		missileLockCone = 300;
		trackOversteer = 1;
		trackLead = 0.5;
		initTime = 0.1;
		thrustTime = 10;
		thrust = 10;
		maxSpeed=300;
		typicalSpeed=200;
		maneuvrability = 25;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.007;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL"};
			seekerAngle = 300;
			seekerAccuracy = 1;
			seekerMinRange = 5;
			seekerMaxRange = 2500;
			defaultAttackProfile = "DIR";
			attackProfiles[] = {"DIR"};
		};
	};
	class 288th_M41_Rocket_HEAT_Thermal : OPTRE_M41_Rocket_HEAT_G
	{
		hit = 1400;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.25;
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		//model = "\288th_Weapons\Data\Ammo\trilaunchermissile.p3d";
		missileKeepLockedCone = 360;
		missileLockCone = 300;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 10;
		missileLockMaxSpeed = 300;
		cmImmunity = 0.85;
		maneuvrability = 20;
		fuseDistance = 20;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		initTime=0.1;
		thrustTime=15;
		maxSpeed=300;
		typicalSpeed=200;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=340;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						maxTrackableATL=4000;
					};
				};
			};
		};
	};

	//Custom RR-553 Ammo
	class R_MRAAWS_HEAT_F;
	class 288th_50x137_HEAT: R_MRAAWS_HEAT_F
	{
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		caliber = 10;
		hit = 950;
		indirectHit = 200;
		indirectHitRange = 0.05;
		timeToLive = 30;
		allowAgainstInfantry = 0;
	};
	class R_MRAAWS_HE_F;
	class 288th_50X137_HE: R_MRAAWS_HE_F
	{
		caliber = 0;
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 5;
		allowAgainstInfantry = 1;
	};
	class 288th_50x137_PEN: 288th_50X137_HE
	{
		caliber = 30;
		hit = 1500;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		fuseDistance = 0;
		allowAgainstInfantry = 0;
	};
	class M_Titan_AP;
	class ammo_Penetrator_MRAAWS;
	class ammo_Penetrator_MRAAWS_HEAT55;
	class R_MRAAWS_HEAT55_F;
	
	class MAA_M_GMM_HEAT: M_Titan_AT
	{
		caliber = 10;
		hit = 950;
		indirectHit = 200;
		indirectHitRange = 0.05;
		timeToLive = 30;
		allowAgainstInfantry = 0;
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		/*hit=150;
		indirectHit=14;
		indirectHitRange=3;*/
		explosive=1;
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_MRAAWS";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		cost=500;
		initTime=0.1;
		maxControlRange=2500;
	};
	class MAA_M_GMM_HE: M_Titan_AP
	{
		hit=200;
		indirectHit=50;
		indirectHitRange=6;
		warheadName="HE";
	};
	class MAA_M_GMM_MT: M_Titan_AT
	{
		hit=200;
		indirectHit=40;
		indirectHitRange=5;
		warheadName="HE";
		submunitionAmmo="MAA_Penetrator_MT756";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		explosionEffectsDir="explosionDir";
	};
	class MAA_M_ASM509: R_MRAAWS_HE_F
	{
		hit=300;
		indirectHit=50;
		indirectHitRange=10;
		warheadName="HE";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		explosionEffectsDir="explosionDir";
	};
	class MAA_M_HEDP502: R_MRAAWS_HEAT55_F
	{
		hit=150;
		indirectHit=40;
		caliber = 5;
		indirectHitRange=6;
		warheadName="HE";
		submunitionAmmo="MAA_Penetrator_HEDP502";
	};
	class MAA_Penetrator_HEDP502: ammo_Penetrator_MRAAWS_HEAT55
	{
		caliber=10;
		hit=400;
	};
	class MAA_M_ILLUM545: R_MRAAWS_HE_F
	{
		hit=30;
		explosive=0;
		brightness=120;
		caliber=1;
		indirectHit=0;
		indirectHitRange=2;
		submunitionAmmo="F_40mm_White";
		triggerOnImpact=1;
		ExplosionEffects="";
		explosionEffectsDir="";
		deleteParentWhenTriggered=1;
		triggerTime=0.7;
		triggerDistance=5;
		submunitionInitialOffset[]={0,0,0.1};
		submunitionInitSpeed=1;
		//submunitionParentSpeedCoef = 1;
	};
	class MAA_M_SMOKE469: R_MRAAWS_HE_F
	{
		hit=30;
		explosive=0;
		caliber=1;
		indirectHit=0;
		indirectHitRange=2;
		submunitionAmmo="G_40mm_Smoke";
		submunitionConeType[] = {"poissondisccenter",5};
		submunitionConeAngle = 20;
		submunitionConeAngleHorizontal = 50;
		triggerDistance=5;
		triggerOnImpact=1;
		ExplosionEffects="";
		explosionEffectsDir="";
		deleteParentWhenTriggered=1;
		submunitionInitSpeed=0;
	};
	class MAA_M_MT756: R_MRAAWS_HEAT55_F
	{
		hit=200;
		indirectHit=40;
		indirectHitRange=5;
		warheadName="HE";
		submunitionAmmo="MAA_Penetrator_MT756";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		explosionEffectsDir="explosionDir";
	};
	class MAA_Penetrator_MT756: ammo_Penetrator_MRAAWS
	{
		caliber=40;
		warheadName="TandemHEAT";
		hit=600;
	};
	class MAA_M_HE441_AB100: R_MRAAWS_HE_F
	{
		timeToLive=0.2857;
	};
	class MAA_M_HE441_AB250: R_MRAAWS_HE_F
	{
		timeToLive=0.71425;
	};
	class MAA_M_HE441_AB500: R_MRAAWS_HE_F
	{
		timeToLive=1.4285;
	};
	class OPAEX_M41_Rocket_HEAT_SACLOS : M_Titan_AT
	{
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Titan_AT_long";
		effectsMissile="missile3";
		timeToLive=30;
		cost=500;
		aiAmmoUsageFlags="128 + 512 + 256";
		allowAgainstInfantry=0;
		hit = 1400;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.25;
		fuseDistance = 20;
		irLock=0;
		airLock=2;
		lockType=1;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.85000002;
		manualControl=1;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		simulationStep=0.0020000001;
		airFriction=0.145;
		sideAirFriction=0.30000001;
		maneuvrability=14;
		coefGravity=1;
		missileKeepLockedCone=360;
		missileLockCone=270;
		missileLockMaxDistance=5000;
		missileLockMinDistance=20;
		missileLockMaxSpeed=350;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		initTime=0.1;
		thrustTime=10;
		thrust=100;
		maxSpeed=300;
		typicalSpeed=200;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=340;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						maxTrackableATL=4000;
					};
				};
			};
		};
		class ace_missileguidance: ace_missileguidance_type_HOT
		{
			enabled=1;
		};
	};
	class OPAEX_M41_Rocket_HE : OPTRE_M41_Rocket_HEAP
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		hit = 150;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 1;
		simulation = "shotRocket";
		irLock = 0;
		airLock = 0;
		cmImmunity = 0.85;
		manualControl = 0;
		weaponLockSystem = 0;
		maxSpeed=300;
		typicalSpeed=200;
		class ace_missileguidance
		{
			enabled = 0;
		};
	};
	class OPAEX_M41_Rocket_HEAT_Laser : OPTRE_M41_Rocket_HEAT_Laser
	{
		hit = 1400;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.25;
		fuseDistance = 20;
		irLock = 0;
		airLock = 0;
		laserLock = 1;
		nvLock = 0;
		cmImmunity = 1;
		manualControl = 0;
		maxControlRange = 10000;
		weaponLockSystem = "4 + 16";
		airFriction = 0.145;
		sideAirFriction = 0.1;
		coefGravity = 1;
		missileKeepLockedCone = 360;
		missileLockCone = 300;
		trackOversteer = 1;
		trackLead = 0.5;
		initTime = 0.1;
		thrustTime = 10;
		thrust = 10;
		maxSpeed=300;
		typicalSpeed=200;
		maneuvrability = 25;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.007;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL"};
			seekerAngle = 300;
			seekerAccuracy = 1;
			seekerMinRange = 5;
			seekerMaxRange = 2500;
			defaultAttackProfile = "DIR";
			attackProfiles[] = {"DIR"};
		};
	};
	class OPAEX_M41_Rocket_HEAT_Thermal : OPTRE_M41_Rocket_HEAT_G
	{
		hit = 1400;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.25;
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		missileKeepLockedCone = 360;
		missileLockCone = 300;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 10;
		missileLockMaxSpeed = 300;
		cmImmunity = 0.85;
		maneuvrability = 20;
		fuseDistance = 20;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		initTime=0.1;
		thrustTime=15;
		maxSpeed=300;
		typicalSpeed=200;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=340;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						maxTrackableATL=4000;
					};
				};
			};
		};
	};

	
	class 288th_Class_4 : OPTRE_M_C2GMLS_AA
	{
		model = "OPTRE_weapons\Aircraft\ASGM2_missile_fly.p3d";
		caliber = 1;
		hit = 1400;
		indirectHit = 600;
		indirectHitRange = 12;
		explosive = 0.50;
		fuseDistance = 1;
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		aiAmmoUsageFlags = "128+256+512";
		missileKeepLockedCone = 360;
		missileLockCone = 225;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 75;
		allowAgainstInfantry = 1;
		airLock = 1;
		irLock = 1;
		weaponLockSystem = "1 + 2 + 16";
		cmImmunity = 0.9;
		cost = 100;
		maxSpeed = 1000;
		thrust = 500;
	};

	// M99 Gauss Rifle Ammo
	class 288th_Gauss_Slug : OPTRE_25x130mm_Slug
	{
		scope = 2;
		hit = 1300;
		indirectHit = 100;
		indirectHitRange = 0.25;
		cost = 1000;
		typicalSpeed = 5000;
		caliber = 50;
		explosive = 0.05;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		timeToLive = 5;
		tracerScale = 0.75;
		tracerStartTime = 0;
		tracerEndTime = 15;
		tracersEvery = 1;
		airFriction = 0;
		sideairFriction = 0;
		coefGravity = 0.01;
	};

	//Microgrenade Rounds
	class 288th_MicroGrenade : ACE_G_40mm_HE
	{
		scope = 2;
		hit = 30;
		indirectHit = 10;
		indirectHitRange = 3;
		typicalSpeed = 150;
		caliber = 2.5;
		model = "\288th_Weapons\Data\Ammo\Laser_Red\laser_red.p3d";
		timeToLive = 30;
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 15;
		tracersEvery = 1;
		airFriction = 0;
		sideairFriction = 0;
		thrustTime = 2;
		coefGravity = 0.75;
	};

	//288th 40mm Plasma HE
	class 288th_Plasma_40mm : G_40mm_HE
	{
		hit = 100;
		indirectHit = 8;
		indirectHitRange = 6;
		typicalSpeed = 250;
		caliber = 5;
		timeToLive = 15;
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 15;
		tracersEvery = 1;
		airFriction = -0.001;
		thrustTime = 2;
		model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
	};

	//288th Hi-Magnum Ammo
	class 288th_15x50 : OPTRE_B_145x114_APFSDS
	{
		caliber = 4;
		hit = 55;
		typicalSpeed = 500;
		timeToLive = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.75;
		airFriction = 0;
		sideairFriction = 0;
	};

	//288th makeshift Ammo
	class 288th_Makeshift_Ammo : OPTRE_B_145x114_APFSDS
	{
		hit = 75;
		indirectHit = 30;
		indirectHitRange = 0.50;
		caliber = 8;
		timeToLive = 10;
		typicalSpeed = 2000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.75;
		airFriction = 0;
		sideairFriction = 0;
	};

	class 288th_20mm_HE_Plus : G_40mm_HE
	{
		hit = 120;
		indirectHit = 10;
		indirectHitRange = 10;
		caliber = 4;
	};
	class 288th_20mm_HE_Plasma : 288th_20mm_HE_Plus
	{
		explosionEffects = "ImpactPlasmaExpBlueBig";
		SoundSetExplosion[] = {"\OPTRE_FC_Weapons\Data\sounds\Grenade_Explosion2.ogg",1,1,2000};
		explosionSoundEffect = "{""\OPTRE_FC_Weapons\Data\sounds\Grenade_Explosion2.ogg"",1.0,1,2000}";
	};
	class 288th_20mm_HEDP : G_40mm_HEDP
	{
		caliber = 6;
	};
	class 288th_20mm_Slug : B_762x51_Ball
	{
		scope = 2;
		caliber = 10;
		explosive = 0;
		hit = 30;
		whistleOnFire = 1;
		whistleDist = 14;
		timeToLive = 15;
		tracerScale = 3;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		tracersEvery = 1;
		model = "\A3\weapons_f\ammo\UGL_slug";
		indirectHit = 50;
		indirectHitRange = 0.25;
		aiAmmoUsageFlags = "128 + 256 + 512";
		airLock = 1;
		suppressionRadiusHit = 24;
		typicalSpeed = 185;
	};
	
	//Baked Potato Ammo
    class 288th_Potato : 288th_Buckshot_Pellet
    {
        submunitionAmmo = "288th_Plasma_40mm";
    };

	class 288th_AC_8 : 288th_20mm_HE_Plus
	{
		hit = 75;
		indirectHit = 15;
		indirectHitRange = 10;
		caliber = 2.75;
		explosionEffects = "ImpactPlasmaExpBlueBig";
		SoundSetExplosion[] = {"\OPTRE_FC_Weapons\Data\sounds\Grenade_Explosion2.ogg",1,1,2000};
		explosionSoundEffect = "{""\OPTRE_FC_Weapons\Data\sounds\Grenade_Explosion2.ogg"",1.0,1,2000}";
		explosive = 0.5;
		coefGravity = 0;
		airFriction = 0;
		sideairFriction = 0;
		waterFriction = 0;
		typicalSpeed = 800;
		timeToLive = 3;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 15;
		fuseDistance = 0;
		class CamShakeExplode {};
		class CamShakeFire {};
		class CamShakeHit {};
		class CamShakePlayerFire {};
	};

	//288th .308 Ammo
	class 288th_308_Ball: B_338_Ball
	{
		hit = 32;
		caliber = 3;
		model = "\288th_Weapons\Data\Ammo\Laser_Yellow\laser_yellow.p3d";
		timetolive = 10;
		typicalSpeed = 600;
	};
	class 288th_308_AP: 288th_308_Ball
	{
		caliber = 4.38;
		hit = 35.47;
		typicalSpeed = 710;
	};
	class 288th_308_SLAP: 288th_308_Ball
	{
		caliber = 4.57;
		hit = 32;
		typicalSpeed = 800;
	};
	class 288th_308_FMJ: 288th_308_Ball
	{
		caliber = 5.88;
		hit = 40.53;
		typicalSpeed = 560;
	};
	class 288th_308_HV: 288th_308_Ball
	{
		caliber = 2.94;
		hit = 33.78;
		typicalSpeed = 740;
	};
	class 288th_308_HVAP: 288th_308_Ball
	{
		caliber = 4.5;
		hit = 38.4;
		typicalSpeed = 1200;
	};
	class 288th_308_HPSAP: 288th_308_Ball
	{
		caliber = 1.86;
		hit = 45.54;
		typicalSpeed = 1275;
	};
	class 288th_308_EHP: 288th_308_Ball
	{
		caliber = 2.43;
		hit = 51.32;
		typicalSpeed = 795;
	};
	class 288th_308_SAPHE: 288th_308_Ball
	{
		caliber = 3.75;
		hit = 45.5;
		typicalSpeed = 860;
		craterEffects = "ExploAmmoCrater";
		explosive = 0.15;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
	};
	class 288th_308_HE: 288th_308_Ball
	{
		caliber = 3.13;
		hit = 32;
		typicalSpeed = 600;
		craterEffects = "ExploAmmoCrater";
		explosive = 0.2;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		indirectHit = 16;
		indirectHitRange = 0.025;
	};
	class 288th_308_SS: 288th_308_Ball
	{
		caliber = 3.38;
		hit = 33.76;
		typicalSpeed = 325;
		visibleFire = 2;
		audibleFire = 15;
		visibleFireTime = 6;
		dangerRadiusBulletClose = 4;
		suppressionRadiusBulletClose = 2;
	};
	class 288th_308_UW: 288th_308_Ball
	{
		hit = 32;
		caliber = 3;
		model = "\288th_Weapons\Data\Ammo\Laser_Yellow\laser_yellow.p3d";
		timetolive = 10;
		aiAmmoUsageFlags = "64 + 32";
		airFriction = -0.02;
		typicalSpeed = 320;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
	};

	//288th .308 Old
	class 288th_308_MMG_yellow: B_338_Ball
	{
		hit = 32;
		indirectHit = 0;
		indirectHitRange = 0.0;
		caliber = 3;
		model = "\288th_Weapons\Data\Ammo\Laser_Yellow\laser_yellow.p3d";
		//cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 5;
		tracerscale = 1.1;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		effectfly = "288th_plasma_yellow";
		brightness = 1000;
		timetolive = 10;
		deflecting = 0;
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
	};

	//custom 8.6x70mm bullets
	class 288th_86x70_Ball: OPTRE_B_762x51_Ball
	{
		hit = 14;
	};
	class 288th_86x70_AP: 288th_86x70_Ball
	{
		caliber = 3;
		hit = 16;
		typicalSpeed = 920;
	};
	class 288th_86x70_SLAP: 288th_86x70_Ball
	{
		airFriction = 0;
		caliber = 3;
		hit = 17;
		typicalSpeed = 1000;
		sideairFriction = 0;
	};
	class 288th_86x70_EHP: 288th_86x70_Ball
	{
		caliber = 0.5;
		hit = 19;
		typicalSpeed = 905;
	};
	class 288th_86x70_SS: 288th_86x70_Ball
	{
		hit = 12;
		typicalSpeed = 340;
		visibleFire = 2;
		audibleFire = 15;
		visibleFireTime = 6;
		dangerRadiusBulletClose = 4;
		suppressionRadiusBulletClose = 2;
	};

	//custom 12.7x40mm bullets
	class 288th_127x40_Ball: B_127x33_Ball
	{
		caliber = 2;
		hit = 12;
		typicalSpeed = 620;
		cartridge = "FxCartridge_small";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class 288th_127x40_AP: 288th_127x40_Ball
	{
		caliber = 3;
		hit = 10;
	};
	class 288th_127x40_SLAP: 288th_127x40_Ball
	{
		caliber = 3.04;
		hit = 12;
		typicalSpeed = 825;
	};
	class 288th_127x40_HV: 288th_127x40_Ball
	{
		caliber = 1.96;
		hit = 12.7;
		typicalSpeed = 757.78;
	};
	class 288th_127x40_HVAP: 288th_127x40_Ball
	{
		caliber = 3;
		hit = 12;
		typicalSpeed = 800;
	};
	class 288th_127x40_HPSAP: 288th_127x40_Ball
	{
		caliber = 1.25;
		hit = 17.08;
		typicalSpeed = 1000;
	};
	class 288th_127x40_EHP: 288th_127x40_Ball
	{
		caliber = 1;
		hit = 2;
		typicalSpeed = 580;
	};
	class 288th_127x40_FMJ: 288th_127x40_Ball
	{
		caliber = 3.9;
		hit = 15.2;
		typicalSpeed = 578;
	};
	class 288th_127x40_SAPHE: 288th_127x40_Ball
	{
		caliber = 2.5;
		craterEffects = "ExploAmmoCrater";
		explosive = 0.15;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 16.5;
		typicalSpeed = 620;
	};
	class 288th_127x40_HE: 288th_127x40_Ball
	{
		caliber = 3;
		craterEffects = "ExploAmmoCrater";
		explosive = 0.2;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 10;
		indirectHit = 18;
		indirectHitRange = 0.025;
	};
	class 288th_127x40_SS: 288th_127x40_Ball
	{
		hit = 14;
		typicalSpeed = 340;
		visibleFire = 2;
		audibleFire = 15;
		visibleFireTime = 6;
		dangerRadiusBulletClose = 4;
		suppressionRadiusBulletClose = 2;
	};
	class 288th_127x40_UW: 288th_127x40_Ball
	{
		caliber = 2;
		hit = 12;
		typicalSpeed = 330;
		timetolive = 10;
		aiAmmoUsageFlags = "64 + 32";
		airFriction = -0.02;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
	};
	class 288th_127x40_SMK: OPTRE_12Gauge_Smoke
	{
		cartridge = "FxCartridge_small";
	};
	class 288th_127x40_FR: F_40mm_Red
	{
		cartridge = "FxCartridge_small";
	};
	class 288th_127x40_FO: F_40mm_White
	{
		cartridge = "FxCartridge_small";
		scope = 2;
		scopeArsenal = 2;
		lightColor[] = {0.5,0.35,0.25,0};
		smokeColor[] = {0.9132,0.1763,0.007,0.8};
	};
	class 288th_127x40_FY: F_40mm_Yellow
	{
		cartridge = "FxCartridge_small";
	};
	class 288th_127x40_FG: F_40mm_Green
	{
		cartridge = "FxCartridge_small";
	};
	class 288th_127x40_FB: F_40mm_White
	{
		cartridge = "FxCartridge_small";
		scope = 2;
		scopeArsenal = 2;
		lightColor[] = {0.25,0.25,0.5,0};
		smokeColor[] = {0.0355,0.1863,1,0.8};
	};
	class 288th_127x40_FP: F_40mm_White
	{
		cartridge = "FxCartridge_small";
		scope = 2;
		scopeArsenal = 2;
		lightColor[] = {0.5,0.25,0.5,0};
		smokeColor[] = {0.4622,0.0578,0.3154,0.8};
	};
	class 288th_127x40_FIR: F_40mm_Cir
	{
		cartridge = "FxCartridge_small";
		scope = 2;
		scopeArsenal = 2;
		lightColor[] = {0.01,0.01,0.01,0};
		smokeColor[] = {0.5,0.5,0.25,0};
		brightness = 5;
		intensity = 200;
        flareSize = 1;
	};
	class 288th_127x40_FW: F_40mm_White
	{
		cartridge = "FxCartridge_small";
	};
	//custom 14.5x114 Sub-Sonic
	class 288th_145x114_SS: OPTRE_B_145x114_APFSDS
	{
		caliber = 4;
		hit = 55;
		typicalSpeed = 340;
		timeToLive = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		visibleFire = 2;
		audibleFire = 15;
		visibleFireTime = 6;
		dangerRadiusBulletClose = 4;
		suppressionRadiusBulletClose = 2;
	};
};

class CfgMagazines
{
	class Default;
	class B_65x39_Caseless;
	class OPTRE_M41_Twin_HEAT_SACLOS;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_M9_Frag;
	class SmokeShell;
	class 30Rnd_65x39_caseless_black_mag;
	class 50Rnd_570x28_SMG_03;
	class 100Rnd_65x39_caseless_black_mag;
	class 30Rnd_9x21_Mag;
	class 5Rnd_127x108_Mag;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 20Rnd_762x51_Mag;
	class 30Rnd_762x39_AK12_Mag_F;
	class 10Rnd_127x54_Mag;
	class TCF_8Rnd_127x40_Mag_FG;
	class TCF_8Rnd_127x40_Mag_FR;
	class OPTRE_32Rnd_762x51_Mag;
	class OPTRE_FC_Railgun_Slug;
	class OPTRE_12Rnd_127x40_Mag;
	class OPTRE_15Rnd_762x51_Mag;
	class OPTRE_6Rnd_8Gauge_Pellet;
	class OPTRE_100Rnd_95x40_Box;
	class 6Rnd_45ACP_Cylinder;
	class TCF_1Rnd_50x137_HEAT;
	class 3Rnd_HE_Grenade_shell;
	class 200Rnd_65x39_cased_Box;
	class OPTRE_6Rnd_8Gauge_Pellets;
	class OPTRE_6Rnd_8Gauge_Slugs;
	class OPTRE_100Rnd_762x51_Box;
	class OPTRE_64Rnd_57x31_Mag;
	class 7Rnd_408_Mag;
	class SC_200Rnd_338_Mag;
	class OPTRE_12Rnd_12Gauge_Smoke;
	class TKE_100Rnd_ucnmmg_mag;
	class OPTRE_50Rnd_127x99_M250_Box;
	class OPTRE_200Rnd_127x99_M247H_Etilka;
	class OPTRE_60Rnd_762x51_Mag;

	//288th Standard 6.5x85 Mags
	class 288th_30Rnd_65x85_Mag : 30Rnd_65x39_caseless_black_mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initspeed = 600;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd APFS 6.5x85 Mag";
		displaynameshort = "6.5x85 APFS Mag";
		descriptionshort = "A standard magazine loaded with 6.5x85 APFS";
		ammo = "65x85_APFS";
		count = 30;
		mass = 15;
	};
	/*class 288th_Incendiary_Mag : 288th_30Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 20Rnd Incendiary 6.5x85 Mag";
		displaynameshort = "6.5x85 Incendiary Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with Incendiary ammo";
		initspeed = 600;
		ammo = "65x85_APFS_Incendiary";
		count = 20;
		lastRoundsTracer = 0;
	};*/
	class 288th_EHP_Mag : 288th_30Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 30Rnd EHP 6.5x85 Mag";
		displaynameshort = "6.5x85 EHP Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with External Hollow-Point ammo";
		initspeed = 550;
		ammo = "65x85_EHP";
		count = 30;
		lastRoundsTracer = 0;
	};
	class 288th_Silver_Mag : 288th_30Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 30Rnd Silver 6.5x85 Mag";
		displaynameshort = "6.5x85 Silver Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with silver tipped ammo";
		ammo = "65x85_Silver";
		count = 30;
	};
	class 288th_150Rnd_65x85_Mag : 100Rnd_65x39_caseless_black_mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initspeed = 600;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 150Rnd 6.5x85 Mag";
		displaynameshort = "288th Standard Mag";
		descriptionshort = "A large LMG Mag loaded with 6.5x85 APFS";
		ammo = "65x85_APFS";
		count = 150;
		mass = 30;
	};
	class 288th_EHP_LMG : 288th_150Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initspeed = 600;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 150Rnd 6.5x85 EHP Mag";
		displaynameshort = "6.5x85 EHP Mag";
		descriptionshort = "A large LMG Mag loaded with External Hollow-Point ammo";
		ammo = "65x85_EHP";
	};
	class 288th_Silver_LMG : 288th_150Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 6.5x85 Silver Mag";
		displaynameshort = "6.5x85 Silver Mag";
		descriptionshort = "A large LMG Mag loaded with Silver tipped ammo";
		ammo = "65x85_Silver";
	};

	// .308 Snowfox Magazines
	class 288th_20Rnd_308 : 20Rnd_762x51_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ammo = "288th_308_Ball";
		count = 20;
		displayname = "[288th] 20Rnd .308";
		displaynameshort = ".308";
		descriptionShort = "20 round Magazine<br/>.308";
		initspeed = 600;
		mass = 8;
	};
	class 288th_20Rnd_308_Tracer : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 (Tracers)";
		displayNameShort = ".308 Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_AP : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_AP";
		displayname = "[288th] 20Rnd .308 AP";
		displayNameShort = ".308 AP";
		descriptionshort = "20 round Magazine<br/>.308<br/>Armor-Piercing";
		initspeed = 710;
	};
	class 288th_20Rnd_308_APT : 288th_20Rnd_308_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 AP (Tracers)";
		displayNameShort = ".308 AP Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_SLAP : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SLAP";
		displayname = "[288th] 20Rnd .308 SLAP";
		displayNameShort = ".308 SLAP";
		descriptionshort = "20 round Magazine<br/>.308<br/>Saboted Light Armor Penetrator";
		initspeed = 800;
	};
	class 288th_20Rnd_308_SLAPT : 288th_20Rnd_308_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 SLAP (Tracers)";
		displayNameShort = ".308 SLAP Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Saboted Light Armor Penetrator Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_FMJ : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_FMJ";
		displayname = "[288th] 20Rnd .308 FMJ";
		displayNameShort = ".308 FMJ";
		descriptionshort = "20 round Magazine<br/>.308<br/>Full Metal Jacket";
		initspeed = 560;
	};
	class 288th_20Rnd_308_FMJT : 288th_20Rnd_308_FMJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 FMJ (Tracers)";
		displayNameShort = ".308 FMJ Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Full Metal Jacket Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_HV : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HV";
		displayname = "[288th] 20Rnd .308 HV";
		displayNameShort = ".308 HV";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Velocity";
		initspeed = 740;
	};
	class 288th_20Rnd_308_HVT : 288th_20Rnd_308_HV
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 HV (Tracers)";
		displayNameShort = ".308 HV Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Velocity Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_HVAP : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HVAP";
		displayname = "[288th] 20Rnd .308 HVAP";
		displayNameShort = ".308 HVAP";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Velocity Armor-Piercing";
		initspeed = 1200;
	};
	class 288th_20Rnd_308_HVAPT : 288th_20Rnd_308_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 HVAP (Tracers)";
		displayNameShort = ".308 HVAP Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Velocity Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_HPSAP : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HPSAP";
		displayname = "[288th] 20Rnd .308 HP-SAP";
		displayNameShort = ".308 HP-SAP";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Powered Semi-Armor-Piercing";
		initspeed = 1275;
	};
	class 288th_20Rnd_308_HPSAPT : 288th_20Rnd_308_HPSAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 HP-SAP (Tracers)";
		displayNameShort = ".308 HP-SAP Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Powered Semi-Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_EHP : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_EHP";
		displayname = "[288th] 20Rnd .308 EHP";
		displayNameShort = ".308 EHP";
		descriptionshort = "20 round Magazine<br/>.308<br/>Expanded Hollow-Point";
		initspeed = 795;
	};
	class 288th_20Rnd_308_EHPT : 288th_20Rnd_308_EHP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 EHP (Tracers)";
		displayNameShort = ".308 EHP Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Expanded Hollow-Point Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_SAPHE : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SAPHE";
		displayname = "[288th] 20Rnd .308 SAPHE";
		displayNameShort = ".308 SAPHE";
		descriptionshort = "20 round Magazine<br/>.308<br/>Semi-Armor-Piercing High-Explosive";
		initspeed = 860;
	};
	class 288th_20Rnd_308_SAPHET : 288th_20Rnd_308_SAPHE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 SAPHE (Tracers)";
		displayNameShort = ".308 SAPHE Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Semi-Armor-Piercing High-Explosive Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_HE : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HE";
		displayname = "[288th] 20Rnd .308 HE";
		displayNameShort = ".308 HE";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Explosive";
		initspeed = 600;
	};
	class 288th_20Rnd_308_HET : 288th_20Rnd_308_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 HE (Tracers)";
		displayNameShort = ".308 HE Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>High-Explosive Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_SS : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SS";
		displayname = "[288th] 20Rnd .308 SS";
		displayNameShort = ".308 SS";
		descriptionshort = "20 round Magazine<br/>.308<br/>Sub-Sonic";
		initspeed = 325;
	};
	class 288th_20Rnd_308_SST : 288th_20Rnd_308_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 SS (Tracers)";
		displayNameShort = ".308 SS Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Sub-Sonic Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_UW : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_UW";
		displayname = "[288th] 20Rnd .308 UW";
		displayNameShort = ".308 UW";
		descriptionshort = "20 round Magazine<br/>.308<br/>Underwater";
		initspeed = 320;
	};
	class 288th_20Rnd_308_UWT : 288th_20Rnd_308_UW
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 UW (Tracers)";
		displayNameShort = ".308 UW Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Underwater Tracer";
		tracersEvery = 1;
	};
	class 288th_20Rnd_308_S : 288th_20Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 Silver";
		displayNameShort = ".308 Silver";
		descriptionshort = "20 round Magazine<br/>.308<br/>Silver";
		initspeed = 600;
	};
	class 288th_20Rnd_308_ST : 288th_20Rnd_308_S
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 20Rnd .308 Silver (Tracers)";
		displayNameShort = ".308 Silver Tracer";
		descriptionshort = "20 round Magazine<br/>.308<br/>Silver Tracer";
		tracersEvery = 1;
	};

	//288th Plasma Mags
	class 288th_Plasma_Blue_Mag : 288th_30Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 30Rnd Blue Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Blue Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with blue plasma tips";
		initspeed = 600;
		ammo = "288th_Plasma_Blue";
		lastRoundsTracer = 0;
	};
	class 288th_Plasma_Red_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Red Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Red Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with red plasma tips";
		ammo = "288th_Plasma_Red";
	};
	class 288th_Plasma_Green_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Green Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Green Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with green plasma tips";
		ammo = "288th_Plasma_Green";
	};
	class 288th_Plasma_Pink_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Pink Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Pink Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with pink plasma tips";
		ammo = "288th_Plasma_Pink";
	};
	class 288th_Plasma_Orange_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Orange Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Orange Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with orange plasma tips";
		ammo = "288th_Plasma_Orange";
	};
	class 288th_Plasma_Yellow_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Yellow Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Yellow Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with yellow plasma tips";
		ammo = "288th_Plasma_Yellow";
	};
	class 288th_Plasma_Purple_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Purple Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Purple Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with purple plasma tips";
		ammo = "288th_Plasma_Purple";
	};
	class 288th_Plasma_White_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd White Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 White Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with white plasma tips";
		ammo = "288th_Plasma_White";
	};
	class 288th_Plasma_Black_Mag : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 30Rnd Black Plasma 6.5x85 Mag";
		displaynameshort = "6.5x85 Black Plasma Mag";
		descriptionshort = "A custom designed 6.5x85 mag loaded with black plasma tips";
		ammo = "288th_Plasma_Black";
	};
	class 288th_Plasma_Soda_Mag : 288th_Plasma_Blue_Mag
	{
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30Rnd.p3d";
		modelSpecialIsProxy = 1;
		nameSound = "magazine";
		picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		quickReload = 1;
		displayname = "[288th] Soda's Custom 6.5x85 Mag";
		displaynameshort = "Soda's 6.5x85 Plasma Mag";
		descriptionshort = "A specially modified 6.5x85 mag";
		ammo = "288th_Plasma_Soda";
		tracersEvery = 1;
		initspeed = 1200;
		lastRoundsTracer = 50;
		count = 200;
		mass = 15;
	};
	class 288th_Soda_Buckshot : 288th_30Rnd_65x85_Mag
	{
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30Rnd.p3d";
		modelSpecialIsProxy = 1;
		nameSound = "magazine";
		picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		quickReload = 0;
		displayname = "[288th] Soda's Shreader Mag";
		displaynameshort = "Soda's Shreader Mag";
		descriptionshort = "A specially modified buckshot mag";
		ammo = "288th_Buckshot_Pellet";
		tracersEvery = 0;
		lastRoundsTracer = 0;
		count = 200;
		mass = 15;
	};

	//288th .45 M7 Mags
	class 288th_60Rnd_45_Mag : 30Rnd_45ACP_Mag_SMG_01
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 60Rnd .45 Mag";
		displaynameshort = ".45";
		descriptionshort = "Magazines for the M7V SMGs";
		tracersEvery = 1;
		initspeed = 600;
		ammo = "45_ball";
		count = 60;
		mass = 10;
	};
	class 288th_60Rnd_45_Mag_EHP : 288th_60Rnd_45_Mag
	{
		displayname = "[288th] 60Rnd .45 EHP Mag";
		displaynameshort = ".45 EHP";
		descriptionshort = "EHP Magazines for the M7 SMGs";
		tracersEvery = 1;
		initspeed = 550;
		ammo = "45_EHP";
	};
	class 288th_60Rnd_45_Mag_Silver : 288th_60Rnd_45_Mag
	{
		displayname = "[288th] 60Rnd .45 Silver Mag";
		displaynameshort = ".45 Silver";
		descriptionshort = "Silver Magazines for the M7 SMGs";
		tracersEvery = 1;
		ammo = "45_Silver";
	};

	// Improved M41 Ammo
	class 288th_M41_Twin_HEAT_SACLOS : OPTRE_M41_Twin_HEAT_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M41 HEAT (SACLOS) Twin Rockets";
		displaynameshort = "HEAT (SACLOS)";
		descriptionshort = "High Explosive Anti Tank<br/>SACLOS";
		ammo = "288th_M41_Rocket_HEAT_SACLOS";
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_saclos.paa";
		model = "\OPTRE_Weapons\Rockets\M41_tube.p3d";
		modelSpecial = "\OPTRE_Weapons\Rockets\M41_tube.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = { "camo_tubes","camo_details" };
		hiddenSelectionsTextures[] = { "\288th_Weapons\Data\Weapons\Launchers\SACLOS.paa","\optre_weapons\rockets\data\logos_ca.paa" };
		count = 2;
		mass = 80;
		initSpeed = 200;
		maxLeadSpeed = 400;
	};
	class 288th_M41_Twin_HE : 288th_M41_Twin_HEAT_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		descriptionshort = "High Explosive Anti Personnel<br/>Un-guided";
		displayname = "[288th] M41 HE (Un-guided) Twin Rockets";
		displaynameshort = "High Explosive Dumb-fire";
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he.paa";
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\Rockets\data\mag_types\he.paa","\optre_weapons\rockets\data\logos_ca.paa" };
		ammo = "288th_M41_Rocket_HE";
		mass = 60;
	};
	class 288th_M41_Twin_Flame : 288th_M41_Twin_HEAT_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		descriptionshort = "Incendiary Anti Personnel<br/>Un-guided";
		displayname = "[288th] M41 Incendiary (Un-guided) Twin Rockets";
		displaynameshort = "Incendiary Dumb-fire";
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he.paa";
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons\Rockets\data\mag_types\heap.paa","optre_weapons\rockets\data\logos_ca.paa"};
		ammo = "288th_M41_Rocket_Flame";
		WBK_UseDisintegrate = "true";
		mass = 60;
	};
	class 288th_M41_Twin_HEAT_SALH : 288th_M41_Twin_HEAT_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M41 HEAT (SALH) Twin Rockets";
		displaynameshort = "HEAT (SALH)";
		descriptionshort = "High Explosive Anti Tank<br/>SALH";
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_salh.paa";
		hiddenSelectionsTextures[] = { "\288th_Weapons\Data\Weapons\Launchers\SALH.paa","\optre_weapons\rockets\data\logos_ca.paa" };
		ammo = "288th_M41_Rocket_HEAT_Laser";
	};
	class 288th_M41_Twin_HEAT_Thermal : 288th_M41_Twin_HEAT_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M41 HEAT (Heat-Seeking) Twin Rockets";
		displaynameshort = "HEAT (Heat-seeking)";
		descriptionshort = "High Explosive Anti Tank<br/>Heat-Seeking";
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_thermal.paa";
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\Rockets\data\mag_types\heat.paa","\optre_weapons\rockets\data\logos_ca.paa" };
		ammo = "288th_M41_Rocket_HEAT_Thermal";
	};

	// 288th Cricket Rockets
	class 288th_M57_Cricket_SACLOS : TCF_1Rnd_50x137_HEAT
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M57 (SACLOS)";
		displaynameshort = "HEAT (SACLOS)";
		descriptionshort = "High Explosive Anti Tank<br/>SACLOS";
		ammo = "288th_M41_Rocket_HEAT_SACLOS";
		count = 1;
		mass = 30;
		allowedSlots[] = { 901,701 };
		initSpeed = 200;
		maxLeadSpeed = 400;
	};
	class 288th_M57_Cricket_HE : 288th_M57_Cricket_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		descriptionshort = "High Explosive Anti Personnel<br/>Un-guided";
		displayname = "[288th] M57 HE (Un-guided)";
		displaynameshort = "High Explosive Dumb-fire";
		ammo = "288th_M41_Rocket_HE";
		mass = 25;
	};
	class 288th_M57_Cricket_Flame : 288th_M57_Cricket_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		descriptionshort = "Incendiary Anti Personnel<br/>Un-guided";
		displayname = "[288th] M57 Incendiary (Un-guided)";
		displaynameshort = "Incendiary Dumb-fire";
		ammo = "288th_M41_Rocket_Flame";
		WBK_UseDisintegrate = "true";
		mass = 25;
	};
	class 288th_M57_Cricket_SALH : 288th_M57_Cricket_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M57 HEAT (SALH)";
		displaynameshort = "HEAT (SALH)";
		descriptionshort = "High Explosive Anti Tank<br/>SALH";
		ammo = "288th_M41_Rocket_HEAT_Laser";
	};
	class 288th_M57_Cricket_Thermal : 288th_M57_Cricket_SACLOS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M57 HEAT (Heat-Seeking)";
		displaynameshort = "HEAT (Heat-seeking)";
		descriptionshort = "High Explosive Anti Tank<br/>Heat-Seeking";
		ammo = "288th_M41_Rocket_HEAT_Thermal";
	};

	// 288th RR-553 Rockets
	class MRAWS_HEAT_F;
	class 288th_1Rnd_50x137_HEAT: MRAWS_HEAT_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ammo = "288th_50x137_HEAT";
		count = 1;
		displayname = "[288th] 50x137mm HEAT Rocket";
		descriptionShort = "1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
		mass = 30;
		allowedSlots[] = {901,701};
	};
	class MRAWS_HE_F;
	class 288th_1Rnd_50x137_HE: MRAWS_HE_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "288th_50X137_HE";
		count = 1;
		displayname = "[288th] 50x137mm HE Rocket";
		displaynameshort = "HE";
		descriptionShort = "1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
		mass = 30;
		allowedSlots[] = {901,701};
	};
	class 288th_1Rnd_50x137_PEN: 288th_1Rnd_50x137_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "288th_50x137_PEN";
		count = 1;
		displayname = "[288th] 50x137mm Penetrator Rocket";
		displaynameshort = "Penetrator";
		descriptionShort = "1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
		mass = 30;
		allowedSlots[] = {901,701};
	};
	class Vorona_HEAT;
	class Vorona_HE;
	class MRAWS_HEAT55_F;
	
	class 288th_1Rnd_50x137_SACLOS_HEAT: Vorona_HEAT
	{
		author = "Soda / Misriah 288";
		displayName="[288th] SACLOS HEAT Rocket";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		ammo="MAA_M_GMM_HEAT";
		picture="\288th_Weapons\Data\Ammo\UI\GMMHEAT.paa";
		displayNameShort="SACLOS HEAT";
		descriptionShort="SACLOS HEAT Rocket";
		mass=70;
	};
	class 288th_1Rnd_50x137_SACLOS_HE: Vorona_HE
	{
		author = "Soda / Misriah 288";
		displayName="[288th] SACLOS HE Rocket";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
		ammo="MAA_M_GMM_HE";
		displayNameShort="SACLOS HE";
		picture="\288th_Weapons\Data\Ammo\UI\GMMHE.paa";
		descriptionShort="SACLOS HE Rocket";
		mass=50;
	};
	class 288th_1Rnd_50x137_SACLOS_MT: Vorona_HEAT
	{
		author = "Soda / Misriah 288";
		displayName="[288th] SACLOS MT Rocket";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		ammo="MAA_M_GMM_MT";
		picture="\288th_Weapons\Data\Ammo\UI\GMMMT.paa";
		displayNameShort="SACLOS MT";
		descriptionShort="SACLOS Multi-Target Rocket";
		mass=100;
	};
	class 288th_1Rnd_50x137_ILLUM: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] 50x137mm ILLUM Rocket";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		ammo="MAA_M_ILLUM545";
		picture="\288th_Weapons\Data\Ammo\UI\ILLUM545.paa";
		displayNameShort="ILLUM";
		descriptionShort="ILLUM Rocket";
		mass=30;
	};
	class 288th_1Rnd_50x137_SMOKE: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] 50x137mm SMOKE Rocket";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		ammo="MAA_M_SMOKE469";
		picture="\288th_Weapons\Data\Ammo\UI\SMOKE469.paa";
		displayNameShort="SMOKE";
		descriptionShort="SMOKE Rocket";
		mass=30;
	};
	class 288th_1Rnd_50x137_ASM: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] 50x137mm ASM  Rocket";
		ammo="MAA_M_ASM509";
		displayNameShort="ASM";
		picture="\288th_Weapons\Data\Ammo\UI\ASM509.paa";
		descriptionShort="Anti-Structure Rocket";
		mass=50;
	};
	class 288th_1Rnd_50x137_HEDP: MRAWS_HEAT55_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] 50x137mm HEDP Rocket";
		ammo="MAA_M_HEDP502";
		displayNameShort="HEDP";
		picture="\288th_Weapons\Data\Ammo\UI\HEDP502.paa";
		descriptionShort="HEDP Rocket";
		mass=40;
	};
	class 288th_1Rnd_50x137_MT: MRAWS_HEAT55_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] 50x137mm MT Rocket";
		ammo="MAA_M_MT756";
		displayNameShort="MT";
		picture="\288th_Weapons\Data\Ammo\UI\MT756.paa";
		descriptionShort="Multi-Target Rocket";
		mass=90;
	};
	class 288th_1Rnd_50x137_AB100: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] HE 44 AB100 Rocket";
		ammo="MAA_M_HE441_AB100";
		displayNameShort="Airburst 100 m";
		descriptionShort="HE 44 Rocket, Airburst 100 m";
	};
	class 288th_1Rnd_50x137_AB250: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] HE 44 AB250 Rocket";
		ammo="MAA_M_HE441_AB250";
		displayNameShort="Airburst 250 m";
		descriptionShort="HE 44 Rocket, Airburst 250 m";
	};
	class 288th_1Rnd_50x137_AB500: MRAWS_HE_F
	{
		author = "Soda / Misriah 288";
		displayName="[288th] HE 44 AB500 Rocket";
		ammo="MAA_M_HE441_AB500";
		displayNameShort="Airburst 500 m";
		descriptionShort="HE 44 Rocket, Airburst 500 m";
	};

	//Microgrenade Mags
	class 288th_10Rnd_Microgrenade : 30Rnd_65x39_caseless_black_mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 200;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Microgrenade Mag";
		displaynameshort = "Microgrenade Mag";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "288th_MicroGrenade";
		count = 10;
		mass = 15;
	};
	class 288th_10Rnd_White_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd White Smoke Microgrenade";
		displaynameshort = "White Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_Smoke";
	};
	class 288th_10Rnd_Red_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Red Smoke Microgrenade";
		displaynameshort = "Red Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokeRed";
	};
	class 288th_10Rnd_Green_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Green Smoke Microgrenade";
		displaynameshort = "Green Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokeGreen";
	};
	class 288th_10Rnd_Yellow_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Yellow Smoke Microgrenade";
		displaynameshort = "Yellow Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokeYellow";
	};
	class 288th_10Rnd_Purple_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Purple Smoke Microgrenade";
		displaynameshort = "Purple Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokePurple";
	};
	class 288th_10Rnd_Blue_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Blue Smoke Microgrenade";
		displaynameshort = "Blue Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokeBlue";
	};
	class 288th_10Rnd_Orange_Smoke_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Orange Smoke Microgrenade";
		displaynameshort = "Orange Smoke Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "OPTRE_40mm_SmokeOrange";
	};
	class 288th_10Rnd_HE_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd HE Microgrenade";
		displaynameshort = "HE Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "M319_HE";
	};
	class 288th_10Rnd_HEDP_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd HEDP Microgrenade";
		displaynameshort = "HEDP Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "M319_HEDP";
	};
	class 288th_10Rnd_HEDPC_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd HEDP-C Microgrenade";
		displaynameshort = "HEDP-C Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "M319_HEDPC";
	};
	class 288th_10Rnd_Heat_Microgrenade : 288th_10Rnd_Microgrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 10Rnd Heat Microgrenade";
		displaynameshort = "Heat Microgrenade";
		descriptionshort = "A experimental mag loaded with Microgrenades";
		ammo = "M319_HEAT";
	};

	//288th autoshotgun shells
	class 288th_Buckshot : OPTRE_32Rnd_762x51_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "\OPTRE_Weapons\bulldog\drum.p3d";
		modelSpecial = "\OPTRE_Weapons\bulldog\drum.p3d";
		modelSpecialIsProxy = 1;
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Buckshot Magazine";
		displaynameshort = "Buckshot";
		descriptionshort = "30 Round Buckshot";
		ammo = "288th_Buckshot_Pellet";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\icon_shells_red.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Slug : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Slug Magazine";
		displaynameshort = "Slugs";
		descriptionshort = "30 Round Slugs";
		ammo = "B_127x99_SLAP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\green\icon_shells_green.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Slug_Incendiary : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Incendiary Slug Magazine";
		displaynameshort = "Incendiary Slugs";
		descriptionshort = "30 Round Incendiary Slugs";
		ammo = "65x85_APFS_Incendiary";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dgreen\icon_shells_dgreen.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Slug_Flechette : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Flechette Slug Magazine";
		displaynameshort = "Flechette Slugs";
		descriptionshort = "30 Round Flechette Slugs";
		ammo = "65x85_APFS_Flechette";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\black\icon_shells_black.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Slug_Taser : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Taser Slug Magazine";
		displaynameshort = "Taser Slugs";
		descriptionshort = "30 Round Taser Slugs";
		ammo = "288th_Taser_ammo_Long";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\blue\icon_shells_blue.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Slug_HEDP : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd HEDP Slug Magazine";
		displaynameshort = "HEDP Slugs";
		descriptionshort = "30 Round HEDP Slugs";
		ammo = "65x85_HEDP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\yellow\icon_shells_yellow.paa";
		mass = 20;
	};
	class 288th_Slug_EMP : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd EMP Slug Magazine";
		displaynameshort = "EMP Slugs";
		descriptionshort = "30 Round EMP Slugs";
		ammo = "288th_EMP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Cyan\icon_shells_Cyan.paa";
		mass = 20;
	};
	class 288th_Slug_SS : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Sub-Sonic Slug Magazine";
		displaynameshort = "SS Slugs";
		descriptionshort = "30 Round Sub-Sonic Slugs";
		ammo = "65x85_SS";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\drab\icon_shells_drab.paa";
		mass = 20;
	};
	class 288th_Slug_KO : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 400;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Knock-Out Slug Magazine";
		displaynameshort = "KO Shells";
		descriptionshort = "30 Round KO Shells";
		ammo = "288th_KO_shell";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\KO\icon_shells_ko.paa";
		mass = 20;
	};
	class 288th_Slug_Smoke : OPTRE_12Rnd_12Gauge_Smoke
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Smoke Slug Magazine";
		displaynameshort = "Smoke Slugs";
		descriptionshort = "30 Round Smoke Slugs";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\white\icon_shells_white.paa";
		mass = 20;
		count = 30;
	};
	class 288th_HEDP_Buckshot : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd HEDP Buckshot Magazine";
		displaynameshort = "HEDP Buckshot";
		descriptionshort = "30 Round HEDP Buckshot";
		ammo = "288th_HEDP_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\purple\icon_shells_purple.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Incendiary_Buckshot : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Incendiary Buckshot Magazine";
		displaynameshort = "Incendiary Buckshot";
		descriptionshort = "30 Round Incendiary Buckshot";
		ammo = "288th_Incendiary_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dred\icon_shells_dred.paa";
		count = 30;
		mass = 20;
	};
	class 288th_Flechette_Buckshot : 288th_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 500;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 30Rnd Flechette Buckshot Magazine";
		displaynameshort = "Flechette Buckshot";
		descriptionshort = "30 Round Flechette Buckshot";
		ammo = "288th_Flechette_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\orange\icon_shells_orange.paa";
		count = 30;
		mass = 20;
	};

	//288th M45 and KSG shells
	class 288th_Loose_Buckshot : OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Rainbow Buckshot";
		count = 12;
		ammo = "288th_Plasma_Rainbow_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\icon_shells_red.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\shell_pile_8.p3d";
		displaynameshort = "Rainbow Buckshot";
		descriptionshort = "12 Rounds of Rainbow Buckshot";
		mass = 12;
	};
	class 288th_Loose_Normal_Buckshot : 288th_Loose_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Buckshot";
		count = 12;
		ammo = "288th_Buckshot_Pellet";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\icon_shells_red.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\shell_pile_8.p3d";
		displaynameshort = "Buckshot";
		descriptionshort = "12 Rounds of Buckshot";
		mass = 12;
	};
	class 288th_Loose_Slugs : OPTRE_6Rnd_8Gauge_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Slugs";
		count = 12;
		ammo = "B_127x99_SLAP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\green\icon_shells_green.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\green\shell_pile_8.p3d";
		descriptionshort = "12 Round Slugs";
		mass = 12;
	};
	class 288th_Loose_Incendiary_Buckshot : 288th_Loose_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Incendiary Buckshot";
		count = 12;
		ammo = "288th_Incendiary_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dred\icon_shells_dred.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dred\shell_pile_8.p3d";
		displaynameshort = "Incendiary Buckshot";
		descriptionshort = "12 Rounds of Incendiary Buckshot";
		mass = 12;
	};
	class 288th_Loose_Slugs_Incendiary : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Incendiary Slugs";
		count = 12;
		displaynameshort = "Incendiary Slugs";
		ammo = "65x85_APFS_Incendiary";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dgreen\icon_shells_dgreen.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dgreen\shell_pile_8.p3d";
		descriptionshort = "12 Round Incendiary Slugs";
		mass = 12;
	};
	class 288th_Loose_Slugs_EMP : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd EMP Slugs";
		count = 12;
		displaynameshort = "EMP Slugs";
		ammo = "288th_EMP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Cyan\icon_shells_Cyan.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Cyan\shell_pile_8.p3d";
		descriptionshort = "12 Round EMP Slugs";
		mass = 12;
	};
	class 288th_Loose_HEDP_Buckshot : 288th_Loose_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd HEDP Buckshot";
		count = 12;
		ammo = "288th_HEDP_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\purple\icon_shells_purple.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\purple\shell_pile_8.p3d";
		displaynameshort = "HEDP Buckshot";
		descriptionshort = "12 Rounds of HEDP Buckshot";
		mass = 12;
	};
	class 288th_Loose_Slugs_HEDP : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd HEDP Slugs";
		count = 12;
		displaynameshort = "HEDP Slugs";
		ammo = "65x85_HEDP";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\yellow\icon_shells_yellow.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\yellow\shell_pile_8.p3d";
		descriptionshort = "12 Round HEDP Slugs";
		mass = 12;
	};
	class 288th_Loose_Slugs_Taser : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Taser Slugs";
		count = 12;
		displaynameshort = "Taser Slugs";
		ammo = "288th_Taser_ammo_Long";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\blue\icon_shells_blue.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\blue\shell_pile_8.p3d";
		descriptionshort = "12 Round Taser Slugs";
		mass = 12;
	};
	class 288th_Loose_Slugs_KO : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Knock-Out Shell";
		count = 12;
		displaynameshort = "KO Shell";
		ammo = "288th_KO_shell";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\KO\icon_shells_ko.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\KO\shell_pile_8.p3d";
		descriptionshort = "12 Round KO Slugs";
		initspeed = 400;
		mass = 12;
	};
	class 288th_Loose_Slug_Smoke : OPTRE_12Rnd_12Gauge_Smoke
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Smoke Slugs";
		count = 12;
		displaynameshort = "Smoke Slugs";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\white\icon_shells_white.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\white\shell_pile_8.p3d";
		descriptionshort = "12 Round Smoke Slugs";
		mass = 12;
	};
	class 288th_Loose_flechette_Buckshot : 288th_Loose_Buckshot
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Flechette Buckshot";
		count = 12;
		ammo = "288th_Flechette_Buckshot";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Orange\icon_shells_Orange.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Orange\shell_pile_8.p3d";
		displaynameshort = "Flechette Buckshot";
		descriptionshort = "12 Rounds of Flechette Buckshot";
		mass = 12;
	};
	class 288th_Loose_Slugs_flechette : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Flechette Slugs";
		count = 12;
		displaynameshort = "Flechette Slugs";
		ammo = "65x85_APFS_flechette";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Black\icon_shells_Black.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\Black\shell_pile_8.p3d";
		descriptionshort = "12 Round Flechette Slugs";
		mass = 12;
	};
	class 288th_Loose_Slugs_SS : 288th_Loose_Slugs
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 12Rnd Sub-Sonic Slugs";
		count = 12;
		displaynameshort = "Sub-Sonic Slugs";
		ammo = "65x85_SS";
		picture = "\288th_Weapons\Data\Ammo\Shotgun_Shells\drab\icon_shells_drab.paa";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\drab\shell_pile_8.p3d";
		descriptionshort = "12 Round Sub-Sonic Slugs";
		mass = 12;
	};

	//288th potato
	class 288th_Potato : 288th_Buckshot
    {
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        scope = 2;
        scopearsenal = 2;
        ammo = "288th_Potato";
        displayName = "[288th] Potato";
        displayNameShort = "Tater tots AWAY!";
        count = 1;
        descriptionShort = "Smith said no, Soda says yes";
        mass = 8;
        initSpeed = 150;
        picture = "\288th_Weapons\Data\Ammo\icon_potat_ca";
    };

	// Improved M6 Ammo
	class 288th_32Rnd_127x40 : OPTRE_12Rnd_127x40_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_Ball";
		displayname = "[288th] 32Rnd 12.7x40mm";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm";
		displayNameShort = "12.7x40mm";
		initspeed = 640;
		count = 32;
		mass = 12;
	};
	class 288th_32Rnd_127x40_Tracer : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm (Tracers)";
		displayNameShort = "12.7x40mm Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_AP : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_AP";
		displayname = "[288th] 32Rnd 12.7x40mm AP";
		displayNameShort = "12.7x40mm AP";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing";
	};
	class 288th_32Rnd_127x40_APT : 288th_32Rnd_127x40_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm AP (Tracers)";
		displayNameShort = "12.7x40mm AP Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_SLAP : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 825;
		ammo = "288th_127x40_SLAP";
		displayname = "[288th] 32Rnd 12.7x40mm SLAP";
		displayNameShort = "12.7x40mm SLAP";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Saboted Light Armor Penetrator";
	};
	class 288th_32Rnd_127x40_SLAPT : 288th_32Rnd_127x40_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm SLAP (Tracers)";
		displayNameShort = "12.7x40mm SLAP Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Saboted Light Armor Penetrator Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_FMJ : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 578;
		ammo = "288th_127x40_FMJ";
		displayname = "[288th] 32Rnd 12.7x40mm FMJ";
		displayNameShort = "12.7x40mm FMJ";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Full Metal Jacket";
	};
	class 288th_32Rnd_127x40_FMJT : 288th_32Rnd_127x40_FMJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm FMJ (Tracers)";
		displayNameShort = "12.7x40mm FMJ Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Full Metal Jacket Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_HV : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 757.78;
		ammo = "288th_127x40_HV";
		displayname = "[288th] 32Rnd 12.7x40mm HV";
		displayNameShort = "12.7x40mm HV";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Velocity";
	};
	class 288th_32Rnd_127x40_HVT : 288th_32Rnd_127x40_HV
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm HV (Tracers)";
		displayNameShort = "12.7x40mm HV Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Velocity Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_HVAP : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 800;
		ammo = "288th_127x40_HVAP";
		displayname = "[288th] 32Rnd 12.7x40mm HVAP";
		displayNameShort = "12.7x40mm HVAP";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Velocity Armor-Piercing";
	};
	class 288th_32Rnd_127x40_HVAPT : 288th_32Rnd_127x40_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm HVAP (Tracers)";
		displayNameShort = "12.7x40mm HVAP Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Velocity Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_HPSAP : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 1000;
		ammo = "288th_127x40_HPSAP";
		displayname = "[288th] 32Rnd 12.7x40mm HP-SAP";
		displayNameShort = "12.7x40mm HP-SAP";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Powered Semi-Armor-Piercing";
	};
	class 288th_32Rnd_127x40_HPSAPT : 288th_32Rnd_127x40_HPSAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm HP-SAP (Tracers)";
		displayNameShort = "12.7x40mm HP-SAP Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Powered Semi-Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_EHP : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 580;
		ammo = "288th_127x40_EHP";
		displayname = "[288th] 32Rnd 12.7x40mm EHP";
		displayNameShort = "12.7x40mm EHP";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Expanded Hollow-Point";
	};
	class 288th_32Rnd_127x40_EHPT : 288th_32Rnd_127x40_EHP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm EHP (Tracers)";
		displayNameShort = "12.7x40mm EHP Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Expanded Hollow-Point Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_SAPHE : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_SAPHE";
		displayname = "[288th] 32Rnd 12.7x40mm SAPHE";
		displayNameShort = "12.7x40mm SAPHE";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Semi-Armor-Piercing High-Explosive";
	};
	class 288th_32Rnd_127x40_SAPHET : 288th_32Rnd_127x40_SAPHE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm SAPHE (Tracers)";
		displayNameShort = "12.7x40mm SAPHE Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Semi-Armor-Piercing High-Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_HE : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_HE";
		displayname = "[288th] 32Rnd 12.7x40mm HE";
		displayNameShort = "12.7x40mm HE";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Explosive";
	};
	class 288th_32Rnd_127x40_HET : 288th_32Rnd_127x40_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm HE (Tracers)";
		displayNameShort = "12.7x40mm HE Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>High-Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_SS : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 340;
		ammo = "288th_127x40_SS";
		displayname = "[288th] 32Rnd 12.7x40mm SS";
		displayNameShort = "12.7x40mm SS";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic";
	};
	class 288th_32Rnd_127x40_SST : 288th_32Rnd_127x40_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm SS (Tracers)";
		displayNameShort = "12.7x40mm SS Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_UW : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 330;
		ammo = "288th_127x40_UW";
		displayname = "[288th] 32Rnd 12.7x40mm UW";
		displayNameShort = "12.7x40mm UW";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Underwater";
	};
	class 288th_32Rnd_127x40_UWT : 288th_32Rnd_127x40_UW
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm UW (Tracers)";
		displayNameShort = "12.7x40mm UW Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Underwater Tracers";
		tracersEvery = 1;
	};
	class 288th_32Rnd_127x40_S : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm Silver";
		displayNameShort = "12.7x40mm Silver";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Silver";
	};
	class 288th_32Rnd_127x40_ST : 288th_32Rnd_127x40_S
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 32Rnd 12.7x40mm Silver (Tracers)";
		displayNameShort = "12.7x40mm Tracer";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Tracer";
		tracersEvery = 1;
	};
	class 288th_16Rnd_127x40_FR : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 100;
		ammo = "288th_127x40_FR";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Red)";
		displayNameShort = "12.7x40mm Flare Red";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Red)";
	};
	class 288th_16Rnd_127x40_FO : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FO";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Orange)";
		displayNameShort = "12.7x40mm Flare Orange";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Orange)";
	};
	class 288th_16Rnd_127x40_FY : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FY";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Yellow)";
		displayNameShort = "12.7x40mm Flare Yellow";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Yellow)";
	};
	class 288th_16Rnd_127x40_FG : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FG";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Green)";
		displayNameShort = "12.7x40mm Flare Green";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Green)";
	};
	class 288th_16Rnd_127x40_FB : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FB";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Blue)";
		displayNameShort = "12.7x40mm Flare Blue";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Blue)";
	};
	class 288th_16Rnd_127x40_FP : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FP";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (Purple)";
		displayNameShort = "12.7x40mm Flare Purple";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (Purple)";
	};
	class 288th_16Rnd_127x40_FW : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FW";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (White)";
		displayNameShort = "12.7x40mm Flare White";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (White)";
	};
	class 288th_16Rnd_127x40_FIR : 288th_16Rnd_127x40_FR
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_127x40_FIR";
		displayname = "[288th] 16Rnd 12.7x40mm Flare (IR)";
		displayNameShort = "12.7x40mm Flare IR";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm<br/>Flares (IR)";
	};
	class 288th_32Rnd_127x40_SMK : 288th_32Rnd_127x40
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 700;
		ammo = "288th_127x40_SMK";
		displayname = "[288th] 32Rnd 12.7x40mm Smoke (White)";
		displayNameShort = "12.7x40mm Smoke White";
		descriptionshort = "32 Round Magazine<br/>12.7x40mm<br/>Smokes (Red)";
	};

	class 288th_8Rnd_127_HI_P : OPTRE_12Rnd_127x40_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 8Rnd 12.7x40mm HI-P Magazine";
		descriptionshort = "8Rnd 12.7x40mm HI-P Magazine";
		displayNameShort = "12.7x40mm HI-P";
		ammo = "288th_15x50";
		count = 8;
		mass = 8;
	};

	//288th Plasma 3Rnd GL
	class 288th_GL_Mag : 3Rnd_HE_Grenade_shell
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_Plasma_40mm";
		displayName = "[288th] 3GL Plasma HE Shell";
		displayNameShort = "3GL Plasma HE Shell";
		count = 3;
		descriptionShort = "I probbaly shouldn't have made this";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};

	//M73X Box Mag
	class 288th_500Rnd_65x85_Box : OPTRE_100Rnd_95x40_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		initspeed = 600;
		ammo = "65x85_APFS_Tracers";
		count = 500;
		displayname = "[288th] 500Rnd APFS 6.5x85 Box Tracers";
		displaynameshort = "6.5x85 APFS";
		descriptionShort = "500 Round Box Tracer<br/>6.5x85 APFS";
		picture = "\OPTRE_Weapons_MG\m247\data\icons\magazine.paa";
		mass = 100;
		tracersEvery = 1;
		lastRoundsTracer = 500;
	};
	class 288th_500Rnd_65x85_Box_Normal : 288th_500Rnd_65x85_Box
	{
		ammo = "65x85_APFS";
		displayname = "[288th] 500Rnd APFS 6.5x85 Box";
		displaynameshort = "6.5x85 APFS";
		descriptionShort = "500 Round Box<br/>6.5x85 APFS";
		mass = 100;
		tracersEvery = 0;
		lastRoundsTracer = 10;
	};
	class 288th_500Rnd_65x85_Box_EHP : 288th_500Rnd_65x85_Box
	{
		displayname = "[288th] 500Rnd EHP 6.5x85 Box Tracers";
		displaynameshort = "6.5x85 EHP";
		descriptionShort = "500 Round Box<br/>6.5x85 EHP";
		ammo = "65x85_EHP";
		mass = 100;
		lastRoundsTracer = 10;
	};
	class 288th_500Rnd_65x85_Box_EHP_Normal : 288th_500Rnd_65x85_Box
	{
		displayname = "[288th] 500Rnd EHP 6.5x85 Box";
		displaynameshort = "6.5x85 EHP";
		descriptionShort = "500 Round Box<br/>6.5x85 EHP";
		ammo = "65x85_EHP";
		mass = 100;
		tracersEvery = 0;
		lastRoundsTracer = 10;
	};

	//M99 MMG Box
	class 288th_200Rnd_308 : TKE_100Rnd_ucnmmg_mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 200Rnd .308";
		descriptionShort = "200 Round Box<br/>.308";
		displaynameshort = ".308";
		ammo = "288th_308_Ball";
		count = 200;
		initSpeed = 600;
		tracersEvery = 5;
		lastRoundsTracer = 10;
		mass = 40;
	};
	class 288th_200Rnd_308_Tracer : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 (Tracers)";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Tracer";
		displayNameShort = ".308 Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_AP : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_AP";
		displayname = "[288th] 200Rnd .308 AP";
		displayNameShort = ".308 AP";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Armor-Piercing";
		initspeed = 710;
	};
	class 288th_200Rnd_308_APT : 288th_200Rnd_308_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 AP (Tracers)";
		displayNameShort = ".308 AP Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_SLAP : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SLAP";
		displayname = "[288th] 200Rnd .308 SLAP";
		displayNameShort = ".308 SLAP";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Saboted Light Armor Penetrator";
		initspeed = 800;
	};
	class 288th_200Rnd_308_SLAPT : 288th_200Rnd_308_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 SLAP (Tracers)";
		displayNameShort = ".308 SLAP Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Saboted Light Armor Penetrator Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_FMJ : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_FMJ";
		displayname = "[288th] 200Rnd .308 FMJ";
		displayNameShort = ".308 FMJ";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Full Metal Jacket";
		initspeed = 560;
	};
	class 288th_200Rnd_308_FMJT : 288th_200Rnd_308_FMJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 FMJ (Tracers)";
		displayNameShort = ".308 FMJ Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Full Metal Jacket Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_HV : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HV";
		displayname = "[288th] 200Rnd .308 HV";
		displayNameShort = ".308 HV";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Velocity";
		initspeed = 740;
	};
	class 288th_200Rnd_308_HVT : 288th_200Rnd_308_HV
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 HV (Tracers)";
		displayNameShort = ".308 HV Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Velocity Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_HVAP : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HVAP";
		displayname = "[288th] 200Rnd .308 HVAP";
		displayNameShort = ".308 HVAP";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Velocity Armor-Piercing";
		initspeed = 1200;
	};
	class 288th_200Rnd_308_HVAPT : 288th_200Rnd_308_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 HVAP (Tracers)";
		displayNameShort = ".308 HVAP Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Velocity Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_HPSAP : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HPSAP";
		displayname = "[288th] 200Rnd .308 HP-SAP";
		displayNameShort = ".308 HP-SAP";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Powered Semi-Armor-Piercing";
		initspeed = 1275;
	};
	class 288th_200Rnd_308_HPSAPT : 288th_200Rnd_308_HPSAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 HP-SAP (Tracers)";
		displayNameShort = ".308 HP-SAP Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Powered Semi-Armor-Piercing Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_EHP : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_EHP";
		displayname = "[288th] 200Rnd .308 EHP";
		displayNameShort = ".308 EHP";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Expanded Hollow-Point";
		initspeed = 795;
	};
	class 288th_200Rnd_308_EHPT : 288th_200Rnd_308_EHP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 EHP (Tracers)";
		displayNameShort = ".308 EHP Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Expanded Hollow-Point Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_SAPHE : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SAPHE";
		displayname = "[288th] 200Rnd .308 SAPHE";
		displayNameShort = ".308 SAPHE";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Semi-Armor-Piercing High-Explosive";
		initspeed = 860;
	};
	class 288th_200Rnd_308_SAPHET : 288th_200Rnd_308_SAPHE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 SAPHE (Tracers)";
		displayNameShort = ".308 SAPHE Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Semi-Armor-Piercing High-Explosive Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_HE : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_HE";
		displayname = "[288th] 200Rnd .308 HE";
		displayNameShort = ".308 HE";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Explosive";
		initspeed = 600;
	};
	class 288th_200Rnd_308_HET : 288th_200Rnd_308_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 HE (Tracers)";
		displayNameShort = ".308 HE Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>High-Explosive Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_SS : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_SS";
		displayname = "[288th] 200Rnd .308 SS";
		displayNameShort = ".308 SS";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Sub-Sonic";
		initspeed = 325;
	};
	class 288th_200Rnd_308_SST : 288th_200Rnd_308_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 SS (Tracers)";
		displayNameShort = ".308 SS Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Sub-Sonic Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_UW : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		ammo = "288th_308_UW";
		displayname = "[288th] 200Rnd .308 UW";
		displayNameShort = ".308 UW";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Underwater";
		initspeed = 320;
	};
	class 288th_200Rnd_308_UWT : 288th_200Rnd_308_UW
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 UW (Tracers)";
		displayNameShort = ".308 UW Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Underwater Tracer";
		tracersEvery = 1;
	};
	class 288th_200Rnd_308_S : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 Silver";
		displayNameShort = ".308 Silver";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Silver";
		initspeed = 600;
	};
	class 288th_200Rnd_308_ST : 288th_200Rnd_308_S
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 200Rnd .308 Silver (Tracers)";
		displayNameShort = ".308 Silver Tracer";
		descriptionshort = "200 Round Magazine<br/>.308<br/>Silver Tracer";
		tracersEvery = 1;
	};

	//8.6x70mm MMG Box
	class 288th_120Rnd_86x70_Box : 288th_200Rnd_308
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm";
		displaynameshort = "8.6x70mm";
		descriptionShort = "120 Round Box<br/>8.6x70mm";
		count = 120;
		ammo = "288th_86x70_Ball";
		initSpeed = 807;
		tracersEvery = 5;
		lastRoundsTracer = 20;
		mass = 40;
	};
	class 288th_120Rnd_86x70_Box_Tracer : 288th_120Rnd_86x70_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm (Tracer)";
		displaynameshort = "8.6x70mm Tracer";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Tracers";
		ammo = "288th_86x70_Ball";
		tracersEvery = 1;
	};
	class 288th_120Rnd_86x70_AP_Box : 288th_120Rnd_86x70_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm AP";
		displaynameshort = "8.6x70mm AP";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Armor-Piercing";
		ammo = "288th_86x70_AP";
	};
	class 288th_120Rnd_86x70_APT_Box : 288th_120Rnd_86x70_AP_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm AP (Tracer)";
		displaynameshort = "8.6x70mm AP Tracer";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Armor-Piercing Tracers";
		ammo = "288th_86x70_AP";
		tracersEvery = 1;
	};
	class 288th_120Rnd_86x70_SLAP_Box : 288th_120Rnd_86x70_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm SLAP";
		displaynameshort = "8.6x70mm SLAP";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Saboted Light Armor Penetrator";
		ammo = "288th_86x70_SLAP";
	};
	class 288th_120Rnd_86x70_SLAPT_Box : 288th_120Rnd_86x70_SLAP_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm SLAP (Tracer)";
		displaynameshort = "8.6x70mm SLAP Tracer";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Saboted Light Armor Penetrator Tracers";
		ammo = "288th_86x70_SLAP";
		tracersEvery = 1;
	};
	class 288th_120Rnd_86x70_EHP_Box : 288th_120Rnd_86x70_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm EHP";
		displaynameshort = "8.6x70mm EHP";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Expanded Hollow-Point";
		ammo = "288th_86x70_EHP";
	};
	class 288th_120Rnd_86x70_EHPT_Box : 288th_120Rnd_86x70_EHP_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm EHP (Tracer)";
		displaynameshort = "8.6x70mm EHP Tracer";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Expanded Hollow-Point Tracers";
		ammo = "288th_86x70_EHP";
		tracersEvery = 1;
	};
	class 288th_120Rnd_86x70_SS_Box : 288th_120Rnd_86x70_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm SS";
		displaynameshort = "8.6x70mm SS";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Subsonic";
		ammo = "288th_86x70_SS";
	};
	class 288th_120Rnd_86x70_SST_Box : 288th_120Rnd_86x70_SS_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 120Rnd 8.6x70mm SS (Tracer)";
		displaynameshort = "8.6x70mm SS Tracer";
		descriptionShort = "120 Round Box<br/>8.6x70mm<br/>Subsonic Tracers";
		ammo = "288th_86x70_SS";
		tracersEvery = 1;
	};

	//15x50mm HMG Box
	class 288th_75Rnd_15x50 : OPTRE_50Rnd_127x99_M250_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		initspeed = 1200;
		ammo = "OPTRE_B_145x114_APFSDS";
		count = 75;
		displayname = "[288th] 75Rnd 15x50mm";
		displaynameshort = "15x50mm APFSDS";
		descriptionShort = "75 Round Box<br/>15x50mm";
		mass = 85;
		tracersEvery = 5;
		lastRoundsTracer = 25;
	};
	class 288th_75Rnd_15x50_Tracer : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm (Tracer)";
		displaynameshort = "15x50mm APFSDS Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_HVAP : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HVAP";
		initspeed = 850;
		displayname = "[288th] 75Rnd 15x50mm HVAP";
		displaynameshort = "15x50mm HVAP";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Velocity Armor Piercing";
	};
	class 288th_75Rnd_15x50_HVAPT : 288th_75Rnd_15x50_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm HVAP (Tracer)";
		displaynameshort = "15x50mm HVAP Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Velocity Armor Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_HEDP : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HEDP";
		displayname = "[288th] 75Rnd 15x50mm HEDP";
		displaynameshort = "15x50mm HEDP";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Explosive Dual Purpose";
	};
	class 288th_75Rnd_15x50_HEDPT : 288th_75Rnd_15x50_HEDP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm HEDP (Tracer)";
		displaynameshort = "15x50mm HEDP Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Explosive Dual Purpose Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_AP : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_AP";
		displayname = "[288th] 75Rnd 15x50mm AP";
		displaynameshort = "15x50mm AP";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Armor Piercing";
	};
	class 288th_75Rnd_15x50_APT : 288th_75Rnd_15x50_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm AP (Tracer)";
		displaynameshort = "15x50mm AP Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Armor Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_HE : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HE";
		displayname = "[288th] 75Rnd 15x50mm HE";
		displaynameshort = "15x50mm HE";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Explosive";
	};
	class 288th_75Rnd_15x50_HET : 288th_75Rnd_15x50_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm HE (Tracer)";
		displaynameshort = "15x50mm HE Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>High Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_SS : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "288th_145x114_SS";
		displayname = "[288th] 75Rnd 15x50mm SS";
		displaynameshort = "15x50mm SS";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Sub-Sonic";
	};
	class 288th_75Rnd_15x50_SST : 288th_75Rnd_15x50_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm SS (Tracer)";
		displaynameshort = "15x50mm SS Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Sub-Sonic Tracers";
		tracersEvery = 1;
	};
	class 288th_75Rnd_15x50_SLAP : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_SLAP";
		displayname = "[288th] 75Rnd 15x50mm SLAP";
		displaynameshort = "15x50mm SLAP";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Saboted Light Armor Penetrator";
	};
	class 288th_75Rnd_15x50_SLAPT : 288th_75Rnd_15x50_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 75Rnd 15x50mm SLAP (Tracer)";
		displaynameshort = "15x50mm SLAP Tracer";
		descriptionShort = "75 Round Box<br/>15x50mm<br/>Saboted Light Armor Penetrator Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50 : 288th_75Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		count = 150;
		displayname = "[288th] 150Rnd 15x50mm";
		displaynameshort = "15x50mm";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>";
		//hiddenSelectionsTextures[] = {"\288th_Weapons\Data\Weapons\M73X\50calMag_co.paa"};
		mass = 170;
		lastRoundsTracer = 50;
	};
	class 288th_150Rnd_15x50_Tracer : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm (Tracer)";
		displaynameshort = "15x50mm Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/> Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_HVAP : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HVAP";
		initspeed = 850;
		displayname = "[288th] 150Rnd 15x50mm HVAP";
		displaynameshort = "15x50mm HVAP";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Velocity Armor Piercing";
	};
	class 288th_150Rnd_15x50_HVAPT : 288th_150Rnd_15x50_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm HVAP (Tracer)";
		displaynameshort = "15x50mm HVAP Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Velocity Armor Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_HEDP : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HEDP";
		displayname = "[288th] 150Rnd 15x50mm HEDP";
		displaynameshort = "15x50mm HEDP";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Explosive Dual Purpose";
	};
	class 288th_150Rnd_15x50_HEDPT : 288th_150Rnd_15x50_HEDP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm HEDP (Tracer)";
		displaynameshort = "15x50mm HEDP Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Explosive Dual Purpose Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_AP : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_AP";
		displayname = "[288th] 150Rnd 15x50mm AP";
		displaynameshort = "15x50mm AP";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Armor Piercing";
	};
	class 288th_150Rnd_15x50_APT : 288th_150Rnd_15x50_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm AP (Tracer)";
		displaynameshort = "15x50mm AP Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Armor Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_HE : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_HE";
		displayname = "[288th] 150Rnd 15x50mm HE";
		displaynameshort = "15x50mm HE";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Explosive";
	};
	class 288th_150Rnd_15x50_HET : 288th_150Rnd_15x50_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm HE (Tracer)";
		displaynameshort = "15x50mm HE Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>High Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_SS : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "288th_145x114_SS";
		displayname = "[288th] 150Rnd 15x50mm SS";
		displaynameshort = "15x50mm SS";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Sub-Sonic";
	};
	class 288th_150Rnd_15x50_SST : 288th_150Rnd_15x50_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm SS (Tracer)";
		displaynameshort = "15x50mm SS Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Sub-Sonic Tracers";
		tracersEvery = 1;
	};
	class 288th_150Rnd_15x50_SLAP : 288th_150Rnd_15x50
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		ammo = "OPTRE_B_145x114_SLAP";
		displayname = "[288th] 150Rnd 15x50mm SLAP";
		displaynameshort = "15x50mm SLAP";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Saboted Light Armor Penetrator";
	};
	class 288th_150Rnd_15x50_SLAPT : 288th_150Rnd_15x50_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] 150Rnd 15x50mm SLAP (Tracer)";
		displaynameshort = "15x50mm SLAP Tracer";
		descriptionShort = "150 Round Box<br/>15x50mm<br/>Saboted Light Armor Penetrator Tracers";
		tracersEvery = 1;
	};

	//12.7x30mm Mag
	class 288th_65Rnd_127x30 : OPTRE_64Rnd_57x31_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		ammo = "288th_127x40_Ball";
		count = 65;
		displayname = "[288th] 65Rnd 12.7x30mm";
		displaynameshort = "12.7x30mm";
		descriptionShort = "65 Round Magazine<br/>12.7x30mm";
		initspeed = 640;
		mass = 8;
	};
	class 288th_65Rnd_127x30_Tracer : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm (Tracers)";
		displayNameShort = "12.7x30mm Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Tracer";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_AP : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_AP";
		displayname = "[288th] 65Rnd 12.7x30mm AP";
		displayNameShort = "12.7x30mm AP";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Armor-Piercing";
	};
	class 288th_65Rnd_127x30_APT : 288th_65Rnd_127x30_AP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm AP (Tracers)";
		displayNameShort = "12.7x30mm AP Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_SLAP : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 825;
		ammo = "288th_127x40_SLAP";
		displayname = "[288th] 65Rnd 12.7x30mm SLAP";
		displayNameShort = "12.7x30mm SLAP";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Saboted Light Armor Penetrator";
	};
	class 288th_65Rnd_127x30_SLAPT : 288th_65Rnd_127x30_SLAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm SLAP (Tracers)";
		displayNameShort = "12.7x30mm SLAP Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Saboted Light Armor Penetrator Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_FMJ : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 578;
		ammo = "288th_127x40_FMJ";
		displayname = "[288th] 65Rnd 12.7x30mm FMJ";
		displayNameShort = "12.7x30mm FMJ";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Full Metal Jacket";
	};
	class 288th_65Rnd_127x30_FMJT : 288th_65Rnd_127x30_FMJ
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm FMJ (Tracers)";
		displayNameShort = "12.7x30mm FMJ Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Full Metal Jacket Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_HV : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 757.78;
		ammo = "288th_127x40_HV";
		displayname = "[288th] 65Rnd 12.7x30mm HV";
		displayNameShort = "12.7x30mm HV";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Velocity";
	};
	class 288th_65Rnd_127x30_HVT : 288th_65Rnd_127x30_HV
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm HV (Tracers)";
		displayNameShort = "12.7x30mm HV Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Velocity Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_HVAP : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 800;
		ammo = "288th_127x40_HVAP";
		displayname = "[288th] 65Rnd 12.7x30mm HVAP";
		displayNameShort = "12.7x30mm HVAP";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Velocity Armor-Piercing";
	};
	class 288th_65Rnd_127x30_HVAPT : 288th_65Rnd_127x30_HVAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm HVAP (Tracers)";
		displayNameShort = "12.7x30mm HVAP Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Velocity Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_HPSAP : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 1000;
		ammo = "288th_127x40_HPSAP";
		displayname = "[288th] 65Rnd 12.7x30mm HP-SAP";
		displayNameShort = "12.7x30mm HP-SAP";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Powered Semi-Armor-Piercing";
	};
	class 288th_65Rnd_127x30_HPSAPT : 288th_65Rnd_127x30_HPSAP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm HP-SAP (Tracers)";
		displayNameShort = "12.7x30mm HP-SAP Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Powered Semi-Armor-Piercing Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_EHP : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 580;
		ammo = "288th_127x40_EHP";
		displayname = "[288th] 65Rnd 12.7x30mm EHP";
		displayNameShort = "12.7x30mm EHP";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Expanded Hollow-Point";
	};
	class 288th_65Rnd_127x30_EHPT : 288th_65Rnd_127x30_EHP
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm EHP (Tracers)";
		displayNameShort = "12.7x30mm EHP Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Expanded Hollow-Point Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_SAPHE : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_SAPHE";
		displayname = "[288th] 65Rnd 12.7x30mm SAPHE";
		displayNameShort = "12.7x30mm SAPHE";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Semi-Armor-Piercing High-Explosive";
	};
	class 288th_65Rnd_127x30_SAPHET : 288th_65Rnd_127x30_SAPHE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm SAPHE (Tracers)";
		displayNameShort = "12.7x30mm SAPHE Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Semi-Armor-Piercing High-Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_HE : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_HE";
		displayname = "[288th] 65Rnd 12.7x30mm HE";
		displayNameShort = "12.7x30mm HE";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Explosive";
	};
	class 288th_65Rnd_127x30_HET : 288th_65Rnd_127x30_HE
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm HE (Tracers)";
		displayNameShort = "12.7x30mm HE Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>High-Explosive Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_SS : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 340;
		ammo = "288th_127x40_SS";
		displayname = "[288th] 65Rnd 12.7x30mm SS";
		displayNameShort = "12.7x30mm SS";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Sub-Sonic";
	};
	class 288th_65Rnd_127x30_SST : 288th_65Rnd_127x30_SS
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm SS (Tracers)";
		displayNameShort = "12.7x30mm SS Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Sub-Sonic Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_UW : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		initspeed = 620;
		ammo = "288th_127x40_UW";
		displayname = "[288th] 65Rnd 12.7x30mm UW";
		displayNameShort = "12.7x30mm UW";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Underwater";
	};
	class 288th_65Rnd_127x30_UWT : 288th_65Rnd_127x30_UW
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm UW (Tracers)";
		displayNameShort = "12.7x30mm UW Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Underwater Tracers";
		tracersEvery = 1;
	};
	class 288th_65Rnd_127x30_S : 288th_65Rnd_127x30
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm Silver";
		displayNameShort = "12.7x30mm Silver";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Silver";
	};
	class 288th_65Rnd_127x30_ST : 288th_65Rnd_127x30_S
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 65Rnd 12.7x30mm Silver (Tracers)";
		displayNameShort = "12.7x30mm Silver Tracer";
		descriptionshort = "65 Round Magazine<br/>12.7x30mm<br/>Silver Tracers";
		tracersEvery = 1;
	};

	//288th AutoGL Mag
	class 288th_50Rnd_20mm_HE : 200Rnd_65x39_cased_Box
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		displayName = "[288th] 50Rnd 20mm HE M318 Box";
		displaynameshort = "50Rnd 20mm HE";
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count = 50;
		ammo = "G_40mm_HE";
		initSpeed = 220;
		maxLeadSpeed = 25;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "50Rnd 20mm HE Grenade Box";
		mass = 40;
		modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100Rnd.p3d";
		modelSpecialIsProxy = 1;
	};
	class 288th_50Rnd_20mm_HEDP : 288th_50Rnd_20mm_HE
	{
		displayName = "[288th] 50Rnd 20mm HEDP M318 Box";
		displaynameshort = "50Rnd 20mm HEDP";
		ammo = "M319_HEDP";
		descriptionShort = "50Rnd 20mm HEDP Grenade Box";
	};
	class 288th_50Rnd_20mm_HEDPC : 288th_50Rnd_20mm_HE
	{
		displayName = "[288th] 50Rnd 20mm HEDP-C M318 Box";
		displaynameshort = "50Rnd 20mm HEDP-C";
		ammo = "M319_HEDPC";
		descriptionShort = "50Rnd 20mm HEDP-C Grenade Box";
	};
	class 288th_50Rnd_20mm_HEAT : 288th_50Rnd_20mm_HE
	{
		displayName = "[288th] 50Rnd 20mm HEAT M318 Box";
		displaynameshort = "50Rnd 20mm HEAT";
		ammo = "M319_HEAT";
		descriptionShort = "50Rnd 20mm HEAT Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_W : 288th_50Rnd_20mm_HE
	{
		displayName = "[288th] 50Rnd 20mm White Smoke M318 Box";
		displaynameshort = "50Rnd 20mm W Smoke";
		ammo = "OPTRE_40mm_Smoke";
		descriptionShort = "50Rnd 20mm W Smoke Grenade Box";
		mass = 30;
	};
	class 288th_50Rnd_20mm_SMK_R : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Red Smoke M318 Box";
		displaynameshort = "50Rnd 20mm R Smoke";
		ammo = "OPTRE_40mm_SmokeRed";
		descriptionShort = "50Rnd 20mm R Smoke Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_O : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Orange Smoke M318 Box";
		displaynameshort = "50Rnd 20mm O Smoke";
		ammo = "OPTRE_40mm_SmokeOrange";
		descriptionShort = "50Rnd 20mm O Smoke Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_Y : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Yellow Smoke M318 Box";
		displaynameshort = "50Rnd 20mm Y Smoke";
		ammo = "OPTRE_40mm_SmokeYellow";
		descriptionShort = "50Rnd 20mm Y Smoke Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_G : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Green Smoke M318 Box";
		displaynameshort = "50Rnd 20mm G Smoke";
		ammo = "OPTRE_40mm_SmokeGreen";
		descriptionShort = "50Rnd 20mm G Smoke Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_B : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Blue Smoke M318 Box";
		displaynameshort = "50Rnd 20mm B Smoke";
		ammo = "OPTRE_40mm_SmokeBlue";
		descriptionShort = "50Rnd 20mm B Smoke Grenade Box";
	};
	class 288th_50Rnd_20mm_SMK_P : 288th_50Rnd_20mm_SMK_W
	{
		displayName = "[288th] 50Rnd 20mm Purple Smoke M318 Box";
		displaynameshort = "50Rnd 20mm P Smoke";
		ammo = "OPTRE_40mm_SmokePurple";
		descriptionShort = "50Rnd 20mm P Smoke Grenade Box";
	};

	//Temp cursed revolver ammo
	class 288th_Temp_Yellow_Tracer : 6Rnd_45ACP_Cylinder
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		initspeed = 400;
		tracersEvery = 1;
		count = 6;
		ammo = "288th_308_MMG_yellow";
		displayname = "[288th] 6Rnd Yellow Tracer Ammo";
		displaynameshort = "Yellow Tracer Ammo";
		descriptionShort = "Temp's Yellow Tracers";
	};
	class 288th_Temp_Purple_Plasma : 6Rnd_45ACP_Cylinder
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		initspeed = 400;
		count = 6;
		ammo = "288th_Plasma_Purple";
		displayname = "[288th] 6Rnd Purple Plasma Ammo";
		displaynameshort = "Purple Plasma Ammo";
		descriptionShort = "Temp's Purple Plasma";
	};

	//Fade MA5B 308 Mag
	class 288th_60Rnd_308_Mag: OPTRE_60Rnd_762x51_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 60Rnd .308 Mag";
		displaynameshort = ".308";
		ammo = "288th_308_MMG_yellow";
		descriptionshort = "60 Round Magazine<br/>.308";
		initSpeed = 807;
	};
	class 288th_60Rnd_308_Tazer_Mag: 288th_60Rnd_308_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[288th] 60Rnd Tazer Mag";
		displaynameshort = "Tazer";
		ammo = "288th_Taser_ammo_long";
		descriptionshort = "60 Round Magazine<br/>Tazer";
		initSpeed = 254;
	};
	
	//Experimental ammo
	class 288th_7Rnd_Gauss_Slug_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
		displayname = "[288th] 7Rnd 5.4mm APDS";
		displaynameshort = "APDS";
		ammo = "288th_Gauss_Slug";
		count = 7;
		initSpeed = 5000;
		picture = "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort = "7 Round Magazine<br>5.4mm<br>Armor Piercing Discarding Sabot";
		mass = 40;
		tracersEvery = 1;
		lastRoundsTracer = 7;
	};
	/*class 288th_Autocannon_mag: 7Rnd_408_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		model = "\A3\weapons_f\empty";
		scope = 2;
		scopeArsenal = 2;
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
		displayName = "[288th] AC-8 Ammo";
		displayNameShort = "10Rnd AC-8";
		ammo = "288th_AC_8";
		descriptionshort = "A 10Rnd AC-8 ammo mag";
		count = 10;
		mass = 20;
		allowedslots[] = {901};
	};*/
	class 288th_EMP : 288th_Plasma_Blue_Mag
	{
		displayname = "[288th] 15Rnd EMP Mag";
		displaynameshort = "EMP Mag";
		descriptionshort = "A specially modified EMP mag, use with caution";
		ammo = "288th_EMP";
		lastRoundsTracer = 5;
		count = 15;
		mass = 12;
	};
	class 288th_testmag : 288th_30Rnd_65x85_Mag
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		initSpeed = 50;
		scope = 2;
		scopearsenal = 2;
		displayname = "[288th] 50Rnd Test Mag";
		displaynameshort = "288th Test Mag";
		descriptionshort = "A test magazine loaded with who knows what";
		ammo = "OPTRE_c7_remote_ammo_thrown_sticky";
		count = 50;
		mass = 1;
		tracersEvery = 1;
	};
	class 288th_65x85_M247Z: OPTRE_200Rnd_127x99_M247H_Etilka
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] 500Rnd 6.5x85mm Box";
		displayNameShort = "6.5x85mm APFS";
		ammo = "65x85_APFS";
		initSpeed = 600;
		count = 500;
		tracersEvery = 1;
		lastRoundsTracer = 500;
		descriptionshort = "500 Round Box Magazine<br>6.5x85mm";
	};
	class 288th_65x85_M247Z_HE: 288th_65x85_M247Z
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th] 500Rnd 6.5x85mm HE Box";
		displayNameShort = "6.5x85mm HE";
		ammo = "65x85_HEDP";
		initSpeed = 600;
		count = 500;
		tracersEvery = 1;
		lastRoundsTracer = 500;
		descriptionshort = "500 Round Box Magazine<br>6.5x85mm HE";
	};

	//288th Railgun Mag
	class 288th_Railgun_Mag : OPTRE_FC_Railgun_Slug
	{
		displayName = "[288th] Railgun Slugs";
		displayNameShort = "16x65mm Slugs";
		ammo = "288_Railgun";
		descriptionshort = "16x65mm Slugs for the 288th Railgun";
		count = 5;
		initspeed = 5000;
		mass = 10;
	};
	class 288th_Railgun_Mag_1 : 288th_Railgun_Mag
	{
		displayName = "[288th] Railgun Slugs?";
		displayNameShort = "16x65mm Slugs?";
		descriptionshort = "16x65mm Slugs for the 288th Railgun?";
		ammo = "288_Railgun_1";
		count = 5;
		initspeed = 2000;
		mass = 8;
	};
	class 288th_SRS99XT_Mag : 288th_Railgun_Mag
	{
		displayName = "[288th] 14.5x114mm Slugs";
		displayNameShort = "14.5x114mm Slugs";
		descriptionshort = "14.5x114mm Slugs for the 288th SRS99XT";
		ammo = "288_SRS99XT_Slugs";
		count = 4;
		initspeed = 1000;
		mass = 8;
	};
};

/*class CfgVehicles
{
	class FxCartridge;
	class 288th_fx_slug_black: FxCartridge
	{
		author = "Soda / Misriah 288";
		mapSize = 0.03;
		_generalMacro = "288th_fx_slug_black";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\black\shell_pile_1";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = "false";
		airRotation = 1.5;
	};
	class 288th_fx_slug_orange: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\orange\shell_pile_1";
	};
	class 288th_fx_slug_white: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\white\shell_pile_1";
	};
	class 288th_fx_slug_red: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\red\shell_pile_1";
	};
	class 288th_fx_slug_yellow: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\yellow\shell_pile_1";
	};
	class 288th_fx_slug_purple: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\purple\shell_pile_1";
	};
	class 288th_fx_slug_blue: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\blue\shell_pile_1";
	};
	class 288th_fx_slug_green: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\green\shell_pile_1";
	};
	class 288th_fx_slug_dgreen: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dgreen\shell_pile_1";
	};
	class 288th_fx_slug_gold: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\gold\shell_pile_1";
	};
	class 288th_fx_slug_db: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\db\shell_pile_1";
	};
	class 288th_fx_slug_dred: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\dred\shell_pile_1";
	};
	class 288th_fx_slug_drab: 288th_fx_slug_black
	{
		author = "Soda / Misriah 288";
		model = "\288th_Weapons\Data\Ammo\Shotgun_Shells\drab\shell_pile_1";
	};
};*/