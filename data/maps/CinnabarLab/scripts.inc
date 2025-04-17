CinnabarLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarLab_WichMusic
	.byte 0

CinnabarLab_WichMusic::
	call_if_eq VAR_CINNABAR_LAB_MUSIC, 0, CinnabarLab_LightsOn
	call_if_eq VAR_CINNABAR_LAB_MUSIC, 1, CinnabarLab_LightsOff
	end

CinnabarLab_EnterSecretLab::
	setvar VAR_CINNABAR_LAB_MUSIC, 1
	fadenewbgm MUS_RG_POKE_MANSION
	end

CinnabarLab_ExitSecretLab::
	setvar VAR_CINNABAR_LAB_MUSIC, 0
	fadenewbgm MUS_RG_CINNABAR
	end

CinnabarLab_VarZero::
	setvar VAR_CINNABAR_LAB_MUSIC, 0
	end

CinnabarLab_VarOne::
	setvar VAR_CINNABAR_LAB_MUSIC, 1
	end

CinnabarLab_LightsOff::
	setweather WEATHER_SHADE
	doweather
	end

CinnabarLab_LightsOn::
	setweather WEATHER_SUNNY
	doweather
	end

CinnabarLab_EventScript_Receptionist::
	msgbox CinnabarLab_Text_Receptionist, MSGBOX_NPC
	end

CinnabarLab_Text_Receptionist:
	.string "Welcome to the CINNABAR POKéMON LAB!\n"
	.string "If you're here to revive a FOSSIL or\p"
	.string "speak with one of our researchers,\n"
	.string "please sign in at the desk!$"

CinnabarLab_EventScript_Child::
	msgbox CinnabarLab_Text_Child, MSGBOX_NPC
	end

CinnabarLab_Text_Child:
	.string "Do you think the FOSSILS come back\n"
	.string "with memories?\p"
	.string "What if they remember being...\n"
	.string "DINOSAURS?!$"

CinnabarLab_EventScript_Woman::
	msgbox CinnabarLab_Text_Woman, MSGBOX_NPC
	end

CinnabarLab_Text_Woman:
	.string "They work so hard in this place...\n"
	.string "sometimes I wonder if they’re studying\l"
	.string "POKéMON, or becoming them.$"

CinnabarLab_EventScript_Scientist_1::
	msgbox CinnabarLab_Text_Scientist_1, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_1:
	.string "Hmm... if the genetic sequence is stable,\n"
	.string "then theoretically-oh!\p"
	.string "Pardon me, didn’t see you there.\n"
	.string "The mind races faster than the feet\l"
	.string "sometimes!$"

CinnabarLab_EventScript_Scientist_2::
	msgbox CinnabarLab_Text_Scientist_2, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_2:
	.string "Heh heh...\n"
	.string "they laughed when I said I’d splice\l"
	.string "KABUTO DNA with a DITTO...\p"
	.string "but soon, they’ll all see!\n"
	.string "Oh yes, they’ll see the truth!$"

CinnabarLab_EventScript_Scientist_3::
	msgbox CinnabarLab_Text_Scientist_3, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_3:
	.string "Five failed resurrections, three melted\n"
	.string "test tubes, and one mildly radioactive\l"
	.string "coffee mug...\p"
	.string "I’d say today’s going remarkably well!$"

CinnabarLab_EventScript_Scientist_4::
	msgbox CinnabarLab_Text_Scientist_4, MSGBOX_SIGN
	end

CinnabarLab_Text_Scientist_4:
	.string "I’m telling you, if BLAINE keeps pushing\n"
	.string "that prototype, we’re going to need\l"
	.string "more than just safety goggles...\p"
	.string "We’ll need hazmat suits!$"

CinnabarLab_EventScript_Scientist_5::
	msgbox CinnabarLab_Text_Scientist_5, MSGBOX_SIGN
	end

CinnabarLab_Text_Scientist_5:

	.string "Between you and me, if that MAGMAR\n"
	.string "sneaks into the testing chamber again,\p"
	.string "I’m filing for FIRE-type trauma leave.$"

