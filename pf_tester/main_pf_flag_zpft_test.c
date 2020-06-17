/* ************************************************************************** */
/*                           */
/*       :::      ::::::::   */
/*   main_pf_flag_zpft_test.c                           :+:      :+:    :+:   */
/*   +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 21:40:51 by mg                #+#    #+#             */
/*   Updated: 2020/06/10 21:48:06 by mg               ###   ########.fr       */
/*                           */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
#include <math.h>

int pf_pft_test(void)
{
	   printf("| pf |sqrt|%50.25LF|\n", sqrt(11));
	ft_printf("| pf |sqrt|%50.25LF|\n", sqrt(11));

	printf("\n#####################################################\n");
	printf("|ft_pow|%50.25LF|#+15|\n", ft_pow(10, 15));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 14));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 13));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 12));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 11));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 10));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 9));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 8));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 7));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 6));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 5));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 4));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 3));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 2));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 1));
	printf("|ft_pow|%50.25LF|ZERO|\n", ft_pow(10, 0));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -1));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -2));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -3));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -4));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -5));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -6));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -7));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -8));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -9));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -10));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -11));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -12));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -13));
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -14));
	printf("|ft_pow|%50.25LF|#-15|\n", ft_pow(10, -15));
	printf("\n#####################################################\n");
	printf("|ft_pow|%50.25LF|#+15|\n", ft_pow(10, 15) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 14) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 13) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 12) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 11) * 5);
	printf("|ft_pow|%50.25LF|#+15|\n", ft_pow(10, 10) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 9) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 8) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 7) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 6) * 5);
	printf("|ft_pow|%50.25LF|#+05|\n", ft_pow(10, 5) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 4) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 3) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 2) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, 1) * 5);
	printf("|ft_pow|%50.25LF|ZERO|\n", ft_pow(10, 0) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -1) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -2) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -3) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -4) * 5);
	printf("|ft_pow|%50.25LF|#-05|\n", ft_pow(10, -5) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -6) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -7) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -8) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -9) * 5);
	printf("|ft_pow|%50.25LF|#-10|\n", ft_pow(10, -10) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -11) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -12) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -13) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -14) * 5);
	printf("|ft_pow|%50.25LF|#-15|\n", ft_pow(10, -15) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -16) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -17) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -18) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -19) * 5);
	printf("|ft_pow|%50.25LF|#-20|\n", ft_pow(10, -20) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -21) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -22) * 5);
	printf("|ft_pow|%50.25LF|\n", ft_pow(10, -23) * 5);
	printf("\n#####################################################\n");
	printf("|ft_round|%-50s|\n", "1.025978542436587568678");
	printf("|ft_round|%-50s|\n", "0.0000000000000000000050000");
	printf("|ft_round|%-50s|\n", "1.02597854243658748175");
	printf("|ft_round|%-50.30LF|\n", ft_dtoa_round(1.025978542436587568678, 20));

}
int main(void)
{
	pf_pft_test();
}
