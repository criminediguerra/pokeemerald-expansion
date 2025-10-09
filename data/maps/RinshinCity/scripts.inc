RinshinCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RinshinCity_OnTransition
	.byte 0

RinshinCity_OnTransition:
	setflag FLAG_VISITED_RINSHIN_CITY
	end