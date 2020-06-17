/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_all_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 19:00:24 by mg                #+#    #+#             */
/*   Updated: 2020/06/15 15:07:50 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "main_pf_flag_a_test.c"
#include "main_pf_flag_c_test.c"
#include "main_pf_flag_d_test.c"
#include "main_pf_flag_e_test.c"
#include "main_pf_flag_f_test.c"
#include "main_pf_flag_g_test.c"
#include "main_pf_flag_i_test.c"
#include "main_pf_flag_LF_test.c"
#include "main_pf_flag_n_test.c"
#include "main_pf_flag_o_test.c"
#include "main_pf_flag_p_test.c"
#include "main_pf_flag_s_test.c"
#include "main_pf_flag_u_test.c"
#include "main_pf_flag_x_test.c"
#include <stdio.h>

int main(void)
{
//	pf_A_test();
	pf_c_test();
	pf_d_test();
	pf_e_test();
	pf_f_test();
	pf_g_test();
	pf_i_test();
	pf_LF_test();
	pf_n_test();
	pf_o_test();
	pf_p_test();
	pf_s_test();
	pf_u_test();
	pf_X_test();
    return (0);
}