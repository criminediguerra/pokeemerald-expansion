AshleafTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AshleafTown_OnTransition
	.byte 0

AshleafTown_OnTransition:
	setflag FLAG_VISITED_ASHLEAF
	end