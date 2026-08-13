HolonTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HolonTown_OnTransition
	.byte 0

HolonTown_OnTransition:
	setflag FLAG_VISITED_HOLON
	end