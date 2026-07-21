OldLavenderF2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, OldLavenderF2_OnLoad
	.byte 0

OldLavenderF2_OnLoad:
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF2_SetLeverRight
	end

OldLavenderF2_SetLeverRight::
	setobjectmovementtype LOCALID_F2_LEVER, MOVEMENT_TYPE_FACE_UP
	return

OldLavenderF2_Lever::
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 0, OldLavenderF2_LeverLeft
	goto_if_eq VAR_OLD_LAVENDER_LEVER, 1, OldLavenderF2_LeverRight
	end

OldLavenderF2_LeverLeft::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F2_LEVER, MOVEMENT_TYPE_FACE_UP
	applymovement LOCALID_F2_LEVER, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 1
	return

OldLavenderF2_LeverRight::
	msgbox OldLavender_Text_PulltheLever, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldLavender_LeftLeverAlone
	closemessage
	playse SE_TRUCK_DOOR
	setobjectmovementtype LOCALID_F2_LEVER, MOVEMENT_TYPE_FACE_DOWN
	applymovement LOCALID_F2_LEVER, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_OLD_LAVENDER_LEVER, 0
	return