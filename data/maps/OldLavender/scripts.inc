
OldLavender_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, OldLavender_OnLoad
	.byte 0

OldLavender_OnLoad:
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavender_SetLeverRight
	end

OldLavender_SetLeverLeft::
	setmetatile 16, 23, METATILE_Old_Lavender_StoneDoorClosedLeftFeet, TRUE
	setmetatile 16, 22, METATILE_Old_Lavender_StoneDoorClosedLeftColumn, TRUE
	setmetatile 16, 21, METATILE_Old_Lavender_StoneDoorClosedLeftUpperCorner, TRUE
	setmetatile 17, 23, METATILE_Old_Lavender_StoneDoorClosedCenterBottom, TRUE
	setmetatile 17, 22, METATILE_Old_Lavender_StoneDoorClosedCenterCenter, TRUE
	setmetatile 17, 21, METATILE_Old_Lavender_StoneDoorClosedCenterUp, TRUE
	setmetatile 18, 23, METATILE_Old_Lavender_StoneDoorClosedRightFeet, TRUE
	setmetatile 18, 22, METATILE_Old_Lavender_StoneDoorClosedRightColumn, TRUE
	setmetatile 18, 21, METATILE_Old_Lavender_StoneDoorClosedRightUpperCorner, TRUE
	setmetatile 16, 16, METATILE_Old_Lavender_StoneDoorClosedLeftFeet, TRUE
	setmetatile 16, 15, METATILE_Old_Lavender_StoneDoorClosedLeftColumn, TRUE
	setmetatile 16, 14, METATILE_Old_Lavender_StoneDoorClosedLeftUpperCorner, TRUE
	setmetatile 17, 16, METATILE_Old_Lavender_StoneDoorClosedCenterBottom, TRUE
	setmetatile 17, 15, METATILE_Old_Lavender_StoneDoorClosedCenterCenter, TRUE
	setmetatile 17, 14, METATILE_Old_Lavender_StoneDoorClosedCenterUp, TRUE
	setmetatile 18, 16, METATILE_Old_Lavender_StoneDoorClosedRightFeet, TRUE
	setmetatile 18, 15, METATILE_Old_Lavender_StoneDoorClosedRightColumn, TRUE
	setmetatile 18, 14, METATILE_Old_Lavender_StoneDoorClosedRightUpperCorner, TRUE
	setmetatile 16, 32, METATILE_Old_Lavender_StoneDoorOpenLeftFeet, TRUE
	setmetatile 16, 31, METATILE_Old_Lavender_StoneDoorOpenLeftColumn, TRUE
	setmetatile 16, 30, METATILE_Old_Lavender_StoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 17, 32, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 31, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 30, METATILE_Old_Lavender_StoneDoorOpenCenterUp, FALSE
	setmetatile 18, 32, METATILE_Old_Lavender_StoneDoorOpenRightFeet, TRUE
	setmetatile 18, 31, METATILE_Old_Lavender_StoneDoorOpenRightColumn, TRUE
	setmetatile 18, 30, METATILE_Old_Lavender_StoneDoorOpenRightUpperCorner, TRUE
	setmetatile 30, 13, METATILE_Old_Lavender_StoneDoorOpenLeftFeet, TRUE
	setmetatile 30, 12, METATILE_Old_Lavender_StoneDoorOpenLeftColumn, TRUE
	setmetatile 30, 11, METATILE_Old_Lavender_StoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 31, 13, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 31, 12, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 31, 11, METATILE_Old_Lavender_StoneDoorOpenCenterUp, FALSE
	setmetatile 32, 13, METATILE_Old_Lavender_StoneDoorOpenRightFeet, TRUE
	setmetatile 32, 12, METATILE_Old_Lavender_StoneDoorOpenRightColumn, TRUE
	setmetatile 32, 11, METATILE_Old_Lavender_StoneDoorOpenRightUpperCorner, TRUE
	return

