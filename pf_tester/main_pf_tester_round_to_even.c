/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_tester_round_to_even.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 23:55:07 by me                #+#    #+#             */
/*   Updated: 2020/06/17 08:41:59 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int main (void)
{
      printf("###################################################\n");
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12305.0, 12305.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12305.0, 12305.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12315.0, 12315.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12315.0, 12315.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12325.0, 12325.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12325.0, 12325.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12335.0, 12335.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12335.0, 12335.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12345.0, 12345.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12345.0, 12345.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12355.0, 12355.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12355.0, 12355.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12365.0, 12365.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12365.0, 12365.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12375.0, 12375.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12375.0, 12375.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12385.0, 12385.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12385.0, 12385.0);
      printf("| pf |%%12.4g|%-12.4g|%15f|\n", 12395.0, 12395.0);
   ft_printf("| ft |%%12.4g|%-12.4g|%15f|\n", 12395.0, 12395.0);
      printf("###################################################\n");
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12305.0, 12305.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12305.0, 12305.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12315.0, 12315.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12315.0, 12315.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12325.0, 12325.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12325.0, 12325.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12335.0, 12335.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12335.0, 12335.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12345.0, 12345.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12345.0, 12345.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12355.0, 12355.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12355.0, 12355.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12365.0, 12365.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12365.0, 12365.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12375.0, 12375.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12375.0, 12375.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12385.0, 12385.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12385.0, 12385.0);
      printf("| pf |%%12.3g|%-12.3g|%15f|\n", 12395.0, 12395.0);
   ft_printf("| ft |%%12.3g|%-12.3g|%15f|\n", 12395.0, 12395.0);
      printf("###################################################\n");
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12305.0, 12305.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12305.0, 12305.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12315.0, 12315.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12315.0, 12315.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12325.0, 12325.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12325.0, 12325.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12335.0, 12335.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12335.0, 12335.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12345.0, 12345.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12345.0, 12345.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12355.0, 12355.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12355.0, 12355.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12365.0, 12365.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12365.0, 12365.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12375.0, 12375.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12375.0, 12375.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12385.0, 12385.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12385.0, 12385.0);
      printf("| pf |%%12.3e|%-12.3e|%15f|\n", 12395.0, 12395.0);
   ft_printf("| ft |%%12.3e|%-12.3e|%15f|\n", 12395.0, 12395.0);
      printf("###################################################\n");
      printf("| pf |%12.4e|%12.4g|%12.3e|%12.3g|\n", 12345.0, 12345.0, 12345.0, 12345.0);
   ft_printf("| ft |%12.4e|%12.4g|%12.3e|%12.3g|\n", 12345.0, 12345.0, 12345.0, 12345.0);
      printf("| pf |%12.4e|%12.4g|%12.3e|%12.3g|\n", 123456.0, 123456.0, 123456.0, 123456.0);
   ft_printf("| ft |%12.4e|%12.4g|%12.3e|%12.3g|\n", 123456.0, 123456.0, 123456.0, 123456.0);
      printf("###################################################\n");
      printf("| pf | dtoa |%.0f|\n", 3.500000);
      printf("| pf | dtoa |%.0f|\n", 2.500000);
      printf("| pf | dtoa |%.0f|\n", 1.500000);
      printf("| pf | dtoa |%.0f|\n", 0.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 3.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 2.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 1.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 0.500000);
      printf("| pf | dtoa |%.0f|\n", 25.500000);
      printf("| pf | dtoa |%.0f|\n", 24.500000);
      printf("| pf | dtoa |%.0f|\n", 23.500000);
      printf("| pf | dtoa |%.0f|\n", 22.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 25.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 24.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 23.500000);
   ft_printf("| ft | dtoa |%.0f|\n", 22.500000);
      printf("| pf | dtoa |%.0f|\n", -25.500000);
      printf("| pf | dtoa |%.0f|\n", -24.500000);
      printf("| pf | dtoa |%.0f|\n", -23.500000);
      printf("| pf | dtoa |%.0f|\n", -22.500000);
   ft_printf("| ft | dtoa |%.0f|\n", -25.500000);
   ft_printf("| ft | dtoa |%.0f|\n", -24.500000);
   ft_printf("| ft | dtoa |%.0f|\n", -23.500000);
   ft_printf("| ft | dtoa |%.0f|\n", -22.500000);
      printf("| pf | dtoa |%.0f|\n",  1.2345);
      printf("| pf | dtoa |%.1f|\n",  1.2345);
      printf("| pf | dtoa |%.2f|\n",  1.2345);
      printf("| pf | dtoa |%.3f|\n",  1.2345);
   ft_printf("| ft | dtoa |%.0f|\n",  1.2345);
   ft_printf("| ft | dtoa |%.1f|\n",  1.2345);
   ft_printf("| ft | dtoa |%.2f|\n",  1.2345);
   ft_printf("| ft | dtoa |%.3f|\n",  1.2345);
      printf("| pf | dtoa |%.0f|\n",  -1.2345);
      printf("| pf | dtoa |%.1f|\n",  -1.2345);
      printf("| pf | dtoa |%.2f|\n",  -1.2345);
      printf("| pf | dtoa |%.3f|\n",  -1.2345);
   ft_printf("| ft | dtoa |%.0f|\n",  -1.2345);
   ft_printf("| ft | dtoa |%.1f|\n",  -1.2345);
   ft_printf("| ft | dtoa |%.2f|\n",  -1.2345);
   ft_printf("| ft | dtoa |%.3f|\n",  -1.2345);

}