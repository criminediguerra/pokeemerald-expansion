OlivineContest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineContest_OnTransition
	.byte 0

OlivineContest_OnTransition:
	setvar VAR_CONTEST_LOCATION, 2
	end