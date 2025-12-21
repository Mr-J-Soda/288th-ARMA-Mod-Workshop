[] spawn {
    waitUntil { !isNull player };
    private _baseline = 2000;
    player addRating (_baseline - rating player);
    player addEventHandler ["HandleRating", { 0 }];
    while { true } do {
        if ((rating player) != _baseline) then {
            player addRating (_baseline - rating player);
        };
        sleep 0.5;
    };
};
