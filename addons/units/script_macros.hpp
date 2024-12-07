#define GMETA(TYPE) side = 1; faction = QGVAR(blufor_##TYPE); icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; rarityGroup = 0.5

#define UNIT_XX(IDX,POS,RANK,UNIT) class Unit##IDX## { \
    position[] = POS; \
    rank = QUOTE(RANK); \
    side = 1; \
    vehicle = QUOTE(UNIT); \
}

#define UNIT_0_POS {0,0,0}
#define UNIT_0(RANK,UNIT) UNIT_XX(0,UNIT_0_POS,RANK,UNIT)

#define UNIT_1_POS {0,-2,0}
#define UNIT_1(RANK,UNIT) UNIT_XX(1,UNIT_1_POS,RANK,UNIT)

#define UNIT_2_POS {0,-4,0}
#define UNIT_2(RANK,UNIT) UNIT_XX(2,UNIT_2_POS,RANK,UNIT)

#define UNIT_3_POS {0,-6,0}
#define UNIT_3(RANK,UNIT) UNIT_XX(3,UNIT_3_POS,RANK,UNIT)

#define UNIT_4_POS {2,0,0}
#define UNIT_4(RANK,UNIT) UNIT_XX(4,UNIT_4_POS,RANK,UNIT)

#define UNIT_5_POS {2,-2,0}
#define UNIT_5(RANK,UNIT) UNIT_XX(5,UNIT_5_POS,RANK,UNIT)

#define UNIT_6_POS {2,-4,0}
#define UNIT_6(RANK,UNIT) UNIT_XX(6,UNIT_6_POS,RANK,UNIT)

#define UNIT_7_POS {2,-6,0}
#define UNIT_7(RANK,UNIT) UNIT_XX(7,UNIT_7_POS,RANK,UNIT)

#define MACRO_ADDUNITGROUP(SIDE,IDX,NAME,PRIORITY) class GVAR(SIDE##_##IDX) { \
    displayName = NAME; \
    priority = PRIORITY; \
}

#define MACRO_ADDUNITSUBCAT(SIDE,IDX,NAME) class GVAR(SIDE##_##IDX) { \
    displayName = NAME; \
}

#define UNITGROUP(SIDE,NAME) QGVAR(SIDE##_##NAME)
#define UCOPY(IDX) class GVAR(blufor_W_##IDX) : GVAR(blufor_D_##IDX) { faction = QGVAR(blufor_W); };

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

#define B_VCREW(CAMO) author = ECSTRING(common,TFPTeam); faction = QGVAR(blufor_##CAMO); crew = QGVAR(blufor_##CAMO##_Rifleman)
#define B_HCREW(CAMO) author = ECSTRING(common,TFPTeam); faction = QGVAR(blufor_##CAMO); crew = QGVAR(blufor_##CAMO##_PilotHelicopter)

#define VECH_V(CAMO,NEWID,OLDID) class GVAR(blufor_vech_##CAMO##_##NEWID) : OLDID { B_VCREW(CAMO); scope = 2; scopeCurator = 2; }
#define VECH_H(CAMO,NEWID,OLDID) class GVAR(blufor_vech_##CAMO##_##NEWID) : OLDID { B_HCREW(CAMO); scope = 2; scopeCurator = 2; editorSubcategory = "EdSubcat_Helicopters"; }

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

#define UPAIR(IDX) QGVAR(blufor_W_##IDX),QGVAR(blufor_D_##IDX)
#define UVPAIR(IDX) QGVAR(blufor_vech_W_##IDX),QGVAR(blufor_vech_D_##IDX)

#define GVECH(CAMO,ID) GVAR(blufor_vech_##CAMO##_##ID)
#define QGVECH(CAMO,ID) QGVAR(blufor_vech_##CAMO##_##ID)
