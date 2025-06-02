KasadoCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KasadoCity_OnTransition
	.byte 0

KasadoCity_OnTransition:
	setflag FLAG_VISITED_KASADO
	end