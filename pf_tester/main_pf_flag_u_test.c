/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_u_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 20:17:38 by mg                #+#    #+#             */
/*   Updated: 2020/06/11 13:40:48 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int pf_u_test(void)
{
	unsigned int u = 0;
	int index = 0;

	printf("\n###########################################################################################################\n");
		printf("%s",   "| u |ARG|0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n");
 	 ft_printf("%s",   "| u |ARG|0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n");
  	printf("###########################################################################################################\n");
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = 1;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = -1;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = 100;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = 101;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = 123;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = 15601;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = -203506530;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	u = -7;
	   printf("| u | pf |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	ft_printf("| u | ft |0|%+05u|1|%5u|2|%-5u|3|%+5u|4|%+-5u|5|% 5u|6|%05u|7|%5.0u|8|%5.2u|9|%-6.2u|10|%+6.2u|11|% u|12|%+ u|13|% -u|14|%.u|15|%02u|16|%u|17|%#u|18|% u|19|%-u|20|%+u|21|%+0u|22|%.u|23|%+-u|\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);

	u = -1;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = -75;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = -546475;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 0;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 876515;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 17895675;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 1;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 3419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 3115916;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u |ARG|####|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		ft_printf("| u | ft |#%02d#|1|%.*u|2|%25.*u|3|%*.*u|4|%+*.*u|5|%0*.15u|6|% *.15u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u);
		++index;
	}

	u = 314;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%0.*u|2|%025.*u|3|%0*.*u|4|%+0*.*u|5|%0*.15u|6|% 0*.u|7|%-0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%0.*u|2|%025.*u|3|%0*.*u|4|%+0*.*u|5|%0*.15u|6|% 0*.u|7|%-0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%0.*u|2|%025.*u|3|%0*.*u|4|%+0*.*u|5|%0*.15u|6|% 0*.u|7|%-0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

	u = 314716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%#0.*u|2|%#025.*u|3|%#0*.*u|4|%+#0*.*u|5|%#0*.15u|6|% #0*.u|7|%-#0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%#0.*u|2|%#025.*u|3|%#0*.*u|4|%+#0*.*u|5|%#0*.15u|6|% #0*.u|7|%-#0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%#0.*u|2|%#025.*u|3|%#0*.*u|4|%+#0*.*u|5|%#0*.15u|6|% #0*.u|7|%-#0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

	u = -1419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%#+0.*u|2|%#+025.*u|3|%#+0*.*u|4|%+#+0*.*u|5|%#+0*.15u|6|% #+0*.u|7|%-#+0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%#+0.*u|2|%#+025.*u|3|%#+0*.*u|4|%+#+0*.*u|5|%#+0*.15u|6|% #+0*.u|7|%-#+0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%#+0.*u|2|%#+025.*u|3|%#+0*.*u|4|%+#+0*.*u|5|%#+0*.15u|6|% #+0*.u|7|%-#+0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

	u = 879716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%#-0.*u|2|%#-025.*u|3|%#-0*.*u|4|%+#-0*.*u|5|%#-0*.15u|6|% #-0*.u|7|%-#-0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%#-0.*u|2|%#-025.*u|3|%#-0*.*u|4|%+#-0*.*u|5|%#-0*.15u|6|% #-0*.u|7|%-#-0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%#-0.*u|2|%#-025.*u|3|%#-0*.*u|4|%+#-0*.*u|5|%#-0*.15u|6|% #-0*.u|7|%-#-0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

	u = 8419716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

	u = 716;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| u | pf |####|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| u | pf |#%02d#|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		ft_printf("| u | ft |#%02d#|1|%# 0.*u|2|%# 025.*u|3|%# 0*.*u|4|%+# 0*.*u|5|%# 0*.15u|6|% # 0*.u|7|%-# 0u|\n", index, index, u, index, u, index, index, u, index, index, u, index, u, index, u, u);
		++index;
	}

    return (0);
}

