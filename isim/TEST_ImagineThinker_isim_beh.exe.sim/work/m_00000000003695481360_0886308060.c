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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {255U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {11U, 0U};
static unsigned int ng12[] = {12U, 0U};
static unsigned int ng13[] = {13U, 0U};
static unsigned int ng14[] = {14U, 0U};
static unsigned int ng15[] = {15U, 0U};
static unsigned int ng16[] = {7U, 0U};



static void Cont_46_0(char *t0)
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

LAB0:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3656U);
    t5 = *((char **)t2);
    t2 = (t0 + 3496U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t5, 8);
    t2 = (t0 + 3976U);
    t9 = *((char **)t2);
    t2 = (t0 + 3816U);
    t10 = *((char **)t2);
    xsi_vlogtype_concat(t8, 16, 16, 2U, t10, 8, t9, 8);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 16, t4, 16, t8, 16);
    t2 = (t0 + 7272);
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
    t24 = (t0 + 7160);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Initial_48_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5176);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_51_2(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 7176);
    *((int *)t2) = 1;
    t3 = (t0 + 6624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 4136U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(173, ng0);

LAB128:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB38:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 3496U);
    t8 = *((char **)t7);
    t7 = (t0 + 3816U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t8, 8, t9, 8);
    t7 = (t0 + 4856);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t3, 8, t4, 8);
    t2 = (t0 + 5016);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB37;

LAB9:    xsi_set_current_line(60, ng0);

LAB39:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t3, 8, t4, 8);
    t2 = (t0 + 5016);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB37;

LAB11:    xsi_set_current_line(65, ng0);

LAB40:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 8, t4, 8, t7, 8);
    t3 = (t0 + 3656U);
    t8 = *((char **)t3);
    t3 = (t0 + 3976U);
    t9 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 8, t8, 8, t9, 8);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 8, t11, 8, t13, 8);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3496U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 8, t3, 8, t4, 8);
    t2 = (t0 + 3656U);
    t7 = *((char **)t2);
    t2 = (t0 + 3816U);
    t8 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 8, t7, 8, t8, 8);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 8, t11, 8, t13, 8);
    t2 = (t0 + 5016);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 8);
    goto LAB37;

LAB13:    xsi_set_current_line(70, ng0);

LAB41:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB37;

LAB15:    xsi_set_current_line(75, ng0);

LAB42:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 3656U);
    t4 = *((char **)t3);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB37;

LAB17:    xsi_set_current_line(80, ng0);

LAB43:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_unary_minus(t10, 8, t3, 8);
    t2 = (t0 + 5016);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 8);
    goto LAB37;

LAB19:    xsi_set_current_line(85, ng0);

LAB44:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB45:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB47;

LAB48:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(92, ng0);

LAB54:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB52:    goto LAB37;

LAB21:    xsi_set_current_line(98, ng0);

LAB55:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
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
        goto LAB59;

LAB56:    if (t27 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t10) = 1;

LAB59:    memset(t11, 0, 8);
    t15 = (t10 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t15) != 0)
        goto LAB62;

LAB63:    t22 = (t11 + 4);
    t35 = *((unsigned int *)t11);
    t36 = *((unsigned int *)t22);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB64;

LAB65:    memcpy(t14, t11, 8);

LAB66:    t93 = (t14 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t14);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(105, ng0);

LAB82:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB80:    goto LAB37;

LAB23:    xsi_set_current_line(111, ng0);

LAB83:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB85;

LAB84:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB85;

LAB88:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB87;

LAB86:    *((unsigned int *)t10) = 1;

LAB87:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(118, ng0);

LAB93:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB91:    goto LAB37;

LAB25:    xsi_set_current_line(124, ng0);

LAB94:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB96;

LAB95:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB96;

LAB99:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB97;

LAB98:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(131, ng0);

LAB104:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB102:    goto LAB37;

LAB27:    xsi_set_current_line(137, ng0);

LAB105:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
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
        goto LAB107;

LAB106:    if (t27 != 0)
        goto LAB108;

LAB109:    t15 = (t10 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(144, ng0);

LAB114:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB112:    goto LAB37;

LAB29:    xsi_set_current_line(150, ng0);

LAB115:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB117;

LAB116:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB117;

LAB120:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB119;

LAB118:    *((unsigned int *)t10) = 1;

LAB119:    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(157, ng0);

LAB125:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB123:    goto LAB37;

LAB31:    xsi_set_current_line(163, ng0);

LAB126:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 4456U);
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
    t8 = (t0 + 4856);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4456U);
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
    t7 = (t0 + 5016);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    goto LAB37;

LAB33:    xsi_set_current_line(168, ng0);

LAB127:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t0 + 5016);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB37;

LAB46:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t10) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(87, ng0);

LAB53:    xsi_set_current_line(88, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 4856);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB52;

