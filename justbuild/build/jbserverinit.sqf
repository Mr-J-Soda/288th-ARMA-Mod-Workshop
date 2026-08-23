////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////
////serverinit
///
///justokinedit
/////
//////ADDON disable/enable set, true or false
missionNameSpace setVariable ["justBuild_Enabled",!(justBuild_Togglex ==3 ),true];

////FOB NAME ARRAY
///nameray = ["Alpha","Sugar","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliett","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Whiskey","X-ray","Yankee","Zulu","Peter","Baker","Ack","Beer","Canada","Don","Edward","Freddie","Gee","Harry","Ink","Johnnie","King","London","Monkey","Nuts","Oranges","Pip","Queen","Robert","Toc","Diamond","Silver","Roger"];
  // publicvariable "nameray";
	
 missionNameSpace setVariable ["nameray",["Alpha","Sugar","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliett","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Whiskey","X-ray","Yankee","Zulu","Peter","Baker","Ack","Beer","Canada","Don","Edward","Freddie","Gee","Harry","Ink","Johnnie","King","London","Monkey","Nuts","Oranges","Pip","Queen","Robert","Toc","Diamond","Silver","Roger"],true]; 
/////
missionNameSpace setVariable ["jbcount",0,true]; 
    publicvariable "jbcount";
missionNameSpace setVariable ["gcount",0,true];	
missionNameSpace setVariable ["bcount",0,true]; 
missionNameSpace setVariable ["ocount",0,true]; 
    publicvariable "bcount";
 publicvariable "ocount";
  publicvariable "gcount";
 missionNameSpace setVariable ["bcount2",0,true]; 
missionNameSpace setVariable ["ocount2",0,true]; 
    publicvariable "bcount2";
 publicvariable "ocount2";
missionNameSpace setVariable ["gcount2",0,true];
 publicvariable "gcount2";
 missionNameSpace setVariable ["rcount",0,true]; 
    publicvariable "rcount";
missionNameSpace setVariable ["MVG1",0,true]; 
missionNameSpace setVariable ["MVG2",0,true];  
missionNameSpace setVariable ["MVG3",0,true]; 
missionNameSpace setVariable ["MVG4",0,true]; 

flag_Nato = createVehicle ["Land_FMradio_F", [100, 100, -300], [], 0, "NONE"];
flag_Nato allowdamage false; 
flag_Nato enableSimulation false;
flag_Nato hideObject true;

