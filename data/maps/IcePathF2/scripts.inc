IcePathF2_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, IcePathF2_SetHoleWarp
	.byte 0

IcePathF2_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ICE_PATH_F3
	end