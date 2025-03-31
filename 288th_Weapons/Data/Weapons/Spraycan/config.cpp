class CfgPatches
{
	class 288th_Weapons
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

class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_SpraypaintBlack;
    class ACE_SpraypaintWhite;
    
	class 288th_Spraypaint: ACE_SpraypaintBlack
	{
		author = "Soda / Misriah 288";
		displayName="[288th] Brimstone Field Codes";
	};
};

class ACE_Tags
{
	class 288th_FieldCode_RoomClear
	{
		displayName="Room Clear";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\roomclear.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\roomclear.paa";
	};
	class 288th_FieldCode_ElectronicsFailure
	{
		displayName="Electronics Failure";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\electronicsfailure.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\electronicsfailure.paa";
	};
	class 288th_FieldCode_GetOut
	{
		displayName="Get Out";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\getout.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\getout.paa";
	};
	class 288th_FieldCode_Locked
	{
		displayName="Locked";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\locked.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\locked.paa";
	};
	class 288th_FieldCode_NonHuman
	{
		displayName="Not Human";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\nonhuman.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\nonhuman.paa";
	};
	class 288th_FieldCode_TurnBack
	{
		displayName="Turn Back";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\turnback.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\turnback.paa";
	};
    class 288th_FieldCode_NoTurningBack
	{
		displayName="No Turning Back";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\noturningback.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\noturningback.paa";
	};
	class 288th_FieldCode_StayTogether
	{
		displayName="Stay Together";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\staytogether.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\staytogether.paa";
	};
	class 288th_FieldCode_Traitors
	{
		displayName="Traitors";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\traitors.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\traitors.paa";
	};
	class 288th_FieldCode_UnsafeArea
	{
		displayName="Unsafe Area";
		requiredItem="288th_Spraypaint";
		textures[]=
		{
			"288th_Weapons\Data\Weapons\Spraycan\unsafearea.paa"
		};
		icon="288th_Weapons\Data\Weapons\Spraycan\unsafearea.paa";
	};
};