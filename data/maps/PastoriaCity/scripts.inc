PastoriaCity_MapScripts::
	.byte 0

PastoriaCity_Water::
	lockall
	setvar VAR_MUD_OR_SNOW, 0
	releaseall
	end

PastoriaCity_Mud::
	lockall
	setvar VAR_MUD_OR_SNOW, 1
	releaseall
	end

PastoriaCity_Snow::
	lockall
	setvar VAR_MUD_OR_SNOW, 2
	releaseall
	end