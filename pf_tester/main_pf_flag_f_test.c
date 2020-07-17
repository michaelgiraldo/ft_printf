/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_f_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 17:07:05 by mg                #+#    #+#             */
/*   Updated: 2020/06/23 14:18:35 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int pf_f_test(void)
{
	float f = 0;
	int index = -5;

	printf("\n###########################################################################################################\n");
		printf("%s",   "| f |ARG|0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n");
 	 ft_printf("%s",   "| f |ARG|0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n");
  	printf("###########################################################################################################\n");
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = 1.0;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = -1.0;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = 100.123;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = 101.123;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = 123.45;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = 1560133635.0;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = -2035065302.0;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	f = -7;
	   printf("| f | pf |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);
	ft_printf("| f | ft |0|%+05f|1|%5f|2|%-5f|3|%+5f|4|%+-5f|5|% 5f|6|%05f|7|%5.0f|8|%5.2f|9|%-6.2f|10|%+6.2f|11|% f|12|%+ f|13|% -f|14|%.f|15|%02f|16|%f|17|%#f|18|% f|19|%-f|20|%+f|21|%+0f|22|%.f|23|%+-f|\n", f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f, f);

	f = -1;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = -.75;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = -.075;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 0;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 0.075;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 0.75;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 1.0;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 3.14159265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f |ARG|####|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		ft_printf("| f | ft |#%02d#|1|%.*f|2|%25.*f|3|%*.*f|4|%+*.*f|5|%0*.15f|6|% *.15f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%0.*f|2|%025.*f|3|%0*.*f|4|%+0*.*f|5|%0*.15f|6|% 0*.f|7|%-0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%0.*f|2|%025.*f|3|%0*.*f|4|%+0*.*f|5|%0*.15f|6|% 0*.f|7|%-0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%0.*f|2|%025.*f|3|%0*.*f|4|%+0*.*f|5|%0*.15f|6|% 0*.f|7|%-0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%#0.*f|2|%#025.*f|3|%#0*.*f|4|%+#0*.*f|5|%#0*.15f|6|% #0*.f|7|%-#0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%#0.*f|2|%#025.*f|3|%#0*.*f|4|%+#0*.*f|5|%#0*.15f|6|% #0*.f|7|%-#0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%#0.*f|2|%#025.*f|3|%#0*.*f|4|%+#0*.*f|5|%#0*.15f|6|% #0*.f|7|%-#0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%#+0.*f|2|%#+025.*f|3|%#+0*.*f|4|%+#+0*.*f|5|%#+0*.15f|6|% #+0*.f|7|%-#+0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%#+0.*f|2|%#+025.*f|3|%#+0*.*f|4|%+#+0*.*f|5|%#+0*.15f|6|% #+0*.f|7|%-#+0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%#+0.*f|2|%#+025.*f|3|%#+0*.*f|4|%+#+0*.*f|5|%#+0*.15f|6|% #+0*.f|7|%-#+0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%#-0.*f|2|%#-025.*f|3|%#-0*.*f|4|%+#-0*.*f|5|%#-0*.15f|6|% #-0*.f|7|%-#-0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%#-0.*f|2|%#-025.*f|3|%#-0*.*f|4|%+#-0*.*f|5|%#-0*.15f|6|% #-0*.f|7|%-#-0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%#-0.*f|2|%#-025.*f|3|%#-0*.*f|4|%+#-0*.*f|5|%#-0*.15f|6|% #-0*.f|7|%-#-0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

	f = 314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

	f = -314159.265358979323846264338327950288419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| f | pf |####|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| f | pf |#%02d#|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		ft_printf("| f | ft |#%02d#|1|%# 0.*f|2|%# 025.*f|3|%# 0*.*f|4|%+# 0*.*f|5|%# 0*.15f|6|% # 0*.f|7|%-# 0f|\n", index, index, f, index, f, index, index, f, index, index, f, index, f, index, f, f);
		++index;
	}

    return (0);
}
