#include "config/general.h"
#include "config/battle.h"
#include "config/item.h"
#include "constants/global.h"
#include "constants/apprentice.h"
#include "constants/battle.h"
#include "constants/battle_arena.h"
#include "constants/battle_dome.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/battle_pike.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_setup.h"
#include "constants/battle_tent.h"
#include "constants/battle_tower.h"
#include "constants/berry.h"
#include "constants/cable_club.h"
#include "constants/coins.h"
#include "constants/contest.h"
#include "constants/daycare.h"
#include "constants/decorations.h"
#include "constants/difficulty.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_poison.h"
#include "constants/field_specials.h"
#include "constants/field_tasks.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "constants/follower_npc.h"
#include "constants/frontier_util.h"
#include "constants/game_stat.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/lilycove_lady.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_labels.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/pokedex.h"
#include "constants/pokemon.h"
#include "constants/rtc.h"
#include "constants/roulette.h"
#include "constants/script_menu.h"
#include "constants/secret_bases.h"
#include "constants/siirtc.h"
#include "constants/songs.h"
#include "constants/sound.h"
#include "constants/species.h"
#include "constants/trade.h"
#include "constants/trainer_hill.h"
#include "constants/trainers.h"
#include "constants/tv.h"
#include "constants/union_room.h"
#include "constants/vars.h"
#include "constants/weather.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

	.set ALLOCATE_SCRIPT_CMD_TABLE, 1
	.include "data/script_cmd_table.inc"

gSpecialVars::
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleParameter + 2 // gTrainerBattleParameter.params.opponentA

	.include "data/specials.inc"

gStdScripts::
	.4byte Std_ObtainItem              @ STD_OBTAIN_ITEM
	.4byte Std_FindItem                @ STD_FIND_ITEM
	.4byte Std_MsgboxNPC               @ MSGBOX_NPC
	.4byte Std_MsgboxSign              @ MSGBOX_SIGN
	.4byte Std_MsgboxDefault           @ MSGBOX_DEFAULT
	.4byte Std_MsgboxYesNo             @ MSGBOX_YESNO
	.4byte Std_MsgboxAutoclose         @ MSGBOX_AUTOCLOSE
	.4byte Std_ObtainDecoration        @ STD_OBTAIN_DECORATION
	.4byte Std_RegisteredInMatchCall   @ STD_REGISTER_MATCH_CALL
	.4byte Std_MsgboxGetPoints         @ MSGBOX_GETPOINTS
	.4byte Std_MsgboxPokenav           @ MSGBOX_POKENAV
gStdScripts_End::

	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater_Route124/scripts.inc"
	.include "data/maps/Underwater_Route126/scripts.inc"
	.include "data/maps/Underwater_Route127/scripts.inc"
	.include "data/maps/Underwater_Route128/scripts.inc"
	.include "data/maps/Underwater_Route129/scripts.inc"
	.include "data/maps/Underwater_Route105/scripts.inc"
	.include "data/maps/Underwater_Route125/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_CozmosHouse/scripts.inc"
	.include "data/maps/FallarborTown_MoveRelearnersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_NameRatersHouse/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/scripts/shared_secret_base.inc"
	.include "data/maps/BattleColosseum_2P/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/BattleColosseum_4P/scripts.inc"
	.include "data/maps/ContestHall/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"

	.include "data/scripts/std_msgbox.inc"
	.include "data/scripts/trainer_battle.inc"
	.include "data/scripts/new_game.inc"
	.include "data/scripts/hall_of_fame.inc"

	.include "data/scripts/config.inc"
	.include "data/scripts/debug.inc"

EventScript_WhiteOut::
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	goto EventScript_ResetMrBriney
	end

EventScript_AfterWhiteOutHeal::
	lockall
	msgbox gText_FirstShouldRestoreMonsHealth
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsgPreRoxanne
	call_if_set FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsg
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

EventScript_AfterWhiteOutHealMsgPreRoxanne::
	msgbox gText_MonsHealedShouldBuyPotions
	return

EventScript_AfterWhiteOutHealMsg::
	msgbox gText_MonsHealed
	return

EventScript_AfterWhiteOutMomHeal::
	lockall
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox gText_HadQuiteAnExperienceTakeRest
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox gText_MomExplainHPGetPotions
	fadedefaultbgm
	releaseall
	end

EventScript_ResetMrBriney::
	goto_if_eq VAR_BRINEY_LOCATION, 1, EventScript_MoveMrBrineyToHouse
	goto_if_eq VAR_BRINEY_LOCATION, 2, EventScript_MoveMrBrineyToDewford
	goto_if_eq VAR_BRINEY_LOCATION, 3, EventScript_MoveMrBrineyToRoute109
	end

EventScript_MoveMrBrineyToHouse::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	end

EventScript_MoveMrBrineyToDewford::
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	end

EventScript_MoveMrBrineyToRoute109::
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	end

EverGrandeCity_HallOfFame_EventScript_ResetEliteFour::
	clearflag FLAG_DEFEATED_ELITE_4_SIDNEY
	clearflag FLAG_DEFEATED_ELITE_4_PHOEBE
	clearflag FLAG_DEFEATED_ELITE_4_GLACIA
	clearflag FLAG_DEFEATED_ELITE_4_DRAKE
	setvar VAR_ELITE_4_STATE, 0
	return

Common_EventScript_UpdateBrineyLocation::
	goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Common_EventScript_NopReturn
	goto_if_unset FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT, EventScript_SetBrineyLocation_House
	goto_if_unset FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN, EventScript_SetBrineyLocation_Dewford
	goto_if_unset FLAG_HIDE_ROUTE_109_MR_BRINEY, EventScript_SetBrineyLocation_Route109
	return

EventScript_SetBrineyLocation_House::
	setvar VAR_BRINEY_LOCATION, 1
	return

EventScript_SetBrineyLocation_Dewford::
	setvar VAR_BRINEY_LOCATION, 2
	return

EventScript_SetBrineyLocation_Route109::
	setvar VAR_BRINEY_LOCATION, 3
	return

	.include "data/scripts/pkmn_center_nurse.inc"
	.include "data/scripts/obtain_item.inc"
	.include "data/scripts/record_mix.inc"
	.include "data/scripts/pc.inc"

@ scripts/notices.inc? signs.inc? See comment about text/notices.inc
Common_EventScript_ShowPokemartSign::
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign::
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen::
	fadescreen FADE_TO_BLACK
	special ShowEasyChatScreen
	fadescreen FADE_FROM_BLACK
	return

Common_EventScript_ReadyPetalburgGymForBattle::
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	return

Common_EventScript_BufferTrendyPhrase::
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

EventScript_BackupMrBrineyLocation::
	copyvar VAR_0x8008, VAR_BRINEY_LOCATION
	setvar VAR_BRINEY_LOCATION, 0
	return

	.include "data/scripts/surf.inc"
	.include "data/scripts/rival_graphics.inc"
	.include "data/scripts/set_gym_trainers.inc"

EventScript_CancelMessageBox::
	special UseBlankMessageToCancelPokemonPic
	release
	end

Common_EventScript_ShowBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Common_EventScript_ShowNoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetAbnormalWeather::
	setweather WEATHER_ABNORMAL
	return

Common_EventScript_PlayGymBadgeFanfare::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal::
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	fadescreenswapbuffers FADE_FROM_BLACK
	return

EventScript_RegionMap::
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

Common_EventScript_PlayBrineysBoatMusic::
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	return

