KantoSafariF4_MapScripts::
	.byte 0

KantoSafariF4_EventScript_GoldTeeth::
	checkitemspace ITEM_GOLD_TEETH
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	finditem ITEM_GOLD_TEETH
	end