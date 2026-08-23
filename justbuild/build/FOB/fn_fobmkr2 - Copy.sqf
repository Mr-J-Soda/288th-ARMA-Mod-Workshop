////////////////////////////////////////////
// Function file for ArmA 3
// Created by: justokin
///// Addon : justbuild
//////////////////////////////////////////////////////////////////




_obj = _this select 0;
_obj2 = _this select 1; 
_name = _this select 2;
_side = _this select 3;
_obj setVariable ["MARKER",0,true];
	switch (_side) do
{	case (west):   {deleteMarker format ["BLU%1" , _name];

};
	case (east):   {deleteMarker format ["OPF%1" , _name];
};
	case (resistance):   {deleteMarker format ["RES%1" , _name];
};
	case (civilian):   {deleteMarker format ["BLU%1" , _name];
};
	

	
	};
_resp = _obj2 getVariable "RESPAWN";
_resp call BIS_fnc_removeRespawnPosition;    
