#define MACRO_ADDUNITGROUP(SIDE,NAME,PRIORITY) class PMCS_##SIDE##_##NAME { \
	displayName = CSTRING(UnitGroup_##NAME); \
	priority = PRIORITY; \
}

#define MACRO_ADDUNITSUBCAT(SIDE,NAME) class PMCS_##SIDE##_##NAME { \
	displayName = CSTRING(UnitGroup_##NAME); \
}

#define UNITGROUP(SIDE,NAME) QUOTE(PMCS_##SIDE##_##NAME)

#define WITEM(NAME,SLOT,ITEM) class LinkedItems##NAME { \
	item = QUOTE(ITEM); \
	slot = QUOTE(SLOT); \
}

#define WOPTIC(ITEM) WITEM(Optic,CowsSlot,##ITEM##)
#define WPOINTER(ITEM) WITEM(Pointer,PointerSlot,##ITEM##)
#define WMUZZLE(ITEM) WITEM(Muzzle,MuzzleSlot,##ITEM##)
#define WBIPOD(ITEM) WITEM(Bipod,BipodSlot,##ITEM##)
#define WUNDERBARREL(ITEM) WITEM(Under,UnderBarrelSlot,##ITEM##)

#define MAG_2(a) QUOTE(a), QUOTE(a)
#define MAG_3(a) QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_4(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_5(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_6(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_7(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_8(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_9(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_10(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_11(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)
#define MAG_12(a) QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a), QUOTE(a)