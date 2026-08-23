////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////

_obj = _this select 0;
_obj2 = _this select 1; 
_xnato = _this select 3;
_name = _this select 2;
_side = _this select 5;
_low = _this select 4;
_x = _obj getVariable "ID";
_co = mapGridPosition _obj2;

 
 switch (_side) do
{	case (west):   {_FOB_1 = createMarker [format ["BLU%1" , _name] , _obj2];

};
	case (east):   {_FOB_1 = createMarker [format ["OPF%1" , _name] , _obj2];
};
	case (resistance):   {_FOB_1 = createMarker [format ["RES%1" , _name] , _obj2];
};
	case (civilian):   {_FOB_1 = createMarker [format ["BLU%1" , _name] , _obj2];
};
	

	
	};
 if (_low) then { 
 _FOB_1 setMarkerText format ["FOB %1" , _xnato];
_resp = [_side, _obj2,format ["FOB %1 -- %2",_xnato,_co]] call BIS_fnc_addRespawnPosition; 
_obj2 setVariable ["RESPAWN",_resp,true];
 }else{
_resp = [_side, _obj2,format ["FOB %1 -- %2",_x,_co]] call BIS_fnc_addRespawnPosition; 
_obj2 setVariable ["RESPAWN",_resp,true];
_FOB_1 setMarkerText format ["FOB %1" , _x];
};
_FOB_1 setMarkerPos getpos _obj2;
_FOB_1 setMarkerType "mil_triangle";
_FOB_1 setMarkerSize [1.3,1.3];
  _FOB_1 setMarkerColor "ColorGreen";   
  _FOB_1 setMarkerAlpha 1;