#pragma once

#define TOUCHDOWN_COUNT 17

static const TOUCHDOWNVTX TOUCHDOWN_GEARDOWN[TOUCHDOWN_COUNT] =
{
{ { 0, -5.4, 34.7891 }, 2.5e6, 2.5e5, 1.6, 0.1},
{ { -5.25783, -6.4, -4.22095 }, 2.5e6, 2.5e5, 3.0, 0.2},
{ { 5.25783, -6.4, -4.22095 }, 2.5e6, 2.5e5, 3.0, 0.2},

{ { -22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},
{ { 22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},

{ { -22.62,-1.2,-18.66 }, 2.5e7, 2.5e5, 3.0},
{ { 22.62,-1.2,-18.66 }, 2.5e7, 2.5e5, 3.0},

{ { -22.36,-1.04,-18.7 }, 2.5e7, 2.5e5, 3.0},
{ { 22.36,-1.04,-18.7 }, 2.5e7, 2.5e5, 3.0},

{ { -22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},
{ { 22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},

{ { -0.35,1.1,-41.8}, 2.5e7, 2.5e5, 3.0},
{ { 0.35,1.1,-41.8}, 2.5e7, 2.5e5, 3.0},

{ { -0.4,1.92,-41.8}, 2.5e7, 2.5e5, 3.0},
{ { 0.4,1.92,-41.8}, 2.5e7, 2.5e5, 3.0},

{ { 0,2.9,39.3 }, 2.5e7, 2.5e5, 3.0},
{ { 0,1,42.9 }, 2.5e7, 2.5e5, 3.0}
};

static const TOUCHDOWNVTX TOUCHDOWN_GEARUP[TOUCHDOWN_COUNT] =
{
{ { 0, -3.90729, 8.8675 }, 2.5e6, 2.5e5, 1.6, 0.1},
{ { -3.112, -4.10324, -5.54899 }, 2.5e6, 2.5e5, 3.0, 0.2},
{ { 3.112, -4.10324, -5.54899 }, 2.5e6, 2.5e5, 3.0, 0.2},

{ { -22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},
{ { 22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},

{ { -22.62,-1.2,-18.66 }, 2.5e7, 2.5e5, 3.0},
{ { 22.62,-1.2,-18.66 }, 2.5e7, 2.5e5, 3.0},

{ { -22.36,-1.04,-18.7 }, 2.5e7, 2.5e5, 3.0},
{ { 22.36,-1.04,-18.7 }, 2.5e7, 2.5e5, 3.0},

{ { -22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},
{ { 22.9,-1.16,-20.74 }, 2.5e7, 2.5e5, 3.0},

{ { -0.35,1.1,-41.8}, 2.5e7, 2.5e5, 3.0},
{ { 0.35,1.1,-41.8}, 2.5e7, 2.5e5, 3.0},

{ { -0.4,1.92,-41.8}, 2.5e7, 2.5e5, 3.0},
{ { 0.4,1.92,-41.8}, 2.5e7, 2.5e5, 3.0},

{ { 0,2.9,39.3 }, 2.5e7, 2.5e5, 3.0},
{ { 0,1,42.9 }, 2.5e7, 2.5e5, 3.0}
};

#define V3_LGT_BCN_1 _V(0, 4.38705, 0.572006)
#define V3_LGT_BCN_2 _V(0, -4.25377, 0.572006)
#define V3_LGT_STROBE_T _V(0, 1.83575, -42.6624)
#define V3_LGT_STROBE_L _V(-21.6341, -0.916063, -17.7432)
#define V3_LGT_STROBE_R _V( 21.6341, -0.916063, -17.7432)
#define V3_LGT_NAV_RED _V(-21.7348, -0.953238, -18.1065)
#define V3_LGT_NAV_GREEN _V( 21.7348, -0.953238, -18.1065)
#define V3_LGT_NAV_WHITE _V(0, 9.55316, -29.5321)

#define V3_LGT_LND_SPOT_R _V( 4.80442, -4.13182, -2.55182)
#define V3_LGT_LND_SPOT_L _V(-4.80442, -4.13182, -2.55182)

#define V3_EXHAUST_MAIN_R _V( 10.3742, -0.639674, -18.8947)
#define V3_EXHAUST_MAIN_L _V(-10.3742, -0.639674, -18.8947)

#define V3_EXHAUST_OMS_R _V( 1.55764, -1.12403, -21.2298)
#define V3_EXHAUST_OMS_L _V(-1.55764, -1.12403, -21.2298)

#define V3_RAMX_EXHAUST_001 _V(-2.01431, -2.5642, -6.30302)
#define V3_RAMX_EXHAUST_002 _V(0.0163063, -2.5642, -7.17745)
#define V3_RAMX_EXHAUST_003 _V(1.95209, -2.5642, -6.30302)
#define V3_RAMX_EXHAUST_004 _V(0.938869, -2.64359, -5.74314)
#define V3_RAMX_EXHAUST_005 _V(-0.996912, -2.64359, -5.74314)

#define V3_DOCKING_PORT _V(0.731475, 2.74005, 32.0356)

#define V3_BAY_ATTACH_001 _V(0, 0.26, 30.13)
#define V3_BAY_ATTACH_002 _V(0, 0.26, 28.53)
#define V3_BAY_ATTACH_003 _V(0, 0.26, 26.93)
#define V3_BAY_ATTACH_004 _V(0, 0.26, 25.33)
#define V3_BAY_ATTACH_005 _V(0, 0.26, 23.73)
#define V3_BAY_ATTACH_006 _V(0, 0.26, 22.13)
#define V3_BAY_ATTACH_007 _V(0, 0.26, 20.53)
#define V3_BAY_ATTACH_008 _V(0, 0.26, 18.93)

#define V3_RCSA_UP_1 _V(-0.981987, 2.44676, -37.2875)
#define V3_RCSA_UP_2 _V(-0.970424, 2.43978, -37.7014)
#define V3_RCSA_UP_3 _V(-0.958959, 2.42371, -38.074)
#define V3_RCSA_UP_4 _V(-0.936203, 2.4007, -38.4596)
#define V3_RCSA_UP_5 _V(1.00431, 2.44676, -37.2875)
#define V3_RCSA_UP_6 _V(0.977222, 2.43978, -37.7014)
#define V3_RCSA_UP_7 _V(0.953535, 2.42371, -38.074)
#define V3_RCSA_UP_8 _V(0.915554, 2.4007, -38.4596)

#define V3_RCSA_LF_1 _V(-1.10955, 1.24193, -37.7926)
#define V3_RCSA_LF_2 _V(-1.09441, 1.24193, -38.2376)
#define V3_RCSA_LF_3 _V(-1.08532, 1.24193, -38.6519)

#define V3_RCSA_RT_1 _V(1.13057, 1.24193, -37.8252)
#define V3_RCSA_RT_2 _V(1.10173, 1.24193, -38.2544)
#define V3_RCSA_RT_3 _V(1.06625, 1.24193, -38.6426)

#define V3_RCSA_DN_1 _V(-1.03756, 1.41603, -39.1797)
#define V3_RCSA_DN_2 _V(-0.984831, 1.41603, -39.5698)
#define V3_RCSA_DN_3 _V(-0.95627, 1.41603, -39.9541)
#define V3_RCSA_DN_4 _V(1.00439, 1.41603, -39.5698)
#define V3_RCSA_DN_5 _V(0.976322, 1.41603, -39.9541)
#define V3_RCSA_DN_6 _V(1.03323, 1.41603, -39.1797)

#define V3_RCSF_UP_1 _V(-0.491595, 1.79097, 41.7081)
#define V3_RCSF_UP_2 _V(-0.248674, 1.9486, 41.7081)
#define V3_RCSF_UP_3 _V(0.202959, 1.9486, 41.7081)
#define V3_RCSF_UP_4 _V(0.508715, 1.79097, 41.7081)

#define V3_RCSF_DN_1 _V(-0.802926, 1.16421, 41.7612)
#define V3_RCSF_DN_2 _V(-0.891044, 1.16421, 41.5216)
#define V3_RCSF_DN_3 _V(-0.979162, 1.16421, 41.2915)
#define V3_RCSF_DN_4 _V(0.964523, 1.16421, 41.2915)
#define V3_RCSF_DN_5 _V(0.885584, 1.16421, 41.5216)
#define V3_RCSF_DN_6 _V(0.791676, 1.16421, 41.7612)

#define V3_RCSF_LF_1 _V(-1.03177, 1.45836, 40.9108)
#define V3_RCSF_LF_2 _V(-1.14249, 1.45836, 40.5977)
#define V3_RCSF_LF_3 _V(-1.22194, 1.45836, 40.2846)

#define V3_RCSF_RT_1 _V(1.03487, 1.45836, 40.9108)
#define V3_RCSF_RT_2 _V(1.15056, 1.45836, 40.5977)
#define V3_RCSF_RT_3 _V(1.22791, 1.45836, 40.2846)

#define V3_RCSF_RFW_1 _V( 1.52461, -0.152786, 37.6405)
#define V3_RCSF_RFW_2 _V( 1.32528, -0.0211259, 37.6405)
#define V3_RCSF_RFW_3 _V( 1.11784, -0.143702, 37.6405)
#define V3_RCSF_LFW_1 _V(-1.52461, -0.152786, 37.6405)
#define V3_RCSF_LFW_2 _V(-1.32528, -0.0211259, 37.6405)
#define V3_RCSF_LFW_3 _V(-1.11784, -0.143702, 37.6405)

#define V3_RCSA_BK_1 _V(0.892149, -0.972591, -24.0578)
#define V3_RCSA_BK_2 _V(0.374163, -0.972591, -24.0578)
#define V3_RCSA_BK_3 _V(0.648756, -1.14268, -23.3155)
#define V3_RCSA_BK_4 _V(-0.554968, -1.14268, -23.3155)
#define V3_RCSA_BK_5 _V(-0.82956, -0.972591, -24.0578)
#define V3_RCSA_BK_6 _V(-0.311574, -0.972591, -24.0578)

#define V3_RCSR_UP_001 _V(11.5629, -0.0207598, -13.8308)
#define V3_RCSR_UP_002 _V(11.5629, -0.0207598, -13.4302)
#define V3_RCSR_UP_003 _V(11.5629, -0.0207598, -13.0032)
#define V3_RCSR_UP_004 _V(11.5629, -0.0207598, -12.5975)

#define V3_RCSR_DN_001 _V(11.5629, -1.94325, -13.8308)
#define V3_RCSR_DN_002 _V(11.5629, -1.94325, -13.4302)
#define V3_RCSR_DN_003 _V(11.5629, -1.94325, -13.0032)
#define V3_RCSR_DN_004 _V(11.5629, -1.94325, -12.5975)

#define V3_RCSL_UP_001 _V(-11.5629, -0.0207598, -13.8308)
#define V3_RCSL_UP_002 _V(-11.5629, -0.0207598, -13.4302)
#define V3_RCSL_UP_003 _V(-11.5629, -0.0207598, -13.0032)
#define V3_RCSL_UP_004 _V(-11.5629, -0.0207598, -12.5975)

#define V3_RCSL_DN_001 _V(-11.5629, -1.94325, -13.8308)
#define V3_RCSL_DN_002 _V(-11.5629, -1.94325, -13.4302)
#define V3_RCSL_DN_003 _V(-11.5629, -1.94325, -13.0032)
#define V3_RCSL_DN_004 _V(-11.5629, -1.94325, -12.5975)

#define MGID_Cylinder001 0
#define MGID_WING_FTHR_R 1
#define MGID_WING_WRDROP_TIP_R 2
#define MGID_WING_ACS_OUT_R 3
#define MGID_BAY_DOOR_R 4
#define MGID_BAY_DOOR_INT_R 5
#define MGID_VISOR_EXT_FORE 6
#define MGID_Object010 7
#define MGID_VISOR_EXT_AFT 8
#define MGID_Object009 9
#define MGID_Line002 10
#define MGID_WING_ACS_INB_R 11
#define MGID_Box002 12
#define MGID_RAMX_LOWER_SLAT 13
#define MGID_RAMX_UPPER_SLAT 14
#define MGID_CANARD_DOOR_R 15
#define MGID_CANARD_COVER_R 16
#define MGID_Object017 17
#define MGID_Object030 18
#define MGID_WING_FTHR_L 19
#define MGID_WING_WRDROP_TIP_L 20
#define MGID_WING_ACS_OUT_L 21
#define MGID_Object129 22
#define MGID_CANARD_WING_R 23
#define MGID_Object1238 24
#define MGID_Object1291 25
#define MGID_Object019 26
#define MGID_RAMX_DOOR 27
#define MGID_GEAR_STRUT_R 28
#define MGID_GEAR_TRUCK_R 29
#define MGID_GEAR_STRUT_C 30
#define MGID_GEAR_TRUCK_C 31
#define MGID_GEAR_DOOR_C_AR 32
#define MGID_Object034 33
#define MGID_GEAR_DOOR_R 34
#define MGID_GEAR_HATCH_R 35
#define MGID_Object038 36
#define MGID_GEAR_DOOR_C_FR 37
#define MGID_RMAIN_INTAKE_DOOR 38
#define MGID_Object047 39
#define MGID_RUDDER 40
#define MGID_CANARD_WING_L 41
#define MGID_Object356 42
#define MGID_GEAR_DOOR_C_FL 43
#define MGID_GEAR_HATCH_L 44
#define MGID_GEAR_DOOR_L 45
#define MGID_GEAR_TRUCK_L 46
#define MGID_GEAR_STRUT_L 47
#define MGID_GEAR_DOOR_C_AL 48
#define MGID_Object1225 49
#define MGID_CANARD_DOOR_L 50
#define MGID_CANARD_COVER_L 51
#define MGID_GEAR_FRAME_R 52
#define MGID_GEAR_FRAME_L 53
#define MGID_WING_ACS_INB_L 54
#define MGID_Object1275 55
#define MGID_Object1328 56
#define MGID_Object1346 57
#define MGID_BAY_DOOR_L 58
#define MGID_BAY_DOOR_INT_L 59
#define MGID_WINGS 60
#define MGID_RCS_DOOR_R 61
#define MGID_RCS_THRUSTERS_R 62
#define MGID_Object1386 63
#define MGID_RCS_DOOR_L 64
#define MGID_RCS_THRUSTERS_L 65
#define MGID_TAILWHEEL_DOOR_L 66
#define MGID_TAIL_WHEEL 67
#define MGID_TAILWHEEL_DOOR_R 68
#define MGID_ANT_DISH 69
#define MGID_LMAIN_INTAKE_DOOR 70
#define MGID_VISOR_EXT_WINDOWS 71