if !(isNil "justBuild_Enabled") then{
_doy = flag_Nato;
setposadd = (_doy) addaction ["SET POSITION", {(_this select 3) call jstbld_fnc_setpos;},[]];
setposcanc = (_doy) addaction ["CANCEL", "jstbld_fnc_cancel",[]];
///////////////////////////////////////////////////////////////////////////////////
/////HESCO
///////////////
///wall
///Hbarrierwall(4)
plhwa = (_doy) addaction ["<t color='#FF0000'>Hesco Wall(4x)</t>", "",[]];
plhwa6 = (_doy) addaction ["<t color='#FF0000'>Place Hesco Wall (Long)</t>", "",[]];
plhwacor = (_doy) addaction ["<t color='#FF0000'>Place Hesco Wall (Corner)</t>", "",[]];
plhwador = (_doy) addaction ["<t color='#FF0000'>Place Hesco Corridor</t>", "",[]];
///
///single
plnet = (_doy) addaction ["<t color='#FF0000'>Place Single Hesco</t>", "",[]];
plhro3 = (_doy) addaction ["<t color='#FF0000'>Place Hesco Row (3)</t>", "",[]]; 
plhro5 = (_doy) addaction ["<t color='#FF0000'>Place Hesco Row (5)</t>", "",[]]; 
plhrob = (_doy) addaction ["<t color='#FF0000'>Place Hesco Row (BIG)</t>", "",[]]; 
///////////////////////////////////////////////////////////////////////////
///////SANDBAGS
////////////
///Bagsold
plbags = (_doy) addaction ["<t color='#FF0000'>Place sandbags</t>", "jstbld_fnc_placebags",[]];
///smalll
///Sandbags long
plsa1 = (_doy) addaction ["<t color='#FF0000'>Sandbags (Long)</t>", "jstbld_fnc_placebags",[]];
///curved
plsa2 = (_doy) addaction ["<t color='#FF0000'>Sandbags (Curved)</t>", "jstbld_fnc_placebagcu",[]];
///WALL
///barricade
plsba = (_doy) addaction ["<t color='#FF0000'>Sandbag WALL</t>", "jstbld_fnc_placebagba",[]];
///barricadehalf
plsbah = (_doy) addaction ["<t color='#FF0000'>Sandbag WALL (HALF)</t>", "jstbld_fnc_placebagbah",[]];
///Sandbagspigonholw
plsbap = (_doy) addaction ["<t color='#FF0000'>Sandbag WALL (Hole)</t>", "jstbld_fnc_placebaghole",[]];
////////////////////////////////////////////////////////////////////////////////////////////////////////
/////WALLS
////////////
///WALL 1
plwal = (_doy) addaction ["<t color='#FF0000'>WALL</t>", "jstbld_fnc_placewall",[]];
///WALL 2 LOng
plwal2 = (_doy) addaction ["<t color='#FF0000'>WALL (LONG)</t>", "jstbld_fnc_placewall2",[]];
///WALL 3 tall
plwal3 = (_doy) addaction ["<t color='#FF0000'>WALL (TALL)</t>", "jstbld_fnc_placewall3",[]];
////////////////////////////////////////////////////////////////////////////////////////////////////////
/////bunkwe
////////////
///bunker
plbker = (_doy) addaction ["<t color='#FF0000'>Place Bunker </t>", "jstbld_fnc_placebunker",[]];
plbkers = (_doy) addaction ["<t color='#FF0000'>Place Bunker (SMALL)</t>", "jstbld_fnc_placebunker",[]];
plbkert = (_doy) addaction ["<t color='#FF0000'>Place Bunker (TALL)</t>", "jstbld_fnc_placebunker",[]];
plbkhq = (_doy) addaction ["<t color='#FF0000'>BUNKER (Concrete H.Q.)</t>","jstbld_fnc_placebunker",[]];
plbkpl = (_doy) addaction ["<t color='#FF0000'>BUNKER (Pillbox)</t>",  "jstbld_fnc_placebunker",[]];
plbkpllrg = (_doy) addaction ["<t color='#FF0000'>BUNKER (Pillbox LRG)</t>","jstbld_fnc_placebunker",[]];
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////PREFAB
///////
///TOWERS
//////////////
///HESCO
plhetow = (_doy) addaction ["<t color='#FF0000'>HESCO TOWER</t>", "jstbld_fnc_placehetow",[]];
plsatow = (_doy) addaction ["<t color='#FF0000'>SAND BAG TOWER</t>", "jstbld_fnc_placesatow",[]];
plcatow = (_doy) addaction ["<t color='#FF0000'>CARGO TOWER</t>", "jstbld_fnc_placecatow",[]];
//////
///Structures
//////////
///cargosm
plcargosm = (_doy) addaction ["<t color='#FF0000'>CARGO (SMALL)</t>", "jstbld_fnc_placecargosm",[]];
plcargolrg = (_doy) addaction ["<t color='#FF0000'>CARGO (LARGE)</t>", "jstbld_fnc_placecargolrg",[]];
plcargopa = (_doy) addaction ["<t color='#FF0000'>CARGO (PATROL)</t>", "jstbld_fnc_placecargopa",[]];
///ROAD BLK stuff
plrdbarco = (_doy) addaction ["<t color='#FF0000'>CONCRETE BARRIER</t>", "jstbld_fnc_placerdbarco",[]];
plrdcn = (_doy) addaction ["<t color='#FF0000'>ROAD CONE</t>", "jstbld_fnc_placerdcone",[]];
plrdbarwo = (_doy) addaction ["<t color='#FF0000'>TRAFFIC BARRIER</t>", "jstbld_fnc_placerdbarwo",[]];
pllights = (_doy) addaction ["<t color='#FF0000'>FLOOD LIGHTS</t>", "jstbld_fnc_placelight",[]];
plrdbarga = (_doy) addaction ["<t color='#FF0000'>TRAFFIC GATE</t>", "jstbld_fnc_placerdbarga",[]];
///////////////////////////
/////CAMOnets
//////////
///lrg
///CAMONET LRG
plcamogrel = (_doy) addaction ["<t color='#FF0000'>LRG CAMO NET (GREEN)</t>", "jstbld_fnc_placecamoirml",[ ]];
plcamodigl = (_doy) addaction ["<t color='#FF0000'>LRG CAMO NET (DIGITAL)</t>", "jstbld_fnc_placecamodigl",[ ]];
plcamohexl = (_doy) addaction ["<t color='#FF0000'>LRG CAMO NET (HEX)</t>", "jstbld_fnc_placecamohexl",[ ]];
plcamoirml = (_doy) addaction ["<t color='#FF0000'>LRG CAMO NET (IR MASK)</t>", "jstbld_fnc_placecamoirml",[ ]];
///CAMONET SM
plcamogresm = (_doy) addaction ["<t color='#FF0000'>SM CAMO NET (GREEN)</t>", "jstbld_fnc_placecamoirmsm",[ ]];
plcamodigsm = (_doy) addaction ["<t color='#FF0000'>SM CAMO NET (DIGITAL)</t>", "jstbld_fnc_placecamodigsm",[ ]];
plcamohexsm = (_doy) addaction ["<t color='#FF0000'>SM CAMO NET (HEX)</t>", "jstbld_fnc_placecamohexsm",[ ]];
plcamoirmsm = (_doy) addaction ["<t color='#FF0000'>SM CAMO NET (IR MASK)</t>", "jstbld_fnc_placecamoirmsm",[ ]];
///Large bridge
plbrict = (_doy) addaction ["<t color='#FF0000'>Place BRIDGE (LRG)</t>", "jstbld_fnc_placebridcon",[]];
///small bridge
 plbriwo = (_doy) addaction ["<t color='#FF0000'>Place BRIDGE</t>", "jstbld_fnc_placebridwod",[]];
////shelter
plshelt = (_doy) addaction ["<t color='#FF0000'>Place Concrete Shelter</t>", {_obj = createVehicle ["Land_CncShelter_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;},[]];
///fob (radio)
plfob = (_doy) addaction ["<t color='#FF0000'>Place F.O.B.</t>", "jstbld_fnc_placefob",[]];
///repair
plrepa = (_doy) addaction ["<t color='#FF0000'>Place Repair Station</t>", "jstbld_fnc_placerepa",[]];
///bunker
plbker = (_doy) addaction ["<t color='#FF0000'>Place bunker</t>", "jstbld_fnc_placebunker",[]];
///MG
plmg = (_doy) addaction ["<t color='#FF0000'>Place static MG</t>", "jstbld_fnc_placemg",[]];
///arty
//plgmg = (_doy) addaction ["<t color='#FF0000'>Place static Artillery</t>", "jstbld_fnc_placeart",[]];
///AA
plaa = (_doy) addaction ["<t color='#FF0000'>Place static AA Launcher</t>", "jstbld_fnc_placeaa",[]];
///rxrwire
plfence = (_doy) addaction ["<t color='#FF0000'>Place Razorwire</t>", "jstbld_fnc_placefence",[]];
///AT
plat = (_doy) addaction ["<t color='#FF0000'>Place static AT Launcher</t>", "jstbld_fnc_placeat",[]];
///MORTAR
plmort = (_doy) addaction ["<t color='#FF0000'>Place Mortar</t>", "jstbld_fnc_placemorter",[]];
plammo = (_doy) addaction ["<t color='#FF0000'>Place Crate</t>", "jstbld_fnc_placeammo",[]];
///lrgfob
///cargosm
plfobconc = (_doy) addaction ["<t color='#FF0000'>F.O.B. (CONCRETE)</t>", {_obj = createVehicle ["Land_Bunker_01_HQ_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cargolrg
plfobcargohq = (_doy) addaction ["<t color='#FF0000'>F.O.B. (CARGO)</t>", {_obj = createVehicle ["Land_Cargo_HQ_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cargopatrol
plfobpillbox = (_doy) addaction ["<t color='#FF0000'>F.O.B. (PILLBOX)</t>", {_obj = createVehicle ["Land_PillboxBunker_01_big_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///smfob
///cargosm
////plfobwood = (_doy) addaction ["<t color='#FF0000'>F.O.B. (BUNKER)</t>", {_obj = createVehicle ["Land_BagBunker_Large_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
plfobwood = (_doy) addaction ["<t color='#FF0000'>F.O.B. (BUNKER)</t>", {[] spawn jstbld_fnc_placefob;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cargolrg
plfobsm = (_doy) addaction ["<t color='#FF0000'>F.O.B. (SHELTER)</t>", {_obj = createVehicle ["Land_SandbagBarricade_01_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cargopatrol
plfobcargosm = (_doy) addaction ["<t color='#FF0000'>F.O.B. (CARGO)</t>", {_obj = createVehicle ["Land_Cargo_House_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
plfobbare = (_doy) addaction ["<t color='#FF0000'>F.O.B. (CARGO)</t>", {_obj = createVehicle ["Land_Cargo_House_V1_F", [100, 100, 200], [], 0, "NONE"];[_obj,_this select 1,0] spawn jstbld_fnc_placeobject1;}, [], 1.5,  true,  true,  "", "Alive _originaltarget", 2.5];
///cancel 
canc = (_doy) addaction ["<t color='#FF0000'>Cancel Placement</t>", "jstbld_fnc_cancel"];
setpostog = _doy addaction["Toggle", {if ((_this select 3) getVariable "TOGGLE") then{(_this select 3) setVariable ["TOGGLE",false,true];}else{_obj setVariable ["TOGGLE",true,true];};}, _obj, 1.5,  true,  true,  "", "Alive _originaltarget &&_originaltarget == _this", 2.5]; 
 lista = (_doy) addaction ["<t color='#FF0000'>Cancel Placement</t>", "jstbld_fnc_cancel"];
  // Send the new value to clients.
  call jstbld_fnc_variables;};
 missionNameSpace setVariable ["jbcount",(missionNameSpace getVariable "bcount")+(missionNameSpace getVariable "ocount")+(missionNameSpace getVariable "gcount")+(missionNameSpace getVariable "rcount"),true]; 