class CfgPatches
{
	class 288th_Taser_Magazines
	{
		units[] = {};
		weapons[] = {"288th_Taser_Mags"};
		requiredAddons[] = { "A3_characters_F", "A3_Data_F"};	
	};
};

class CfgSounds
{
	class spark2
	{
		name = "spark2";
		Sound[] = {"\288th_Weapons\Data\Taser\Sound\spark2.ogg", db+25, 1};
		titles[] = {};
	};		
	class spark3	
	{
		name = "spark3";
		Sound[] = {"\288th_Weapons\Data\Taser\Sound\spark3.ogg", db+25, 1};
		titles[] = {};
	};
	class spark4	
	{
		name = "spark4";
		Sound[] = {"\288th_Weapons\Data\Taser\Sound\spark4.ogg", db+25, 1};
		titles[] = {};
	};
};

class CfgCloudlets
{
	class Default;
	class 288th_TaserExp: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		size[] = {0,0};
		color[] = 
		{
			{ 0,0,0,0 },
			{ 0,0,0,0.0 },
			{ 0,0,0,0.0 },
			{ 0,0,0,0.0 },
			{ 0,0,0,0 }
		};
		animationSpeed[] = {1000};
		positionVar[] = {"intensity","intensity","intensity"};
		MoveVelocityVar[] = {1.75,1.75,1.75};
		colorVar[] = {0,0,0,0};
		interval = "interval";
		circleRadius = "intensity";
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.5;
		lifeTime = 0.5;
		rotationVelocity = 0;
		weight = 4;
		volume = 1;
		rubbing = 0;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.08;
		onTimerScript = ""; 
		beforeDestroyScript = "\288th_Weapons\Data\Taser\scripts\unco.sqf";
		lifeTimeVar = 0;
		rotationVelocityVar = 1;
		sizeVar = 0;
		randomDirectionPeriodVar = 2;
		randomDirectionIntensityVar = 0.1;
	};
	class 288th_TaserExp_Long: 288th_TaserExp
	{
		beforeDestroyScript = "\288th_Weapons\Data\Taser\scripts\unco_Long.sqf";
	};
	class 288th_TaserExp_Grenade: 288th_TaserExp
	{
		beforeDestroyScript = "\288th_Weapons\Data\Taser\scripts\unco_Grenade.sqf";
	};
};
class CfgLights
{
	class 288th_TaserLight
	{
		color[] = {1,1,5,1};
		ambient[] = {0.1,0.1,0.5,1};
		brightness = 0.15;
		diffuse[] = {0,0,0,0.75};
		position[] = {0,0,0};
		dayLight = 1;			// boolean (0/1). Is light shown during daylight.
		useFlare = 1;			// boolean (0/1). Is light having a flare effect
		flareSize = 0.5;			// Default is 1
		flareMaxDistance = 100;	// Default is 600
		
	};
};

class 288th_TaserExplosion
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "288th_TaserLight";
		intensity = 0.25;
		interval = 0.2;
		lifeTime = 0.75;
	};
	class Exp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "288th_TaserExp";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		particleFSLoop = 0;
	};
};
class 288th_TaserExplosion_Long
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "288th_TaserLight";
		intensity = 0.25;
		interval = 0.2;
		lifeTime = 0.75;
	};
	class Exp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "288th_TaserExp_Long";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		particleFSLoop = 0;
	};
};
class 288th_TaserExplosion_Grenade
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "288th_TaserLight";
		intensity = 0.25;
		interval = 0.2;
		lifeTime = 0.75;
	};
	class Exp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "288th_TaserExp_Grenade";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		particleFSLoop = 0;
	};
};

class CfgAmmo 
{
	
	class Default;	// External class reference
	class BulletCore;
	class BulletBase: BulletCore {};
	class Grenade : Default {};
	class GrenadeHand : Grenade {};
	class GrenadeCore: Default {};
	class GrenadeBase: GrenadeCore {};

