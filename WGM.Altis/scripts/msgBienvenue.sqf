_onScreenTime = 5;

sleep 7;
 
_role1 = "Bienvenue sur,";
_role1names = ["Watch Games"];
_role2 = "Teamspeak";
_role2names = ["ts.watch-games.fr:14850"];
_role3 = "Principales Regles";
_role3names = ["Free Kill Interdit | Car Kill Interdit | Jouer RP !"];
_role4 = "Site";
_role4names = ["A VENIR"];
_role5 = "Administrateurs";
_role5names = ["Diabolik, Caius"];
_role6 = "Modérateurs";
_role6names = ["Lucifere, Kran Chov, Donovan"];
_role7 = "Tu a des amis qui jouent a Altis ?";
_role7names = ["N'hesite pas a leur parler de Watch Games!"];
_role8 = "Bon Jeux sur";
_role8names = ["Watch Games"];
 
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.40' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [


[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names],
[_role8, _role8names]
];