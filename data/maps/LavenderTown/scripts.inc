LavenderTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition:
	setflag FLAG_VISITED_LAVENDER
	end

Lavender_Grave::
	msgbox Lavender_Grave_Text, MSGBOX_SIGN
	end

Lavender_Grave_Text::
    .string "The name is worn away by time...\n"
    .string "but fresh flowers rest at its base.\p" 
    .string "Someone still remembers.$"

Lavender_Grave_Prof_Westwood::
	msgbox Lavender_Grave_Prof_Westwood_Text, MSGBOX_SIGN
	end

Lavender_Grave_Prof_Westwood_Text::
    .string "In memory of PROF. WESTWOOD.\n"
    .string "Thinker, dreamer, and friend to POKéMON.\p" 
    .string "His theories reached where his footsteps\n"
    .string "could not.$"

Lavender_Grave_Agatha::
	msgbox Lavender_Grave_Agatha_Text, MSGBOX_SIGN
	end

Lavender_Grave_Agatha_Text::
    .string "Here lies AGATHA of the ELITE FOUR.\n"
    .string "fierce in battle, sharper in spirit.\p" 
    .string "Some say the wind still carries her\n"
    .string "voice through the halls of the LEAGUE.$"