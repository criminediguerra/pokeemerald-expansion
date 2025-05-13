ViridianCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0

ViridianCity_OnTransition:
	setflag FLAG_VISITED_VIRIDIAN
	end

Viridian_City_TownSign::
	msgbox Viridian_City_Text_TownSign, MSGBOX_SIGN
	end

Viridian_City_Text_TownSign:
	.string "VIRIDIAN CITY\n"
	.string "“The City of Evergreen!”$"

Viridian_City_SproutTemple::
	msgbox Viridian_City_Text_SproutTemple, MSGBOX_SIGN
	end

Viridian_City_Text_SproutTemple:
	.string "SPROUT TEMPLE\n"
	.string "“Where all life returns to its roots.”$"

Viridian_City_PrimoHouseSign::
	msgbox Viridian_City_Text_PrimoHouseSign, MSGBOX_SIGN
	end

Viridian_City_Text_PrimoHouseSign:
	.string "AGATHA'S HOUSE$"

Viridian_City_GymSign::
	call_if_eq VAR_LEAGUE_REMATCH, 0, Viridian_City_GymSignCain
	call_if_eq VAR_LEAGUE_REMATCH, 1, Viridian_City_GymSignDaisy
	end

Viridian_City_GymSignCain::
	msgbox Viridian_City_Text_GymSignCain, MSGBOX_SIGN
	end

Viridian_City_GymSignDaisy::
	msgbox Viridian_City_Text_GymSignDaisy, MSGBOX_SIGN
	end

Viridian_City_Text_GymSignCain:
	.string "VIRIDIAN CITY POKéMON GYM\n"
	.string "LEADER: GIOVANNI\l"
	.string "“The strongest TRAINER in the WORLD!”$"

Viridian_City_Text_GymSignDaisy:
	.string "Viridian CITY POKéMON GYM\n"
	.string "LEADER: DAISY\l"
	.string "“The sand lady!”$"

ViridianCity_EventScript_FearowBoy::
	msgbox ViridianCity_Text_FearowBoy, MSGBOX_NPC
	end

ViridianCity_Text_FearowBoy:
	.string "One time, FEAROW flew off during a\n"
	.string "storm and didn’t come back ‘til\l"
	.string "morning.\p"
	.string "Dad says years ago, one of them\n"
	.string "chased a trainer clear across\l"
	.string "ROUTE 1...\p"
	.string "Guess they don’t forget stuff like\n"
	.string "that.$"

ViridianCity_EventScript_FatmanDrowzee::
	msgbox ViridianCity_Text_FatmanDrowzee, MSGBOX_NPC
	end

ViridianCity_Text_FatmanDrowzee:
	.string "DROWZEE doesn’t talk, but when he\n"
	.string "touches your hand...\p"
	.string "It’s like he shares a dream you forgot\n"
	.string "you had.\p"
	.string "Last time, I saw a place I’ve never been:\n"
	.string "Dark halls, red lights.\p"
	.string "He hasn’t done it since.$"

ViridianCity_EventScript_FlowerGirl::
	msgbox ViridianCity_Text_FlowerGirl, MSGBOX_NPC
	end

ViridianCity_Text_FlowerGirl:
	.string "The flowers near the FOREST bloom even\n"
	.string "when it’s too cold for them to.\p"
	.string "My mom says it’s just the soil, but I\n"
	.string "think POKéMON is taking care of them.$"

ViridianCity_EventScript_BugCatcher::
	msgbox ViridianCity_Text_BugCatcher, MSGBOX_NPC
	end

ViridianCity_Text_BugCatcher:
	.string "The BUGS here are way calmer than in\n"
	.string "VIRIDIAN FOREST.\p"
	.string "I think they come into the CITY\n"
	.string "sometimes just to nap in the sun!\p"
	.string "Even BEEDRILL don’t buzz as loud here.$"

ViridianCity_EventScript_LadyCain::
	msgbox ViridianCity_Text_LadyCain, MSGBOX_NPC
	end

ViridianCity_Text_LadyCain:
	.string "Ever since CAIN started hanging\n"
	.string "around the GYM, things feel...\l"
	.string "strange.\p"
	.string "He’s not a real LEADER, but no one’s\n"
	.string "told him that.\p"
	.string "I don’t think anyone dares to.$"

ViridianCity_EventScript_KidFlowers::
	msgbox ViridianCity_Text_KidFlowers, MSGBOX_NPC
	end

