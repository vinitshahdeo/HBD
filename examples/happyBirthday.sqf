// sends a hint to all players on an ArmA 3 server telling them it's a _name's birthday

sendHBDReminder = {
    params ["_name"];
    {
        [format("It's " + _name + "'s birthday today, wish them a happy birthday!", _name)] remoteExec ["hint", _x];
    } forEach allPlayers;
}

["PiratePie"] call sendHBDReminder;
