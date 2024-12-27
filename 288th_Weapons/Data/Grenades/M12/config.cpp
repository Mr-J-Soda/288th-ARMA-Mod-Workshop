class CfgPatches
{
    class 288th_Weapons
    {
        author = "Soda / Misriah 288";
        addonRootClass = "288th_Core";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"288th_Core"};
    };
};

class CfgFunctions {

    class eta_shield_beacon {
        class functions
        {
            file = "\288th_Weapons\Data\Grenades\M12";
            class init { postInit = 1; };
        };
    };
};

class CfgAmmo
{
    class GrenadeHand;
    class SmokeShell;
    class B_IRStrobe;
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
        indirectHitRange = 10;
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
		fuseDistance = 0;
		explosionEffects = "KA_flameExplosion";
        //effectsSmoke = "ACE_Incendiary";
    };
    class 288th_shield_beacon_single : B_IRStrobe
    {
        hit = 0.001;
        indirectHit = 0.001;
        indirectHitRange = 0.001;
        caliber = 0.001;
        irLock = 0;
        class NVGMarkers 
        {
            class Blinking1 
            {
                ambient = [0.005,0.005,0.005,1];
                blinking = 0;
                brightness = 0.002;
                color = [0.01,0.01,0.01,1];
                name = "cerveny pozicni blik";
                onlyInNvg = 1;
            };
        };
    };
    class 288th_rat : B_IRStrobe
    {
        hit = 10;
        indirectHit = 0.001;
        indirectHitRange = 0.001;
        caliber = 1;
        irLock = 0;
        model = "288th_Weapons\Data\Grenades\Rat\rat.p3d";
    };
};