	class 288th_Taser_ammo: BulletBase
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects="288th_TaserExplosion";
		explosionTime = -1;
		cartridge = "FxCartridge_9mm";
		visibleFire = 15;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		deflecting = 20;
		simulation = "shotBullet";
		simulationStep = 0.05;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 30;
		cost = 0.5;
		airLock = 0;
		caliber = 1.4;
		typicalSpeed = 280;
		timeToLive = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		minRange = 3;
		minRangeProbab = 1;
		midRange = 750;
		midRangeProbab = 1;
		maxRange = 2500;
		maxRangeProbab = 1;
		tracerScale = 0.25;
		tracerStartTime = 0.005;
		tracerEndTime = 45;
		tracerColor[] = {0,0,1,0.5};
		tracerColorR[] = {0,0,1,0.5};
		airFriction = -0.00086;
		warheadName = ".45 ACP Taser";
		whistleOnFire = 1;
		whistleDist = 50;
	};
	class 288th_Taser_ammo_Long: 288th_Taser_ammo
	{
		ExplosionEffects="288th_TaserExplosion_Long";
	};
	class 288th_Taser_Impact_Grenade_ammo  : GrenadeHand 
	{
		scope = 2;
		cost = 0.1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		model = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade.p3d"; 
		visibleFire = 0.1;
		audibleFire = 0.01;
		visibleFireTime = 100;
		fuseDistance = 3;
		aiAmmoUsageFlags = "64 + 128 + 512";
		ExplosionEffects="288th_TaserExplosion_Grenade";
		explosionTime = -1;
		explosionForceCoef = 1;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		SoundSetExplosion[] = {"EMP_Sparks_SoundSet_GL"};
		minRange = 10;
		minRangeProbab = 1;
		midRange = 20;
		midRangeProbab = 1;
		maxRange = 40;
		maxRangeProbab = 1;
		allowAgainstInfantry = 1;
		airLock = 1;
		class CamShakeExplode
		{
			power = 20;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 3;
		};
	};
	class 288th_Taser_Grenade_ammo  : GrenadeHand 
	{
		scope = 2;
		cost = 0.1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		model = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade.p3d"; 
		visibleFire = 0.1;
		audibleFire = 0.01;
		visibleFireTime = 100;
		fuseDistance = 3;
		aiAmmoUsageFlags = "64 + 128 + 512";
		ExplosionEffects="288th_TaserExplosion_Grenade";
		explosionTime = 5;
		explosionForceCoef = 1;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		SoundSetExplosion[] = {"EMP_Sparks_SoundSet_GL"};
		minRange = 10;
		minRangeProbab = 1;
		midRange = 20;
		midRangeProbab = 1;
		maxRange = 40;
		maxRangeProbab = 1;
		allowAgainstInfantry = 1;
		airLock = 1;
		class CamShakeExplode
		{
			power = 20;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 3;
		};
	};

	/*class B_556x45_Ball_Tracer_Yellow;
	class 288th_Taser_ammo_556: B_556x45_Ball_Tracer_Yellow
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects="288th_TaserExplosion";
		explosionTime = -1;
		cartridge = "FxCartridge_556";
		visibleFire = 15;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		deflecting = 20;
		simulation = "shotBullet";
		simulationStep = 0.05;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 30;
		cost = 0.5;
		airLock = 0;
		caliber = 1.2;
		typicalSpeed = 380;
		timeToLive = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		minRange = 3;
		minRangeProbab = 1;
		midRange = 750;
		midRangeProbab = 1;
		maxRange = 2500;
		maxRangeProbab = 1;
		tracerScale = 0.25;
		tracerStartTime = 0.005;
		tracerEndTime = 45;
		tracerColor[] = {0,0,1,0.5};
		tracerColorR[] = {0,0,1,0.5};
		airFriction = -0.0012;
		warheadName = "5.56 mm Taser";
		whistleOnFire = 1;
		whistleDist = 50;
		thrust = 210;
		thrustTime = 1.5;
	};

	class B_9x21_Ball_Tracer_Yellow;
	class 288th_Taser_ammo_9x21 : B_9x21_Ball_Tracer_Yellow
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects="288th_TaserExplosion";
		explosionTime = -1;
		cartridge = "FxCartridge_9mm";
		visibleFire = 15;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		deflecting = 20;
		simulation = "shotBullet";
		simulationStep = 0.05;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 30;
		cost = 0.5;
		airLock = 0;
		caliber = 0.869565;
		typicalSpeed = 920;
		timeToLive = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		minRange = 3;
		minRangeProbab = 1;
		midRange = 750;
		midRangeProbab = 1;
		maxRange = 2500;
		maxRangeProbab = 1;
		tracerScale = 0.25;
		tracerStartTime = 0.005;
		tracerEndTime = 45;
		tracerColor[] = {0,0,1,0.5};
		tracerColorR[] = {0,0,1,0.5};
		airFriction = -0.0012;
		warheadName = "5.56 mm Taser";
		whistleOnFire = 1;
		whistleDist = 50;
		thrust = 210;
		thrustTime = 1.5;
	};

	class B_570x28_Ball;
	class 288th_Taser_ammo_570x28 : B_570x28_Ball
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects="288th_TaserExplosion";
		explosionTime = -1;
		cartridge = "FxCartridge_556";
		visibleFire = 15;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		deflecting = 20;
		simulation = "shotBullet";
		simulationStep = 0.05;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 30;
		cost = 0.5;
		airLock = 0;
		caliber = 0.559441;
		typicalSpeed = 715;
		timeToLive = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		minRange = 3;
		minRangeProbab = 1;
		midRange = 750;
		midRangeProbab = 1;
		maxRange = 2500;
		maxRangeProbab = 1;
		tracerScale = 0.25;
		tracerStartTime = 0.005;
		tracerEndTime = 45;
		tracerColor[] = {0,0,1,0.5};
		tracerColorR[] = {0,0,1,0.5};
		airFriction = -0.0012;
		warheadName = "5.7 mm Taser";
		whistleOnFire = 1;
		whistleDist = 50;
		thrust = 210;
		thrustTime = 1.5;
	};*/
};

