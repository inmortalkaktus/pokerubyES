TradeCenter_EventObjects:: @ 8391340
	object_event 1, EVENT_OBJ_GFX_WOMAN_6, 0, 9, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, TradeCenter_EventScript_1A44AD, 0

TradeCenter_MapWarps:: @ 8391358
	warp_def 5, 8, 3, 127, MAP_NONE
	warp_def 6, 8, 3, 127, MAP_NONE

TradeCenter_MapCoordEvents:: @ 8391368
	coord_event 4, 5, 3, VAR_TEMP_0, 0, TradeCenter_EventScript_1A43F0
	coord_event 7, 5, 3, VAR_TEMP_0, 0, TradeCenter_EventScript_1A43FA

TradeCenter_MapEvents:: @ 8391388
	map_events TradeCenter_EventObjects, TradeCenter_MapWarps, TradeCenter_MapCoordEvents, 0x0