ViridianCity_Text_KidFlowers:
	.string "VIRIDIAN’s the prettiest CITY!\n"
	.string "The flowers grow everywhere, like the\l"
	.string "whole town’s giving you a smile!\p"
	.string "I think the BUTTERFREE come here to\n"
	.string "dance when no one’s looking!$"

ViridianCity_EventScript_KidSchoolPeeked::
	msgbox ViridianCity_Text_KidSchoolPeeked, MSGBOX_NPC
	end

ViridianCity_Text_KidSchoolPeeked:
	.string "I peeked in the TRAINER SCHOOL today!\n"
	.string "The big kids were learning about type\l"
	.string "matchups...\p"
	.string "I just like drawing pictures of POKéMON\n"
	.string "in the margins!$"

ViridianCity_EventScript_LakeBoy::
	msgbox ViridianCity_Text_LakeBoy, MSGBOX_NPC
	end

ViridianCity_Text_LakeBoy:
	.string "Most tourists don’t even know there’s\n"
	.string "a LAKE just east of here.\p"
	.string "It’s quiet, and sometimes you can spot\n"
	.string "wild POKéMON drinking-way better than\l"
	.string "the crowded spots!\p"
	.string "It’s real quiet-too quiet, sometimes.\n"
	.string "I saw these weird lights there once,\p"
	.string "just under the surface...\n"
	.string "Grandpa says not to go after dark,\l"
	.string "but I kinda want to see them again.$"

ViridianCity_EventScript_TeamRocket1::
	msgbox ViridianCity_Text_TeamRocket1, MSGBOX_NPC
	end

ViridianCity_Text_TeamRocket1:
	.string "Everyone’s watching the GYM... good.\n"
	.string "Makes it easier for me to move where\l"
	.string "i need to.\p"
	.string "BOSS said the real prize isn’t in\n"
	.string "plain sight, anyway.$"

ViridianCity_EventScript_TeamRocket2::
	msgbox ViridianCity_Text_TeamRocket2, MSGBOX_NPC
	end

ViridianCity_Text_TeamRocket2:
	.string "VIRIDIAN’s too quiet.\n"
	.string "People don’t ask questions here-they\l"
	.string "just smile and look the other way.\p"
	.string "Makes it the perfect place to start\n"
	.string "over...\l"
	.string "or dig up what was left behind.$"

ViridianCity_EventScript_GymClosedWonderWhoLeaderIs::
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs, MSGBOX_NPC
	end

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
    .string "The GYM LEADER is always away.\n"
	.string "I wonder who's running the GYM\l"
    .string "right now.$"

ViridianCity_EventScript_Drunk_Old_Man::
	msgbox ViridianCity_Text_Drunk_Old_Man, MSGBOX_NPC
	end

ViridianCity_Text_Drunk_Old_Man:
	.string "Uugh…!\n"
	.string "Hic...hold it right there!\l"
	.string "Lissen to what I hafta say!\p"
	.string "…hey!\n"
	.string "Don’t go there, I said!$"

ViridianCity_EventScript_Oldman_Niece::
	msgbox ViridianCity_Text_Oldman_Niece, MSGBOX_NPC
	end

ViridianCity_Text_Oldman_Niece:
	.string "Good grief, Grandpa!\n"
	.string "Sleeping here of all places!\p"
	.string "It can’t be helped...\n"
	.string "We have to wait until he sobers up...$"

ViridianCity_EventScript_Maximo::
	msgbox ViridianCity_Text_Maximo, MSGBOX_NPC
	end

ViridianCity_Text_Maximo:
	.string "Ah, nothing like a rerun of TRAINER's\n"
	.string "Insight!\p"
	.string "You can always learn something new,\n"
	.string "even from old broadcasts.\l"
	.string "Knowledge is power, after all!$"

ViridianCity_EventScript_VictoryRoadGirl::
	msgbox ViridianCity_Text_VictoryRoadGirl, MSGBOX_NPC
	end

ViridianCity_Text_VictoryRoadGirl:
	.string "ROUTE 22 leads all the way to VICTORY\n"
	.string "ROAD, right?\p"
	.string "Sometimes I watch TRAINERS head that\n"
	.string "way… all serious and quiet.\p"
	.string "Dad says only the strongest ever come\n"
	.string "back through VIRIDIAN.$"