Common_EventScript_StopBrineysBoatMusic::
	clearflag FLAG_DONT_TRANSITION_MUSIC
	fadedefaultbgm
	return

	.include "data/scripts/prof_birch.inc"

@ Below could be split as ferry.inc aside from the Rusturf tunnel script
Common_EventScript_FerryDepart::
	delay 60
	applymovement VAR_0x8004, Movement_FerryDepart
	waitmovement 0
	return

Movement_FerryDepart:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

EventScript_HideMrBriney::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 0
	return

RusturfTunnel_EventScript_SetRusturfTunnelOpen::
	removeobject LOCALID_RUSTURF_TUNNEL_WANDAS_BF
	removeobject LOCALID_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
	setflag FLAG_RUSTURF_TUNNEL_OPENED
	return

EventScript_UnusedBoardFerry::
	delay 30
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showobjectat LOCALID_PLAYER, 0
	delay 30
	applymovement LOCALID_PLAYER, Movement_UnusedBoardFerry
	waitmovement 0
	delay 30
	return

Movement_UnusedBoardFerry:
	walk_up
	step_end

Common_EventScript_FerryDepartIsland::
	call_if_eq VAR_FACING, DIR_SOUTH, Ferry_EventScript_DepartIslandSouth
	call_if_eq VAR_FACING, DIR_WEST, Ferry_EventScript_DepartIslandWest
	delay 30
	hideobjectat LOCALID_PLAYER, 0
	call Common_EventScript_FerryDepart
	return

	.include "data/scripts/cave_of_origin.inc"
	.include "data/scripts/kecleon.inc"

Common_EventScript_NameReceivedPartyMon::
	fadescreen FADE_TO_BLACK
	special ChangePokemonNickname
	waitstate
	return

Common_EventScript_PlayerHandedOverTheItem::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_TMHM
	message gText_PlayerHandedOverTheItem
	waitmessage
	waitfanfare
	removeitem VAR_0x8004
	return

	.include "data/scripts/elite_four.inc"
	.include "data/scripts/movement.inc"
	.include "data/scripts/check_furniture.inc"
	.include "data/text/record_mix.inc"
	.include "data/text/pc.inc"
	.include "data/text/pkmn_center_nurse.inc"
	.include "data/text/mart_clerk.inc"
	.include "data/text/obtain_item.inc"

@ The below and surf.inc could be split into some text/notices.inc
gText_PokemartSign::
	.string "“Selected items for your convenience!”\n"
	.string "POKéMON MART$"

gText_PokemonCenterSign::
	.string "“Rejuvenate your tired partners!”\n"
	.string "POKéMON CENTER$"

gText_MomOrDadMightLikeThisProgram::
	.string "{STR_VAR_1} might like this program.\n"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

gText_WhichFloorWouldYouLike::
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\p"
	.string "Which floor would you like?$"

gText_SandstormIsVicious::
	.string "The sandstorm is vicious.\n"
	.string "It's impossible to keep going.$"

gText_SelectWithoutRegisteredItem::
	.string "An item in the BAG can be\n"
	.string "registered to SELECT for easy use.$"

gText_PokemonTrainerSchoolEmail::
	.string "There's an e-mail from POKéMON TRAINER\n"
	.string "SCHOOL.\p"
	.string "… … … … … …\p"
	.string "A POKéMON may learn up to four moves.\p"
	.string "A TRAINER's expertise is tested on the\n"
	.string "move sets chosen for POKéMON.\p"
	.string "… … … … … …$"

gText_PlayerHouseBootPC::
	.string "{PLAYER} booted up the PC.$"

gText_PokeblockLinkCanceled::
	.string "The link was canceled.$"

gText_UnusedNicknameReceivedPokemon::
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_2} you received?$"

gText_PlayerWhitedOut::
	.string "{PLAYER} is out of usable\n"
	.string "POKéMON!\p{PLAYER} whited out!$"

gText_FirstShouldRestoreMonsHealth::
	.string "First, you should restore your\n"
	.string "POKéMON to full health.$"

gText_MonsHealedShouldBuyPotions::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "If your POKéMON's energy, HP,\n"
	.string "is down, please come see us.\p"
	.string "If you're planning to go far in the\n"
	.string "field, you should buy some POTIONS\l"
	.string "at the POKéMON MART.\p"
	.string "We hope you excel!$"

gText_MonsHealed::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "We hope you excel!$"

gText_HadQuiteAnExperienceTakeRest::
	.string "MOM: {PLAYER}!\n"
	.string "Welcome home.\p"
	.string "It sounds like you had quite\n"
	.string "an experience.\p"
	.string "Maybe you should take a quick\n"
	.string "rest.$"

gText_MomExplainHPGetPotions::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\p"
	.string "I just heard from PROF. BIRCH.\p"
	.string "He said that POKéMON's energy is\n"
	.string "measured in HP.\p"
	.string "If your POKéMON lose their HP,\n"
	.string "you can restore them at any\l"
	.string "POKéMON CENTER.\p"
	.string "If you're going to travel far away,\n"
	.string "the smart TRAINER stocks up on\l"
	.string "POTIONS at the POKéMON MART.\p"
	.string "Make me proud, honey!\p"
	.string "Take care!$"

gText_RegisteredTrainerinPokeNav::
	.string "Registered {STR_VAR_1} {STR_VAR_2}\n"
	.string "in the POKéNAV.$"

gText_ComeBackWithSecretPower::
	.string "Do you know the TM SECRET POWER?\p"
	.string "Our group, we love the TM SECRET\n"
	.string "POWER.\p"
	.string "One of our members will give it to you.\n"
	.string "Come back and show me if you get it.\p"
	.string "We'll accept you as a member and sell\n"
	.string "you good stuff in secrecy.$"

gText_PokerusExplanation::
	.string "Your POKéMON may be infected with\n"
	.string "POKéRUS.\p"
	.string "Little is known about the POKéRUS\n"
	.string "except that they are microscopic life-\l"
	.string "forms that attach to POKéMON.\p"
	.string "While infected, POKéMON are said to\n"
	.string "grow exceptionally well.$"

	.include "data/text/surf.inc"

gText_DoorOpenedFarAway::
	.string "It sounded as if a door opened\n"
	.string "somewhere far away.$"

gText_BigHoleInTheWall::
	.string "There is a big hole in the wall.$"

gText_SorryWirelessClubAdjustments::
	.string "I'm terribly sorry.\n"
	.string "The POKéMON WIRELESS CLUB is\l"
	.string "undergoing adjustments now.$"

gText_UndergoingAdjustments::
	.string "It appears to be undergoing\n"
	.string "adjustments…$"

@ Unused
gText_SorryTradeCenterInspections::
	.string "I'm terribly sorry. The TRADE CENTER\n"
	.string "is undergoing inspections.$"

@ Unused
gText_SorryRecordCornerPreparation::
	.string "I'm terribly sorry. The RECORD CORNER\n"
	.string "is under preparation.$"

gText_PlayerHandedOverTheItem::
	.string "{PLAYER} handed over the\n"
	.string "{STR_VAR_1}.$"

gText_ThankYouForAccessingMysteryGift::
	.string "Thank you for accessing the\n"
	.string "MYSTERY GIFT System.$"

gText_PlayerFoundOneTMHM::
	.string "{PLAYER} found one {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_PlayerFoundTMHMs::
	.string "{PLAYER} found {STR_VAR_3} {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_Sudowoodo_Attacked::
	.string "The weird tree doesn't like the\n"
	.string "WAILMER PAIL!\p"
	.string "The weird tree attacked!$"

