/*
	File: fn_welcomeNotification.sqf
	
	Description:
	Called upon first spawn selection and welcomes our player.
*/
/*format["Bienvenue %1, lisez attentivement ce qui suit",profileName] hintC
[
	"Bienvenue sur le serveur Altis Life Watch-Games",
	"Nous disposons d'un site: <t color='#AAF200'>http://watch-games.fr"</t>,
	"Ainsi que d'un teamspeak public: <t color='#AAF200'>ts.watch-games.fr:14850"</t>,
	"Veuillez prendre connaisance des règles sur le forum",
	"Les admins:Caius,Diabolik",
	"Les Modos:Lucifére",
    "N'oubliez pas de faire sync data avant de quitter le serveur"
];*/

"" hintC parseText "<t><t size='1.5'>Bienvenue sur le serveur Altis Life Watch-Games</t><br/>
<br/>
<t>Site : </t><t color='#AAF200'>http://watch-games.fr/network/forum</t><br/>
<t>TeamSpeak : </t><t color='#AAF200'>ts.watch-games.fr:14850</t><br/><br/>
<t>Mod : </t><t color='#AAF200'>https://mega.co.nz/#!R41yVKwZ!F7LktGW18tvg5Emvt66gWscV_Vg6Xc_BQW1ACkyXnKM</t><br/><br/>

<t color='#FF0000'>Consultez les règles avant de jouer !</t><br/>
<t color='#FF0000'>Il est interdit de tuer,braquer et menacer dans les zones safes</t><br/>
<t color='#FF0000'>Les zones safe :Kavala,Atm,Ville rebelle</t><br/><br/>
<t color='#FF0000'>Attention les armes provenant d'addons ne sauvegardent pas dans les caisses</t><br/>

<t size='1.5' color='#4182ea'>Commandes:</t><br/>
<t color='#4182ea'>Recrutement Samu/Police [ON] </t><br/>
<t color='#4182ea'>Sirène Police P </t><br/>
<t color='#4182ea'>Boules quies molette</t><br/>
<t color='#4182ea'>Se rendre/Voler argent: Shift + G </t><br/>
<t color='#4182ea'>Assomer: Shift + R </t><br/>
<t color='#4182ea'>Voler le téléphone d'une personne Shift + R </t><br/>
<t color='#4182ea'>Miner: Y </t><br/>
<t color='#4182ea'>Recolter: Touche Windows </t><br/>
<t color='#4182ea'>Menotter: Shift + R </t><br/>
<t color='#4182ea'>Coffre voiture: T </t><br/>
<t color='#4182ea'>Ouvrir porte voitures/maisons: U </t><br/>
<br/>

";