ViridianCity_EventScript_VictoryRoadDad::
	msgbox ViridianCity_Text_VictoryRoadDad, MSGBOX_NPC
	end

ViridianCity_Text_VictoryRoadDad:
	.string "Back when I was your age, I thought\n"
	.string "I’d walk ROUTE 22 and take on the\l"
	.string "LEAGUE too.\p"
	.string "Heh… but that road’s not just long-it\n"
	.string "tests you.\p"
	.string "Some folks leave for VICTORY ROAD and\n"
	.string "come back different.$"

ViridianCity_EventScript_Primo::
	msgbox ViridianCity_Text_Primo, MSGBOX_NPC
	end

ViridianCity_Text_Primo:
	.string "Hello, hello! PRIMO here, bringing\n"
	.string "you trivia, truth, and tons of fun!\p"
	.string "Remember: every great TRAINER started\n"
	.string "out just asking questions!$"

ViridianCity_EventScript_Karen::
	msgbox ViridianCity_Text_Karen, MSGBOX_NPC
	end

ViridianCity_Text_Karen:
	.string "People say DARK-type POKéMON fight\n"
	.string "dirty...\p"
	.string "but maybe they just don’t like what\n"
	.string "they can’t control.\p"
	.string "Power’s not about fairness-it’s about\n"
	.string "understanding what others fear.$"

ViridianCity_EventScript_KarenSister::
	msgbox ViridianCity_Text_KarenSister, MSGBOX_NPC
	end

ViridianCity_Text_KarenSister:
	.string "I like the POKéMON no one else\n"
	.string "picks.\p"
	.string "They’re quiet... but strong.\n"
	.string "Just like me!$"

ViridianCity_EventScript_AgathaGranddaughter::
	msgbox ViridianCity_Text_AgathaGranddaughter, MSGBOX_NPC
	end

ViridianCity_Text_AgathaGranddaughter:
	.string "Grandma says some POKéMON never\n"
	.string "really leave, even after they’re\l"
	.string "gone.\p"
	.string "I think that’s why I like the quiet\n"
	.string "ones...\p"
	.string "they listen when no one else does.$"

ViridianCity_EventScript_OldLadyCooking::
	msgbox ViridianCity_Text_OldLadyCooking, MSGBOX_NPC
	end

ViridianCity_Text_OldLadyCooking:
	.string "He always loved the smell of roasted\n"
	.string "PECHA BERRIES...\p"
	.string "Says it reminds him of our first picnic\n"
	.string "near the LAKE.\p"
	.string "I still make it for him, every evening,\n"
	.string "rain or shine.$"

ViridianCity_EventScript_OldManCooking::
	msgbox ViridianCity_Text_OldManCooking, MSGBOX_NPC
	end

ViridianCity_Text_OldManCooking:
	.string "One summer evening, we saw a LAPRAS\n"
	.string "out on the LAKE,just glidin' through\p"
	.string "the mist like it belonged to another\n"
	.string "world.\p"
	.string "Never saw one again...\n"
	.string "But we never forgot.$"

ViridianCity_EventScript_Channeler::
	msgbox ViridianCity_Text_Channeler, MSGBOX_NPC
	end

ViridianCity_Text_Channeler:
	.string "The spirits here are gentle...\n"
	.string "but they listen.\p"
	.string "I sweep the leaves, light the incense,\n"
	.string "and in return, they whisper of peace...\l"
	.string "and sometimes, of things still unfinished.$"

ViridianCity_EventScript_Sage::
	msgbox ViridianCity_Text_Sage, MSGBOX_NPC
	end

ViridianCity_Text_Sage:
	.string "This place is older than the road\n"
	.string "outside...\p"
	.string "Older than the forest's whisper.\n"
	.string "The wind here speaks not of battles,\l"
	.string "but of balance.\n"
	.string "Only those who listen truly understand.$"

ViridianCity_EventScript_ChannelerWestwood::
	msgbox ViridianCity_Text_ChannelerWestwood, MSGBOX_NPC
	end

ViridianCity_Text_ChannelerWestwood:
	.string "PROF. WESTWOOD...\n"
	.string "the man who first dared to trap life in\l"
	.string "a sphere...\p"
	.string "Someone says his invention bound more\n"
	.string "than just POKéMON.\p"
	.string "His grave lies quiet, but the air around\n"
	.string "it hums like something’s still trying to\l"
	.string "get out.$"
