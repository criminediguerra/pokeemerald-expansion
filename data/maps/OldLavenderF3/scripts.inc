OldLavenderF3_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, OldLavenderF3_SetHoleWarp
	map_script MAP_SCRIPT_ON_LOAD, OldLavenderF3_OnLoad
	.byte 0

OldLavenderF3_OnLoad:
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF3_OpenDoor
	end

OldLavenderF3_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_OLD_LAVENDER_F4
	end

OldLavenderF3_OpenDoor::
	setobjectmovementtype LOCALID_F3_LEVER, MOVEMENT_TYPE_FACE_UP
	setmetatile 36, 26, METATILE_Old_Lavender_StoneDoorOpenLeftFeet, TRUE
	setmetatile 36, 25, METATILE_Old_Lavender_StoneDoorOpenLeftColumn, TRUE
	setmetatile 36, 24, METATILE_Old_Lavender_StoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 37, 26, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 37, 25, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 37, 24, METATILE_Old_Lavender_StoneDoorOpenCenterUp, FALSE
	setmetatile 38, 26, METATILE_Old_Lavender_StoneDoorOpenRightFeet, TRUE
	setmetatile 38, 25, METATILE_Old_Lavender_StoneDoorOpenRightColumn, TRUE
	setmetatile 38, 24, METATILE_Old_Lavender_StoneDoorOpenRightUpperCorner, TRUE
	setmetatile 36, 39, METATILE_Old_Lavender_StoneDoorClosedLeftFeet, TRUE
	setmetatile 36, 38, METATILE_Old_Lavender_StoneDoorClosedLeftColumn, TRUE
	setmetatile 36, 37, METATILE_Old_Lavender_StoneDoorClosedLeftUpperCorner, TRUE
	setmetatile 37, 39, METATILE_Old_Lavender_StoneDoorClosedCenterBottom, TRUE
	setmetatile 37, 38, METATILE_Old_Lavender_StoneDoorClosedCenterCenter, TRUE
	setmetatile 37, 37, METATILE_Old_Lavender_StoneDoorClosedCenterUp, TRUE
	setmetatile 38, 39, METATILE_Old_Lavender_StoneDoorClosedRightFeet, TRUE
	setmetatile 38, 38, METATILE_Old_Lavender_StoneDoorClosedRightColumn, TRUE
	setmetatile 38, 37, METATILE_Old_Lavender_StoneDoorClosedRightUpperCorner, TRUE
	return

OldLavenderF3_Lever::
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 0, OldLavenderF3_LeverLeft
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF3_LeverRight
	end

OldLavenderF3_LeverLeft::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F3_LEVER, MOVEMENT_TYPE_FACE_UP
	applymovement LOCALID_F3_LEVER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 1
	return

OldLavenderF3_LeverRight::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F3_LEVER, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_F3_LEVER, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 0
	return