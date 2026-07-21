OldLavenderF1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, OldLavenderF1_OnLoad
	.byte 0

OldLavenderF1_OnLoad:
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF1_OpenDoor
	end

OldLavenderF1_OpenDoor::
	setobjectmovementtype LOCALID_F1_LEVER, MOVEMENT_TYPE_FACE_UP
	setmetatile 22, 8, METATILE_Old_Lavender_VoidStoneDoorOpenLeftFeet, TRUE
	setmetatile 22, 7, METATILE_Old_Lavender_VoidStoneDoorOpenLeftColumn, TRUE
	setmetatile 22, 6, METATILE_Old_Lavender_VoidStoneDoorOpenLeftUpperCorner, TRUE
	setmetatile 23, 8, METATILE_Old_Lavender_StoneDoorOpenVoid, FALSE
	setmetatile 23, 7, METATILE_Old_Lavender_StoneDoorOpenVoid, TRUE
	setmetatile 23, 6, METATILE_Old_Lavender_VoidStoneDoorOpenCenterUp, TRUE
	setmetatile 24, 8, METATILE_Old_Lavender_VoidStoneDoorOpenRightFeet, TRUE
	setmetatile 24, 7, METATILE_Old_Lavender_VoidStoneDoorOpenRightColumn, TRUE
	setmetatile 24, 6, METATILE_Old_Lavender_VoidStoneDoorOpenRightUpperCorner, TRUE
	return

OldLavenderF1_Lever::
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 0, OldLavenderF1_LeverLeft
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF1_LeverRight
	end

OldLavenderF1_LeverLeft::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F1_LEVER, MOVEMENT_TYPE_FACE_UP
	applymovement LOCALID_F1_LEVER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 1
	return

OldLavenderF1_LeverRight::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F1_LEVER, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_F1_LEVER, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 0
	return