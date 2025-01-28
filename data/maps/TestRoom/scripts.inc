TestRoom_MapScripts::
	.byte 0

Testroom_EventScript_Time_Progression_1::
	setflag FLAG_TIME_PROGRESSION_1
	clearflag FLAG_TIME_PROGRESSION_2
	end

Testroom_EventScript_Time_Progression_2::
	setflag FLAG_TIME_PROGRESSION_2
	clearflag FLAG_TIME_PROGRESSION_3
	end

Testroom_EventScript_Time_Progression_3::
	setflag FLAG_TIME_PROGRESSION_3
	clearflag FLAG_TIME_PROGRESSION_4
	end

Testroom_EventScript_Time_Progression_4::
	setflag FLAG_TIME_PROGRESSION_4
	clearflag FLAG_TIME_PROGRESSION_5
	end

Testroom_EventScript_Time_Progression_5::
	setflag FLAG_TIME_PROGRESSION_5
	clearflag FLAG_TIME_PROGRESSION_6
	end

Testroom_EventScript_Time_Progression_6::
	setflag FLAG_TIME_PROGRESSION_6
	clearflag FLAG_TIME_PROGRESSION_7
	end

Testroom_EventScript_Time_Progression_7::
	setflag FLAG_TIME_PROGRESSION_7
	clearflag FLAG_TIME_PROGRESSION_8
	end

Testroom_EventScript_Time_Progression_8::
	setflag FLAG_TIME_PROGRESSION_8
	setvar VAR_HOENN_LEAGUE_REMATCH, 1
	setflag FLAG_SYS_GAME_CLEAR
	clearflag FLAG_TIME_PROGRESSION_9
	end

Testroom_EventScript_Time_Progression_KantoLeauge::
	setflag FLAG_KANTO_LEAGUE_1
	setvar VAR_KANTO_LEAGUE_REMATCH, 1
	clearflag FLAG_KANTO_LEAGUE_2
	end

Testroom_EventScript_MossdeepRocket_Event::
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	end

Testroom_EventScript_Groudon::
	givemon SPECIES_CHARIZARD, 100, ITEM_MASTER_BALL
	givemon SPECIES_BLASTOISE, 100, ITEM_MASTER_BALL
	givemon SPECIES_VENUSAUR, 100, ITEM_MASTER_BALL
	givemon SPECIES_GROUDON, 100, ITEM_MASTER_BALL
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	giveitem ITEM_WAILMER_PAIL
	giveitem ITEM_COIN_CASE
	giveitem ITEM_POKEBLOCK_CASE
	giveitem ITEM_HM01
	giveitem ITEM_HM02
	giveitem ITEM_HM03
	giveitem ITEM_HM04
	giveitem ITEM_HM05
	giveitem ITEM_HM06
	giveitem ITEM_HM07
	giveitem ITEM_HM08
	release
	end

Testroom_EventScript_Fly::
	setflag FLAG_VISITED_CROSSGATE
	setflag FLAG_VISITED_VERMILION
	setflag FLAG_VISITED_CELADON
	setflag FLAG_VISITED_CERULEAN
	setflag FLAG_VISITED_CINNABAR
	setflag FLAG_VISITED_FUCHSIA
	setflag FLAG_VISITED_LAVENDER
	setflag FLAG_VISITED_PEWTER
	setflag FLAG_VISITED_VIRIDIAN
	setflag FLAG_VISITED_PALLET
	setflag FLAG_VISITED_MTSILVER
	setflag FLAG_VISITED_INDIGOPLATEAU
	setflag FLAG_VISITED_NEWBARK
	setflag FLAG_VISITED_CHERRYGROVE
	setflag FLAG_VISITED_VIOLET
	setflag FLAG_VISITED_AZALEA
	setflag FLAG_VISITED_GOLDENROD
	setflag FLAG_VISITED_ECRUTEAK
	setflag FLAG_VISITED_OLIVINE
	setflag FLAG_VISITED_CIANWOOD
	setflag FLAG_VISITED_MAHOGANY
	setflag FLAG_VISITED_LAKEOFRAGE
	setflag FLAG_VISITED_BLACKTHORN
	setflag FLAG_VISITED_JOHTOBATTLETOWER
	setflag FLAG_VISITED_JOHTOSAFARI
	setflag FLAG_VISITED_SAFFRON
	setflag FLAG_VISITED_ROUTE3
	setflag FLAG_VISITED_ROUTE10
	setflag FLAG_VISITED_ONEISLAND
	setflag FLAG_VISITED_TWOISLAND
	setflag FLAG_VISITED_THREEISLAND
	setflag FLAG_VISITED_FOURISLAND
	setflag FLAG_VISITED_FIVEISLAND
	setflag FLAG_VISITED_SIXISLAND
	setflag FLAG_VISITED_SEVENISLAND
end

Testroom_EventScript_FlyHoenn::
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
end

Testroom_EventScript_Var::
	clearflag FLAG_HIDE_LEGENDARY_BEASTS
	setflag FLAG_TRAINER_BLESSED
	setvar VAR_BEASTAWAKENED, 1
end