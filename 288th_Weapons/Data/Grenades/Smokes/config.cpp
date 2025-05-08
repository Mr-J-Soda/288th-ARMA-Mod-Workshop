class CfgPatches
{
    class 288th_Weapons_Grenades_Smokes
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
    class SmokeShell;
	class 288th_Grenade_smoke_black: SmokeShell
	{
		effectsSmoke = "SmokeShellWhiteEffect";
		smokeColor[] = {0,0,0,1};
	};
	class 288th_Grenade_smoke_pink: SmokeShell
	{
		effectsSmoke = "SmokeShellWhiteEffect";
		smokeColor[] = {0.827,0.635,0.773,1};
	};
	class 288th_Grenade_smoke_cyan: SmokeShell
	{
		effectsSmoke = "SmokeShellWhiteEffect";
		smokeColor[] = {0,0.498,0.498,1};
	};
	class 288th_Grenade_smoke_brown: SmokeShell
	{
		effectsSmoke = "SmokeShellWhiteEffect";
		smokeColor[] = {0.149,0.082,0.02,1};
	};
};

class CfgMagazines
{
    class SmokeShell;
    class 288th_White_Smoke_Mag : SmokeShell
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        displayName = "[288th] M4 Smoke (White)";
        picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
        descriptionShort = "Smoke<br>White";
        displayNameShort = "White Smoke";
        mass = 2;
        count = 1;
    };
    class 288th_Red_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Red)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
		ammo = "SmokeShellRed";
        descriptionShort = "Smoke<br>Red";
        displayNameShort = "Red Smoke";
    };
    class 288th_Green_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Green)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Green_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Green";
		ammo = "SmokeShellGreen";
        descriptionShort = "Smoke<br>Green";
        displayNameShort = "Green Smoke";
    };
    class 288th_Yellow_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Yellow)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Yellow_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Yellow";
		ammo = "SmokeShellYellow";
        descriptionShort = "Smoke<br>Yellow";
        displayNameShort = "Yellow Smoke";
    };
    class 288th_Purple_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Purple)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Purple_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Purple";
		ammo = "SmokeShellPurple";
        descriptionShort = "Smoke<br>Purple";
        displayNameShort = "Purple Smoke";
    };
    class 288th_Blue_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Blue)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Blue";
		ammo = "SmokeShellBlue";
        descriptionShort = "Smoke<br>Blue";
        displayNameShort = "Blue Smoke";
    };
    class 288th_Orange_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Orange)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_Orange_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "SmokeShellOrange";
        descriptionShort = "Smoke<br>Orange";
        displayNameShort = "Orange Smoke";
    };
    class 288th_Cyan_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Cyan)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
   		picture = "\288th_Weapons\Data\Grenades\Smokes\gear_smokegrenade_cyan_ca.paa";
		//model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "288th_Grenade_smoke_cyan";
        descriptionShort = "Smoke<br>Cyan";
        displayNameShort = "Cyan Smoke";
    };
    class 288th_Black_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Black)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        picture = "\288th_Weapons\Data\Grenades\Smokes\gear_smokegrenade_black_ca.paa";
		//model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "288th_Grenade_smoke_Black";
        descriptionShort = "Smoke<br>Black";
        displayNameShort = "Black Smoke";
    };
    class 288th_Pink_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Pink)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        picture = "\288th_Weapons\Data\Grenades\Smokes\gear_smokegrenade_pink_ca.paa";
		//model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "288th_Grenade_smoke_PInk";
        descriptionShort = "Smoke<br>Pink";
        displayNameShort = "Pink Smoke";
    };
    class 288th_Brown_Smoke_Mag : 288th_White_Smoke_Mag
    {
        displayName = "[288th] M4 Smoke (Brown)";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        picture = "\288th_Weapons\Data\Grenades\Smokes\gear_smokegrenade_brown_ca.paa";
		//model = "\A3\Weapons_f\ammo\smokegrenade_Orange";
		ammo = "288th_Grenade_smoke_Brown";
        descriptionShort = "Smoke<br>Brown";
        displayNameShort = "Brown Smoke";
    };
    class 288th_Impact_White_Smoke_Mag : SmokeShell
    {
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        dlc = "288thDJP_Aux";
        author = "Soda / Misriah 288";
        displayName = "[288th] M4 Impact Smoke (White)";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
        descriptionShort = "Impact Smoke<br>White";
        displayNameShort = "White Impact Smoke";
        ammo = "OPTRE_40mm_Smoke";
        mass = 4;
        count = 1;
    };
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw : GrenadeLauncher
    {
        class ThrowMuzzle;
        muzzles[] += 
        {
            "288th_Smoke_White",
            "288th_Smoke_Red",
            "288th_Smoke_Green",
            "288th_Smoke_Yellow",
            "288th_Smoke_Purple",
            "288th_Smoke_Blue",
            "288th_Smoke_Orange",
            "288th_Smoke_Cyan",
            "288th_Smoke_Black",
            "288th_Smoke_Pink",
            "288th_Smoke_Brown",
            "288th_Impact_Smoke_White"
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
        class 288th_Smoke_Cyan : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Cyan_Smoke_Mag"};
        };
        class 288th_Smoke_Black : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Black_Smoke_Mag"};
        };
        class 288th_Smoke_Pink : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Pink_Smoke_Mag"};
        };
        class 288th_Smoke_Brown : 288th_Smoke_White
        {
            reloadtime = 0;
            magazines[] ={"288th_Brown_Smoke_Mag"};
        };
        class 288th_Impact_Smoke_White : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] ={"288th_Impact_White_Smoke_Mag"};
        };
    };
};

/*class CfgAmmo
{
    class SmokeShell;

    class 288th_Multi_Smoke : SmokeShell
    {
        model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
        smokeColor[] = { 1,1,1,1 };
    };
};

class CfgMagazines
{
    class SmokeShell;

    class 288th_Multi_Smoke_Mag : SmokeShell
    {
        dlc = "288thDJP_Aux";
        author = "Festive Neira / Misriah 288";
        displayName = "[288th] M2 Smoke Grenade (Multicolor)";
        picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
        pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
        model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
        ammo = "288th_Multi_Smoke";
        descriptionShort = "Smoke Grenade<br>Multicolor";
        displayNameShort = "Multicolor Smoke";
        mass = 4;
    };
};

class cfgWeapons
{
    class ThrowMuzzle;
    class Grenadelauncher;

    class Throw : Grenadelauncher
    {
        muzzles[] +=
        {
            "288th_Multi_Smoke_Muzzle"
        };
        class 288th_Multi_Smoke_Muzzle : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] =
            {
                "288th_Multi_Smoke_Mag"
            };
            class EventHandlers
            {
                fired = "_this call 288_fn_throwMultiSmoke;";
            };
        };
    };
};*/