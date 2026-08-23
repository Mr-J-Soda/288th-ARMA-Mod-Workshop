////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
///ADDon Settings
///main
[
  "justBuild_Togglex", "LIST", 
  ["Main Setting","Overwrites settings below"], "justBuild", 
    [
      [0, 1,2,3], 
             [
               ["Enabled", "Enables entire mod"], 
               ["Lite Version", "Sandbags, Hescos, small Misc objects"], 
               ["Very Lite Version", "Sandbags, Hescos only"],
               ["Disabled", "Disables entire mod"]
              ],
       0
     ],
   1
] call CBA_fnc_addSetting;

///tool
["justBuild_NOTOOLx", "CHECKBOX", ["Require Entrenching Tool", "Remove requirement for entrenching tool in inventory"], ["justBuild","Basic"],true, 1] call CBA_fnc_addSetting;
///Arsenal
[
  "justBuild_arsenalx", 
  "LIST", 
  ["Arsenal","Remove Arsenal access"],
  ["justBuild","Basic"],
    [ 
       [0, 1,2,3], 
          [
             ["Arsenal enabled", "Ammocrate and FOB will have Arsenal"],
             ["Remove from ammocrate", "Remove arsenal access from ammocrates"],
             ["Remove from FOB", "Remove arsenal access from ammocrates at FOB"],
             ["Remove from ammocrates and FOB", "Remove arsenal access from mod. Both the ammocrate and FOB"]
           ],
        0
    ],
  1 
] call CBA_fnc_addSetting;

///toggles
["justBuild_NOCRATEx", "CHECKBOX", "Ammocrate", ["justBuild","Main Toggle"],true, 1] call CBA_fnc_addSetting;
["justBuild_NOREARMx", "CHECKBOX", ["Repair/Rearm station", "Remove Rearm Station"], ["justBuild","Main Toggle"],true, 1] call CBA_fnc_addSetting;
["justBuild_NOPREFABx", "CHECKBOX", ["PREFAB Menu", "PREFAB Category in Build Menu"], ["justBuild","Main Toggle"],true, 1] call CBA_fnc_addSetting;


//fob settings

["justBuild_NOFOBx", "LIST", "FOB Settings", ["justBuild","FOB"], [[0, 1,2], ["FOB menu enabled",["Only Rally Point", "Remove all other FOBs from list, only respawn is rally point"],"FOB menu disabled"],0], 1] call CBA_fnc_addSetting;





///emplacment settings

["justBuild_NOEMPx", "CHECKBOX", ["Emplacements", "Category for emplacements. ie, Mortars, HMG, AA etc."], ["justBuild","Main Toggle"],true, 1] call CBA_fnc_addSetting;

/*
///AA

[
"justBuild_NOEMPAAx", "LIST", "Static AA", 
        ["justBuild","Mod Selection for emplacements"],
             [
               [0, 1,2,3], 
                  [
                       "CUP",
                       "RHS",
                        "Vanilla","None"
                   ],1
              ], 1] call CBA_fnc_addSetting;

///AT

[
"justBuild_NOEMPATx", "LIST", "Static AT", 
        ["justBuild","Mod Selection for emplacements"],
             [
               [0, 1,2,3], 
                  [
                       "CUP",
                       "RHS",
                        "Vanilla","None"
                   ],1
              ], 1] call CBA_fnc_addSetting;



///hmg

[
"justBuild_NOEMPMGx", "LIST", "Static MG", 
        ["justBuild","Mod Selection for emplacements"],
             [
               [0, 1,2,3], 
                  [
                       "CUP",
                       "RHS",
                        "Vanilla","None"
                   ],1
              ], 1] call CBA_fnc_addSetting;





///AA

[
"justBuild_NOEMPMORTARx", "LIST", "Mortar", 
        ["justBuild","Mod Selection for emplacements"],
             [
               [0, 1,2,3], 
                  [
                       "CUP",
                       "RHS",
                        "Vanilla","None"
                   ],1
              ], 1] call CBA_fnc_addSetting;

///Arty

[
"justBuild_NOEMPARTx", "LIST", "Artillery", 
        ["justBuild","Mod Selection for emplacements"],
             [
               [0, 1,2,3], 
                  [
                       "CUP",
                       "RHS",
                        "Vanilla","None"
                   ],1
              ], 1] call CBA_fnc_addSetting;

*/


///personell
["justBuild_PERSONREQx", "LIST", ["Personnel Requirements","Determine which units can use Build Menu"], ["justBuild","Personnel"], [[0, 1,2,3,4,5], ["Anybody", "Must be Squadleader","Must be Squadleader to place FOB","Must be Squadleader to place large objects",["Must be Engineer","Player needs to be egineer with engineer trait"],["Must be Squadleader or Engineer","Player needs to be group leader or have engineer trait"]],0], 1] call CBA_fnc_addSetting;

 ////0"Anybody"
 ////1"Must be Squadleader"
 ////2"Must be Squadleader to place FOB"
 ////3"Must be Squadleader to place large objects"
 ////4"Must be Engineer"
 ////5"Must be Squadleader or Engineer"

