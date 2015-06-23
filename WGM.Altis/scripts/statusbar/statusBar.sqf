waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["opteron.servegame.com/opteron", _rscLayer];

[] spawn {
	sleep 5;
	_statusText = "the-life.fr";
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
{
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "StatusBar")displayCtrl 1000)ctrlSetText format["FPS: %1 | Flics: %2 | Civils: %3 | Pompier: %4 | Cash: %5 | Banque: %6 | TS3: ts.watch-games.fr:14850", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmcash] call life_fnc_numberText,mapGridPosition player, _counter];
	}; 
};