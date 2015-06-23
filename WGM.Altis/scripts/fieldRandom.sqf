/*
	Description: Cycles the locations of the drug fields between 4 pre 
					defined locations you know to mix things up a bit
Based of a script made for army storm gaming 

*/
cokeFields = ["dmcoke1","dmcoke2","dmcoke3","dmcoke4"];
heroinFields = ["dmheroin1","dmheroin2","dmheroin3","dmheroin4"];
weedFields = ["dmweed1","dmweed2","dmweed3","dmweed4"];

while {true} do 
{
	// charger champs de coca
	_sCount = count cokeFields;
	for "_x" from 0 to 1 do 
	{
		_sSelect = floor(random _sCount);
		_item = cokeFields select _sSelect;
		"cocaine_1" setMarkerPos getMarkerPos _item;
	};

	// charger champs de hero
	_sCount = count heroinFields;
	for "_x" from 0 to 1 do 
	{
		_sSelect = floor(random _sCount);
		_item = heroinFields select _sSelect;
		"heroin_1" setMarkerPos getMarkerPos _item;
	};

	// charger champs de weed
	_sCount = count weedFields;
	for "_x" from 0 to 1 do 
	{
		_sSelect = floor(random _sCount);
		_item = weedFields select _sSelect;
		"weed_1" setMarkerPos getMarkerPos _item;
	};	
	
	sleep 6366;
};