OldLavender_SetLeverRight::
	setmetatile 16, 23, METATILE_Old_Lavender_StoneDoorOpenLeftFeet, TRUE
	setmetatile 16, 22, METATILE_Old_Lavender_StoneDoorOpenLeftColumn, TRUE
	setmetatile 16, 21, METATILE_Old_Lavender_StoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 17, 23, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 22, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 21, METATILE_Old_Lavender_StoneDoorOpenCenterUp, FALSE
	setmetatile 18, 23, METATILE_Old_Lavender_StoneDoorOpenRightFeet, TRUE
	setmetatile 18, 22, METATILE_Old_Lavender_StoneDoorOpenRightColumn, TRUE
	setmetatile 18, 21, METATILE_Old_Lavender_StoneDoorOpenRightUpperCorner, TRUE
	setmetatile 16, 16, METATILE_Old_Lavender_StoneDoorOpenLeftFeet, TRUE
	setmetatile 16, 15, METATILE_Old_Lavender_StoneDoorOpenLeftColumn, TRUE
	setmetatile 16, 14, METATILE_Old_Lavender_StoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 17, 16, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 15, METATILE_Old_Lavender_StoneFloor, FALSE
	setmetatile 17, 14, METATILE_Old_Lavender_StoneDoorOpenCenterUp, FALSE
	setmetatile 18, 16, METATILE_Old_Lavender_StoneDoorOpenRightFeet, TRUE
	setmetatile 18, 15, METATILE_Old_Lavender_StoneDoorOpenRightColumn, TRUE
	setmetatile 18, 14, METATILE_Old_Lavender_StoneDoorOpenRightUpperCorner, TRUE
	setmetatile 16, 32, METATILE_Old_Lavender_StoneDoorClosedLeftFeet, TRUE
	setmetatile 16, 31, METATILE_Old_Lavender_StoneDoorClosedLeftColumn, TRUE
	setmetatile 16, 30, METATILE_Old_Lavender_StoneDoorClosedLeftUpperCorner, TRUE
	setmetatile 17, 32, METATILE_Old_Lavender_StoneDoorClosedCenterBottom, TRUE
	setmetatile 17, 31, METATILE_Old_Lavender_StoneDoorClosedCenterCenter, TRUE
	setmetatile 17, 30, METATILE_Old_Lavender_StoneDoorClosedCenterUp, TRUE
	setmetatile 18, 32, METATILE_Old_Lavender_StoneDoorClosedRightFeet, TRUE
	setmetatile 18, 31, METATILE_Old_Lavender_StoneDoorClosedRightColumn, TRUE
	setmetatile 18, 30, METATILE_Old_Lavender_StoneDoorClosedRightUpperCorner, TRUE
	setmetatile 30, 13, METATILE_Old_Lavender_StoneDoorClosedLeftFeet, TRUE
	setmetatile 30, 12, METATILE_Old_Lavender_StoneDoorClosedLeftColumn, TRUE
	setmetatile 30, 11, METATILE_Old_Lavender_StoneDoorClosedLeftUpperCorner, TRUE
	setmetatile 31, 13, METATILE_Old_Lavender_StoneDoorClosedCenterBottom, TRUE
	setmetatile 31, 12, METATILE_Old_Lavender_StoneDoorClosedCenterCenter, TRUE
	setmetatile 31, 11, METATILE_Old_Lavender_StoneDoorClosedCenterUp, TRUE
	setmetatile 32, 13, METATILE_Old_Lavender_StoneDoorClosedRightFeet, TRUE
	setmetatile 32, 12, METATILE_Old_Lavender_StoneDoorClosedRightColumn, TRUE
	setmetatile 32, 11, METATILE_Old_Lavender_StoneDoorClosedRightUpperCorner, TRUE
	return

OldLavender_LeverLeft::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_LEVER_1, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_LEVER_2, MOVEMENT_TYPE_FACE_UP
	applymovement LOCALID_LEVER_1, Common_Movement_FaceUp
	applymovement LOCALID_LEVER_2, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 1
	goto OldLavender_SetLeverRight
	return

OldLavender_LeftLeverAlone::
	msgbox OldLavender_Text_LeftLeverAlone, MSGBOX_DEFAULT
	closemessage
	return

OldLavender_Text_PulltheLever::
	.string "There's a lever on the floor.\n"
	.string "Do you want to pull it?$"

OldLavender_Text_LeftLeverAlone::
	.string "You leave the lever alone...$"

OldLavender_LeverRight::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_LEVER_1, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_LEVER_2, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_LEVER_1, Common_Movement_FaceDown
	applymovement LOCALID_LEVER_2, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 0
	goto OldLavender_SetLeverLeft
	return

OldLavender_Lever::
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 0, OldLavender_LeverLeft
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavender_LeverRight
	end