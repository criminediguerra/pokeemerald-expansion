.set LOCALID_WARDEN, 20

FuchsiaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition:
	setflag FLAG_VISITED_FUCHSIA
	end

FuchsiaCity_GoldTeeth::
	lock
	faceplayer
	checkitem ITEM_GOLD_TEETH
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_GoldTeethHave
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_GoldTeethNothave
	release
	end

FuchsiaCity_GoldTeethHave::
	lock
	msgbox FuchsiaCity_Text_GoldTeethHave, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_GoldTeethFollowme
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_GoldTeethShame
	release
	end

FuchsiaCity_Text_GoldTeethHave:
    .string "Do you want to give GOLDEN TEETH\n"
    .string "to the WARDEN?$"

FuchsiaCity_GoldTeethShame::
	lock
	msgbox FuchsiaCity_Text_GoldTeethShame, MSGBOX_DEFAULT
	release
	end

FuchsiaCity_Text_GoldTeethShame:
    .string "Ha?\n"
    .string "He ohay heh ha hoo ee haheh!$"

FuchsiaCity_GoldTeethFollowme::
	lock
	removeitem ITEM_GOLD_TEETH
	msgbox FuchsiaCity_Text_GoldTeethFollowme, MSGBOX_DEFAULT
	applymovement LOCALID_WARDEN, FuchsiaCity_GoldTeethGoaway
	waitmovement 0
	setflag FLAG_WARDEN_IN_HOUSE
	release
	end

FuchsiaCity_GoldTeethNothave::
	msgbox FuchsiaCity_Text_GoldTeethNothave, MSGBOX_SIGN
	end

FuchsiaCity_Text_GoldTeethNothave:
    .string "Hif fuff hefifoo!\p"
    .string "Ha lof ha feef ee hafahi ho.\n"
    .string "Heff hee fwee!$"


FuchsiaCity_Text_GoldTeethFollowme:
    .string "WARDEN: Thanks, son!\n"
    .string "You're a real lifesaver!\p"
    .string "No one could understand a word\n"
    .string "that I said, not a one!\p"
    .string "I was too ashamed to show my face\n"
    .string "around the OFFICE, even.\p"
    .string "Farewell then!$"

FuchsiaCity_GoldTeethGoaway:
	walk_up
	set_invisible
	step_end

Fuchsia_Ivysaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IVYSAUR, CRY_MODE_NORMAL
	msgbox Fuchsia_Ivysaur_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Ivysaur_Text:
	.string "IVYSAUR: Iiiiivy!$"

Fuchsia_Spearow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox Fuchsia_Spearow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Spearow_Text:
	.string "SPEAROW: Pew pew!$"

Fuchsia_Fearow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
	msgbox Fuchsia_Fearow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Fearow_Text:
	.string "FEAROW: Piiiiii!$"

Fuchsia_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox Fuchsia_Poochyena_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Poochyena_Text:
	.string "POOCHYENA: Bufoh!$"

Fuchsia_Taillow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TAILLOW, CRY_MODE_NORMAL
	msgbox Fuchsia_Taillow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Taillow_Text:
	.string "TAILLOW: Bushaa!$"

Fuchsia_Magikarp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox Fuchsia_Magikarp_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Magikarp_Text:
	.string "MAGIKARP: Eugh$"

Fuchsia_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox Fuchsia_Jigglypuff_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Jigglypuff_Text:
	.string "JIGGLYPUFF: Puff Puff!$"

Fuchsia_Chansey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox Fuchsia_Chansey_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Chansey_Text:
	.string "CHANSEY: Chan Chan!$"

Fuchsia_TownSign::
	msgbox Fuchsia_Text_TownSign, MSGBOX_SIGN
	end

Fuchsia_Text_TownSign:
	.string "FUCHSIA CITY\n"
	.string "“Happening and Passing City!”$"

Fuchsia_GymSign::
	call_if_eq VAR_LEAGUE_REMATCH, 0, Fuchsia_GymSignKoga
	call_if_eq VAR_LEAGUE_REMATCH, 1, Fuchsia_GymSignJanine
	end

Fuchsia_GymSignKoga::
	msgbox Fuchsia_Text_GymSignKoga, MSGBOX_SIGN
	end

Fuchsia_GymSignJanine::
	msgbox Fuchsia_Text_GymSignJanine, MSGBOX_SIGN
	end

Fuchsia_Text_GymSignKoga:
	.string "FUCHSIA CITY POKéMON GYM\n"
	.string "LEADER: KOGA\l"
	.string "“The Poisonous Ninja Master!”$"

Fuchsia_Text_GymSignJanine:
	.string "FUCHSIA CITY POKéMON GYM\n"
	.string "LEADER: JANINE\l"
	.string "“The Poisonous Ninja Master!”$"

Fuchsia_ChanseySign::
	msgbox Fuchsia_Text_ChanseySign, MSGBOX_SIGN
	end

Fuchsia_Text_ChanseySign:
	.string "CHANSEY\n"
	.string "“The EGG POKéMON”$"

Fuchsia_BlitzleSign::
	msgbox Fuchsia_Text_BlitzleSign, MSGBOX_SIGN
	end

Fuchsia_Text_BlitzleSign:
	.string "BLITZLE\n"
	.string "“The ELECTRIFIED POKéMON”$"

Fuchsia_FlamigoSign::
	msgbox Fuchsia_Text_FlamigoSign, MSGBOX_SIGN
	end

Fuchsia_Text_FlamigoSign:
	.string "FLAMIGO\n"
	.string "“The SYNCHRONIZE POKéMON”$"

Fuchsia_RhydonSign::
	msgbox Fuchsia_Text_RhydonSign, MSGBOX_SIGN
	end

Fuchsia_Text_RhydonSign:
	.string "RHYDON\n"
	.string "“The DRILL POKéMON”$"

Fuchsia_KangaskhanSign::
	msgbox Fuchsia_Text_KangaskhanSign, MSGBOX_SIGN
	end

Fuchsia_Text_KangaskhanSign:
	.string "KANGASKHAN\n"
	.string "“The PARENT POKéMON”$"

Fuchsia_LaprasSign::
	msgbox Fuchsia_Text_LaprasSign, MSGBOX_SIGN
	end

Fuchsia_Text_LaprasSign:
	.string "PRIMARINA\n"
	.string "“The SOLOIST POKéMON”$"

Fuchsia_WardenSign::
	msgbox Fuchsia_Text_WardenSign, MSGBOX_SIGN
	end

Fuchsia_Text_WardenSign:
	.string "SAFARI ZONE\n"
	.string "WARDEN HOUSE$"