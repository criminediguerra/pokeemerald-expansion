LarousseCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LarousseCity_OnTransition
	.byte 0

LarousseCity_OnTransition:
	setflag FLAG_VISITED_LAROUSSE
	end