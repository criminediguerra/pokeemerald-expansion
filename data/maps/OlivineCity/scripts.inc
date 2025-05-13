OlivineCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_OnTransition
	.byte 0

OlivineCity_OnTransition:
	setflag FLAG_VISITED_OLIVINE
	end

Olivine_City_TownSign::
	msgbox Olivine_City_Text_TownSign, MSGBOX_SIGN
	end

Olivine_City_Text_TownSign:
	.string "OLIVINE CITY\n"
	.string "“The Port Closest to Foreign Lands!”$"

Olivine_City_GymSign::
	msgbox Olivine_City_Text_GymSign, MSGBOX_SIGN
	end

Olivine_City_Text_GymSign:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE\l"
	.string "“The Steel-Clad Defense Girl!”$"

Olivine_City_JasmineHouse::
	msgbox Olivine_City_Text_JasmineHouse, MSGBOX_SIGN
	end

Olivine_City_Text_JasmineHouse:
	.string "JASMINE HOUSE$"

Olivine_CityLighthouseSign::
	msgbox Olivine_CityLighthouseSignText, MSGBOX_SIGN
	end

Olivine_CityLighthouseSignText:
	.string "OLIVINE CITY LIGHTHOUSE$"

Olivine_City_HarborSign::
	msgbox Olivine_City_Text_HarborSign, MSGBOX_SIGN
	end

Olivine_City_Text_HarborSign:
	.string "OLIVINE HARBOR$"

Olivine_City_AquariumSign::
	msgbox Olivine_City_AquariumSignText, MSGBOX_SIGN
	end

Olivine_City_AquariumSignText:
	.string "Come see the GREAT AQUARIUM of\n"
	.string "CIANWOOD CITY!$"