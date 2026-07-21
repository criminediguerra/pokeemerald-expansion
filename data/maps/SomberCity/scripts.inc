SomberCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SomberCity_OnTransition
	.byte 0

SomberCity_OnTransition:
	setflag FLAG_VISITED_SOMBER
	end