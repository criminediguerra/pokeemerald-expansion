Route138_MapScripts::
	.byte 0

Route138_Poochyena::
	playbgm MUS_VS_TRAINER, FALSE
	lock
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox Route138_Poochyena_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	fadedefaultbgm
	end

Route138_Poochyena_Text:
	.string "POOCHYENA: Bufoh!$"

Route138_Taillow::
	playbgm MUS_VS_TRAINER, FALSE
	lock
	waitse
	playmoncry SPECIES_TAILLOW, CRY_MODE_NORMAL
	msgbox Route138_Taillow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	fadedefaultbgm
	end

Route138_Taillow_Text:
	.string "TAILLOW: Pew pew!$"

Route138_EventScript_Boy::
	playbgm MUS_VS_TRAINER, FALSE
	msgbox Route138_Text_BoyBattle, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	end

Route138_Text_BoyBattle:
	.string "Let’s see whose POKéMON’s been\n"
	.string "training harder!\p"
	.string "Don’t hold back now!$"

Route138_EventScript_Youngster::
	playbgm MUS_VS_TRAINER, FALSE
	msgbox Route138_Text_YoungsterBattle, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	end

Route138_Text_YoungsterBattle:
	.string "You’re on! My TAILLOW’s full\n"
	.string "of energy after our morning\l"
	.string "run-get ready to be outsped!$"