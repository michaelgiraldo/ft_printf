/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_zsandbox_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 23:55:07 by me                #+#    #+#             */
/*   Updated: 2020/06/21 22:09:59 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
#include <float.h>

int main (void)
{
	   printf("############ISSUES#############################\n");
	   printf("| pf |%%.10Lf|%.10Lf|\n", -56.47852012685l);
	ft_printf("| ft |%%.10Lf|%.10Lf|\n", -56.47852012685l);
	   printf("############ISSUES#############################\n");
	   printf("| pf |%%g|%g|\n", 42.42);
	ft_printf("| pf |%%g|%g|\n", 42.42);
	   printf("| pf |%%.2g|%.2g|\n", 42.42);
	ft_printf("| pf |%%.2g|%.2g|\n", 42.42);
	   printf("###############################################\n");
//	   printf("| pf |%4d|\n", ft_numlen_base_float(DBL_MAX));
//	   printf("| pf |%4d|\n", ft_numlen_base_float(12345678901234567890.11111111111));
	   printf("| pf |%%g|%g|\n", DBL_MAX);
	ft_printf("| ft |%%g|%g|\n", DBL_MAX);
	   printf("| pf |%%g|%g|\n", 0.000039);
	ft_printf("| ft |%%g|%g|\n", 0.000039);
	   printf("| pf |%%g|%g|\n", -0.000039);
	ft_printf("| ft |%%g|%g|\n", -0.000039);
	int index = 21;

//	while(--index > -21)
//		printf("| pf |ft_pow|%45.20LF|%+03d|\n",ft_pow(10, index), index);

	size_t a = -123465;
	ssize_t b = -1;

/*
** 	   printf("| pf |%10zd|\n", a);
** 	ft_printf("| ft |%10zd|\n", a);
** 	   printf("| pf |%10zu|\n", a);
** 	ft_printf("| ft |%10zu|\n", a);
** 	   printf("| pf |%10zd|\n", b);
** 	ft_printf("| ft |%10zd|\n", b);
** 	   printf("| pf |%10zu|\n", b);
** 	ft_printf("| ft |%10zu|\n", b);
** 		printf("| pf |%z|\n");
** 	ft_printf("| ft |%z|\n");
** 		 printf("| pf |%zhello|\n");
** 	ft_printf("| ft |%zhello|\n");
*/

}