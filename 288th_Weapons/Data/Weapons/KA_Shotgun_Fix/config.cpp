class CfgPatches
{
	class KA_Shotgun_Fix
	{
		name = "KA_Shotgun_Fix";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.64;
		requiredAddons[] = {"A3_weapons_f","KA_Flamethrower"};
		author = "Soda / Misriah 288";
	};
};
class CfgAmmo
{
	class BulletBase;
	class KA_VC1_Flamethrower_Ammo: BulletBase
	{
		hit = 20;
		indirectHit = 10;
		indirectHitRange = 1;
		cartridge = "";
		cost = 2;
		visibleFire = 32;
		audibleFire = 12;
		visibleFireTime = 20;
		airFriction = -0.00525;
		timetolive = 5;
		typicalSpeed = 50;
		deflecting = 10;
		explosive = 0.5;
		fuseDistance = 1;
		caliber = 0.75;
		explosionEffects = "KA_flameExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		effectFly = "KA_flametrail";
		class CamShakeExplode
		{
			power = 1;
			duration = "((round (3^0.5))*0.2 max 0.2)";
			frequency = 2;
			distance = 1;
		};
		class CamShakeHit
		{
			power = 1;
			duration = "((round (3^0.25))*0.2 max 0.2)";
			frequency = 2;
			distance = 0.25;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KA_VC1_Flamethrower_Mag: CA_Magazine
	{
		displayName = "[288th DJP] Flamethrower Fuel Cell";
		ammo = "KA_VC1_Flamethrower_Ammo";
		model = "\KA_Flamethrower\VC1_Flamethrower_mag.p3d";
		type = "3*256";
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		count = 100;
		initSpeed = 50;
		mass = 90;
		picture = "\KA_Flamethrower\UI\KA_VC1_Flamethrower_Mag.paa";
		displayNameShort = "Fuel Cell";
		descriptionShort = "Fuel Cell";
		scope = 1;
		scopeArsenal = 1;
	};
	class 288th_VC1_Flamethrower_Mag: KA_VC1_Flamethrower_Mag
	{
		scope = 2;
		scopeArsenal = 2;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class InventoryMuzzleItem_Base_F;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KA_VC1_Flamethrower: Rifle_Base_F
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] VC1 Flamethrower";
		fireSpreadAngle = 1;
		discreteDistance[] = {10};
		scope = 1;
		scopeArsenal = 1;
	};
	class 288th_VC1_Flamethrower: KA_VC1_Flamethrower
	{
		dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayName = "[288th DJP] VC1 Flamethrower";
		magazines[] ={"288th_VC1_Flamethrower_Mag"};
		fireSpreadAngle = 1;
		discreteDistance[] = {10};
		scope = 2;
		scopeArsenal = 2;
		ace_arsenal_hide = 0;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_GRNDLNCH";
	};
};
