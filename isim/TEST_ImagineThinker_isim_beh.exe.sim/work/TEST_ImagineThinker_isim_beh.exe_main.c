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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004263493946_0687349335_init();
    work_m_00000000001365398986_2942457252_init();
    work_m_00000000001623378472_2286961304_init();
    work_m_00000000001005129628_2035480523_init();
    work_m_00000000003844792070_3222512165_init();
    work_m_00000000003346070003_1494558838_init();
    work_m_00000000001581961845_0776138857_init();
    work_m_00000000002372486389_3647762321_init();
    work_m_00000000003695481360_0886308060_init();
    work_m_00000000001162014377_2598732222_init();
    work_m_00000000001280479645_3135283868_init();
    work_m_00000000003296535117_0695798319_init();
    work_m_00000000002823255748_0403628338_init();
    work_m_00000000000813638556_1428211223_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000813638556_1428211223");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
