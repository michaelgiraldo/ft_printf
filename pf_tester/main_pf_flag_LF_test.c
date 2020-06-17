/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_LF_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 17:07:05 by mg                #+#    #+#             */
/*   Updated: 2020/06/12 10:26:34 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stddef.h>
#include <math.h>

#define DBL_INF    0x7FF0000000000000
#define DBL_NINF   0xFFF0000000000000
#define DBL_NAN    0x7FF0000000100000
#define DBL_PZERO  0x0000000000000000
#define DBL_NZERO  0x8000000000000000

#define LDBL_INF   0x7FFF0000000000000000L
#define LDBL_NINF  0xFFFF0000000000000000L
#define LDBL_NAN   0x7FFF0000000001000000L
#define LDBL_PZERO 0x00000000000000000000L
#define LDBL_NZERO 0x80000000000000000000L

int pf_LF_test(void)
{
	long double LF = 0;
	int index = 0;

	printf("\n###########################################################################################################\n");
		printf("%s",   "| LF |ARG|0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n");
 	 ft_printf("%s",   "| LF |ARG|0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n");
  	printf("###########################################################################################################\n");
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = 1.0;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = -1.0;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = 100.123;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = 101.123;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = 123.45;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = 1560133635.0;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = -2035065302.0;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	LF = -7;
	   printf("| LF | pf |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);
	ft_printf("| LF | ft |0|%+05LF|1|%5LF|2|%-5LF|3|%+5LF|4|%+-5LF|5|% 5LF|6|%05LF|7|%5.0LF|8|%5.2LF|9|%-6.2LF|10|%+6.2LF|11|% LF|12|%+ LF|13|% -LF|14|%.LF|15|%02LF|16|%LF|17|%#LF|18|% LF|19|%-LF|20|%+LF|21|%+0LF|22|%.LF|23|%+-LF|\n", LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF, LF);

	LF = -1;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = -.75;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = -.075;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 0;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 0.075;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 0.75;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 1.0;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 3.14159265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF |ARG|####|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		ft_printf("| LF | ft |#%02d#|1|%.*LF|2|%25.*LF|3|%*.*LF|4|%+*.*LF|5|%0*.15LF|6|% *.15LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%0.*LF|2|%025.*LF|3|%0*.*LF|4|%+0*.*LF|5|%0*.15LF|6|% 0*.LF|7|%-0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%0.*LF|2|%025.*LF|3|%0*.*LF|4|%+0*.*LF|5|%0*.15LF|6|% 0*.LF|7|%-0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%0.*LF|2|%025.*LF|3|%0*.*LF|4|%+0*.*LF|5|%0*.15LF|6|% 0*.LF|7|%-0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%#0.*LF|2|%#025.*LF|3|%#0*.*LF|4|%+#0*.*LF|5|%#0*.15LF|6|% #0*.LF|7|%-#0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%#0.*LF|2|%#025.*LF|3|%#0*.*LF|4|%+#0*.*LF|5|%#0*.15LF|6|% #0*.LF|7|%-#0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%#0.*LF|2|%#025.*LF|3|%#0*.*LF|4|%+#0*.*LF|5|%#0*.15LF|6|% #0*.LF|7|%-#0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%#+0.*LF|2|%#+025.*LF|3|%#+0*.*LF|4|%+#+0*.*LF|5|%#+0*.15LF|6|% #+0*.LF|7|%-#+0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%#+02d#|1|%#+0.*LF|2|%#+025.*LF|3|%#+0*.*LF|4|%+#+0*.*LF|5|%#+0*.15LF|6|% #+0*.LF|7|%-#+0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%#+02d#|1|%#+0.*LF|2|%#+025.*LF|3|%#+0*.*LF|4|%+#+0*.*LF|5|%#+0*.15LF|6|% #+0*.LF|7|%-#+0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%#-0.*LF|2|%#-025.*LF|3|%#-0*.*LF|4|%+#-0*.*LF|5|%#-0*.15LF|6|% #-0*.LF|7|%-#-0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%#-0.*LF|2|%#-025.*LF|3|%#-0*.*LF|4|%+#-0*.*LF|5|%#-0*.15LF|6|% #-0*.LF|7|%-#-0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%#-0.*LF|2|%#-025.*LF|3|%#-0*.*LF|4|%+#-0*.*LF|5|%#-0*.15LF|6|% #-0*.LF|7|%-#-0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = 314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = -314159.265358979323846264338327950288419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = DBL_INF;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = DBL_NINF;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = DBL_NAN;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

	LF = DBL_NZERO;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| LF | pf |####|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| LF | pf |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		ft_printf("| LF | ft |#%02d#|1|%# 0.*LF|2|%# 025.*LF|3|%# 0*.*LF|4|%+# 0*.*LF|5|%# 0*.15LF|6|% # 0*.LF|7|%-# 0LF|\n", index, index, LF, index, LF, index, index, LF, index, index, LF, index, LF, index, LF, LF);
		++index;
	}

    return (0);
}
