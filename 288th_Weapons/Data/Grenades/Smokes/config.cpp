class CfgPatches
{
    class 288th_Weapons
    {
        author = "Festive Neira / Misriah 288";
        addonRootClass = "288th_Core";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"288th_Core"};
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