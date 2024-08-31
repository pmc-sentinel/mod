#define MACRO_ADDUNITGROUP(SIDE,IDX,NAME,PRIORITY) class PMCS_##SIDE##_##IDX { \
    displayName = NAME; \
    priority = PRIORITY; \
}

#define MACRO_ADDUNITSUBCAT(SIDE,IDX,NAME) class PMCS_##SIDE##_##IDX { \
    displayName = NAME; \
}

#define UNITGROUP(SIDE,NAME) QUOTE(PMCS_##SIDE##_##NAME)
#define UCOPY(IDX) class PMCS_B_W_##IDX : PMCS_B_D_##IDX { faction = "PMCS_B_W"; };

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

#define B_VCREW(CAMO) author = ECSTRING(common,PMCSTeam); faction = QUOTE(PMCS_B_##CAMO); crew = QUOTE(PMCS_B_##CAMO##_Rifleman)
#define B_HCREW(CAMO) author = ECSTRING(common,PMCSTeam); faction = QUOTE(PMCS_B_##CAMO); crew = QUOTE(PMCS_B_##CAMO##_PilotHelicopter)

#define VECH_V(CAMO,NEWID,OLDID) class PMCS_B_##CAMO##_##NEWID : OLDID { B_VCREW(CAMO); }
#define VECH_H(CAMO,NEWID,OLDID) class PMCS_B_##CAMO##_##NEWID : OLDID { B_HCREW(CAMO); editorSubcategory = "EdSubcat_Helicopters"; }

#define GV_OR(CAMO,NEWID,OLDID) class OLDID; VECH_V(CAMO,NEWID,OLDID);
#define GV_OR_NI(CAMO,NEWID,OLDID) VECH_V(CAMO,NEWID,OLDID);

#define AV_OR(CAMO,NEWID,OLDID) class OLDID; VECH_H(CAMO,NEWID,OLDID);
#define AV_OR_NI(CAMO,NEWID,OLDID) VECH_H(CAMO,NEWID,OLDID);

#define GV_D_OR(NEWID,OLDID) GV_OR(D,NEWID,OLDID)
#define GV_D_OR_NI(NEWID,OLDID) GV_OR_NI(D,NEWID,OLDID)
#define AV_D_OR(NEWID,OLDID) AV_OR(D,NEWID,OLDID)
#define AV_D_OR_NI(NEWID,OLDID) AV_OR_NI(D,NEWID,OLDID)

#define GV_W_OR(NEWID,OLDID) GV_OR(W,NEWID,OLDID)
#define GV_W_OR_NI(NEWID,OLDID) GV_OR_NI(W,NEWID,OLDID)
#define AV_W_OR(NEWID,OLDID) AV_OR(W,NEWID,OLDID)
#define AV_W_OR_NI(NEWID,OLDID) AV_OR_NI(W,NEWID,OLDID)