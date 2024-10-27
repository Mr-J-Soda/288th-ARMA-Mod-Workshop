waitUntil { not isNull player };


//SHIELD SINGLE
EH_ShotsFired_Shield_Single = player addEventHandler ["FiredMan", {

  _AmmoType = _this select 4;
  if (_AmmoType == "288th_shield_beacon_single") then {
  _Projectile = _this select 6;
  [_Projectile] spawn {
    _Projectile = _this select 0;

    Sleep 1;

    private _pos = [getpos _Projectile select 0, getpos _Projectile select 1, 1];
    deleteVehicle _Projectile;
    private _shield_spawn = createVehicle ["OPTRE_FC_Energy_shield", _pos, [], 0, "CAN_COLLIDE"];
    _shield_spawn setObjectScale 1;

    sleep 120;
    deleteVehicle _shield_spawn;
    };
  };
}];
