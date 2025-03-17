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
/*class CfgMarkerClasses
{
    class 288thRDF_Map_Markers
	{
		displayName="Warhound Markers";
    };
};
class CfgMarkers
{
    class 288thRDF_Marker
    {
		name="[288th] 288th RDF";
        icon="Warhound_Markers\data\288th_RDF.paa";
        color[]={0,0,0,1};
        size=40;
        shadow = 0;
        scope = 2;
		scopeCurator = 2;
        markerClass = "288thRDF_Map_Markers";
    };
    class 288thRDF_Pike_Actual_Marker: 288thRDF_Marker
    {
        name="[288th] Pike Actual";
        icon="Warhound_Markers\data\Pike\Pike_Actual.paa";
    };
    class 288thRDF_Pike_1_Marker: 288thRDF_Marker
    {
        name="[288th] Pike 1-1";
        icon="Warhound_Markers\data\Pike\Pike_1.paa";
    };
    class 288thRDF_Pike_2_Marker: 288thRDF_Marker
    {
        name="[288th] Pike 1-2";
        icon="Warhound_Markers\data\Pike\Pike_2.paa";
    };
    class 288thRDF_Pike_3_Marker: 288thRDF_Marker
    {
        name="[288th] Pike 1-3";
        icon="Warhound_Markers\data\Pike\Pike_3.paa";
    };
    class 288thRDF_Lancer_Marker: 288thRDF_Marker
    {
        name="[288th] Lancer";
        icon="Warhound_Markers\data\Support\Lancer.paa";
    };
    class 288thRDF_Orca_Marker: 288thRDF_Marker
    {
        name="[288th] Orca";
        icon="Warhound_Markers\data\Support\Orca.paa";
    };
	//#include "data\Pike\config.hpp"
	//#include "data\Support\config.hpp"
};*/

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