IzabeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IzabeTown_OnTransition
	.byte 0

IzabeTown_OnTransition:
	setflag FLAG_VISITED_IZABE
	end