class CfgMagazines
{
    class HandGrenade;
    class SmokeShell;
    class B_IR_Grenade;
    class 288th_M12_Frag : HandGrenade
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        mass = 8;
        displayName = "[288th DJP] M12 HE-DP Grenade";
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
		displayname = "[288th DJP] M14 Incendiary Grenade";
		descriptionShort = "$STR_ace_grenades_Incendiary_Description";
		displayNameShort = "M14 Incendiary";
		model = "\z\ace\addons\grenades\models\ace_anm14th3.p3d";
		picture = "\z\ace\addons\grenades\UI\ace_anm14th3_x_ca.paa";
		ammo = "288th_G_M14_Incendiary";
		mass = 5;
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
	};
    class 288th_White_Smoke_Mag : SmokeShell
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        displayName = "[288th DJP] M4 Smoke Grenade (White)";
        picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
        descriptionShort = "Smoke Grenade<br>White";
        displayNameShort = "White Smoke";
        mass = 2;
        count = 1;
    };
    class 288th_Red_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Red)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
		ammo = "SmokeShellRed";
        descriptionShort = "Smoke Grenade<br>Red";
        displayNameShort = "Red Smoke";
    };
    class 288th_Green_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Green)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Green_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Green";
		ammo = "SmokeShellGreen";
        descriptionShort = "Smoke Grenade<br>Green";
        displayNameShort = "Green Smoke";
    };
    class 288th_Yellow_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Yellow)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Yellow_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Yellow";
		ammo = "SmokeShellYellow";
        descriptionShort = "Smoke Grenade<br>Yellow";
        displayNameShort = "Yellow Smoke";
    };
    class 288th_Purple_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Purple)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Purple_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Purple";
		ammo = "SmokeShellPurple";
        descriptionShort = "Smoke Grenade<br>Purple";
        displayNameShort = "Purple Smoke";
    };
    class 288th_Blue_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Blue)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Blue";
		ammo = "SmokeShellBlue";
        descriptionShort = "Smoke Grenade<br>Blue";
        displayNameShort = "Blue Smoke";
    };
    class 288th_Orange_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th DJP] M4 Smoke Grenade (Orange)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Orange_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "SmokeShellOrange";
        descriptionShort = "Smoke Grenade<br>Orange";
        displayNameShort = "Orange Smoke";
    };
    class 288th_Impact_White_Smoke_Mag : SmokeShell
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        displayName = "[288th DJP] M4 Impact Smoke Grenade (White)";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
        descriptionShort = "Impact Smoke Grenade<br>White";
        displayNameShort = "White Impact Smoke";
        ammo = "OPTRE_40mm_Smoke";
        mass = 4;
        count = 1;
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
		displayName = "[288th DJP] Chemlight (Red)";
		displayNameShort = "$STR_ace_chemlights_HiRed_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiRed_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hired_x_ca.paa";
	};
	class 288th_Chemlight_HiYellow: ACE_Chemlight_HiYellow
	{
		ACE_Attachable = "ACE_G_Chemlight_HiYellow_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiYellow_Infinite";
		displayName = "[288th DJP] Chemlight (Yellow)";
		displayNameShort = "$STR_ace_chemlights_HiYellow_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiYellow_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiyellow_x_ca.paa";
	};
	class 288th_Chemlight_HiWhite: ACE_Chemlight_HiWhite
	{
		ACE_Attachable = "ACE_G_Chemlight_HiWhite_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiWhite_Infinite";
		displayName = "[288th DJP] Chemlight (White)";
		displayNameShort = "$STR_ace_chemlights_HiWhite_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiWhite_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiwhite_x_ca.paa";
	};
	class 288th_Chemlight_HiBlue: ACE_Chemlight_HiBlue
	{
		ACE_Attachable = "ACE_G_Chemlight_HiBlue_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiBlue_Infinite";
		displayName = "[288th DJP] Chemlight (Blue)";
		displayNameShort = "$STR_ace_chemlights_HiBlue_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiBlue_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiblue_x_ca.paa";
	};
	class 288th_Chemlight_HiGreen: ACE_Chemlight_HiGreen
	{
		ACE_Attachable = "ACE_G_Chemlight_HiGreen_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_HiGreen_Infinite";
		displayName = "[288th DJP] Chemlight (Green)";
		displayNameShort = "$STR_ace_chemlights_HiGreen_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiGreen_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_higreen_x_ca.paa";
	};
	class 288th_Chemlight_UltraHiOrange: ACE_Chemlight_UltraHiOrange
	{
		ACE_Attachable = "ACE_G_Chemlight_UltraHiOrange_Infinite";
		ACE_Chemlight_Shield = "";
		author = "Soda / Misriah 288";
		ammo = "ACE_G_Chemlight_UltraHiOrange_Infinite";
		displayName = "[288th DJP] Chemlight (Orange)";
		displayNameShort = "$STR_ace_chemlights_UltraHiOrange_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_UltraHiOrange_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_ultrahiorange_x_ca.paa";
	};
    class 288th_shield_beacon_single : B_IR_Grenade
    {
        author = "Avisa / Misriah 288";
        displayName = "[288th DJP] Shield Beacon";
        displayNameShort = "Shield Beacon";
        ammo = "288th_shield_beacon_single";
        descriptionShort = "Shield Beacon, spawns an energy shield";
        sound[] = { "", 0.000316228, 1 };
        reloadSound[] = { "", 0.000316228, 1 };
    };
    class 288th_Rat : B_IR_Grenade
    {
        author = "Soda / Misriah 288";
        displayName = "[288th DJP] Rat";
        displayNameShort = "Rat";
        ammo = "288th_rat";
        descriptionShort = "Oh shit, it's a rat!";
        model = "288th_Weapons\Data\Grenades\Rat\rat.p3d";
        sound[] = { "", 0.000316228, 1 };
        reloadSound[] = { "", 0.000316228, 1 };
    };
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw : GrenadeLauncher
    {
        class ThrowMuzzle;
        muzzles[] += {"288th_Rat","288th_Shield_Single","288th_Chemlight_HiRedMuzzle","288th_Chemlight_HiYellowMuzzle","288th_Chemlight_HiWhiteMuzzle","288th_Chemlight_HiBlueMuzzle","288th_Chemlight_HiGreenMuzzle","288th_Chemlight_UltraHiOrangeMuzzle","288th_M12FragMuzzle","288th_M14","288th_Taser","288th_Taser_Impact","288th_Smoke_White","288th_Smoke_Red","288th_Smoke_Green","288th_Smoke_Yellow","288th_Smoke_Purple","288th_Smoke_Blue","288th_Smoke_Orange","288th_Impact_Smoke_White"};
        class 288th_M12FragMuzzle : ThrowMuzzle
        {
            magazines[] = { "288th_M12_Frag" };
        };
        class 288th_M14 : ThrowMuzzle
        {
            magazines[] = { "288th_M14" };
        };
        class 288th_Smoke_White : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] ={"288th_White_Smoke_Mag"};
        };
        class 288th_Smoke_Red : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Red_Smoke_Mag"};
        };
        class 288th_Smoke_Green : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Green_Smoke_Mag"};
        };
        class 288th_Smoke_Yellow : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Yellow_Smoke_Mag"};
        };
        class 288th_Smoke_Purple : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Purple_Smoke_Mag"};
        };
        class 288th_Smoke_Blue : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Blue_Smoke_Mag"};
        };
        class 288th_Smoke_Orange : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Orange_Smoke_Mag"};
        };
        class 288th_Impact_Smoke_White : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] ={"288th_Impact_White_Smoke_Mag"};
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
        class 288th_Shield_Single : ThrowMuzzle
        {
            magazines[] = {"288th_shield_beacon_single"};
        };
        class 288th_Rat : ThrowMuzzle
        {
            magazines[] = {"288th_Rat"};
        };
    };
};