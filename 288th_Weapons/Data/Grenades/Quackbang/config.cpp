//#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class QuackBangGrenade
	{
		author = "Soda / Misriah 288";
		units[] = {};
		weapons[] = {"QBGrenade"};
		requiredAddons[] = { "A3_characters_F", "A3_Data_F"};	
	};
};

class CfgSounds
{
	sounds[] = {};
	class squeak1
	{
		name = "squeak1";
		sound[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss", 50, 1};
		titles[] = {1,""};
	};
	class squeak2
	{
		name = "squeak2";
		sound[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss", 50, 1};
		titles[] = {1,""};
	};
	class squeak3
	{
		name = "squeak3";
		sound[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss", 50, 1};
		titles[] = {1,""};
	};
	class quack
	{
		name = "quack";
		sound[] = {"288th_Weapons\Data\Grenades\Quackbang\Mac_Quack.wss", 0.5, 1};
		titles[] = {1,""};
	};
};


class CfgSoundShaders
{
	class Quackbang_SoundShader1
	{
		samples[] = {{ "288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss", 0.32 },{ "288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss", 0.32 },{ "288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss", 0.32 }, { "288th_Weapons\Data\Grenades\Quackbang\Mac_Quack.wss", 0.04 }}; // you can use wav/wss/ogg, ogg will have a small delay before playback (not too good for weapons/explosions)
		volume = 1;
		range = 50;
	};
};

class CfgSoundSets
{
	class Quackbang_SoundSet
	{
		soundShaders[] = {"Quackbang_SoundShader1"};
		volumeFactor = 2;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};



class CfgCloudlets
{
	class Default;
	class QBGrenadeExp: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		size[] = {0.1,0.1};
		color[] = {
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 }};
		animationSpeed[] = {1000};
		positionVar[] = {"3 * intensity","1.2 * intensity","3 * intensity"};
		MoveVelocityVar[] = {1.75,1.75,1.75};
		colorVar[] = {0,0,0,0};
		interval = "0.007 * interval + 0.007";
		circleRadius = "intensity";
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.5;
		rotationVelocity = 0;
		weight = 4;
		volume = 1;
		rubbing = 0;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.08;
		onTimerScript = ""; 
		beforeDestroyScript = "288th_Weapons\Data\Grenades\Quackbang\quackbang.sqf";
		lifeTimeVar = 0;
		rotationVelocityVar = 1;
		sizeVar = 0;
		randomDirectionPeriodVar = 2;
		randomDirectionIntensityVar = 0.1;
	};
};

class QBGrenadeExplosion
{
	class GrenadeExp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "QBGrenadeExp";
		intensity = 1;
		interval = 0.25;
		lifeTime = 0.25;
		particleFSLoop = 0;
	};
};

class CfgAmmo 
{
	class Default;	// External class reference
	class Grenade : Default {};
	class GrenadeHand : Grenade {};
	class GrenadeCore: Default {};
	class GrenadeBase: GrenadeCore {};
	class SmokeShell;
	class QBGrenade_ammo  : GrenadeCore 
	{
		
		scope = 2;
		cost = 0.1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 1;
		explosive = 1;
		deflecting = 80;
		deflectionSlowDown=0.01;
		deflectionDirDistribution=0.25;
		model = "288th_Weapons\Data\Grenades\Quackbang\Rubberduck4.p3d"; 
		simulation = "shotGrenade";
		simulationStep = 0.05;
		maneuvrability = 1;
		visibleFire = 0.1;
		audibleFire = 0.01;
		visibleFireTime = 100;
		fuseDistance = 0;
		aiAmmoUsageFlags = "64 + 128 + 512";
		ExplosionEffects = "QBGrenadeExplosion";
		explosionTime = 1.25;
		explosionForceCoef = 0;
		CraterEffects = "";
		soundHit[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		SmokeShellSoundHit1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		SmokeShellSoundHit2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		SmokeShellSoundHit3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		SmokeShellSoundLoop1[] = {};
		SmokeShellSoundLoop2[] = {};
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		explosionSoundEffect = "";
		SoundSetExplosion[] = {"Quackbang_SoundSet"};

		soundHit1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundHit2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		soundHit3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundHit4[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,0.75,50};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundImpactSoft1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundImpactSoft2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		soundImpactSoft3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundImpactSoft4[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,0.75,50};
		soundImpactSoft5[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,0.75,50};
		soundImpactSoft6[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,0.75,50};
		soundImpactSoft7[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,0.5,50};
		soundImpactHard1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		soundImpactHard2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundImpactHard3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundImpactHard4[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,0.75,50};
		soundImpactHard5[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,0.75,50};
		soundImpactHard6[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,0.75,50};
		soundImpactHard7[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,0.5,50};
		soundImpactIron1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundImpactIron2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundImpactIron3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		soundImpactIron4[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,0.75,50};
		soundImpactIron5[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,0.75,50};
		soundImpactWoodExt1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		soundImpactWoodExt2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundImpactWoodExt3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundImpactWoodExt4[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,0.75,50};
		soundImpactWater1[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_3.wss",100,1,50};
		soundImpactWater2[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak.wss",100,1,50};
		soundImpactWater3[] = {"288th_Weapons\Data\Grenades\Quackbang\Rubber_Duck_Squeak_2.wss",100,1,50};
		impactGroundSoft[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactGroundHard[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactIron[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactArmor[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactBuilding[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactFoliage[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactWood[] = {"soundImpactWoodExt1",0.25,"soundImpactWoodExt2",0.25,"soundImpactWoodExt3",0.25,"soundImpactWoodExt4",0.25};
		impactGlass[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactGlassArmored[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactConcrete[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactTyre[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactRubber[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactPlastic[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactDefault[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactMetal[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactMetalplate[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactWater[] = {"soundImpactWater1",0.35,"soundImpactWater2",0.35,"soundImpactWater3",0.3};





	};
};



class cfgMagazines
{
	class Default;	// External class reference
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};
	class QBGrenade :  HandGrenade
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		icon = "288th_Weapons\Data\Grenades\Quackbang\duckicon.paa";
		model = "288th_Weapons\Data\Grenades\Quackbang\Rubberduck4.p3d";  
		displayName = "[288th] Quackbang Grenade";
		picture = "288th_Weapons\Data\Grenades\Quackbang\duckicon.paa";
		displayNameShort = "Quackbang";
		ammo = "QBGrenade_ammo";
		mass = 8;
		initSpeed=20;
	};
};


class CfgWeapons 
{
	class Default;
	class GrenadeLauncher;
	class Throw : GrenadeLauncher {
	class ThrowMuzzle: GrenadeLauncher{
			cursor = "EmptyCursor";
			cursorAim = "throw";
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 0.5;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 10;
			minRangeProbab = 0.2;
			midRange = 45;
			midRangeProbab = 0.9;
			maxRange = 60;
			maxRangeProbab = 0.03;
			keepInInventory = 1;	
	};
	class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] += {"QBGrenade"};
		};
	};
};