gText_LegendaryFlewAway::
	.string "The {STR_VAR_1} flew away!$"

	.include "data/text/pc_transfer.inc"
	.include "data/text/questionnaire.inc"
	.include "data/text/abnormal_weather.inc"

EventScript_SelectWithoutRegisteredItem::
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

	.include "data/scripts/field_poison.inc"

Common_EventScript_NopReturn::
	return

@ Unused
EventScript_CableClub_SetVarResult1::
	setvar VAR_RESULT, 1
	return

EventScript_CableClub_SetVarResult0::
	setvar VAR_RESULT, 0
	return

Common_EventScript_UnionRoomAttendant::
	call CableClub_EventScript_UnionRoomAttendant
	end

Common_EventScript_WirelessClubAttendant::
	call CableClub_EventScript_WirelessClubAttendant
	end

Common_EventScript_DirectCornerAttendant::
	call CableClub_EventScript_DirectCornerAttendant
	end

Common_EventScript_RemoveStaticPokemon::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Common_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

EventScript_VsSeekerChargingDone::
	special VsSeekerFreezeObjectsAfterChargeComplete
	waitstate
	special VsSeekerResetObjectMovementAfterChargeComplete
	releaseall
	end

	.include "data/scripts/pc_transfer.inc"
	.include "data/scripts/questionnaire.inc"
	.include "data/scripts/abnormal_weather.inc"
	.include "data/scripts/trainer_script.inc"
	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/text/cable_club.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/text/contest_strings.inc"
	.include "data/text/contest_link.inc"
	.include "data/text/contest_painting.inc"
	.include "data/scripts/tv.inc"
	.include "data/text/tv.inc"
	.include "data/scripts/interview.inc"
	.include "data/scripts/gabby_and_ty.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/profile_man.inc"
	.include "data/scripts/day_care.inc"
	.include "data/scripts/flash.inc"
	.include "data/scripts/players_house.inc"
	.include "data/scripts/berry_blender.inc"
	.include "data/text/mauville_man.inc"
	.include "data/text/trainers.inc"
	.include "data/scripts/repel.inc"
	.include "data/scripts/safari_zone.inc"
	.include "data/scripts/roulette.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/event_ticket_1.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/shoal_cave.inc"
	.include "data/text/check_furniture.inc"
	.include "data/scripts/cave_hole.inc"
	.include "data/scripts/lilycove_lady.inc"
	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"
	.include "data/text/apprentice.inc"
	.include "data/text/battle_dome.inc"
	.include "data/scripts/battle_pike.inc"
	.include "data/text/blend_master.inc"
	.include "data/text/battle_tent.inc"
	.include "data/text/event_ticket_2.inc"
	.include "data/text/move_tutors.inc"
	.include "data/scripts/move_tutors.inc"
	.include "data/scripts/trainer_hill.inc"
	.include "data/scripts/test_signpost.inc"
	.include "data/scripts/follower.inc"
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"

	.include "data/maps/Route100/scripts.inc"

	.include "data/maps/CrossgateTown/scripts.inc"

	.include "data/maps/CrossgateTown_Harbor/scripts.inc"

	.include "data/maps/VermilionCity/scripts.inc"

	.include "data/maps/VermilionCityHarbor/scripts.inc"

	.include "data/maps/Route6/scripts.inc"

	.include "data/maps/Route11/scripts.inc"

	.include "data/maps/SaffronCity/scripts.inc"

	.include "data/maps/Route5/scripts.inc"

	.include "data/maps/CeruleanCity/scripts.inc"

	.include "data/maps/Route24/scripts.inc"

	.include "data/maps/Route25/scripts.inc"

	.include "data/maps/Route9/scripts.inc"

	.include "data/maps/Route10/scripts.inc"

	.include "data/maps/LavenderTown/scripts.inc"

	.include "data/maps/Route12/scripts.inc"

	.include "data/maps/Route13/scripts.inc"

	.include "data/maps/Route14/scripts.inc"

	.include "data/maps/Route15/scripts.inc"

	.include "data/maps/Route4/scripts.inc"

	.include "data/maps/FuchsiaCity/scripts.inc"

	.include "data/maps/Route19/scripts.inc"

	.include "data/maps/Route20/scripts.inc"

	.include "data/maps/CinnabarIsland/scripts.inc"

	.include "data/maps/Route21/scripts.inc"

	.include "data/maps/PalletTown/scripts.inc"

	.include "data/maps/Route1/scripts.inc"

	.include "data/maps/ViridianCity/scripts.inc"

	.include "data/maps/Route18/scripts.inc"

	.include "data/maps/Route17/scripts.inc"

	.include "data/maps/Route16/scripts.inc"

	.include "data/maps/CeladonCity/scripts.inc"

	.include "data/maps/Route7/scripts.inc"

	.include "data/maps/Route2/scripts.inc"

	.include "data/maps/Route3/scripts.inc"

	.include "data/maps/Route22/scripts.inc"

	.include "data/maps/PewterCity/scripts.inc"

	.include "data/maps/OlivineCityHarbor/scripts.inc"

	.include "data/maps/OlivineCity/scripts.inc"

	.include "data/maps/Route40/scripts.inc"

	.include "data/maps/Route41/scripts.inc"

	.include "data/maps/CyanwoodCity/scripts.inc"

	.include "data/maps/Route47/scripts.inc"

	.include "data/maps/Route48/scripts.inc"

	.include "data/maps/JohtoSafari/scripts.inc"

	.include "data/maps/Route39/scripts.inc"

	.include "data/maps/Route38/scripts.inc"

	.include "data/maps/JohtoBattleTower/scripts.inc"

	.include "data/maps/KantoGates/scripts.inc"

	.include "data/maps/Route8/scripts.inc"

	.include "data/maps/ViridianForest/scripts.inc"

	.include "data/maps/UndergroundPath/scripts.inc"

	.include "data/maps/UndergroundPathVertical/scripts.inc"

	.include "data/maps/UndergroundPathHorizontal/scripts.inc"

	.include "data/maps/DiglettCave/scripts.inc"

	.include "data/maps/DiglettCave1F/scripts.inc"

	.include "data/maps/MtMoon/scripts.inc"

	.include "data/maps/MtMoonRoof/scripts.inc"

	.include "data/maps/MtMoonF1/scripts.inc"

	.include "data/maps/MtMoonF2/scripts.inc"

	.include "data/maps/MtMoonF3/scripts.inc"

	.include "data/maps/RockTunnel/scripts.inc"

	.include "data/maps/RockTunnelF1/scripts.inc"

	.include "data/maps/EcruteakCity/scripts.inc"

	.include "data/maps/Route37/scripts.inc"

	.include "data/maps/Route36/scripts.inc"

	.include "data/maps/Route35/scripts.inc"

	.include "data/maps/GoldenrodCity/scripts.inc"

	.include "data/maps/Route34/scripts.inc"

	.include "data/maps/JohtoGate/scripts.inc"

	.include "data/maps/RuinsofAlph/scripts.inc"

	.include "data/maps/Route32/scripts.inc"

	.include "data/maps/VioletCity/scripts.inc"

	.include "data/maps/Route33/scripts.inc"

	.include "data/maps/AzaleaTown/scripts.inc"

	.include "data/maps/Route31/scripts.inc"

	.include "data/maps/Route30/scripts.inc"

	.include "data/maps/CherrygroveCity/scripts.inc"

	.include "data/maps/Route29/scripts.inc"

	.include "data/maps/NewBarkTown/scripts.inc"

	.include "data/maps/Route46/scripts.inc"

	.include "data/maps/Route45/scripts.inc"

	.include "data/maps/BlackthornCity/scripts.inc"

	.include "data/maps/Route44/scripts.inc"

	.include "data/maps/MahoganyTown/scripts.inc"

	.include "data/maps/Route43/scripts.inc"

	.include "data/maps/LakeofRage/scripts.inc"

	.include "data/maps/Route42/scripts.inc"

	.include "data/maps/Route27/scripts.inc"

	.include "data/maps/Route26/scripts.inc"

	.include "data/maps/MtSilverF1/scripts.inc"

	.include "data/maps/MtSilverF2/scripts.inc"

	.include "data/maps/KantoLeagueGate/scripts.inc"

	.include "data/maps/Route23/scripts.inc"

	.include "data/maps/IndigoPlateau/scripts.inc"

	.include "data/maps/MtMortarF1/scripts.inc"

	.include "data/maps/MtMortarF2/scripts.inc"

	.include "data/maps/MtMortarF3/scripts.inc"

	.include "data/maps/MtMortarF4/scripts.inc"

	.include "data/maps/IcePathF1/scripts.inc"

	.include "data/maps/IcePathF2/scripts.inc"

	.include "data/maps/IcePathF3/scripts.inc"

	.include "data/maps/IcePathF4/scripts.inc"

	.include "data/maps/DarkCave/scripts.inc"

	.include "data/maps/DarkCaveF1/scripts.inc"

	.include "data/maps/UnionCave/scripts.inc"

	.include "data/maps/UnionCaveF1/scripts.inc"

	.include "data/maps/UnionCaveF2/scripts.inc"

	.include "data/maps/RuinsofAlphF1/scripts.inc"

	.include "data/maps/RuinsofAlphF2/scripts.inc"

	.include "data/maps/IlexForest/scripts.inc"

	.include "data/maps/NationalPark/scripts.inc"

	.include "data/maps/Route47F1/scripts.inc"

	.include "data/maps/Route47F2/scripts.inc"

	.include "data/maps/Slowpokewell/scripts.inc"

	.include "data/maps/SproutTower/scripts.inc"

	.include "data/maps/DragonsDen/scripts.inc"

	.include "data/maps/DragonsDenF1/scripts.inc"

	.include "data/maps/CeruleanCaveF1/scripts.inc"

	.include "data/maps/CeruleanCaveF2/scripts.inc"

	.include "data/maps/CeruleanCaveF3/scripts.inc"

	.include "data/maps/PowerPlant/scripts.inc"

	.include "data/maps/SeafoamIslesF1/scripts.inc"

	.include "data/maps/SeafoamIslesF2/scripts.inc"

	.include "data/maps/SeafoamIslesF3/scripts.inc"

	.include "data/maps/SeafoamIslesF4/scripts.inc"

	.include "data/maps/SeafoamIslesF5/scripts.inc"

	.include "data/maps/SeafoamIslesF6/scripts.inc"

	.include "data/maps/KantoVictoryRoadF1/scripts.inc"

	.include "data/maps/KantoVictoryRoadF2/scripts.inc"

	.include "data/maps/KantoVictoryRoad/scripts.inc"

	.include "data/maps/IndigoPlateauF1/scripts.inc"

	.include "data/maps/IndigoPlateauF2/scripts.inc"

	.include "data/maps/CinnabarVolcano/scripts.inc"

	.include "data/maps/LavenderTower/scripts.inc"

	.include "data/maps/PokemonMansionF1/scripts.inc"

	.include "data/maps/PokemonMansionF2/scripts.inc"

	.include "data/maps/PokemonMansionF3/scripts.inc"

	.include "data/maps/PokemonMansionF4/scripts.inc"

	.include "data/maps/KantoSafariEntrance/scripts.inc"

	.include "data/maps/KantoSafariF1/scripts.inc"

	.include "data/maps/KantoSafariF2/scripts.inc"

	.include "data/maps/KantoSafariF3/scripts.inc"

	.include "data/maps/KantoSafariF4/scripts.inc"

	.include "data/maps/Silph/scripts.inc"

	.include "data/maps/SilphF1/scripts.inc"

	.include "data/maps/SilphF2/scripts.inc"

	.include "data/maps/SilphElevator/scripts.inc"

	.include "data/maps/KantoStation/scripts.inc"

	.include "data/maps/JohtoStation/scripts.inc"

	.include "data/maps/RuinsofAlphF3/scripts.inc"

	.include "data/maps/BurnedTower/scripts.inc"

	.include "data/maps/BurnedTowerF1/scripts.inc"

	.include "data/maps/TinTowerEntranceF1/scripts.inc"

	.include "data/maps/TinTower/scripts.inc"

	.include "data/maps/TinTowerF1/scripts.inc"

	.include "data/maps/TinTowerF2/scripts.inc"

	.include "data/maps/TinTowerF3/scripts.inc"

	.include "data/maps/WhirlF1/scripts.inc"

	.include "data/maps/WhirlF2/scripts.inc"

	.include "data/maps/WhirlF3/scripts.inc"

	.include "data/maps/WhirlF4/scripts.inc"

	.include "data/maps/WhirlF5/scripts.inc"

	.include "data/maps/TohjoFalls/scripts.inc"

	.include "data/maps/JohtoSafariF1/scripts.inc"

	.include "data/maps/JohtoSafariF2/scripts.inc"

	.include "data/maps/JohtoSafariF3/scripts.inc"

	.include "data/maps/JohtoSafariF4/scripts.inc"

	.include "data/maps/JohtoSafariF5/scripts.inc"

	.include "data/maps/JohtoSafariF6/scripts.inc"

	.include "data/maps/JohtoSafariF7/scripts.inc"

	.include "data/maps/JohtoSafariF8/scripts.inc"

	.include "data/maps/JohtoSafariF9/scripts.inc"

	.include "data/maps/JohtoSafariEntrance/scripts.inc"

	.include "data/maps/MtSilverF3/scripts.inc"

	.include "data/maps/MtSilverF4/scripts.inc"

	.include "data/maps/MtSilverF5/scripts.inc"

	.include "data/maps/MtSilverF6/scripts.inc"

	.include "data/maps/MtSilverF7/scripts.inc"

	.include "data/maps/MtSilverF8/scripts.inc"

	.include "data/maps/MtSilverF9/scripts.inc"

	.include "data/maps/MtSilverF10/scripts.inc"

	.include "data/maps/OlivineLighthouseF1/scripts.inc"

	.include "data/maps/OlivineLighthouseF2/scripts.inc"

	.include "data/maps/OlivineLighthouseF3/scripts.inc"

	.include "data/maps/OlivineLighthouseF4/scripts.inc"

	.include "data/maps/VermilionIndoors/scripts.inc"

	.include "data/maps/VermilionFanClub/scripts.inc"

	.include "data/maps/VermilionContest/scripts.inc"

	.include "data/maps/VermilionContestHall/scripts.inc"

	.include "data/maps/VermilionMart/scripts.inc"

	.include "data/maps/VermilionCenter/scripts.inc"

	.include "data/maps/VermilionGym/scripts.inc"

	.include "data/maps/CrossgateCenter/scripts.inc"

	.include "data/maps/CrossgateIndoors/scripts.inc"

	.include "data/maps/CrossgateFisherman/scripts.inc"

	.include "data/maps/CrossgateMart/scripts.inc"

	.include "data/maps/SaffronIndoors/scripts.inc"

	.include "data/maps/SaffronCenter/scripts.inc"

	.include "data/maps/SaffronMart/scripts.inc"

	.include "data/maps/SaffronGym/scripts.inc"

	.include "data/maps/DojoKarate/scripts.inc"

	.include "data/maps/CeladonCasino/scripts.inc"

	.include "data/maps/RocketHideoutF1/scripts.inc"

	.include "data/maps/RocketHideoutF2/scripts.inc"

	.include "data/maps/RocketHideoutF3/scripts.inc"

	.include "data/maps/RocketHideoutF4/scripts.inc"

	.include "data/maps/CeladonCasinoF1/scripts.inc"

	.include "data/maps/CeladonCenter/scripts.inc"

	.include "data/maps/CeladonCasinoF2/scripts.inc"

	.include "data/maps/CeladonCasinoF4/scripts.inc"

	.include "data/maps/CeladonDeptF1/scripts.inc"

	.include "data/maps/CeladonDeptF2/scripts.inc"

	.include "data/maps/CeladonDept/scripts.inc"

	.include "data/maps/CeladonDeptF4/scripts.inc"

	.include "data/maps/CeladonDeptF5/scripts.inc"

	.include "data/maps/CeladonDeptF6/scripts.inc"

	.include "data/maps/CeladonDeptElevator/scripts.inc"

	.include "data/maps/CeladonGym/scripts.inc"

	.include "data/maps/TestRoom/scripts.inc"

	.include "data/maps/FuchsiaCenter/scripts.inc"

	.include "data/maps/FuchsiaGuardianHouse/scripts.inc"

	.include "data/maps/FuchsiaMart/scripts.inc"

	.include "data/maps/LavenderCenter/scripts.inc"

	.include "data/maps/FuchsiaGym/scripts.inc"

	.include "data/maps/LavenderMart/scripts.inc"

	.include "data/maps/LavenderOrphanage/scripts.inc"

	.include "data/maps/CeruleanBikeShop/scripts.inc"

	.include "data/maps/CeruleanMart/scripts.inc"

	.include "data/maps/CeruleanCenter/scripts.inc"

	.include "data/maps/CeruleanIndoor/scripts.inc"

	.include "data/maps/CeruleanGym/scripts.inc"

	.include "data/maps/PewterCenter/scripts.inc"

	.include "data/maps/PewterMart/scripts.inc"

	.include "data/maps/PewterMuseum/scripts.inc"

	.include "data/maps/PewterGym/scripts.inc"

	.include "data/maps/PewterIndoors/scripts.inc"

	.include "data/maps/ViridianCenter/scripts.inc"

	.include "data/maps/ViridianMart/scripts.inc"

	.include "data/maps/ViridianSchool/scripts.inc"

	.include "data/maps/ViridianInteriors/scripts.inc"

	.include "data/maps/ViridianGym/scripts.inc"

	.include "data/maps/ViridianGymF1/scripts.inc"

	.include "data/maps/PalletInteriors/scripts.inc"

	.include "data/maps/OakLab/scripts.inc"

	.include "data/maps/CinnabarIndoors/scripts.inc"

	.include "data/maps/CinnabarMart/scripts.inc"

	.include "data/maps/CinnabarCenter/scripts.inc"

	.include "data/maps/CinnabarLab/scripts.inc"

	.include "data/maps/CinnabarGym/scripts.inc"

	.include "data/maps/ElmLab/scripts.inc"

	.include "data/maps/NewbarkInteriors/scripts.inc"

	.include "data/maps/NewbarkInteriorsF1/scripts.inc"

	.include "data/maps/CherrygroveMart/scripts.inc"

	.include "data/maps/CherrygroveCenter/scripts.inc"

	.include "data/maps/CherrygroveIndoor/scripts.inc"

	.include "data/maps/VioletCenter/scripts.inc"

	.include "data/maps/VioletMart/scripts.inc"

	.include "data/maps/VioletSchool/scripts.inc"

	.include "data/maps/VioletInteriors/scripts.inc"

	.include "data/maps/VioletGym/scripts.inc"

	.include "data/maps/AzaleaCenter/scripts.inc"

	.include "data/maps/AzaleaMart/scripts.inc"

	.include "data/maps/AzaleaInteriors/scripts.inc"

	.include "data/maps/AzaleaGym/scripts.inc"

	.include "data/maps/GoldenrodCenter/scripts.inc"

	.include "data/maps/GoldenrodRadioF1/scripts.inc"

	.include "data/maps/GoldenrodShopF1/scripts.inc"

	.include "data/maps/GoldenrodShopF2/scripts.inc"

	.include "data/maps/GoldenrodF3/scripts.inc"

	.include "data/maps/GoldenrodShopF4/scripts.inc"

	.include "data/maps/GoldenrodShopF5/scripts.inc"

	.include "data/maps/GoldenrodShopF6/scripts.inc"

	.include "data/maps/GoldenrodShopLifter/scripts.inc"

	.include "data/maps/GoldenrodGameCorner/scripts.inc"

	.include "data/maps/GoldenrodTunnelF1/scripts.inc"

	.include "data/maps/GoldenrodTunnelF2/scripts.inc"

	.include "data/maps/RocketHideoutJohtoF1/scripts.inc"

	.include "data/maps/RocketHideoutJohtoF2/scripts.inc"

	.include "data/maps/RocketHideoutFJohto3/scripts.inc"

	.include "data/maps/GoldenrodTunnelF3/scripts.inc"

	.include "data/maps/GoldenrodTunnelF4/scripts.inc"

	.include "data/maps/GoldenrodGym/scripts.inc"

	.include "data/maps/GoldenrodBikeShop/scripts.inc"

	.include "data/maps/GoldenrodFlowerShop/scripts.inc"

	.include "data/maps/GoldenrodInteriors/scripts.inc"

	.include "data/maps/EcruteakCenter/scripts.inc"

	.include "data/maps/EcruteakMart/scripts.inc"

	.include "data/maps/Kimonogirl/scripts.inc"

	.include "data/maps/EcruteakInteriors/scripts.inc"

	.include "data/maps/EcruteakGym/scripts.inc"

	.include "data/maps/OlivineCenter/scripts.inc"

	.include "data/maps/OlivineMart/scripts.inc"

	.include "data/maps/OlivineIndoors/scripts.inc"

	.include "data/maps/OlivineContest/scripts.inc"

	.include "data/maps/OlivineContestF1/scripts.inc"

	.include "data/maps/OlivineGym/scripts.inc"

	.include "data/maps/CyanwoodCenter/scripts.inc"

	.include "data/maps/CyanwoodMart/scripts.inc"

	.include "data/maps/CyanwoodFloralShoppe/scripts.inc"

	.include "data/maps/CyanwoodCenterTest/scripts.inc"

	.include "data/maps/CyanwoodSeashore/scripts.inc"

	.include "data/maps/CyanwoodAquarium/scripts.inc"

	.include "data/maps/CyanwoodInteriors/scripts.inc"

	.include "data/maps/CyanwoodGym/scripts.inc"

	.include "data/maps/JohtoSafariCenter/scripts.inc"

	.include "data/maps/JohtoSafariInteriors/scripts.inc"

	.include "data/maps/BlackthornCenter/scripts.inc"

	.include "data/maps/BlackthornMart/scripts.inc"

	.include "data/maps/BlackthornTest/scripts.inc"

	.include "data/maps/BlackthornGym/scripts.inc"

	.include "data/maps/MahoganyGym/scripts.inc"

	.include "data/maps/MahoganyMart/scripts.inc"

	.include "data/maps/MahoganyCenter/scripts.inc"

	.include "data/maps/Route49/scripts.inc"

	.include "data/maps/Route50/scripts.inc"

	.include "data/maps/LavenderTowerF1/scripts.inc"

	.include "data/maps/VermilionTruck/scripts.inc"

	.include "data/maps/SilverRoom/scripts.inc"

	.include "data/maps/VioletGym1/scripts.inc"

	.include "data/maps/Route25Indoor/scripts.inc"

	.include "data/maps/BillsGarden/scripts.inc"

	.include "data/maps/BillsMachine/scripts.inc"

	.include "data/maps/FarOffCave/scripts.inc"

	.include "data/maps/BillsHouse/scripts.inc"

	.include "data/maps/Route137/scripts.inc"

	.include "data/maps/Route137a/scripts.inc"

	.include "data/maps/Route115a/scripts.inc"

	.include "data/maps/Route25a/scripts.inc"

	.include "data/maps/OneIsland/scripts.inc"

	.include "data/maps/TwoIsland/scripts.inc"

	.include "data/maps/ThreeIsland/scripts.inc"

	.include "data/maps/FourIsland/scripts.inc"

	.include "data/maps/FiveIsland/scripts.inc"

	.include "data/maps/SixIsland/scripts.inc"

	.include "data/maps/SevenIsland/scripts.inc"

	.include "data/maps/KindleRoad/scripts.inc"

	.include "data/maps/TreasureBeach/scripts.inc"

	.include "data/maps/EmberSpa/scripts.inc"

	.include "data/maps/MtEmberF1/scripts.inc"

	.include "data/maps/MtEmber2/scripts.inc"

	.include "data/maps/MtEmberF3/scripts.inc"

	.include "data/maps/MtEmberF4/scripts.inc"

	.include "data/maps/CapeBrink/scripts.inc"

	.include "data/maps/ThreeIslandPort/scripts.inc"

	.include "data/maps/BondBridge/scripts.inc"

	.include "data/maps/BerryForest/scripts.inc"

	.include "data/maps/ThreeIslandTunnel/scripts.inc"

	.include "data/maps/FiveIsleMeadow/scripts.inc"

	.include "data/maps/MemorialPillar/scripts.inc"

	.include "data/maps/WaterLabyrinth/scripts.inc"

	.include "data/maps/ResortGorgeous/scripts.inc"

	.include "data/maps/Route10a/scripts.inc"

	.include "data/maps/WaterPath/scripts.inc"

	.include "data/maps/RuinValley/scripts.inc"

	.include "data/maps/GreenPath/scripts.inc"

	.include "data/maps/OutcastIsland/scripts.inc"

	.include "data/maps/PatternBush/scripts.inc"

	.include "data/maps/TrainerTower/scripts.inc"

	.include "data/maps/CanyonEntrance/scripts.inc"

	.include "data/maps/SeavaultCanyon/scripts.inc"

	.include "data/maps/TanobyRuins/scripts.inc"

	.include "data/maps/OneIslandHarbor/scripts.inc"

	.include "data/maps/TwoIslandHarbor/scripts.inc"

	.include "data/maps/ThreeIslandHarbor/scripts.inc"

	.include "data/maps/FourIslandHarbor/scripts.inc"

	.include "data/maps/FiveIslandHarbor/scripts.inc"

	.include "data/maps/SixIslandHarbor/scripts.inc"

	.include "data/maps/SevenIslandHarbor/scripts.inc"

	.include "data/maps/IcefallCaveF1/scripts.inc"

	.include "data/maps/IcefallCaveF2/scripts.inc"

	.include "data/maps/IcefallCaveF3/scripts.inc"

	.include "data/maps/IcefallCaveF4/scripts.inc"

	.include "data/maps/PatternBushF1/scripts.inc"

	.include "data/maps/PatternBushF2/scripts.inc"

	.include "data/maps/PokmonNetworkCenter/scripts.inc"

	.include "data/maps/TwoIslandCenter/scripts.inc"

	.include "data/maps/ThreeIslandCenter/scripts.inc"

	.include "data/maps/FourIslandCenter/scripts.inc"

	.include "data/maps/FiveIslandCenter/scripts.inc"

	.include "data/maps/SixIslandCenter/scripts.inc"

	.include "data/maps/SevenIslandCenter/scripts.inc"

	.include "data/maps/DottedHoleF1/scripts.inc"

	.include "data/maps/DottedHoleF2/scripts.inc"

	.include "data/maps/DottedHoleF3/scripts.inc"

	.include "data/maps/DottedHoleF4/scripts.inc"

	.include "data/maps/DottedHoleF5/scripts.inc"

	.include "data/maps/AlteringCaveSevii/scripts.inc"

	.include "data/maps/NetworkCenterF2/scripts.inc"

	.include "data/maps/NetworkCenterF3/scripts.inc"

	.include "data/maps/EmbeddedTowerF1/scripts.inc"

	.include "data/maps/EmbeddedTowerF2/scripts.inc"

	.include "data/maps/LostCave/scripts.inc"

	.include "data/maps/ResortGorgeousHouse/scripts.inc"

	.include "data/maps/LostCaveF1/scripts.inc"

	.include "data/maps/TrainerTowerF1/scripts.inc"

	.include "data/maps/TrainerTower2/scripts.inc"

	.include "data/maps/TrainerTowerRoof/scripts.inc"

	.include "data/maps/TanobyKey/scripts.inc"

	.include "data/maps/MoneanChamber/scripts.inc"

	.include "data/maps/LiptooChamber/scripts.inc"

	.include "data/maps/WeepthChamber/scripts.inc"

	.include "data/maps/DilfordChamber/scripts.inc"

	.include "data/maps/ScufibChamber/scripts.inc"

	.include "data/maps/RixyChamber/scripts.inc"

	.include "data/maps/ViapoisChamber/scripts.inc"

	.include "data/maps/SeavaultCanyonHouse/scripts.inc"

	.include "data/maps/OneIslandHouses/scripts.inc"

	.include "data/maps/CobaltBay/scripts.inc"

	.include "data/maps/CobaltBeacha/scripts.inc"

	.include "data/maps/TwoIslandHouses/scripts.inc"

	.include "data/maps/TwoIslandCasino/scripts.inc"

	.include "data/maps/ThreeIslandHouses/scripts.inc"

	.include "data/maps/ThreeIslandMarket/scripts.inc"

	.include "data/maps/FourIslandDayCare/scripts.inc"

	.include "data/maps/FourIslandMart/scripts.inc"

	.include "data/maps/FourIslandMansion/scripts.inc"

	.include "data/maps/FourIslandHouses/scripts.inc"

	.include "data/maps/FiveIslandMart/scripts.inc"

	.include "data/maps/SixIslandMart/scripts.inc"

	.include "data/maps/SevenIslandMart/scripts.inc"

	.include "data/maps/FiveIslandHouses/scripts.inc"

	.include "data/maps/RocketWarehouse/scripts.inc"

	.include "data/maps/SixIslandHouse/scripts.inc"

	.include "data/maps/SevenIslandHouses/scripts.inc"

	.include "data/maps/MoonLanding/scripts.inc"

	.include "data/maps/BirthIsland/scripts.inc"

	.include "data/maps/MoonExterior1/scripts.inc"

	.include "data/maps/IndigoPlateauF3/scripts.inc"

	.include "data/maps/IndigoPlateauF4/scripts.inc"

	.include "data/maps/IndigoPlateauF5/scripts.inc"

	.include "data/maps/IndigoPlateauF6/scripts.inc"

	.include "data/maps/IndigoPlateauF7/scripts.inc"

	.include "data/maps/IndigoPlateauF8/scripts.inc"

	.include "data/maps/IndigoPlateauF9/scripts.inc"

	.include "data/maps/IndigoPlateauF10/scripts.inc"

	.include "data/maps/IndigoPlateauF11/scripts.inc"

	.include "data/maps/IndigoPlateau12/scripts.inc"

	.include "data/maps/Route2House/scripts.inc"

	.include "data/maps/KantoDaycare/scripts.inc"

	.include "data/maps/Route12FisherHouse/scripts.inc"

	.include "data/maps/Route16SecretHouse/scripts.inc"

	.include "data/maps/Route19GameCorner/scripts.inc"

	.include "data/maps/Route3Center/scripts.inc"

	.include "data/maps/Route10Center/scripts.inc"

	.include "data/maps/Route32Center/scripts.inc"

	.include "data/maps/Route26Indoors/scripts.inc"

	.include "data/maps/Route26House/scripts.inc"

	.include "data/maps/Route30Indoors/scripts.inc"

	.include "data/maps/JohtoDayCare/scripts.inc"

	.include "data/maps/MoonExterior2/scripts.inc"

	.include "data/maps/MountUnknown/scripts.inc"

	.include "data/maps/MountUnknownF1/scripts.inc"

	.include "data/maps/Cydonia/scripts.inc"

	.include "data/maps/CydoniaInteriors/scripts.inc"

	.include "data/maps/ForgottenGrave/scripts.inc"

	.include "data/maps/HeavenlyPalace/scripts.inc"

	.include "data/maps/HeavenlyPalaceF1/scripts.inc"

	.include "data/maps/HeavenlyPalaceF2/scripts.inc"

	.include "data/maps/HeavenlyPalaceF3/scripts.inc"

	.include "data/maps/Mossdeep_Spaceship/scripts.inc"

	.include "data/maps/SpaceshipMoon/scripts.inc"

	.include "data/maps/BirthIslandLab/scripts.inc"

	.include "data/maps/BirthIslandLabF1/scripts.inc"

	.include "data/maps/BirthIslandLabF2/scripts.inc"

	.include "data/maps/BirthIslandLabF3/scripts.inc"

	.include "data/maps/LakeofRageHouses/scripts.inc"

	.include "data/maps/RuinsofAlphLab/scripts.inc"

	.include "data/maps/SaffronTrainerClub/scripts.inc"

	.include "data/maps/MoomooFarm/scripts.inc"

	.include "data/maps/CapeBrinkHouse/scripts.inc"

	.include "data/maps/TanobyKeyF1/scripts.inc"

	.include "data/maps/RocketHideoutLifter/scripts.inc"

	.include "data/maps/TrainerTowerLifter/scripts.inc"

	.include "data/maps/RocketHideoutF5/scripts.inc"

	.include "data/maps/RocketHideoutJohtoF4/scripts.inc"

	.include "data/maps/Route49Crypt/scripts.inc"

	.include "data/maps/GreenPathHouses/scripts.inc"

	.include "data/maps/SSAnneF1/scripts.inc"

	.include "data/maps/SSAnneF2/scripts.inc"

	.include "data/maps/SSAnneF3/scripts.inc"

	.include "data/maps/SSAnneF4/scripts.inc"

	.include "data/maps/SSAnneF5/scripts.inc"

	.include "data/maps/RocketHideoutHoenn/scripts.inc"

	.include "data/maps/RocketHideoutHoennF1/scripts.inc"

	.include "data/maps/RocketHideoutHoennF2/scripts.inc"

	.include "data/maps/RocketHideoutHoennF3/scripts.inc"

	.include "data/maps/MtMoonRoofHouse/scripts.inc"

	.include "data/maps/RingTown/scripts.inc"

	.include "data/maps/Route69/scripts.inc"

	.include "data/maps/MtPanulaF1/scripts.inc"

	.include "data/maps/PokemonMansionF5/scripts.inc"

	.include "data/maps/Route5House/scripts.inc"

	.include "data/maps/CeruleanCaveF2a/scripts.inc"

	.include "data/maps/KantoSafariHouses/scripts.inc"

	.include "data/maps/SSTidalCabin/scripts.inc"

	.include "data/maps/IndigoPlateauF13/scripts.inc"

	.include "data/maps/DragonsDenF2/scripts.inc"

	.include "data/maps/PetalburgGym/scripts.inc"

	.include "data/maps/PetalburgGymF1/scripts.inc"

	.include "data/maps/PetalburgGymF2/scripts.inc"

	.include "data/maps/PetalburgGymF3/scripts.inc"

	.include "data/maps/PetalburgGymF4/scripts.inc"

	.include "data/maps/PetalburgGymF5/scripts.inc"

	.include "data/maps/PetalburgGymF6/scripts.inc"

	.include "data/maps/PetalburgGymF7/scripts.inc"

	.include "data/maps/PetalburgGymF8/scripts.inc"

	.include "data/maps/PetalburgGymF9/scripts.inc"

	.include "data/maps/PetalburgGymF10/scripts.inc"

	.include "data/maps/Route15Interiors/scripts.inc"

	.include "data/maps/Route18CyclingHouse/scripts.inc"

	.include "data/maps/Route16CyclingHouse/scripts.inc"

	.include "data/maps/Route28Center/scripts.inc"

	.include "data/maps/RingLake/scripts.inc"

	.include "data/maps/FallCity/scripts.inc"

	.include "data/maps/Route70/scripts.inc"

	.include "data/maps/MtPanulaF2/scripts.inc"

	.include "data/maps/MtPanulaF3/scripts.inc"

	.include "data/maps/MtPanulaF4/scripts.inc"

	.include "data/maps/MtPanulaF5/scripts.inc"

	.include "data/maps/MtPanulaF6/scripts.inc"

	.include "data/maps/MtPanulaF7/scripts.inc"

	.include "data/maps/Route71/scripts.inc"

	.include "data/maps/Wintown/scripts.inc"

	.include "data/maps/Route72/scripts.inc"

	.include "data/maps/Route73/scripts.inc"

	.include "data/maps/MtSekra/scripts.inc"

	.include "data/maps/OliveJungle/scripts.inc"

	.include "data/maps/Summerland/scripts.inc"

	.include "data/maps/OliveJungleF1/scripts.inc"

	.include "data/maps/Route74/scripts.inc"

	.include "data/maps/Route75/scripts.inc"

	.include "data/maps/Route98/scripts.inc"

	.include "data/maps/Route99/scripts.inc"

	.include "data/maps/LarousseCity/scripts.inc"

	.include "data/maps/Route135/scripts.inc"

	.include "data/maps/Route136/scripts.inc"

	.include "data/maps/Route138/scripts.inc"

	.include "data/maps/Route138a/scripts.inc"

	.include "data/maps/OldrootWoods/scripts.inc"

	.include "data/maps/DewfordForest/scripts.inc"

	.include "data/maps/AshleafTown/scripts.inc"

	.include "data/maps/WhitestoneCity/scripts.inc"

	.include "data/maps/SilverStrait/scripts.inc"

	.include "data/maps/CeruleanGSC/scripts.inc"

	.include "data/maps/Route51/scripts.inc"

	.include "data/maps/KasadoCity/scripts.inc"

	.include "data/maps/Route52/scripts.inc"

	.include "data/maps/KugaTown/scripts.inc"

	.include "data/maps/ShoalCave_LowTideExit/scripts.inc"

	.include "data/maps/CinnabarIslandUnderwater/scripts.inc"

	.include "data/maps/Route119a/scripts.inc"

	.include "data/maps/Route119aUnderwater/scripts.inc"

	.include "data/maps/CeruleanCityUnderwater/scripts.inc"

	.include "data/maps/Route24Underwater/scripts.inc"

	.include "data/maps/Route24UnderwaterCeruleanEntrance/scripts.inc"

	.include "data/maps/CeruleanCaveF4Underwater/scripts.inc"

	.include "data/maps/CeruleanCaveF4/scripts.inc"

	.include "data/maps/CeruleanCaveF5/scripts.inc"

	.include "data/maps/CeruleanCaveF6/scripts.inc"

	.include "data/maps/CeruleanCaveF7/scripts.inc"

	.include "data/maps/Route49Cave/scripts.inc"

	.include "data/maps/Route50Cave/scripts.inc"

	.include "data/maps/LittlerootInteriors/scripts.inc"

	.include "data/maps/IcePathF5/scripts.inc"

	.include "data/maps/PokemonMansionF6/scripts.inc"

	.include "data/maps/PokemonMansionF7/scripts.inc"

	.include "data/maps/PokemonMansionF8/scripts.inc"

	.include "data/maps/ViridianLake/scripts.inc"

	.include "data/maps/ViridianLakeUnderwater/scripts.inc"

	.include "data/maps/ViridianLakeUnderwaterTunnel/scripts.inc"

	.include "data/maps/ViridianGymF2/scripts.inc"

	.include "data/maps/ViridianTempleInteriors/scripts.inc"

	.include "data/maps/OlivinePlayerOldHouse/scripts.inc"

	.include "data/maps/MtMoonF4/scripts.inc"

	.include "data/maps/MtMoonF5/scripts.inc"
	.include "data/maps/ViridianLakeHydroelectricPlant/scripts.inc"

	.include "data/maps/ViridianLakeHouses/scripts.inc"

	.include "data/maps/Route17a/scripts.inc"

	.include "data/maps/MistyCave/scripts.inc"

	.include "data/maps/MtMoonF6/scripts.inc"

	.include "data/maps/Route7a/scripts.inc"

	.include "data/maps/MtMoonF7/scripts.inc"

	.include "data/maps/TwinleafTown/scripts.inc"
	.include "data/maps/SandgemTown/scripts.inc"
	.include "data/maps/JubilifeCity/scripts.inc"
	.include "data/maps/OreburghCity/scripts.inc"
	.include "data/maps/FloaromaTown/scripts.inc"
	.include "data/maps/EternaCity/scripts.inc"
	.include "data/maps/HearthomeCity/scripts.inc"
	.include "data/maps/SolaceonTown/scripts.inc"
	.include "data/maps/CelesticTown/scripts.inc"
	.include "data/maps/VeilstoneCity/scripts.inc"
	.include "data/maps/PastoriaCity/scripts.inc"
	.include "data/maps/CanalaveCity/scripts.inc"
	.include "data/maps/SnowpointCity/scripts.inc"
	.include "data/maps/SunyshoreCity/scripts.inc"
	.include "data/maps/SinnohLeague/scripts.inc"
	.include "data/maps/Route201/scripts.inc"
	.include "data/maps/Route202/scripts.inc"
	.include "data/maps/Route203/scripts.inc"
	.include "data/maps/Route204/scripts.inc"
	.include "data/maps/Route205_North/scripts.inc"
	.include "data/maps/Route205_South/scripts.inc"
	.include "data/maps/Route206/scripts.inc"
	.include "data/maps/Route207/scripts.inc"
	.include "data/maps/Route208/scripts.inc"
	.include "data/maps/Route209/scripts.inc"
	.include "data/maps/Route210_North/scripts.inc"
	.include "data/maps/Route210_South/scripts.inc"
	.include "data/maps/Route211_East/scripts.inc"
	.include "data/maps/Route211_West/scripts.inc"
	.include "data/maps/Route212_North/scripts.inc"
	.include "data/maps/Route212_South/scripts.inc"
	.include "data/maps/Route213/scripts.inc"
	.include "data/maps/Route214/scripts.inc"
	.include "data/maps/Route215/scripts.inc"
	.include "data/maps/Route216/scripts.inc"
	.include "data/maps/Route217/scripts.inc"
	.include "data/maps/Route218/scripts.inc"
	.include "data/maps/Route219/scripts.inc"
	.include "data/maps/Route220/scripts.inc"
	.include "data/maps/Route221/scripts.inc"
	.include "data/maps/Route222/scripts.inc"
	.include "data/maps/Route223/scripts.inc"
	.include "data/maps/Route224/scripts.inc"
	.include "data/maps/Route225/scripts.inc"
	.include "data/maps/Route226/scripts.inc"
	.include "data/maps/Route227/scripts.inc"
	.include "data/maps/Route228/scripts.inc"
	.include "data/maps/Route229/scripts.inc"
	.include "data/maps/Route230/scripts.inc"
	.include "data/maps/VerityLakefront/scripts.inc"
	.include "data/maps/ValorLakefront/scripts.inc"
	.include "data/maps/AcuityLakefront/scripts.inc"
	.include "data/maps/FightArea/scripts.inc"
	.include "data/maps/SurvivalArea/scripts.inc"
	.include "data/maps/ResortArea/scripts.inc"
	.include "data/maps/LakeVerity/scripts.inc"
	.include "data/maps/LakeValor/scripts.inc"
	.include "data/maps/LakeAcuity/scripts.inc"
	.include "data/maps/OreburghGate_1F/scripts.inc"
	.include "data/maps/OreburghMine_B1F/scripts.inc"
	.include "data/maps/OreburghMine_B2F/scripts.inc"
	.include "data/maps/RavagedPath/scripts.inc"
	.include "data/maps/ValleyWindworks/scripts.inc"
	.include "data/maps/EternaForest/scripts.inc"
	.include "data/maps/MtCoronet_1F_South/scripts.inc"
	.include "data/maps/MtCoronet_1F_North_Room1/scripts.inc"
	.include "data/maps/MtCoronet_1F_North_Room2/scripts.inc"
	.include "data/maps/MtCoronet_B1F/scripts.inc"
	.include "data/maps/Route206_North/scripts.inc"
	.include "data/maps/Route206_South/scripts.inc"

	.include "data/scripts/dexnav.inc"

	.include "data/maps/SinnohLeagueF1/scripts.inc"

	.include "data/maps/SpringPath/scripts.inc"

	.include "data/maps/SendoffSpring/scripts.inc"

	.include "data/maps/FuegoIronworks/scripts.inc"

	.include "data/maps/MtStarkF1/scripts.inc"

	.include "data/maps/DottedHoleF6/scripts.inc"

	.include "data/maps/DottedHoleF7/scripts.inc"

	.include "data/maps/CyanwoodCenterF1/scripts.inc"
