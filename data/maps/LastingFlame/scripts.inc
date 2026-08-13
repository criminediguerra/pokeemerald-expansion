LastingFlame_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LastingFlame_OnTransition
	.byte 0

LastingFlame_OnTransition:
	setflag FLAG_VISITED_LASTING_FLAME
	end