CinnibarIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnibarIsland_OnTransition
	.byte 0

CinnibarIsland_OnTransition:
	setflag FLAG_VISITED_CINNABAR
	end

Cinnabar_Growlithe::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
	msgbox Cinnabar_Growlithe_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cinnabar_Growlithe_Text:
	.string "GROWLITHE: Graoh!$"

Cinnabar_EventScript_Scientist::
	msgbox Cinnabar_Text_Scientist, MSGBOX_NPC
	end

Cinnabar_Text_Scientist:
	.string "We called it resurrection, but maybe it’s\n"
	.string "just mimicry...\p"
	.string "Stone bodies shaped by our own hands,\n"
	.string "pretending to be what they once were.\p"
	.string "I wonder if the real ones would even\n"
	.string "recognize themselves.$"

Cinnabar_EventScript_FatMan::
	msgbox Cinnabar_Text_FatMan, MSGBOX_NPC
	end

Cinnabar_Text_FatMan:
	.string "Even out here, you can feel it-the heat,\n"
	.string "the pressure beneath the ground.\p"
	.string "This island isn’t just volcanic...\n"
	.string "it’s alive.\p"
	.string "And it's been keeping secrets longer than\n"
	.string "we’ve been asking questions.$"

Cinnabar_EventScript_OldMan::
	msgbox Cinnabar_Text_OldMan, MSGBOX_NPC
	end

Cinnabar_Text_OldMan:
	.string "Shame about the MANSION, burned down\n"
	.string "years ago.\p"
	.string "Heard it was just some equipment\n"
	.string "malfunction, nothin' fancy.\l"
	.string "Place was always a bit spooky anyway.\p"
	.string "Haven’t been near it since...\n"
	.string "No reason to, really.$"

Cinnabar_EventScript_RedShirtMan::
	msgbox Cinnabar_Text_RedShirtMan, MSGBOX_NPC
	end

Cinnabar_Text_RedShirtMan:
	.string "GENERAL COLEMAN? Tough as they come.\n"
	.string "Fought in the war, they say-commanded\p"
	.string "FIRE-types like they were part of his\n"
	.string "squad.\p"
	.string "GYM's more like a boot camp now, but hey,\n"
	.string "nobody keeps this ISLAND safer.$"

Cinnabar_EventScript_Farmer::
	msgbox Cinnabar_Text_Farmer, MSGBOX_NPC
	end

Cinnabar_Text_Farmer:
	.string "Most folks think nothin' can grow on\n"
	.string "this island but ash and fire-but give\p"
	.string "the soil a little love, and even here,\n"
	.string "flowers’ll bloom brighter than anywhere\l"
	.string "else.\p"
	.string "Just gotta be patient.$"

Cinnabar_EventScript_FarmerWife::
	msgbox Cinnabar_Text_FarmerWife, MSGBOX_NPC
	end

Cinnabar_Text_FarmerWife:
	.string "Oh, don’t mind the little one-POLIWAG’s\n"
	.string "always spinning in circles when the\l"
	.string "kettle whistles.\p"
	.string "Thinks it’s a call to dance,\n"
	.string "silly thing!$"

Cinnabar_EventScript_GrowlitheKid::
	msgbox Cinnabar_Text_GrowlitheKid, MSGBOX_NPC
	end

Cinnabar_Text_GrowlitheKid:
	.string "If I run fast enough, I bet I can catch\n"
	.string "a GROWLITHE before it melts my shoes!\p"
	.string "Mama says no, but I think she just\n"
	.string "doesn’t wanna race!$"

Cinnabar_EventScript_Rocket::
	msgbox Cinnabar_Text_Rocket, MSGBOX_NPC
	end

Cinnabar_Text_Rocket:
	.string "The BOSS has... an interest in unfinished\n"
	.string "business.\p"
	.string "This ISLAND holds pieces of a project he\n"
	.string "never forgot.\l"
	.string "I’m just here to find what's his.$"

Cinnabar_EventScript_GameboyGuy::
	msgbox Cinnabar_Text_GameboyGuy, MSGBOX_NPC
	end

Cinnabar_Text_GameboyGuy:
	.string "I just play my Game Boy to tune out\n"
	.string "my roommate.\p"
	.string "He’s always going on about the hidden\n"
	.string "secrets of this ISLAND, but honestly\p"
	.string "sounds more like a plot from one of my\n"
	.string "games.$"

Cinnabar_EventScript_StudiousGuy::
	msgbox Cinnabar_Text_StudiousGuy, MSGBOX_NPC
	end

Cinnabar_Text_StudiousGuy:
	.string "I’ve been collecting notes and files\n"
	.string "people tossed after the MANSION burned\l"
	.string "down.\p"
	.string "Most of it’s scorched junk...\n"
	.string "but sometimes, you find a page that\l"
	.string "doesn’t feel like junk.\p"
	.string "Like someone didn’t want it found.$"

Cinnabar_EventScript_StudiousGuySister::
	msgbox Cinnabar_Text_StudiousGuySister, MSGBOX_NPC
	end

Cinnabar_Text_StudiousGuySister:
	.string "He spends more time reading item\n"
	.string "descriptions than battling!\p"
	.string "Says even a single line of flavor text\n"
	.string "could be a clue...\p"
	.string "I just wish he’d remember to save his\n"
	.string "game once in a while.$"

Cinnabar_EventScript_Blue::
	msgbox Cinnabar_Text_Blue, MSGBOX_NPC
	end

Cinnabar_Text_Blue:
	.string "Heh...\n"
	.string "even a place built on fire’s got\l"
	.string "something cool like this.\p"
	.string "Nature always finds balance-guess\n"
	.string "that’s what makes it stronger than\l"
	.string "any TRAINER.$"

Cinnabar_EventScript_PokecenterGirl::
	msgbox Cinnabar_Text_PokecenterGirl, MSGBOX_NPC
	end

Cinnabar_Text_PokecenterGirl:
	.string "My CHARIZARD got overheated training\n"
	.string "near the VOLCANO, so we came here to\l"
	.string "cool off!\p"
	.string "The nurse says even FIRE-types need\n"
	.string "rest sometimes.$"

Cinnabar_EventScript_PokecenterArticuno::
	msgbox Cinnabar_Text_PokecenterArticuno, MSGBOX_NPC
	end

Cinnabar_Text_PokecenterArticuno:
	.string "My brother swears he saw a giant blue\n"
	.string "bird flying toward the SEAFOAM ISLES\l"
	.string "during a storm.\p"
	.string "I thought he was making it up...\n"
	.string "but the waves have been weird ever\l"
	.string "since.$"

Cinnabar_EventScript_PokecenterOldMan::
	msgbox Cinnabar_Text_PokecenterOldMan, MSGBOX_NPC
	end

Cinnabar_Text_PokecenterOldMan:
	.string "Back in my day, we treated POKéMON\n"
	.string "with herbs and rest, not machines and\l"
	.string "experiments.\p"
	.string "Ever since that LAB went up, this\n"
	.string "ISLAND’s felt... different.\p"
	.string "Like the ground itself remembers.$"