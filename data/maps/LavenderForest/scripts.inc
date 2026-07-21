LavenderForest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderForest_OnTransition
	.byte 0

LavenderForest_OnTransition:
	setvar VAR_0x8004 16
	callnative Wrapper_For_fakertc
	end