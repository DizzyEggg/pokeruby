AquaHideout_B1F_MapObjects:: @ 838CD80
	object_event 1, MAP_OBJ_GFX_VAR_1, 0, 27, 0, 18, 0, 3, 24, 0, 0, 1, 0, 3, 0, AquaHideout_B1F_EventScript_15D850, FLAG_HIDE_GRUNTS_HIDEOUTS, 0, 0
	object_event 2, MAP_OBJ_GFX_VAR_1, 0, 6, 0, 6, 0, 3, 9, 0, 0, 1, 0, 5, 0, AquaHideout_B1F_EventScript_15D875, FLAG_HIDE_GRUNTS_HIDEOUTS, 0, 0
	object_event 3, MAP_OBJ_GFX_ITEM_BALL, 0, 29, 0, 12, 0, 3, 1, 0, 0, 0, 0, 0, 0, AquaHideout_B1F_EventScript_1B19A8, FLAG_ITEM_AQUA_HIDEOUT_B1F_1, 0, 0
	object_event 4, MAP_OBJ_GFX_VAR_2, 0, 20, 0, 18, 0, 3, 27, 4, 0, 1, 0, 4, 0, AquaHideout_B1F_EventScript_15D89A, FLAG_HIDE_GRUNTS_HIDEOUTS, 0, 0
	object_event 5, MAP_OBJ_GFX_ITEM_BALL, 0, 15, 0, 9, 0, 3, 1, 17, 0, 0, 0, 0, 0, AquaHideout_B1F_EventScript_1B198E, FLAG_ITEM_AQUA_HIDEOUT_B1F_2, 0, 0
	object_event 6, MAP_OBJ_GFX_ITEM_BALL, 0, 16, 0, 9, 0, 3, 1, 17, 0, 0, 0, 0, 0, AquaHideout_B1F_EventScript_1A04FD, FLAG_HIDE_ELECTRODE_1_HIDEOUT, 0, 0
	object_event 7, MAP_OBJ_GFX_ITEM_BALL, 0, 15, 0, 10, 0, 3, 1, 17, 0, 0, 0, 0, 0, AquaHideout_B1F_EventScript_1B199B, FLAG_ITEM_AQUA_HIDEOUT_B1F_3, 0, 0
	object_event 8, MAP_OBJ_GFX_ITEM_BALL, 0, 16, 0, 10, 0, 3, 1, 17, 0, 0, 0, 0, 0, AquaHideout_B1F_EventScript_1A051B, FLAG_HIDE_ELECTRODE_2_HIDEOUT, 0, 0

AquaHideout_B1F_MapWarps:: @ 838CE40
	warp_def 29, 1, 3, 2, MAP_AQUA_HIDEOUT_1F
	warp_def 18, 1, 3, 0, MAP_AQUA_HIDEOUT_B2F
	warp_def 12, 1, 3, 1, MAP_AQUA_HIDEOUT_B2F
	warp_def 3, 3, 3, 2, MAP_AQUA_HIDEOUT_B2F
	warp_def 31, 4, 3, 7, MAP_AQUA_HIDEOUT_B1F
	warp_def 27, 4, 3, 8, MAP_AQUA_HIDEOUT_B1F
	warp_def 20, 4, 3, 10, MAP_AQUA_HIDEOUT_B1F
	warp_def 27, 12, 3, 4, MAP_AQUA_HIDEOUT_B1F
	warp_def 3, 15, 3, 5, MAP_AQUA_HIDEOUT_B1F
	warp_def 3, 20, 3, 12, MAP_AQUA_HIDEOUT_B1F
	warp_def 32, 19, 3, 6, MAP_AQUA_HIDEOUT_B1F
	warp_def 23, 10, 3, 22, MAP_AQUA_HIDEOUT_B1F
	warp_def 45, 3, 3, 9, MAP_AQUA_HIDEOUT_B1F
	warp_def 42, 5, 3, 18, MAP_AQUA_HIDEOUT_B1F
	warp_def 45, 5, 3, 12, MAP_AQUA_HIDEOUT_B1F
	warp_def 48, 5, 3, 16, MAP_AQUA_HIDEOUT_B1F
	warp_def 42, 9, 3, 15, MAP_AQUA_HIDEOUT_B1F
	warp_def 45, 9, 3, 20, MAP_AQUA_HIDEOUT_B1F
	warp_def 48, 9, 3, 13, MAP_AQUA_HIDEOUT_B1F
	warp_def 42, 13, 3, 24, MAP_AQUA_HIDEOUT_B1F
	warp_def 45, 13, 3, 17, MAP_AQUA_HIDEOUT_B1F
	warp_def 48, 13, 3, 12, MAP_AQUA_HIDEOUT_B1F
	warp_def 42, 17, 3, 11, MAP_AQUA_HIDEOUT_B1F
	warp_def 45, 17, 3, 17, MAP_AQUA_HIDEOUT_B1F
	warp_def 48, 17, 3, 19, MAP_AQUA_HIDEOUT_B1F

AquaHideout_B1F_MapEvents:: @ 838CF08
	map_events AquaHideout_B1F_MapObjects, AquaHideout_B1F_MapWarps, 0x0, 0x0
