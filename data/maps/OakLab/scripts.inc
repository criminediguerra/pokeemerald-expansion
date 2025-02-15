OakLab_MapScripts::
	.byte 0

OakLab_EventScript_OakPokeBall::
	lockall
	msgbox OakLab_Text_ItsOakPokeBall, MSGBOX_DEFAULT
	releaseall
	end

OakLab_Text_ItsOakPokeBall:
	.string "It's PROF.OAK's POKé BALL!\p"
	.string "Better leave it right where it is.$"

OakLab_EventScript_ProfOak::
	call_if_eq VAR_OAKPARCEL, 0, OakLab_ProfOak_GodeliverParcel
	call_if_eq VAR_OAKPARCEL, 1, OakLab_ProfOak_BillLocation
	call_if_eq VAR_OAKPARCEL, 2, OakLab_ProfOak_Endquest
	call_if_eq VAR_OAKPARCEL, 3, OakLab_ProfOak_Postquest
	end

OakLab_ProfOak_GodeliverParcel::
	lock
	faceplayer
	msgbox OakLab_Text_GodeliverParcel, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, OakLab_ProfOak_GodeliverParcel_Yes
	goto_if_eq VAR_RESULT, NO, OakLab_ProfOak_GodeliverParcel_No
	release
	end

OakLab_ProfOak_GodeliverParcel_Yes::
	lock
	msgbox OakLab_Text_GodeliverParcel_Yes, MSGBOX_DEFAULT
	giveitem ITEM_OAKS_PARCEL
	setvar VAR_OAKPARCEL, 1
	msgbox OakLab_Text_BillLocation, MSGBOX_DEFAULT
	release
	end

OakLab_ProfOak_GodeliverParcel_No::
	lock
	msgbox OakLab_Text_GodeliverParcel_No, MSGBOX_DEFAULT
	release
	end

OakLab_ProfOak_BillLocation::
	lock
	faceplayer
	msgbox OakLab_Text_BillLocation, MSGBOX_DEFAULT
	release
	end

OakLab_ProfOak_Endquest::
	lock
	faceplayer
	msgbox OakLab_Text_YoureBack, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	msgbox OakLab_Text_Endquest, MSGBOX_DEFAULT
	setvar VAR_OAKPARCEL, 3
	release
	end

OakLab_ProfOak_Postquest::
	lock
	faceplayer
	msgbox OakLab_Text_Postquest, MSGBOX_DEFAULT
	release
	end

OakLab_Text_GodeliverParcel:
	.string "Hi, hello!\l"
	.string "My name is OAK!\n"
	.string "People call me the POKéMON PROF!\p"
	.string "You are PROF.BIRCH's aide in HOENN,\n"
	.string "right?\p"
	.string "Well, I'll tell you, I'm already full\n"
	.string "of help recently, but my aides are\l"
	.string "away.\p"
	.string "Can I ask you a favor?\n"
	.string "I need someone to take this PARCEL\p"
	.string "to BILL, I think it's some equipment\n"
	.string "that could he could find useful!\p"
	.string "Could you please bring it to him?$"

OakLab_Text_GodeliverParcel_Yes:
	.string "Excellent!\l"
	.string "I really don't know what i would have\n"
	.string "done without you!$"

OakLab_Text_GodeliverParcel_No:
	.string "Oh well...\l"
	.string "Come back to me if you change your\n"
	.string "mind!$"

OakLab_Text_BillLocation:
	.string "BILL lives at the end of ROUTE 25!\n"
	.string "You can't go wrong!$"

OakLab_Text_YoureBack:
	.string "Good! You're back!\n"
	.string "To thank you for the time you dedicated\p"
	.string "to me I want to give you this!$"

OakLab_Text_Endquest:
	.string "it's an EXP.SHARE!\n"
	.string "Use it to level up your POKéMON faster!$"

OakLab_Text_Postquest:
	.string "You are a phenomenal TRAINER!\n"
	.string "Keep going and you will become a true\l"
	.string "POKéMON MASTER!$"