LAB58:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t11) = 1;
    goto LAB63;

LAB62:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    t38 = (t0 + 3656U);
    t39 = *((char **)t38);
    t38 = (t0 + 3976U);
    t40 = *((char **)t38);
    memset(t12, 0, 8);
    t38 = (t39 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB70;

LAB67:    if (t51 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t12) = 1;

LAB70:    memset(t13, 0, 8);
    t55 = (t12 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t55) != 0)
        goto LAB73;

LAB74:    t62 = *((unsigned int *)t11);
    t63 = *((unsigned int *)t13);
    t64 = (t62 & t63);
    *((unsigned int *)t14) = t64;
    t65 = (t11 + 4);
    t66 = (t13 + 4);
    t67 = (t14 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t54 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t13) = 1;
    goto LAB74;

LAB73:    t61 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB74;

LAB75:    t73 = *((unsigned int *)t14);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t14) = (t73 | t74);
    t75 = (t11 + 4);
    t76 = (t13 + 4);
    t77 = *((unsigned int *)t11);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t13);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t91 & t87);
    t92 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t92 & t88);
    goto LAB77;

LAB78:    xsi_set_current_line(100, ng0);

LAB81:    xsi_set_current_line(101, ng0);
    t99 = ((char*)((ng9)));
    t100 = (t0 + 4856);
    xsi_vlogvar_assign_value(t100, t99, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB80;

LAB85:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB87;

LAB89:    xsi_set_current_line(113, ng0);

LAB92:    xsi_set_current_line(114, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 4856);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB91;

LAB96:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB98;

LAB97:    *((unsigned int *)t10) = 1;
    goto LAB98;

LAB100:    xsi_set_current_line(126, ng0);

LAB103:    xsi_set_current_line(127, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 4856);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB102;

LAB107:    *((unsigned int *)t10) = 1;
    goto LAB109;

LAB108:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(139, ng0);

LAB113:    xsi_set_current_line(140, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 4856);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB112;

LAB117:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB119;

LAB121:    xsi_set_current_line(152, ng0);

LAB124:    xsi_set_current_line(153, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t0 + 4856);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB123;

}

static void Always_180_3(char *t0)
{
    char t10[8];
    char t26[8];
    char t38[8];
    char t53[8];
    char t61[8];
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
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7192);
    *((int *)t2) = 1;
    t3 = (t0 + 6872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(181, ng0);

LAB5:    xsi_set_current_line(182, ng0);
    t4 = (t0 + 4136U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 5176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 5176);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(183, ng0);
    t7 = (t0 + 3496U);
    t8 = *((char **)t7);
    t7 = (t0 + 3816U);
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

LAB25:    t13 = (t0 + 5176);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
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

LAB30:    memset(t26, 0, 8);
    t11 = (t10 + 4);
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t11) != 0)
        goto LAB33;

LAB34:    t13 = (t26 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB35;

LAB36:    memcpy(t61, t26, 8);

LAB37:    t93 = (t0 + 5176);
    xsi_vlogvar_assign_value(t93, t61, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB50;

LAB49:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB52;

LAB51:    *((unsigned int *)t10) = 1;

LAB52:    t11 = (t0 + 5176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB55;

LAB54:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB56;

LAB57:    t11 = (t0 + 5176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
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
        goto LAB60;

LAB59:    if (t23 != 0)
        goto LAB61;

LAB62:    t11 = (t0 + 5176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 3496U);
    t4 = *((char **)t3);
    t3 = (t0 + 3816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB64;

LAB63:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB66;

LAB65:    *((unsigned int *)t10) = 1;

LAB66:    t11 = (t0 + 5176);
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

LAB31:    *((unsigned int *)t26) = 1;
    goto LAB34;

LAB33:    t12 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB34;

LAB35:    t35 = (t0 + 3656U);
    t36 = *((char **)t35);
    t35 = (t0 + 3976U);
    t37 = *((char **)t35);
    memset(t38, 0, 8);
    t35 = (t36 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t35);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB41;

LAB38:    if (t49 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t38) = 1;

LAB41:    memset(t53, 0, 8);
    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t54) != 0)
        goto LAB44;

LAB45:    t62 = *((unsigned int *)t26);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t26 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB40:    t52 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t53) = 1;
    goto LAB45;

LAB44:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB45;

LAB46:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t26 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t26);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB48;

LAB50:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB52;

LAB55:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t10) = 1;
    goto LAB57;

LAB60:    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB61:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB62;

LAB64:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

}


extern void work_m_00000000003695481360_0886308060_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Initial_48_1,(void *)Always_51_2,(void *)Always_180_3};
	xsi_register_didat("work_m_00000000003695481360_0886308060", "isim/TEST_ImagineThinker_isim_beh.exe.sim/work/m_00000000003695481360_0886308060.didat");
	xsi_register_executes(pe);
}
