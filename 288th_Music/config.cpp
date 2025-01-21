class CfgPatches
{
	class 288th_Music
	{
		author = "Soda / Misriah 288";
		name = "288th_DJP_Aux";
		url = "https://discord.gg/BQjMahV5MY";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class 288th_Music_List
	{
		displayName = "288th DJP Jams";
	};
};

class CfgMusic
{
	tracks[] = {Daredevil_AC7,Fear_Liber_Tea,MECHANIZED_TRINITY,Hopeless,Purge_Protocol,Shadow_Work,Boss_Fight_PT_1,Boss_Fight_PT_2,Battle_for_Ganzir,Event_Horizon,Winged_Hussars,Generals_Theme,Steel_Haze,The_Only_Way,Cyberpsychosis};
	class Daredevil_AC7
	{
		name	= "Daredevil Ace Combat 7";
		// filename, volume, pitch
		sound[]	= { "\288th_Music\DAREDEVIL_Ace_Combat_7_Remix.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=309;
		//https://www.youtube.com/watch?v=tzTURmlN5_U
	};
	class Fear_Liber_Tea
	{
		name	= "Fear Liber-Tea";
		sound[]	= { "\288th_Music\The_Only_Thing_They_Fear_Is_Liber_Tea.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=234;
		//https://www.youtube.com/watch?v=7-dCHA45Gw4
	};
	class MECHANIZED_TRINITY
	{
		name	= "MECHANIZED TRINITY";
		sound[]	= { "\288th_Music\MECHANIZED_TRINITY.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=391;
		//https://www.youtube.com/watch?v=sURsD_zgOD0
	};
	class Hopeless
	{
		name	= "Hopeless";
		sound[]	= { "\288th_Music\Hopeless.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=115;
		//https://www.youtube.com/watch?v=QYzca9VuYN4
	};
	class Purge_Protocol
	{
		name	= "Purge Protocol";
		sound[]	= { "\288th_Music\Purge_Protocol.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=267;
		//https://www.youtube.com/watch?v=BecKecHBOdc
	};
	class Shadow_Work
	{
		name	= "Shadow Work";
		sound[]	= { "\288th_Music\Shadow_Work.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=312;
		//https://www.youtube.com/watch?v=-R92-KP0myE
	};
	class Boss_Fight_PT_1
	{
		name	= "Spooky Boss Fight PT 1";
		sound[]	= { "\288th_Music\Boss_Fight_Spooky_PT1.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=154;
		//No Link Found
	};
	class Boss_Fight_PT_2
	{
		name	= "Spooky Boss Fight PT 2";
		sound[]	= { "\288th_Music\Boss_Fight_Intense_PT2.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=184;
		//No Link Found
	};
	class Event_Horizon
	{
		name	= "Event Horizon";
		sound[]	= { "\288th_Music\Event_Horizon", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=184;
		//No Link Found
	};
	class Battle_for_Ganzir
	{
		name	= "Battle For Ganzir";
		sound[]	= { "\288th_Music\Battle_for_Ganzir.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=283;
		//https://www.youtube.com/watch?v=PLKH-_mSiCE
	};
	class Winged_Hussars
	{
		name	= "Winged Hussars";
		sound[]	= { "\288th_Music\Winged_Hussars.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=234;
		//https://www.youtube.com/watch?v=rcYhYO02f98
	};
	class Generals_Theme
	{
		name	= "Generals Theme";
		sound[]	= { "\288th_Music\Generals_Theme.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=192;
		//https://www.youtube.com/watch?v=D8emyoFwjjU
	};
	class Steel_Haze
	{
		name	= "Steel Haze";
		sound[]	= { "\288th_Music\Steel-Haze.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=217;
		//https://www.youtube.com/watch?v=FkGcXc4XeIA
	};
	class The_Only_Way
	{
		name	= "The Only Way Out Is Through";
		sound[]	= { "\288th_Music\The_Only_Way.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=367;
		//https://www.youtube.com/watch?v=FhbPiKGSxPc
	};
	class Cyberpsychosis
	{
		name	= "Cyberpsychosis";
		sound[]	= { "\288th_Music\Cyberpsychosis.ogg", db + 10, 1.0 };
        musicClass = "288th_Music_List";
        duration=161;
		//https://www.youtube.com/watch?v=9mKCj4Nigpg
	};
};