_AOE = 15;
{
        // Make unit look at quackbang
        if (_x == player) exitWith {};
        _dirToDuck = _x getDir _this;
        _x setDir _dirToDuck;
        _x disableAI "ALL";
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);

sleep random 2;

{
        // Make unit stop looking at quackbang
        if (_x == player) exitWith {};
        _x enableAI "ALL";
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);

