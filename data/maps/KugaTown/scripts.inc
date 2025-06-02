KugaTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KugaTown_OnTransition
	.byte 0

KugaTown_OnTransition:
	setflag FLAG_VISITED_KUGA
	end