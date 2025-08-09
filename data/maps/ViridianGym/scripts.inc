ViridianGym_MapScripts::
	.byte 0

ViridianGym_EventScript_Cain::
	goto_if_set TRAINER_FLAGS_START+865, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+866, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+867, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+868, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+869, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+870, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+871, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+872, ViridianGym_EventScript_CainDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+873, ViridianGym_EventScript_CainDefeatedTxt
	goto ViridianGym_EventScript_Cain_Check_1
	end

ViridianGym_EventScript_Cain_Check_1::
	goto_if_unset FLAG_TIME_PROGRESSION_1, ViridianGym_EventScript_Cain_Badge_1
	goto_if_set FLAG_TIME_PROGRESSION_1, ViridianGym_EventScript_Cain_Check_2
	end

ViridianGym_EventScript_Cain_Check_2::
	goto_if_unset FLAG_TIME_PROGRESSION_2, ViridianGym_EventScript_Cain_Badge_2
	goto_if_set FLAG_TIME_PROGRESSION_2, ViridianGym_EventScript_Cain_Check_3
	end

ViridianGym_EventScript_Cain_Check_3::
	goto_if_unset FLAG_TIME_PROGRESSION_3, ViridianGym_EventScript_Cain_Badge_3
	goto_if_set FLAG_TIME_PROGRESSION_3, ViridianGym_EventScript_Cain_Check_4
	end

ViridianGym_EventScript_Cain_Check_4::
	goto_if_unset FLAG_TIME_PROGRESSION_4, ViridianGym_EventScript_Cain_Badge_4
	goto_if_set FLAG_TIME_PROGRESSION_4, ViridianGym_EventScript_Cain_Check_5
	end

ViridianGym_EventScript_Cain_Check_5::
	goto_if_unset FLAG_TIME_PROGRESSION_5, ViridianGym_EventScript_Cain_Badge_5
	goto_if_set FLAG_TIME_PROGRESSION_5, ViridianGym_EventScript_Cain_Check_6
	end

ViridianGym_EventScript_Cain_Check_6::
	goto_if_unset FLAG_TIME_PROGRESSION_6, ViridianGym_EventScript_Cain_Badge_6
	goto_if_set FLAG_TIME_PROGRESSION_6, ViridianGym_EventScript_Cain_Check_7
	end

ViridianGym_EventScript_Cain_Check_7::
	goto_if_unset FLAG_TIME_PROGRESSION_7, ViridianGym_EventScript_Cain_Badge_7
	goto_if_set FLAG_TIME_PROGRESSION_7, ViridianGym_EventScript_Cain_Check_8
	end

ViridianGym_EventScript_Cain_Check_8::
	goto_if_unset FLAG_TIME_PROGRESSION_8, ViridianGym_EventScript_Cain_Badge_8
	goto_if_set FLAG_TIME_PROGRESSION_8, ViridianGym_EventScript_Cain_Badge_0
	end

ViridianGym_EventScript_Cain_Badge_0::
	trainerbattle_single TRAINER_CAIN_1, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_1::
	trainerbattle_single TRAINER_CAIN_2, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_2::
	trainerbattle_single TRAINER_CAIN_3, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_3::
	trainerbattle_single TRAINER_CAIN_4, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_4::
	trainerbattle_single TRAINER_CAIN_5, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_5::
	trainerbattle_single TRAINER_CAIN_6, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_6::
	trainerbattle_single TRAINER_CAIN_7, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_7::
	trainerbattle_single TRAINER_CAIN_8, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_Cain_Badge_8::
	trainerbattle_single TRAINER_CAIN_9, ViridianGym_Text_CainIntro, ViridianGym_Text_CainDefeat, ViridianGym_EventScript_CainDefeated, NO_MUSIC
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_CainDefeated::
	message ViridianGym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox ViridianGym_Text_BadgeInfo, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianGym_EventScript_CainDefeatedTxt::
	msgbox ViridianGym_Text_CainPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_Text_CainIntro:
	.string "Welcome to the VIRIDIAN GYM!\n"
	.string "My name is CAIN!\p"
	.string "The GYM LEADER is always away, so it's up\n"
	.string "to me to replace him.\l"
	.string "but don't think you're looking at a fool!\p"
	.string "My collection of rare FLYING POKéMON\n"
	.string "will blow you away!$"

ViridianGym_Text_CainDefeat:
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

ViridianGym_Text_ReceivedBadge:
	.string "{PLAYER} received the PLUME BADGE\n"
	.string "from CAIN.$"

ViridianGym_Text_BadgeInfo:
	.string "This BADGE will allow you to proceed\n"
	.string "without problems through\l"
	.string "VIRIDIAN FOREST!\p"
	.string "Oh how I envy you, I would like to go on\n"
	.string "an adventure like you!$"

ViridianGym_Text_CainPostBattle:
	.string "Hey, what are you looking at?\n"
	.string "There's nothing behind me,\l"
	.string "do you understand? NOTHING!$"

ViridianGym_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY_OAK, ViridianGym_Text_DaisyIntro, ViridianGym_Text_DaisyDefeat, ViridianGym_EventScript_DaisyDefeated, NO_MUSIC
	msgbox ViridianGym_Text_DaisyPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianGym_EventScript_DaisyDefeated::
	message ViridianGym_Text_ReceivedEarthBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox ViridianGym_Text_DaisydefeatSpeech, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianGym_Text_DaisyIntro:
	.string "Welcome to the VIRIDIAN GYM!\n"
	.string "I recently became a GYM LEADER\p"
	.string "because the position was vacant,\n"
	.string "well, I don't even know where to start.\p"
	.string "My name is DAISY, my specialty is\n"
	.string "GROUND-type POKéMON!\p"
	.string "Show me what you can do!$"


ViridianGym_Text_DaisyDefeat:
	.string "Aaaah, good grief I lost!$"

ViridianGym_Text_ReceivedEarthBadge:
	.string "{PLAYER} received the EARTH BADGE\n"
	.string "from DAISY.$"

ViridianGym_Text_DaisydefeatSpeech:
	.string "This BADGE will allow you to proceed\n"
	.string "without problems through\l"
	.string "VIRIDIAN FOREST!\p"
	.string "But I guess it won't be a problem since\n"
	.string "you've already won the INDIGO LEAGUE...\p"
	.string "Hehehe, yeah.\n"
	.string "I know everything!$"


ViridianGym_Text_DaisyPostBattle:
	.string "Hi!\n"
	.string "Good timing.\p"
	.string "I'm about to have some tea.\n"
	.string "Would you like to join me?$"