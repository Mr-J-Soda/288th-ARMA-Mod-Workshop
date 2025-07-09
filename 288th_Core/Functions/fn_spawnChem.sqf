/*
	prophet
*/

params
[
	["_className", "", [""]]
];

if (_className isEqualTo "") exitWith {};

private _playerItems = itemsWithMagazines player;

if ("ACE_Chemlight_IR" in _playerItems) then 
{
    _playerItems pushBack "ACE_G_Chemlight_IR"; // gay fix
};

if (tf112_chemlight_settings_useInventory && !(_className in _playerItems)) exitWith {};

if (tf112_chemlight_settings_useInventory) then 
{
	if (_className isEqualTo "ACE_G_Chemlight_IR") exitWith {player removeItem "ACE_Chemlight_IR"};
		
	player removeItem _className;
};

private _objectClass = call
{
	if (_className isEqualTo "ACE_G_Chemlight_IR") exitWith {getText (configFile >> "CfgAmmo" >> _className >> "ACE_Chemlight_IR")};

	getText (configFile >> "CfgMagazines" >> _className >> "ammo");
};

private _chemlightPos = player modelToWorld [0.5,0,0.5];

private _chemlight = createVehicle [_objectClass, _chemlightPos, [], 0, "CAN_COLLIDE"];

if (_className isEqualTo "ACE_G_Chemlight_IR") exitWith
{
	_chemlight setVectorUp [1, 15, 0];
};

private _vector = vectorDir player;

_chemlight setVectorUp vector;