CinnabarLab_EventScript_Scientist_6::
	msgbox CinnabarLab_Text_Scientist_6, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_6:

	.string "Careful with your lunch, MAGMAR’s been\n"
	.string "known to mistake spicy curry for a\l"
	.string "mating call.\p"
	.string "Last week, poor DR. ITO had to eat\n"
	.string "in the hallway!$"

CinnabarLab_EventScript_Scientist_7::
	msgbox CinnabarLab_Text_Scientist_7, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_7:

	.string "That corridor?\n"
	.string "It wasn’t just sealed... it was buried.\p"
	.string "They say the thing they made down there\n"
	.string "didn’t just break out-it woke up.\p"
	.string "And ever since, no one dares speak about\n"
	.string "the accident.\p"
	.string "Not if they want to keep their job...$"

CinnabarLab_EventScript_Scientist_8::
	msgbox CinnabarLab_Text_Scientist_8, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_8:

	.string "We're monitoring behavioral shifts\n"
	.string "between the RATTATA and the RATICATE.\p"
	.string "With the right stimulus, we might\n"
	.string "accelerate their evolutionary\l"
	.string "response...\p"
	.string "Or trigger something entirely new!$"

CinnabarLab_EventScript_Scientist_9::
	msgbox CinnabarLab_Text_Scientist_9, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_9:

	.string "I hope that DR.IVO just make sure it\n"
	.string "stays a RATICATE this time.\p"
	.string "Last week's “unexpected EVOLUTION”\n"
	.string "nearly chewed through the iron fence.$"

CinnabarLab_EventScript_Scientist_10::
	msgbox CinnabarLab_Text_Scientist_10, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_10:

	.string "Hand-carved from solid amber...\n"
	.string "Imagine, this pipe could be older than\l"
	.string "half the POKéMON we’ve cataloged!\p"
	.string "Elegant, isn't it?\n"
	.string "A relic of time, preserved in fire\l"
	.string "and gold.$"

CinnabarLab_EventScript_Scientist_11::
	msgbox CinnabarLab_Text_Scientist_11, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_11:

	.string "We followed the designs to the letter...\n"
	.string "but why do they all come back as\l"
	.string "ROCK-types?\p"
	.string "AERODACTYL, OMANYTE, even KABUTO,\n"
	.string "none of them show elemental traces\p"
	.string "consistent with their hypothesized\n"
	.string "origins.\p"
	.string "It’s as if... the process of resurrection\n"
	.string "is binding them in stone.$"

CinnabarLab_EventScript_Scientist_12::
	msgbox CinnabarLab_Text_Scientist_12, MSGBOX_NPC
	end

CinnabarLab_Text_Scientist_12:

	.string "Every FOSSIL holds a fragment of\n"
	.string "forgotten time...\l"
	.string "but bringing it back?\p"
	.string "That’s not just science-it’s playing\n"
	.string "translator for the dead.\p"
	.string "And they don’t always come back\n"
	.string "speaking the same language.$"

CinnabarLab_EventScript_Photo::
	msgbox CinnabarLab_Text_Photo, MSGBOX_SIGN
	end

CinnabarLab_Text_Photo:

    .string "It's a photo of BLAINE, PROF.OAK\n"
    .string "and MR. FUJI.\p"
    .string "They're standing shoulder to\n"
    .string "shoulder with big grins.$"

CinnabarLab_EventScript_AmberPipe::
	msgbox CinnabarLab_Text_AmberPipe, MSGBOX_SIGN
	end

CinnabarLab_Text_AmberPipe:
    .string "An amber pipe!$"

CinnabarLab_EventScript_ShutdownComputer::
	msgbox CinnabarLab_Text_ShutdownComputer, MSGBOX_SIGN
	end

CinnabarLab_Text_ShutdownComputer:
    .string "This computer has no power, it seems\n"
    .string "like it has been off for years$"
