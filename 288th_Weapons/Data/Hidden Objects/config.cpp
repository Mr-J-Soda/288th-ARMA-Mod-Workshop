class CfgPatches
{
	class 288th_Weapons_Hidden_Objects
	{
		author = "Soda / Misriah 288";
		addonRootClass = "288th_Core";
		units[] = {};
		weapons[] ={};
		magazines[] ={};
		ammo[] ={};
		requiredVersion = 0.1;
		requiredAddons[] = {"288th_Core"};
	};
};

/*class CfgMagazines
{
	class HandGrenade;
	class MA_M9_Frag_Mag: HandGrenade
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "MA_M9_Frag_Ammo";
		mass = 8;
		displayName = "[MA] M9 HE-DP Grenade";
		descriptionShort = "Hand Grenade";
		displayNameShort = "M9 Frag";
		 
		count = 1;
		initSpeed = 20;
	};
	class OPTRE_FC_PlasmaGrenade: HandGrenade
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class GrenadeHand;
	class SmokeShell : GrenadeHand
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class MA_M8_Smoke_White: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_White";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (White)";
		descriptionShort = "White Smoke Grenade";
		displayNameShort = "M8 Smoke White";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Red: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Red";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Red)";
		descriptionShort = "Red Smoke Grenade";
		displayNameShort = "M8 Smoke Red";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Green: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Green";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Green)";
		descriptionShort = "Red Smoke Grenade";
		displayNameShort = "M8 Smoke Green";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Yellow: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Yellow";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Yellow)";
		descriptionShort = "Yellow Smoke Grenade";
		displayNameShort = "M8 Smoke Yellow";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Purple: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Purple";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Purple)";
		descriptionShort = "Purple Smoke Grenade";
		displayNameShort = "M8 Smoke Purple";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Blue: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Blue";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Blue)";
		descriptionShort = "Blue Smoke Grenade";
		displayNameShort = "M8 Smoke Blue";
		 
		count = 1;
		initSpeed = 20;
	};
	class MA_M8_Smoke_Orange: SmokeShell
	{
		author = "Misriah Armory Dev Team";
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		ammo = "M8_Smoke_Shell_Orange";
		mass = 8;
		displayName = "[MA] M8 Smoke Grenade (Orange)";
		descriptionShort = "Orange Smoke Grenade";
		displayNameShort = "M8 Smoke Orange";
		 
		count = 1;
		initSpeed = 20;
	};
	class OPTRE_M2_Smoke: SmokeShell
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (White)";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
		//pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\Grenades\Smoke_icon.paa";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_Smoke";
		descriptionShort = "Smoke Grenade<br/>White";
		displayNameShort = "White Smoke";
		mass = 4;
	};
	class OPTRE_M2_Smoke_Blue: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Blue)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_BSmoke";
		descriptionShort = "Smoke Grenade<br/>Blue";
		displayNameShort = "Blue Smoke";
	};
	class OPTRE_M2_Smoke_Yellow: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Yellow)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_YSmoke";
		descriptionShort = "Smoke Grenade<br/>Yellow";
		displayNameShort = "Yellow Smoke";
	};
	class OPTRE_M2_Smoke_Red: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Red)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_RSmoke";
		descriptionShort = "Smoke Grenade<br/>Red";
		displayNameShort = "Red Smoke";
	};
	class OPTRE_M2_Smoke_Green: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Green)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_GSmoke";
		descriptionShort = "Smoke Grenade<br/>Green";
		displayNameShort = "Green Smoke";
	};
	class OPTRE_M2_Smoke_Orange: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Orange)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_OSmoke";
		descriptionShort = "Smoke Grenade<br/>Orange";
		displayNameShort = "Orange Smoke";
	};
	class OPTRE_M2_Smoke_Purple: OPTRE_M2_Smoke
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		dlc = "OPTRE";
		displayName = "M2 Smoke Grenade (Purple)";
		model = "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo = "OPTRE_G_M2_PSmoke";
		descriptionShort = "Smoke Grenade<br/>Purple";
		displayNameShort = "Purple Smoke";
	};
};*/
class CfgGlasses
{
	/*class G_Bandanna_Oli;
	class 41st_Shemagh_Black: G_Bandanna_oli
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
		
	};
	class 41st_Shemagh_Black_Up: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Olive: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Olive_UP: 41st_Shemagh_Olive
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Tan: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Tan_UP: 41st_Shemagh_Tan
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Arctic: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Arctic_UP: 41st_Shemagh_Arctic
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_BlkMulticam: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_BlkMulticam_UP: 41st_Shemagh_BlkMulticam
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_MTP: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_MTP_UP: 41st_Shemagh_MTP
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Multicam: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Multicam_UP: 41st_Shemagh_Multicam
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Woodland: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_Woodland_UP: 41st_Shemagh_Woodland
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McDraugr: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McDraugr_UP: 41st_Shemagh_McDraugr
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McFenrir: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McFenrir_UP: 41st_Shemagh_McFenrir
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McGungnir: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McGungnir_UP: 41st_Shemagh_McGungnir
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McHeimdall: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McHeimdall_UP: 41st_Shemagh_McHeimdall
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McHelljumper: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McHelljumper_UP: 41st_Shemagh_McHelljumper
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McLoki: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McLoki_UP: 41st_Shemagh_McLoki
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSkoll: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSkoll_UP: 41st_Shemagh_McSkoll
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSurtr: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSurtr_UP: 41st_Shemagh_McSurtr
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSvalinn: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McSvalinn_UP: 41st_Shemagh_McSvalinn
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McValkyrie: 41st_Shemagh_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Shemagh_McValkyrie_UP: 41st_Shemagh_McValkyrie
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};*/
	class None;
	class kat_Armband_Red_Cross_Goggles: None
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Medic_Goggles: kat_Armband_Red_Cross_Goggles
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Doctor_Goggles: kat_Armband_Red_Cross_Goggles
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Kat_Goggles: kat_Armband_Red_Cross_Goggles
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class G_RegulatorMask_F;
	class kat_mask_M50: G_RegulatorMask_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_mask_M04: kat_mask_M50
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
};
class cfgWeapons
{
	class Rifle_Base_F;
	class ej_barrett_base: Rifle_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class ej_m107: ej_barrett_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	
	class ej_m107_tan: ej_barrett_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	
	class ej_m107_CTRG: ej_barrett_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class b_patrol_respawn_bag_f
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_pack_away1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_stretcherbag
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_TCF_RAS_24_Base_F;
	class tcf_RAS_24: arifle_TCF_RAS_24_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_RAS_Insurgent_24: TCF_RAS_24
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_RAS_Arctic_24: TCF_RAS_24
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_RAS_Desert_24: TCF_RAS_24
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_RAS_Black_24: TCF_RAS_24
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class EBR_Base_F;
	class TCF_MA1B: EBR_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class optrep_br55
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class Pistol_Base_F;
	class ace_vmh3: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class ace_vmm3: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_P07_F;
	class DSA_MachinePistol9mm: hgun_P07_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_M6D: hgun_Pistol_heavy_01_F
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class hgun_Pistol_heavy_01_green_F: hgun_Pistol_heavy_01_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class DSA_MachinePistol45: hgun_Pistol_heavy_01_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_Rifle_Base;
	class OPTRE_FC_Plasma_Pistol: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Railgun: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T51_Repeater: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T60_PulseCarbine: OPTRE_FC_T51_Repeater
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T51J_Repeater: OPTRE_FC_T51_Repeater
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T31_NeedleRifle: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T25_Rifle: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T25_Rifle_Folded: OPTRE_FC_T25_Rifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T25J_Rifle: OPTRE_FC_T25_Rifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T25J_Rifle_Folded: OPTRE_FC_T25J_Rifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Needler: OPTRE_FC_T25_Rifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T50_SRS: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T51_Carbine: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T51B_Carbine: OPTRE_FC_T51_Carbine
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_T50_ConcussionRifle: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Shield: OPTRE_Rifle_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Red_Shield: OPTRE_FC_Jackal_Shield
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Orange_Shield: OPTRE_FC_Jackal_Shield
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Shield_Needler: OPTRE_FC_Jackal_Shield
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Red_Shield_Needler: OPTRE_FC_Jackal_Shield_Needler
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Jackal_Orange_Shield_Needler: OPTRE_FC_Jackal_Shield_Needler
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_FC_T33_FuelRod_Cannon: OPTRE_UnguidedLauncher_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_GuidedAALauncher_Base;
	class OPTRE_FC_T33_FuelRod_Cannon_Guided: OPTRE_GuidedAALauncher_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class M2_weapon_01_Base_F;
	class M2_Flamethrower_01_F: M2_weapon_01_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class Flammenwerfer41_weapon_01_Base_F;
	class 41_Flammenwerfer_02_F: Flammenwerfer41_weapon_01_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class Bag_Base;
	class 41_Flammenwerfer_Balloons: Bag_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class M2_Flamethrower_Balloons_Pipe: Bag_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class optrep_br55hb
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_Commando_Black;
	class optre_ma5b;
	class commando_hogosha: OPTRE_Commando_Black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class ma5b_hogosha: optre_ma5b
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class itemWatch;
	class rolex: itemWatch
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class Bat_Clear;
	class SC_BoceanSpear: Bat_Clear
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPAEX_SpartanLaser;
	class OPAEX_SpartanLaserRGB: OPAEX_SpartanLaser
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BaseRifle;
	class SC_SkimmerDroneGun: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_OrgurYax: Bat_Clear
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class Weap_melee_knife;
	class SC_Spada: Weap_melee_knife
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_OrgurBlade: Weap_melee_knife
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_PKMP: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_bayonet2_weapon
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_axe
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_sword1_weapon
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_naval_dirk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_type1_energysword
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	/*class optre_hgun_sas10_f: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};*/
	class optre_hgun_comet_f: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BoceanBeamRifle: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_TRG21_F;
	class TCF_TAV20 : arifle_TRG21_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_TRG20_F;
	class TCF_TAV20_C : arifle_TRG20_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_TRG21_GL_F;
	class TCF_TAV20_GL : arifle_TRG21_GL_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_TAV20_IND : arifle_TRG21_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_TAV20_IND_C : arifle_TRG20_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_TAV20_IND_GL : arifle_TRG21_GL_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Mk20_F;
	class TCF_M18AR: arifle_Mk20_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Mk20c_F;
	class TCF_M18AR_C: arifle_Mk20C_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_MF2500 : arifle_Mk20c_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Mk20_plain_F;
	class TCF_MF2500_C : arifle_Mk20_plain_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Mk20_GL_F;
	class TCF_M18AR_GL: arifle_Mk20_GL_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_MF2500_GL : arifle_Mk20_GL_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class ace_flashlight_maglite_ml300l: Pistol_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_SRS99D;
	class TCF_M99: OPTRE_SRS99D
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_M247;
	class tcf_m247_gpmg: OPTRE_M247
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_M12_SOC;
	class TCF_M12H: OPTRE_M12_SOC
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_TCF_CM_12_Base_F;
	class tcf_cm_12 : arifle_TCF_CM_12_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class tcf_cm_12_insurgent : TCF_CM_12
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BaseRifle_Plasma;
	class SC_Rifle_SSR55: SC_BaseRifle_Plasma
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_SSR55C: SC_Rifle_SSR55
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BasePistol;
	class SC_Pistol_SSP9: SC_BasePistol
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_AR12: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_AR12C: SC_Rifle_AR12
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_ARG47: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_ARG88: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_ARG88M: SC_Rifle_ARG88
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_SpecterM1_GL: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_SpecterM1: SC_Rifle_SpecterM1_GL
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_Ghoul: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_SG7: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_Bastard: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_OrgurRepeater: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_RAICR: SC_BaseRifle
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Rifle_Ravager: SC_BaseRifle_Plasma
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Launcher_Base_F;
	class SC_MPML: SC_Launcher_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_ZytherFluxCannon: SC_Launcher_Base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Halberd: Bat_Clear
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Katana: Bat_Clear
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_CTAR_blk_F;
	class TCF_CTAR: arifle_CTAR_blk_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_CTAR_GL_blk_F;
	class TCF_CTAR_GL: arifle_CTAR_GL_blk_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_CTARS_blk_F;
	class TCF_CTAR_SAW: arifle_CTARS_blk_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_ak12_f;
	class TCF_MA39S: arifle_ak12_f
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_MA39SGL: TCF_MA39S
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_MA5C;
	class OPTRE_MA5K: OPTRE_MA5C
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TCF_MA5KF: OPTRE_MA5K
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class H_HelmetB;
    class H_HelmetB_light: H_HelmetB {
        ctab_camera=1;
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
    };
	class H_HelmetO_ocamo: H_HelmetB {
        ctab_camera=1;
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
    };
	class H_Helmet_Kerry: H_HelmetB {
        ctab_camera=1;
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
    };
	class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo {
        ctab_camera=1;
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
    };
	class UniformItem;
	class HeadgearItem;
	class H_Cap_Headphones;
	class U_B_CTRG_Soldier_F;
	class V_CarrierRigKBT_01_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class PMC_cap: H_Cap_Headphones
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_UNSC_CH252_Helmet_URB;
	class PMC_Helmet: OPTRE_UNSC_CH252_Helmet_URB
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class PMC_Heavy_Helmet: OPTRE_UNSC_CH252_Helmet_URB
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class PMC_fatigues: U_B_CTRG_Soldier_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class PMC_Vest_1: V_CarrierRigKBT_01_Olive_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class PMC_Vest_2: V_CarrierRigKBT_01_light_Olive_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class PMC_Vest_3: V_CarrierRigKBT_01_heavy_Olive_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Helm_Element;
	class 41st_Helm_Away: 41st_Helm_Element
	{
		scope = 1;
	};
	class 41st_Helm_Recon;
	class 41st_Helm_Recon_Away: 41st_Helm_Recon
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Helm_Recon_dp;
	class 41st_Helm_Recon_Away_dp: 41st_Helm_Recon_dp
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class 41st_Helm_AwayMedic: 41st_Helm_Element
	{
		scope = 1;
	};
	class 41st_Element_Vest;
	class 41st_Away_Vest_1: 41st_Element_Vest
	{
		scope = 1;
	};
	class 41st_Away_Vest_2: 41st_Away_Vest_1
	{
		scope = 1;
	};
	class 41st_Away_Vest_3: 41st_Away_Vest_1
	{
		scope = 1;
	};
	class 41st_Away_Vest_4: 41st_Away_Vest_1
	{
		scope = 1;
	};
	class 41st_Away_Vest_5: 41st_Away_Vest_1
	{
		scope = 1;
	};
	class 41st_Away_Vest_6: 41st_Away_Vest_1
	{
		scope = 1;
	};
	class 41_BDU_Wep_Base;
	class 41_BDU_Away_Wep: 41_BDU_Wep_Base
	{
		scope = 1;
	};
	class V_CarrierRigKBT_01_light_EAF_F;
	class Hogosha_Vest: V_CarrierRigKBT_01_light_EAF_F
	{
		scope = 1;
	};
	class VES_CH252_URB_Light;
	class Hogosha_CH252: VES_CH252_URB_Light
	{
		scope = 1;
	};
	class ACE_ItemCore;
	class kat_Armband_Red_Cross_Item: ACE_ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Medic_Item: kat_Armband_Red_Cross_Item
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Doctor_Item: kat_Armband_Red_Cross_Item
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Kat_Item: kat_Armband_Red_Cross_Item
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class ACE_NVGoggles_WP;
	class kat_Armband_Red_Cross_NVG: ACE_NVGoggles_WP
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Medic_NVG: kat_Armband_Red_Cross_NVG
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Doctor_NVG: kat_Armband_Red_Cross_NVG
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_Armband_Kat_NVG: kat_Armband_Red_Cross_NVG
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_gasmaskFilter: ACE_ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kat_sealant: ACE_ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class Vest_Camo_Base;
	class dev_flood_combat_vest: Vest_Camo_Base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class H_Construction_basic_base_F;
	class H_Construction_basic_black_F: H_Construction_basic_base_F
	{
		class ItemInfo;
	};
	class dev_flood_combat_human: H_Construction_basic_black_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class OPTRE_FC_Elite_Helmet_Minor;
	class dev_flood_combat_alien: OPTRE_FC_Elite_Helmet_Minor
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Backpack_Warbot;
	class SC_RebornUnits_Skimmer_Drone_Operator_pack: SC_Backpack_Warbot
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_PXR10;
	class SC_PXR10_LR_West: SC_PXR10
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Security_Team_Leader_pack: SC_PXR10_LR_West
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_EnforcerRucksack;
	class SC_RebornUnits_Security_Rifleman_pack: SC_EnforcerRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class B_AssaultPack_blk;
	class SC_RebornUnits_Security_Shotgun_Specialist_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Sniper_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Sniper_Anti_Materiel_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Spotter_pack: SC_PXR10_LR_West
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Crewman_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Squad_Leader_pack: SC_PXR10_LR_West
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_PTC;
	class SC_RebornUnits_Medic_pack: SC_PTC
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_ColonistRucksack;
	class SC_RebornUnits_Team_Leader_Kodiak_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_AT_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_CQC_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_ARG47_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_ARG88_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Rifleman_Kodiak_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Marksman_pack: B_AssaultPack_blk
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Team_Leader_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Grenadier_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Ammo_Bearer_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Machinegunner_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Demoman_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_AA_Specialist_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Combat_Engineer_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class B_LegStrapBag_black_F;
	class SC_RebornUnits_Logistics_Driver_pack: B_LegStrapBag_black_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_Shotgunner_pack: SC_ColonistRucksack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class I_UAV_01_backpack_F;
	class SC_RebornUnits_UAV_Operater_Recon_pack: I_UAV_01_backpack_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_SkimmerDroneJumpjet;
	class SC_RebornUnits_Skimmer_pack: SC_SkimmerDroneJumpjet
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BoceanTribalQuiver;
	class SC_Bocean_Units_Bocean_Tribesman_pack: SC_BoceanTribalQuiver
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Bocean_Units_Bocean_Tribesman_1_pack: SC_BoceanTribalQuiver
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Bocean_Units_Bocean_Tribesman_2_pack: SC_BoceanTribalQuiver
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BoceanTribalQuiver_Obsidian;
	class SC_Bocean_Units_Bocean_Tribesman_3_pack: SC_BoceanTribalQuiver_Obsidian
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_BoceanTribalQuiver_Gray;
	class SC_Bocean_Units_Bocean_Tribesman_4_pack: SC_BoceanTribalQuiver_Gray
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Bocean_Units_Bocean_Tribesman_5_pack: SC_BoceanTribalQuiver
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Backpack_SMR_Green;
	class SC_RebornUnits_SE_C_Engineer_G_pack: SC_Backpack_SMR_Green
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Backpack_SMR_Desert;
	class SC_RebornUnits_SE_C_Engineer_D_pack: SC_Backpack_SMR_Desert
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_WarbotRocketRack;
	class SC_RebornUnits_SE_C_Rifleman_AT_D_pack: SC_WarbotRocketRack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Rifleman_AT_G_pack: SC_WarbotRocketRack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Anti_Air_Specialist_D_pack: SC_WarbotRocketRack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Anti_Air_Specialist_G_pack: SC_WarbotRocketRack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Medic_F_pack: SC_RebornUnits_Medic_pack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Medic_G_pack: SC_RebornUnits_Medic_pack
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_Civilians_SC_Civilian_Medic_pack: SC_PTC
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Squad_Leader_G_pack: SC_PXR10
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_RebornUnits_SE_C_Squad_Leader_D_pack: SC_PXR10
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SC_MercerJumppack;
	class SC_MercerJumppack_Black: SC_MercerJumppack
	{
		displayName = "Mercer Jump-Pack (Black)";
	};
	class SC_MercerJumppack_Sand: SC_MercerJumppack
	{
		displayName = "Mercer Jump-Pack (Sand)";
	};
	class WRS_Weapon_Sniper_Bolt;
	class SA_SR10: WRS_Weapon_Sniper_Bolt 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_LMG;
	class SA_HMG83: WRS_Weapon_LMG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_HMG83_Dev: WRS_Weapon_LMG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_AR_2;
	class SA_SG8: WRS_Weapon_AR_2 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_AUG;
	class SA_PD6: WRS_Weapon_AUG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_AR_Ver1;
	class SA_CR7: WRS_Weapon_AR_Ver1 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WBK_SciFi_Pistol;
	class SA_SP8: WBK_SciFi_Pistol 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_Revolver;
	class SA_AP6: WRS_Weapon_Revolver 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_AR;
	class SA_TR7: WRS_Weapon_AR 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_TR7T: WRS_Weapon_AR 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_UCNMMG;
	class SA_HMG78: TKE_UCNMMG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_KMCSMG;
	class SA_SC12: TKE_KMCSMG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_UCNRifle2;
	class SA_SA5: TKE_UCNRifle2 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_UCNRifle4;
	class SA_SA5_UBL: TKE_UCNRifle4 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_UCNRifle3;
	class SA_SA5_C: TKE_UCNRifle3 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class WRS_Weapon_ShotGun;
	class SA_SG12: WRS_Weapon_ShotGun 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_MDRifle;
	class SA_SA4: TKE_MDRifle 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_MDRifleV2;
	class SA_SA4_UBL: TKE_MDRifleV2 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class TKE_MDLMG;
	class SA_SA4H_SW: TKE_MDLMG 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_ARX_base_F;
	class SA_TR13: arifle_ARX_base_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_ACPC2_F;
    class SA_SP1: hgun_ACPC2_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_Pistol_01_F;
    class SA_VS1: hgun_Pistol_01_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_Pistol_heavy_02_F;
    class SA_AP3: hgun_Pistol_heavy_02_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
    class SA_VR12: arifle_AK12_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_AK12_GL_F;
    class SA_VR12_GL: arifle_AK12_GL_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_AK12U_F;
    class SA_VR12_K: arifle_AK12U_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_RPK12_F;
	class SA_VR12_RPK: arifle_RPK12_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_VR12_U: arifle_TRG20_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MSBS65_base_F;
	class SA_TR12: arifle_MSBS65_base_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MSBS65_Mark_base_F;
	class SA_TR12M: arifle_MSBS65_Mark_base_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MSBS65_GL_base_F;
	class SA_TR12GL: arifle_MSBS65_GL_base_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MSBS65_UBS_black_F;
	class SA_TR12SG: arifle_MSBS65_UBS_black_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class srifle_GM6_F;
	class SA_SR14: srifle_GM6_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class srifle_DMR_04_F;
    class SA_CAMR: srifle_DMR_04_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SMG_01_F;
	class SA_PD8: SMG_01_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SMG_02_F;
	class SA_PD10: SMG_02_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MX_F;
	class SA_SA1: arifle_MX_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MX_GL_F;
	class SA_SA1_GL: arifle_MX_GL_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_MX_SW_F;
	class SA_SA1_SW: arifle_MX_SW_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class sgun_HunterShotgun_01_F;
	class SA_HG8: sgun_HunterShotgun_01_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Katiba_F;
	class SA_VR6: arifle_Katiba_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Katiba_GL_F;
	class SA_VR6GL: arifle_Katiba_GL_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_Katiba_C_F;
	class SA_VR6K: arifle_Katiba_C_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_CTAR_base_F;
	class SA_VR8: arifle_CTAR_base_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_VR8GL: arifle_CTAR_GL_blk_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_VR8SW: arifle_CTARS_blk_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class hgun_PDW2000_F;
	class SA_PD4: hgun_PDW2000_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class LMG_Mk200_black_F;
	class SA_MG24: LMG_Mk200_black_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SMG_05_F;
	class SA_PD5: SMG_05_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SMG_03C_black;
	class SA_PD9: SMG_03C_black
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class srifle_DMR_05_blk_F;
    class SA_MR10: srifle_DMR_05_blk_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class SA_MR10WG : srifle_DMR_05_blk_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class srifle_LRR_F;
	class SA_SR12: srifle_LRR_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class arifle_SPAR_01_blk_F;
	class SA_CR6: arifle_SPAR_01_blk_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class launch_MRAWS_olive_F;
	class SA_RG12 : launch_MRAWS_olive_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class launch_B_Titan_short_F;
	class SA_AL8 : launch_B_Titan_short_F 
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class launch_Titan_base;
	class launch_Titan_short_base;
	class launch_MRAWS_base_F;
	class launch_MRAWS_olive_rail_F;
	class kef_launch_Titan_blk_F: launch_Titan_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kef_launch_Titan_short_blk_F: launch_Titan_short_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kef_launch_MRAWS_black_F: launch_MRAWS_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kef_launch_MRAWS_black_rail_F: launch_MRAWS_olive_rail_F
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class UavTerminal_base;
	class kef_B_UCN_UavTerminal: UavTerminal_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kef_O_MD_UavTerminal: UavTerminal_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class kef_I_HD_UavTerminal: UavTerminal_base
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class NVGoggles;
	class catears_nvg1: NVGoggles
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg1_helm: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg2: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg2_helm: catears_nvg2
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg3: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg3_helm: catears_nvg3
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg4: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg4_helm: catears_nvg4
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg5: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg5_helm: catears_nvg5
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg6: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg6_helm: catears_nvg6
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg7: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg7_helm: catears_nvg7
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg8: catears_nvg1
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
	class catears_nvg8_helm: catears_nvg8
	{
		scope = 1;
		scopeArsenal = 1;
		ace_arsenal_hide = 1;
		scopeCurator = 1;
	};
};