PewterGym_MapScripts::
	.byte 0

PewterGym_EventScript_Brock::
	goto_if_set TRAINER_FLAGS_START+855, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+856, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+857, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+858, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+859, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+860, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+861, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+862, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+863, PewterGym_EventScript_BrockDefeatedTxt
	goto_if_set TRAINER_FLAGS_START+864, PewterGym_EventScript_BrockDefeatedTxt
	goto PewterGym_EventScript_Brock_Check_1
	end

PewterGym_EventScript_Brock_Check_1::
	goto_if_unset FLAG_TIME_PROGRESSION_1, PewterGym_EventScript_Brock_Badge_1
	goto_if_set FLAG_TIME_PROGRESSION_1, PewterGym_EventScript_Brock_Check_2
	end

PewterGym_EventScript_Brock_Check_2::
	goto_if_unset FLAG_TIME_PROGRESSION_2, PewterGym_EventScript_Brock_Badge_2
	goto_if_set FLAG_TIME_PROGRESSION_2, PewterGym_EventScript_Brock_Check_3
	end

PewterGym_EventScript_Brock_Check_3::
	goto_if_unset FLAG_TIME_PROGRESSION_3, PewterGym_EventScript_Brock_Badge_3
	goto_if_set FLAG_TIME_PROGRESSION_3, PewterGym_EventScript_Brock_Check_4
	end

PewterGym_EventScript_Brock_Check_4::
	goto_if_unset FLAG_TIME_PROGRESSION_4, PewterGym_EventScript_Brock_Badge_4
	goto_if_set FLAG_TIME_PROGRESSION_4, PewterGym_EventScript_Brock_Check_5
	end

PewterGym_EventScript_Brock_Check_5::
	goto_if_unset FLAG_TIME_PROGRESSION_5, PewterGym_EventScript_Brock_Badge_5
	goto_if_set FLAG_TIME_PROGRESSION_5, PewterGym_EventScript_Brock_Check_6
	end

PewterGym_EventScript_Brock_Check_6::
	goto_if_unset FLAG_TIME_PROGRESSION_6, PewterGym_EventScript_Brock_Badge_6
	goto_if_set FLAG_TIME_PROGRESSION_6, PewterGym_EventScript_Brock_Check_7
	end

PewterGym_EventScript_Brock_Check_7::
	goto_if_unset FLAG_TIME_PROGRESSION_7, PewterGym_EventScript_Brock_Badge_7
	goto_if_set FLAG_TIME_PROGRESSION_7, PewterGym_EventScript_Brock_Check_8
	end

PewterGym_EventScript_Brock_Check_8::
	goto_if_unset FLAG_TIME_PROGRESSION_8, PewterGym_EventScript_Brock_Badge_8
	goto_if_set FLAG_TIME_PROGRESSION_8, PewterGym_EventScript_Brock_Check_9
	end

PewterGym_EventScript_Brock_Check_9::
	goto_if_unset FLAG_TIME_PROGRESSION_9, PewterGym_EventScript_Brock_Champion
	goto_if_set FLAG_TIME_PROGRESSION_9, PewterGym_EventScript_Brock_Badge_0
	end

PewterGym_EventScript_Brock_Badge_0::
	trainerbattle_single TRAINER_BROCK_1, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_1::
	trainerbattle_single TRAINER_BROCK_2, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_2::
	trainerbattle_single TRAINER_BROCK_3, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_3::
	trainerbattle_single TRAINER_BROCK_4, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_4::
	trainerbattle_single TRAINER_BROCK_5, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_5::
	trainerbattle_single TRAINER_BROCK_6, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_6::
	trainerbattle_single TRAINER_BROCK_7, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_7::
	trainerbattle_single TRAINER_BROCK_8, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Badge_8::
	trainerbattle_single TRAINER_BROCK_9, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_Brock_Champion::
	trainerbattle_single TRAINER_BROCK_10, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_BrockDefeated::
	message PewterGym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PewterGym_Text_BadgeInfo, MSGBOX_DEFAULT
	closemessage
	release
	end

PewterGym_EventScript_BrockDefeatedTxt::
	msgbox PewterGym_Text_BrockPostBattle, MSGBOX_DEFAULT
	release
	end

PewterGym_Text_BrockIntro:
	.string "Wow, it's not often that we get a\n"
	.string "challenger from HOENN.\p"
	.string "I'm BROCK, the PEWTER GYM LEADER.\n"
	.string "I'm an expert on ROCK-type POKéMON.\p"
	.string "My POKéMON are impervious to most\n"
	.string "physical attacks.\p"
	.string "You'll have a hard time inflicting any\n"
	.string "damage.\p"
	.string "Come on!$"

PewterGym_Text_BrockDefeat:
	.string "I took you for granted.\n"
	.string "As proof of your victory, here's\l"
	.string "the BOULDER BADGE$"

PewterGym_Text_ReceivedBadge:
	.string "{PLAYER} received the BOULDER BADGE\n"
	.string "from BROCK.$"

PewterGym_Text_BadgeInfo:
	.string "Thanks.\n"
	.string "I enjoyed battling you, even though I am\l"
	.string "a bit upset.\p"
	.string "That BOULDER BADGE will make your\n"
	.string "POKéMON even more powerful.\p"
	.string "The world is huge.\n"
	.string "There are still many strong trainers\l"
	.string "like you.\p"
	.string "Just wait and see.\n"
	.string "I'm going to become a lot stronger too.$"

PewterGym_Text_BrockPostBattle:
	.string "Thanks.\n"
	.string "I enjoyed battling you, even though I am\l"
	.string "a bit upset.\p"
	.string "That BOULDER BADGE will make your\n"
	.string "POKéMON even more powerful.\p"
	.string "The world is huge.\n"
	.string "There are still many strong trainers\l"
	.string "like you.\p"
	.string "Just wait and see.\n"
	.string "I'm going to become a lot stronger too.$"