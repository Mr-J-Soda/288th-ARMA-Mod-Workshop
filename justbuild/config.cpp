class BIS_AddonInfo
{
	author="justokin";
	timepacked="1679861196";
};

class CfgPatches
{
	class justbuild
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.10;
		requiredAddons[] = {"Extended_EventHandlers"};

	};
};

class CfgFunctions
{
	#include "Functions.h"
};

class CfgVehicles 
{
    class Man;
    class CAManBase: Man 
    {
        class ACE_SelfActions 
        {
            class justbuild 
            {
                displayName = "Build Menu";
                condition = "!(justBuild_Togglex ==3 )";
                exceptions[] = {};
                statement = "_player call jstbld_fnc_cancel;";
                icon = "justbuild\data\jb.paa";
                class FOB 
                {
                    displayName = "F.O.B.";
                    condition = "(((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 1)) or _player isequalto leader _player) or  ((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 4)) or  _player getUnitTrait 'engineer')) &&((!(justBuild_PERSONREQx == 2)) or _player isequalto leader _player) && !(justBuild_Togglex == 3) && !(justBuild_NOFOBx == 2) ";
                    class FOBSM 
                    {
                        displayName = "Small";
                        condition = "!(justBuild_NOFOBx == 1)";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_FOBSMlist";
                        icon = "";
                    }; 
			        class FOBLG  
				    {
                        displayName = "H.Q.";
                        condition = "!(justBuild_NOFOBx == 1) && !(justBuild_Togglex == 2) && (!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_FOBHQlist";
                        icon = "";
				    }; 
					class FOBBARE 
                    {
                        displayName = "F.O.B.";
                        condition = "!(isNil 'justBuild_BAREFOB')";
                        exceptions[] = {};
                        statement = "_obj = createVehicle ['Land_BagBunker_Large_F', [100, 100, 200], [], 0, 'NONE'];_obj setVariable ['BARE',0,true];[_obj,_this select 1,180] spawn jstbld_fnc_placeobject11;";
                        icon = "";
                    };   
					/*class RESPAWNP 
                    {
                        displayName = "Respawn Point";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_rallypoint;";
                        icon = "";
			    	};*/
				};         
                class DEF 
                {
				    displayName = "Defensive";
				    condition = "(((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 1)) or _player isequalto leader _player) or ((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 4)) or  _player getUnitTrait 'engineer')) && !(justBuild_Togglex == 3)";
				    class HB 
			        {
                        displayName = "HESCO";
                        class HBROW 
				        {
                            displayName = "Single";
                            condition = "";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_HBlistrow";
                            icon = "";
				        }; 
			            class HBWALL 
				        {
                            displayName = "Wall";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_HBlist";
                            icon = "";
                        }; 
    				};        				
					class SAND 
                    {
                        displayName = "Sandbags";
				        class SANDSM
                        {
                            displayName = "SMALL";
                            condition = "";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_SANDlist";
                            icon = "";
                        }; 
                        class SANDLRG 
                        {
                            displayName = "WALL";
                            condition = "";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_SANDlistwall";
                            icon = "";
                        };
					}; 
				    class WALL 
                    {
                        displayName = "WALLS";
                        condition = "(justBuild_Togglex == 0) ";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_WALLlist";
                        icon = "";
                    }; 
				    class BUNK 
                    {
                        displayName = "BUNKERS";
                        condition = "(justBuild_Togglex == 0)  && (!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_BUNKlist";
                        icon = "";
                    }; 
                };
				class EMP
                { 
    				displayName = "Emplacements"; 
                    condition = "(((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 1)) or _player isequalto leader _player)   or ((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 4)) or  _player getUnitTrait 'engineer')) && (justBuild_Togglex < 2) &&  !(justBuild_NOEMPx == false)";
                    class AT 
                    {
                        displayName = "M68 Gauss";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placeat";
                        icon = "";
                    };
                    class AA 
                    {
                        displayName = "M79 AA";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placeaa";
                        icon = "";
                    };        
                    class MG 
                    {
                        displayName = "M41 LAAG";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placemg";
                        icon = "";
                    };
                    class MTR 
                    {
                        displayName = "AU-44 Mortar";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placemortar";
                        icon = "";
                    };        
                    class ART 
                    {
                        displayName = "M89 MLMS";
                        condition = "(!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placeart";
                        icon = "";
                    };        
				};
                class MISC 
                {
                    displayName = "MISC";
                    condition = "(((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 1)) or _player isequalto leader _player)   or ((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 4)) or  _player getUnitTrait 'engineer')) && (justBuild_Togglex < 3)";
                    class CRATE 
                    {
                        displayName = "Storage Crate";
                        condition = "!(justBuild_NOCRATEx == false) && !(justBuild_Togglex == 2)";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placeammo";
                        icon = "";
                    };
				    /*class REPA 
                    {
                        displayName = "Repair Station";
                        condition = "(justBuild_Togglex < 2)  && !(justBuild_NOREARMx == false) && (!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
                        exceptions[] = {};
                        statement = "[_player] spawn jstbld_fnc_placerepa";
                        icon = "";
                    };*/
				    class PREFAB 
                    {
                        displayName = "PREFAB";
                        condition = "(justBuild_Togglex == 0)  && !(justBuild_NOPREFABx == false) && (!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
                        class TOWER 
                        {
                            displayName = "Towers";
                            condition = "";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_TOWlist";
                            icon = "";
                        }; 
						class STRUCT 
                        {
                            displayName = "Structures";
                            condition = " !(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_STRUCTlist";
                            icon = "";
                        };
						class CAMP 
                        {
                            displayName = "Camp";
                            condition = "false";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_CAMPend";
                            icon = "";
                        };
    				}; 
    	            class RDBLK 
                    {
                        displayName = "Road Block";
                        condition = "!(justBuild_Togglex == 2)";
                        exceptions[] = {};
                        statement = "[_player] call jstbld_fnc_ROADlist";
                        icon = "";
                    }; 
    				class CNET 
                    {
                        displayName = "CAMO NET";
                        condition = "!(justBuild_Togglex == 2)&& (!(justBuild_PERSONREQx == 3) or _player isequalto leader _player) ";
						class CNETLRG 
                        {
                            displayName = "LARGE";
                            condition = "(justBuild_Togglex == 0) ";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_CNETLRGlist";
                            icon = "";
                        };
				        class CNETSM 
                        {
                            displayName = "SMALL";
                            condition = "";
                            exceptions[] = {};
                            statement = "[_player] call jstbld_fnc_CNETSMlist";
                            icon = "";
                        };
    				}; 
				    class OTHER 
                    {
                        displayName = "OTHER";
                        condition = "";
        				class HELI 
                        {
                            displayName = "Heli Pad";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] spawn jstbld_fnc_placeheli";
                            icon = "";
                        };
                        class BRDG 
                        {
                            displayName = "Wood Pallet";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] spawn jstbld_fnc_placebridwod";
                            icon = "";
                        };
                		class RZR 
                        {
                            displayName = "Razor Wire";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] spawn jstbld_fnc_placefence";
                            icon = "";
                        };
        		        class SHELT 
                        {
                            displayName = "Concrete Shelter";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] spawn jstbld_fnc_placeshelt";
                            icon = "";
                        };
            			class LIGHT 
                        {
                            displayName = "Flood Lights";
                            condition = "!(justBuild_Togglex == 2)";
                            exceptions[] = {};
                            statement = "[_player] spawn jstbld_fnc_placelight";
                            icon = "";
                        };
				    }; 
				};        
                class DEL 
                {
                    displayName = "Delete Object";
                    condition = "(((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 1)) or _player isequalto leader _player)   or ((!(justBuild_PERSONREQx == 5) && !(justBuild_PERSONREQx == 4)) or  _player getUnitTrait 'engineer'))";
                    exceptions[] = {};
                    statement = "_player call jstbld_fnc_cancel;";
                    icon = "";
                    class DELNW 
                    {
                        displayName = "Delete Object";
                        condition = "";
                        exceptions[] = {};
                        statement = "[_player] remoteExec [""jstbld_fnc_removeobj"",_player];_player call jstbld_fnc_cancel;";
                        icon = "";
				    };
                    class DELSM 
                    {
                        displayName = "Delete Small Object";
                        condition = "";
                        exceptions[] = {};
                        statement = "_player call jstbld_fnc_cancel;[_player,true] call jstbld_fnc_REMlist;";
                        icon = "";
				    };
				};      			
			};
		};
	};
};

class Extended_PreInit_EventHandlers 
{
    class justBuildsettings_Pre_init 
    {
        init = "call compile preprocessFileLineNumbers '\justbuild\initSettings.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class justeventserver
    {
        serverInit = "justbuildsv_Post_serverInit_Var = [] execVM '\justbuild\build\jbserverinit.sqf'"; 
    };
};