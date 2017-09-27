/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Guy/Documents/Verilog Projects/ImagineThinker/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {255U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {15U, 0U};



static void Cont_44_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3520U);
    t5 = *((char **)t2);
    t2 = (t0 + 3360U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t5, 8);
    t2 = (t0 + 3840U);
    t9 = *((char **)t2);
    t2 = (t0 + 3680U);
    t10 = *((char **)t2);
    xsi_vlogtype_concat(t8, 16, 16, 2U, t10, 8, t9, 8);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 16, t4, 16, t8, 16);
    t2 = (t0 + 6888);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 65535U;
    t17 = t16;
    t18 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t24 = (t0 + 6776);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t10[8];
    char t11[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 4000U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(164, ng0);

LAB107:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB36:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 3360U);
    t8 = *((char **)t7);
    t7 = (t0 + 3680U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t8, 8, t9, 8);
    t7 = (t0 + 4720);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3520U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t3, 8, t4, 8);
    t2 = (t0 + 4880);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB35;

LAB9:    xsi_set_current_line(56, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3520U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t3, 8, t4, 8);
    t2 = (t0 + 4880);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB35;

LAB11:    xsi_set_current_line(61, ng0);

LAB38:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 8, t4, 8, t7, 8);
    t3 = (t0 + 3520U);
    t8 = *((char **)t3);
    t3 = (t0 + 3840U);
    t9 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 8, t8, 8, t9, 8);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 8, t11, 8, t13, 8);
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3360U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 8, t3, 8, t4, 8);
    t2 = (t0 + 3520U);
    t7 = *((char **)t2);
    t2 = (t0 + 3680U);
    t8 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 8, t7, 8, t8, 8);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 8, t11, 8, t13, 8);
    t2 = (t0 + 4880);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 8);
    goto LAB35;

LAB13:    xsi_set_current_line(66, ng0);

LAB39:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB15:    xsi_set_current_line(71, ng0);

LAB40:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3520U);
    t4 = *((char **)t3);
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB35;

LAB17:    xsi_set_current_line(76, ng0);

LAB41:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3520U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_unary_minus(t10, 8, t3, 8);
    t2 = (t0 + 4880);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB35;

LAB19:    xsi_set_current_line(81, ng0);

LAB42:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB44;

LAB43:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB45;

LAB46:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(88, ng0);

LAB52:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB50:    goto LAB35;

LAB21:    xsi_set_current_line(94, ng0);

LAB53:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t8);
    t23 = (t19 ^ t20);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t8);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB57;

LAB54:    if (t27 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t10) = 1;

LAB57:    t15 = (t10 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(101, ng0);

LAB62:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB60:    goto LAB35;

LAB23:    xsi_set_current_line(107, ng0);

LAB63:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB65;

LAB64:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB67;

LAB66:    *((unsigned int *)t10) = 1;

LAB67:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(114, ng0);

LAB73:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB71:    goto LAB35;

LAB25:    xsi_set_current_line(120, ng0);

LAB74:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB76;

LAB75:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB77;

LAB78:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(127, ng0);

LAB84:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB82:    goto LAB35;

LAB27:    xsi_set_current_line(133, ng0);

LAB85:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t8);
    t23 = (t19 ^ t20);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t8);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB87;

LAB86:    if (t27 != 0)
        goto LAB88;

LAB89:    t15 = (t10 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(140, ng0);

LAB94:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB92:    goto LAB35;

LAB29:    xsi_set_current_line(146, ng0);

LAB95:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB97;

LAB96:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB97;

LAB100:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB99;

LAB98:    *((unsigned int *)t10) = 1;

LAB99:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(153, ng0);

LAB105:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB103:    goto LAB35;

LAB31:    xsi_set_current_line(159, ng0);

LAB106:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 4320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 8);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 8);
    *((unsigned int *)t3) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 255U);
    t8 = (t0 + 4720);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4320U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 0);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 255U);
    t7 = (t0 + 4880);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB35;

LAB44:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(83, ng0);

LAB51:    xsi_set_current_line(84, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB50;

LAB56:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(96, ng0);

LAB61:    xsi_set_current_line(97, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB60;

LAB65:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(109, ng0);

LAB72:    xsi_set_current_line(110, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB71;

LAB76:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB78;

LAB77:    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB80:    xsi_set_current_line(122, ng0);

LAB83:    xsi_set_current_line(123, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB82;

LAB87:    *((unsigned int *)t10) = 1;
    goto LAB89;

LAB88:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(135, ng0);

LAB93:    xsi_set_current_line(136, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB92;

LAB97:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB99;

LAB101:    xsi_set_current_line(148, ng0);

LAB104:    xsi_set_current_line(149, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 4720);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB103;

}

static void Always_171_2(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 6488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(172, ng0);

LAB5:    xsi_set_current_line(173, ng0);
    t4 = (t0 + 4000U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 5040);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(174, ng0);
    t7 = (t0 + 3360U);
    t8 = *((char **)t7);
    t7 = (t0 + 3680U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t8 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB23;

LAB22:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB24;

LAB25:    t13 = (t0 + 5040);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB30;

LAB27:    if (t23 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t10) = 1;

LAB30:    t11 = (t0 + 5040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(176, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB32;

LAB31:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB34;

LAB33:    *((unsigned int *)t10) = 1;

LAB34:    t11 = (t0 + 5040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(177, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB37;

LAB36:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB38;

LAB39:    t11 = (t0 + 5040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB42;

LAB41:    if (t23 != 0)
        goto LAB43;

LAB44:    t11 = (t0 + 5040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t3 = (t0 + 3680U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB45:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB48;

LAB47:    *((unsigned int *)t10) = 1;

LAB48:    t11 = (t0 + 5040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB23:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t10) = 1;
    goto LAB25;

LAB29:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB32:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB37:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB42:    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB43:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB46:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB48;

}


extern void work_m_00000000000675325109_0886308060_init()
{
	static char *pe[] = {(void *)Cont_44_0,(void *)Always_47_1,(void *)Always_171_2};
	xsi_register_didat("work_m_00000000000675325109_0886308060", "isim/TEST_ALU_isim_beh.exe.sim/work/m_00000000000675325109_0886308060.didat");
	xsi_register_executes(pe);
}
