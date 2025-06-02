WhitestoneCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WhitestoneCity_OnTransition
	.byte 0

WhitestoneCity_OnTransition:
	setflag FLAG_VISITED_WHITESTONE
	end