////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

///////mustaddcancel addactoio posiotion place option

_play = _this;

_play removeAction plmg;
_play removeAction plgmg;
_play removeAction plfence;
_play removeAction plmort;
_play removeAction plbags;
_play removeAction plat;
_play removeAction plaa;
_play removeAction lista;
_play removeAction plhwa;
_play removeAction plfob;
_play removeAction plrepa;
_play removeAction plsa1;
_play removeAction plsa2;
_play removeAction plnet;
_play removeAction plhro3;
_play removeAction plhro5;
_play removeAction plhrob;
_play removeAction plhwa6;
_play removeAction plhwacor;
_play removeAction plhwador;
_play removeAction plsba;
_play removeAction plsbah;
_play removeAction plsbap;
_play removeAction plbker;
_play removeAction plbkers;
_play removeAction plbkert;
_play removeAction plwal;
_play removeAction plwal2;
_play removeAction plwal3;
_play removeAction plbker;
_play removeAction plbkers;
_play removeAction plbkert;
_play removeAction plbkhq;
_play removeAction plbkpl;
_play removeAction plbkpllrg;
_play removeAction plcatow;
_play removeAction plhetow;
_play removeAction plsatow;
_play removeAction plcargosm;
_play removeAction plcargolrg;
_play removeAction plcargopa;
_play removeAction plrdbarwo;
_play removeAction plrdbarco;
_play removeAction plrdcn;
_play removeAction pllights;
_play removeAction plcamogrel;
_play removeAction plcamodigl;
_play removeAction plcamohexl;
_play removeAction plcamoirml;
_play removeAction plcamogresm;
_play removeAction plcamodigsm;
_play removeAction plcamohexsm;
_play removeAction plcamoirmsm;
_play removeAction plrdbarga;
_play removeAction plbriwo;
_play removeAction plbrict;
_play removeAction plshelt;
_play removeAction canc;
_play removeAction setposadd;
_play removeAction setposcanc;
_play removeAction plfobconc;
_play removeAction plfobcargohq;
_play removeAction plfobpillbox;
_play removeAction plfobcargosm;
_play removeAction plfobsm;
_play removeAction plfobwood;
_play removeAction plfobbare;
_play removeAction setpostog;

if (_play getVariable "REMOVE") then {
_remarray2 = _play getVariable "remarray";


_delarray = (_play getVariable "remarray");
{_play removeAction _x;
_remarray2 deleteAt (_remarray2 find (_x));
}forEach (_play getVariable "remarray");


if (count (_play getVariable "remarray") > 0) then{
_play removeAction ((_play getVariable "remarray") select 0);
_remarray2 deleteAt (_remarray2 find ((_play getVariable "remarray") select 0));
};
_play setVariable ["REMOVE",false,true];
_play setVariable ["remarray",_remarray2,true];};


