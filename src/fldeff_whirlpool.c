#include "global.h"
#include "braille_puzzles.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fldeff.h"
#include "item_use.h"
#include "overworld.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/map_types.h"
#include "constants/songs.h"

static void Task_DoFieldMove_Init(u8 taskId);
static void Task_DoFieldMove_ShowMonAfterPose(u8 taskId);
static void Task_DoFieldMove_WaitForMon(u8 taskId);
static void Task_DoFieldMove_RunFunc(u8 taskId);

static void FieldCallback_Whirlpool(void);
static void FieldMove_Whirlpool(void);

static void Task_DoFieldMove_Init(u8 taskId)
{
    u8 objEventId;

    LockPlayerFieldControls();
    gPlayerAvatar.preventStep = TRUE;
    objEventId = gPlayerAvatar.objectEventId;
    if (!ObjectEventIsMovementOverridden(&gObjectEvents[objEventId])
     || ObjectEventClearHeldMovementIfFinished(&gObjectEvents[objEventId]))
    {
        if (gMapHeader.mapType == MAP_TYPE_UNDERWATER || gFieldEffectArguments[3])
        {
            // Skip field move pose underwater, or if arg3 is nonzero
            if (gFieldEffectArguments[3])
                gFieldEffectArguments[3] = 0;
            FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
            gTasks[taskId].func = Task_DoFieldMove_WaitForMon;
        }
        else
        {
            // Do field move pose
            SetPlayerAvatarFieldMove();
            ObjectEventSetHeldMovement(&gObjectEvents[objEventId], MOVEMENT_ACTION_START_ANIM_IN_DIRECTION);
            gTasks[taskId].func = Task_DoFieldMove_ShowMonAfterPose;
        }
    }
}

static void Task_DoFieldMove_ShowMonAfterPose(u8 taskId)
{
    if (ObjectEventCheckHeldMovementStatus(&gObjectEvents[gPlayerAvatar.objectEventId]) == TRUE)
    {
        FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
        gTasks[taskId].func = Task_DoFieldMove_WaitForMon;
    }
}

static void Task_DoFieldMove_WaitForMon(u8 taskId)
{
    if (!FieldEffectActiveListContains(FLDEFF_FIELD_MOVE_SHOW_MON))
    {
        gFieldEffectArguments[1] = GetPlayerFacingDirection();
        if (gFieldEffectArguments[1] == DIR_SOUTH)
            gFieldEffectArguments[2] = 0;
        if (gFieldEffectArguments[1] == DIR_NORTH)
            gFieldEffectArguments[2] = 1;
        if (gFieldEffectArguments[1] == DIR_WEST)
            gFieldEffectArguments[2] = 2;
        if (gFieldEffectArguments[1] == DIR_EAST)
            gFieldEffectArguments[2] = 3;
        ObjectEventSetGraphicsId(&gObjectEvents[gPlayerAvatar.objectEventId], GetPlayerAvatarGraphicsIdByCurrentState());
        StartSpriteAnim(&gSprites[gPlayerAvatar.spriteId], gFieldEffectArguments[2]);
        FieldEffectActiveListRemove(FLDEFF_FIELD_MOVE_SHOW_MON);
        gTasks[taskId].func = Task_DoFieldMove_RunFunc;
    }
}

static void Task_DoFieldMove_RunFunc(u8 taskId)
{
    // The function for the field move to do is stored in halves across data[8] and data[9]
    void (*fieldMoveFunc)(void) = (void (*)(void))(((u16)gTasks[taskId].data[8] << 16) | (u16)gTasks[taskId].data[9]);

    fieldMoveFunc();
    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(taskId);
}

// Called when Rock Smash is used from the party menu
// For interacting with a smashable rock in the field, see EventScript_RockSmash
bool8 SetUpFieldMove_Whirlpool(void)
{
     if (CheckObjectGraphicsInFrontOfPlayer(OBJ_EVENT_GFX_WHIRLPOOL) == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Whirlpool;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void FieldCallback_Whirlpool(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_Whirlpool);
}

bool8 FldEff_UseWhirlpool(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (u32)FieldMove_Whirlpool >> 16;
    gTasks[taskId].data[9] = (u32)FieldMove_Whirlpool;
    IncrementGameStat(GAME_STAT_USED_ROCK_SMASH);
    return FALSE;
}

// The actual rock smashing is handled by EventScript_SmashRock, so this function does very little
static void FieldMove_Whirlpool(void)
{
    PlaySE(SE_M_ROCK_THROW);
    FieldEffectActiveListRemove(FLDEFF_USE_WHIRLPOOL);
    ScriptContext_Enable();
}
