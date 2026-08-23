///////// justBuild readme
///Below are a list of variables that can be used in combination to change mod parameters
///Set Variables globally in a mission init file or will work if updated globally during mission.
///Go to bottom to view
 
justBuild_NOAMMOARSENAL = nil;     ///Gets rid of any arsenal access at supply crate
justBuild_NOFOBARSENAL = nil;      ///Gets rid of any arsenal access at the fob
justBuild_Toggle = nil;            ///Disables entire mod
justBuild_LTE = nil;               ///No emplacements, No walls, No fob,NOREARM ,NOPREFAB. Basically just hescos and sandbags 
justBuild_NOFOB = nil;             ///NO FOB menu
justBuild_NOEMP = nil;             ///NO Emplacement menu
justBuild_NOPREFAB = nil;          ///NO Prefab menu
justBuild_NOCRATE = nil;           ///NO Ammo/Supply crate
justBuild_NOREARM = nil;           ///NO Repair station 

///June 2019 update
justBuild_NOTOOL = nil;            ///Takes away requirement for having an entrenching tool in inventory

justBuild_ONLYSQUADLD = nil;       //Only Squadleader can place objects
justBuild_ONLYSQUADLDBIG = nil;    //Only Squadleader can place large objects 
justBuild_ONLYENGINEER = nil;      //Only Engineer can place objects
justBuild_SQUADLDENGINEER = nil;   //Must be Either Squadleader or Engineer. Overrides justBuild_ONLYENGINEER and justBuild_ONLYSQUADLD.

////FOB
justBuild_ONLYSQUADLDFOB = nil;    //Only Squadleader can build fobs

///August 2019 update
justBuild_BAREFOB = nil;            ///Only allows barebones FOB (Can be used together)
justBuild_ONLYRALLY = nil;            ///Only allows respawnpoint (Can be used together)

//////   
/* 

Variables are set to nothing on default.(nil) To reset any setting, return value to nil ie, missionNameSpace setVariable ["justBuild_Toggle",nil,true]; 

 To change toggle an option , set variable to anything, try: True

Variables should be set globally use: missionNameSpace setVariable


Examples; 


 1 -- To disable the entire mod set

missionNameSpace setVariable ["justBuild_Toggle",true,true]; 

2 -- ***LITE VERSION*** 
Disables emplacements, walls, FOB,REARM ,PREFAB. Basically just hescos and sandbags 

missionNameSpace setVariable ["justBuild_LTE",true,true]; 


3 -- To diasble the FOB and the crate having arsenal access

missionNameSpace setVariable ["justBuild_NOAMMOARSENAL",true,true]; 
missionNameSpace setVariable ["justBuild_NOFOBARSENAL",true,true]; 


4 -- To diasble Ammocrate and the FOB completely

missionNameSpace setVariable ["justBuild_NOCRATE",true,true]; 
missionNameSpace setVariable ["justBuild_NOFOB",true,true]; 


 5 -- To diasble the emplacements

missionNameSpace setVariable ["justBuild_NOEMP",true,true]; 


 6 -- Squadlead and Engineer only. Does not require entrenching tool in inventory

missionNameSpace setVariable ["justBuild_SQUADLDENGINEER",true,true]; 
missionNameSpace setVariable ["justBuild_NOTOOL",true,true]; 

 7 -- Squadlead can build FOBs and big objects. Does not require entrenching tool in inventory

missionNameSpace setVariable ["justBuild_ONLYSQUADLDFOB",true,true]; 
missionNameSpace setVariable ["justBuild_ONLYSQUADLDBIG",true,true]; 
missionNameSpace setVariable ["justBuild_NOTOOL",true,true]; 

 8 -- Only Bare FOB and Respawn pole. Does not require entrenching tool in inventory

 missionNameSpace setVariable ["justBuild_BAREFOB",true,true];          
 missionNameSpace setVariable ["justBuild_ONLYRALLY",true,true]; 
missionNameSpace setVariable ["justBuild_NOTOOL",true,true]; 

****Any combinations of these settings can be used.*****/


///Below you can just copy and paste for quick use, put into any init file, can be done during missions. 
///To toggle a setting just give it a value ie, missionNameSpace setVariable ["justBuild_Toggle",true,true];
///You can copy the all of the code below, or just pick and choose a few lines. 

///justBuild Parameters///

 missionNameSpace setVariable ["justBuild_Toggle",nil,true];            ///Disables entire mod
 missionNameSpace setVariable ["justBuild_NOAMMOARSENAL",nil,true];     ///Gets rid of any arsenal access at supply crate
 missionNameSpace setVariable ["justBuild_NOFOBARSENAL",nil,true];      ///Gets rid of any arsenal access at the fob

 missionNameSpace setVariable ["justBuild_LTE",nil,true];               ///No emplacements, No walls, No fob,NOREARM ,NOPREFAB. Basically just hescos and sandbags 
 missionNameSpace setVariable ["justBuild_NOFOB",nil,true];             ///NO FOB menu
 missionNameSpace setVariable ["justBuild_NOEMP",nil,true];             ///NO Emplacement menu
 missionNameSpace setVariable ["justBuild_NOPREFAB",nil,true];          ///NO Prefab menu
 missionNameSpace setVariable ["justBuild_NOCRATE",nil,true];           ///NO Ammo/Supply crate
 missionNameSpace setVariable ["justBuild_NOREARM",nil,true];           ///NO Repair station 

///June 2019 update
 missionNameSpace setVariable ["justBuild_NOTOOL",nil,true];            ///Takes away requirement for having an entrenching tool in inventory

 missionNameSpace setVariable ["justBuild_ONLYSQUADLD",nil,true];       //Only Squadleader can place objects
 missionNameSpace setVariable ["justBuild_ONLYSQUADLDFOB",nil,true];    //Only Squadleader can build fobs
 missionNameSpace setVariable ["justBuild_ONLYSQUADLDBIG",nil,true];    //Only Squadleader can place large objects 
 missionNameSpace setVariable ["justBuild_ONLYENGINEER",nil,true];      //Only Engineer can place objects
 missionNameSpace setVariable ["justBuild_SQUADLDENGINEER",nil,true];   //Must be Either Squadleader or Engineer. Overrides justBuild_ONLYENGINEER and justBuild_ONLYSQUADLD.

 ///August 2019 update
 missionNameSpace setVariable ["justBuild_BAREFOB",nil,true];           ///Only allows barebones FOB (Can be used together)
 missionNameSpace setVariable ["justBuild_ONLYRALLY",nil,true];         ///Only allows respawnpoint-"POLE" (Can be used together)

 
 
 
 
 
 
 