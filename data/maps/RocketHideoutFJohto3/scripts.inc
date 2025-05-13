RocketHideoutFJohto3_MapScripts::
	.byte 0

RocketHideoutFJohto3_Electrode::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ELECTRODE, CRY_MODE_NORMAL
	msgbox RocketHideoutFJohto3_Electrode_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RocketHideoutFJohto3_Electrode_Text:
	.string "ELECTRODE: Zzzzzzz!$"

RocketHideoutFJohto3_Voltorb::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
	msgbox RocketHideoutFJohto3_Voltorb_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RocketHideoutFJohto3_Voltorb_Text:
	.string "VOLTORB: Zzzz!$"