class cfgMagazines
{
	class Default;	// External class reference
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};

	class 288th_Taser_Mag: CA_Magazine
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		displayName = "[288th] 16 Rnd Short Taser Magazine";
		displayNameShort = "Short Taser";
		descriptionshort = "16 Rnd 12.7x40mm Short Taser Magazine";
		count = 16;
		mass = 12;
		ammo = "288th_Taser_ammo";
		initSpeed = 254;
		tracersEvery=1;
		model = "\OPTRE_Weapons_Pistols\M6D\m6_extended_magazine.p3d";
		modelSpecial = "\OPTRE_Weapons_Pistols\M6D\m6_extended_magazine.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camoMag"};
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons_Pistols\M6D\Data\M6D_Magazine_co.paa"};
		picture = "\OPTRE_Weapons_Pistols\M6D\Data\icons\magazine\mag_base.paa";
	};
	class 288th_Taser_Long_Mag: 288th_Taser_Mag
	{
		displayName = "[288th] 16 Rnd Long Taser Magazine";
		displayNameShort = "Long Taser";
		descriptionshort = "16 Rnd 12.7x40mm Long Taser Magazine";
		ammo = "288th_Taser_ammo_long";
		initSpeed = 254;
	};

	class 288th_Taser_ImpactGrenade :  HandGrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		model = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade.p3d";  
		displayName = "[288th] Taser Grenade - Impact Fuse";
		picture = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade_Icon.paa";
		displayNameShort = "Taser Impact";
		ammo = "288th_Taser_Impact_Grenade_ammo";
		mass = 6;
	};
	class 288th_Taser_Grenade :  HandGrenade
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		scope = 2;
		model = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade.p3d";  
		displayName = "[288th] Taser Grenade";
		picture = "\EMP_Systems\WNZ_EMPGrenade\EMP_Grenade_Icon.paa";
		displayNameShort = "Taser";
		ammo = "288th_Taser_Grenade_ammo";
		mass = 6;
	};

	/*class 288th_Taser_Mag_9Rnd_45ACP: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = ".45 ACP 9Rnd Mag (Taser Electroshock)";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 9;
		ammo = "288th_Taser_ammo_45ACP";
		initSpeed = 254;
		descriptionShort = ".45 ACP 9 Rnd Mag (Taser Electroshock)";
		mass = 4.5;
		tracersEvery=1;
	};

	class 288th_Taser_Cylinder_6Rnd_45ACP: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = ".45 ACP 6 Rnd Cylinder (Taser Electroshock)";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 6;
		ammo = "288th_Taser_ammo_45ACP";
		initSpeed = 254;
		descriptionShort = ".45 ACP 6 Rnd Cylinder (Taser Electroshock)";
		mass = 3;
		tracersEvery=1;
	};

	class 288th_Taser_Mag_30Rnd_45ACP: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = ".45 ACP 30 Rnd Mag (Taser Electroshock)";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 30;
		ammo = "288th_Taser_ammo_45ACP";
		initSpeed = 254;
		descriptionShort = ".45 ACP 30 Rnd Mag (Taser Electroshock)";
		mass = 8;
		tracersEvery=1;
	};

	class 288th_Taser_Mag_556: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = "5.56 mm 30Rnd Mag (Taser Electroshock)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Yellow_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecialIsProxy = 1;
		count = 30;
		ammo = "288th_Taser_ammo_556";
		initSpeed = 920;
		descriptionShort = "5.56 mm 30Rnd Mag (Taser Electroshock)";
		mass = 10;
		tracersEvery=1;
	};

	class 288th_Taser_30Rnd_9mm_Mag: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = "9mm 30Rnd Mag (Taser Electroshock)";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 30;
		ammo = "288th_Taser_ammo_9x21";
		initSpeed = 430;
		descriptionShort = "9mm 30Rnd Mag (Taser Electroshock)";
		mass = 8;
		tracersEvery=1;
	};

	class 288th_Taser_10Rnd_9mm_Mag: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = "9mm 10Rnd Mag (Taser Electroshock)";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 10;
		ammo = "288th_Taser_ammo_9x21";
		initSpeed = 430;
		descriptionShort = "9mm 10Rnd Mag (Taser Electroshock)";
		mass = 5;
		tracersEvery=1;
	};

	class 288th_Taser_16Rnd_9mm_Mag: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = "9mm 16Rnd Mag (Taser Electroshock)";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 16;
		ammo = "288th_Taser_ammo_9x21";
		initSpeed = 430;
		descriptionShort = "9mm 16Rnd Mag (Taser Electroshock)";
		mass = 6;
		tracersEvery=1;
	};

	class 288th_Taser_50Rnd_570mm_Mag: CA_Magazine
	{
		author = "Wenza";
		scope = 2;
		displayName = "5.7mm 50Rnd Mag (Taser Electroshock)";
		picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 50;
		ammo = "288th_Taser_ammo_570x28";
		initSpeed = 715;
		descriptionShort = "5.7mm 50Rnd Mag (Taser Electroshock)";
		mass = 8;
		tracersEvery=1;
	};*/
};