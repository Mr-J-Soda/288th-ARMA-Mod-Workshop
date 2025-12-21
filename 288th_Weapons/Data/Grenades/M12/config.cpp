class CfgPatches
{
    class 288th_Weapons_Grenades_M12
    {
        author = "Soda / Misriah 288";
        addonRootClass = "288th_Core";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"288th_Core"};
    };
};

class CfgAmmo
{
    class GrenadeHand;
    class 288th_G_M12_Frag : GrenadeHand
    {
        model = "\OPTRE_Weapons\explosives\m9_grenade.p3d";
        hit = 25;
        explosive = 1;
        indirectHit = 15;
        indirectHitRange = 10;
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
    };
    class 288th_G_M14_Incendiary : GrenadeHand
    {
        model = "\z\ace\addons\grenades\models\ace_anm14th3_armed.p3d";
 		hit = 20;
        explosive = 1;
        indirectHit = 20;
        indirectHitRange = 5;
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
		fuseDistance = 0;
		explosionEffects = "288th_flameExplosion";
        //effectsSmoke = "ACE_Incendiary";
    };
};

class CfgMagazines
{
    class HandGrenade;
    class SmokeShell;
    class 288th_M12_Frag : HandGrenade
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        mass = 8;
        displayName = "[288th] M12 HE-DP Grenade";
        descriptionShort = "Hand Grenade";
        displayNameShort = "M12 Frag";
        model = "\OPTRE_Weapons\explosives\m9_grenade.p3d";
        picture = "\OPTRE_Weapons\explosives\icons\m9.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\FRAG.paa";
        count = 1;
        ammo = "288th_G_M12_Frag";
        nameSound = "handgrenade";
        initSpeed = 25;
    };
    class 288th_M14: SmokeShell
	{
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
		author = "Soda / Misriah 288";
		displayname = "[288th] M14 Incendiary Grenade";
		descriptionShort = "$STR_ace_grenades_Incendiary_Description";
		displayNameShort = "M14 Incendiary";
		model = "\z\ace\addons\grenades\models\ace_anm14th3.p3d";
		picture = "\z\ace\addons\grenades\UI\ace_anm14th3_x_ca.paa";
		ammo = "288th_G_M14_Incendiary";
		mass = 5;
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
	};
    class ACE_Chemlight_HiRed;
    class ACE_Chemlight_HiYellow;
    class ACE_Chemlight_HiWhite;
    class ACE_Chemlight_HiBlue;
    class ACE_Chemlight_HiGreen;
    class ACE_Chemlight_UltraHiOrange;
    class 288th_Chemlight_HiRed: ACE_Chemlight_HiRed
	{
		ACE_Attachable = "ACE_G_Chemlight_HiRed_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiRed_Infinite";
		displayName = "[288th] Chemlight (Red)";
		displayNameShort = "$STR_ace_chemlights_HiRed_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiRed_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hired_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
	class 288th_Chemlight_HiYellow: ACE_Chemlight_HiYellow
	{
		ACE_Attachable = "ACE_G_Chemlight_HiYellow_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiYellow_Infinite";
		displayName = "[288th] Chemlight (Yellow)";
		displayNameShort = "$STR_ace_chemlights_HiYellow_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiYellow_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiyellow_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
	class 288th_Chemlight_HiWhite: ACE_Chemlight_HiWhite
	{
		ACE_Attachable = "ACE_G_Chemlight_HiWhite_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiWhite_Infinite";
		displayName = "[288th] Chemlight (White)";
		displayNameShort = "$STR_ace_chemlights_HiWhite_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiWhite_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiwhite_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
	class 288th_Chemlight_HiBlue: ACE_Chemlight_HiBlue
	{
		ACE_Attachable = "ACE_G_Chemlight_HiBlue_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiBlue_Infinite";
		displayName = "[288th] Chemlight (Blue)";
		displayNameShort = "$STR_ace_chemlights_HiBlue_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiBlue_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiblue_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
	class 288th_Chemlight_HiGreen: ACE_Chemlight_HiGreen
	{
		ACE_Attachable = "ACE_G_Chemlight_HiGreen_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiGreen_Infinite";
		displayName = "[288th] Chemlight (Green)";
		displayNameShort = "$STR_ace_chemlights_HiGreen_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiGreen_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_higreen_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
	class 288th_Chemlight_UltraHiOrange: ACE_Chemlight_UltraHiOrange
	{
		ACE_Attachable = "ACE_G_Chemlight_UltraHiOrange_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_UltraHiOrange_Infinite";
		displayName = "[288th] Chemlight (Orange)";
		displayNameShort = "$STR_ace_chemlights_UltraHiOrange_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_UltraHiOrange_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_ultrahiorange_x_ca.paa";
		pictureWire = "\288th_Weapons\Data\Grenades\Smokes\Chemlight.paa";
	};
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw : GrenadeLauncher
    {
        class ThrowMuzzle;
        muzzles[] += {"288th_Chemlight_HiRedMuzzle","288th_Chemlight_HiYellowMuzzle","288th_Chemlight_HiWhiteMuzzle","288th_Chemlight_HiBlueMuzzle","288th_Chemlight_HiGreenMuzzle","288th_Chemlight_UltraHiOrangeMuzzle","288th_M12FragMuzzle","288th_M14","288th_Taser","288th_Taser_Impact"};
        class 288th_M12FragMuzzle : ThrowMuzzle
        {
            magazines[] = { "288th_M12_Frag" };
        };
        class 288th_M14 : ThrowMuzzle
        {
            magazines[] = { "288th_M14" };
        };
        class 288th_Taser_Impact : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] ={"288th_Taser_ImpactGrenade"};
        };
        class 288th_Taser : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] ={"288th_Taser_Grenade"};
        };
        class 288th_Chemlight_HiRedMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_HiRed"};
		};
        class 288th_Chemlight_HiYellowMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_HiYellow"};
		};
        class 288th_Chemlight_HiWhiteMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_HiWhite"};
		};
        class 288th_Chemlight_HiBlueMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_HiBlue"};
		};
        class 288th_Chemlight_HiGreenMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_HiGreen"};
		};
        class 288th_Chemlight_UltraHiOrangeMuzzle: ThrowMuzzle
		{
			magazines[] = {"288th_Chemlight_UltraHiOrange"};
		};
    };
};