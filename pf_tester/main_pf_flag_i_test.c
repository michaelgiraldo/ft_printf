/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_i_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:15:22 by mg                #+#    #+#             */
/*   Updated: 2020/06/23 14:18:35 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int pf_i_test(void)
{
	int i = 0;
	int index = -5;

	i = -1;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = -75;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = -546475;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 0;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 876515;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 17895675;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 1;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 3419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 3115916;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	i = 314;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%0.*i|2|%025.*i|3|%0*.*i|4|%+0*.*i|5|%0*.15i|6|% 0*.i|7|%-0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%0.*i|2|%025.*i|3|%0*.*i|4|%+0*.*i|5|%0*.15i|6|% 0*.i|7|%-0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%0.*i|2|%025.*i|3|%0*.*i|4|%+0*.*i|5|%0*.15i|6|% 0*.i|7|%-0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	i = 314716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%#0.*i|2|%#025.*i|3|%#0*.*i|4|%+#0*.*i|5|%#0*.15i|6|% #0*.i|7|%-#0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%#0.*i|2|%#025.*i|3|%#0*.*i|4|%+#0*.*i|5|%#0*.15i|6|% #0*.i|7|%-#0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%#0.*i|2|%#025.*i|3|%#0*.*i|4|%+#0*.*i|5|%#0*.15i|6|% #0*.i|7|%-#0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	i = -1419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%#+0.*i|2|%#+025.*i|3|%#+0*.*i|4|%+#+0*.*i|5|%#+0*.15i|6|% #+0*.i|7|%-#+0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%#+0.*i|2|%#+025.*i|3|%#+0*.*i|4|%+#+0*.*i|5|%#+0*.15i|6|% #+0*.i|7|%-#+0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%#+0.*i|2|%#+025.*i|3|%#+0*.*i|4|%+#+0*.*i|5|%#+0*.15i|6|% #+0*.i|7|%-#+0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	i = 879716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%#-0.*i|2|%#-025.*i|3|%#-0*.*i|4|%+#-0*.*i|5|%#-0*.15i|6|% #-0*.i|7|%-#-0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%#-0.*i|2|%#-025.*i|3|%#-0*.*i|4|%+#-0*.*i|5|%#-0*.15i|6|% #-0*.i|7|%-#-0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%#-0.*i|2|%#-025.*i|3|%#-0*.*i|4|%+#-0*.*i|5|%#-0*.15i|6|% #-0*.i|7|%-#-0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	i = 8419716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	i = 716;
	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i | pf |####|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		ft_printf("| i | ft |#%02i#|1|%# 0.*i|2|%# 025.*i|3|%# 0*.*i|4|%+# 0*.*i|5|%# 0*.15i|6|% # 0*.i|7|%-# 0i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i, i);
		++index;
	}

	index = -5;
	printf("\n###########################################################################################################\n");
	printf("%s", "| i |ARG|####|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| i | pf |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		ft_printf("| i | ft |#%02i#|1|%.*i|2|%25.*i|3|%*.*i|4|%+*.*i|5|%0*.15i|6|% *.15i|\n", index, index, i, index, i, index, index, i, index, index, i, index, i, index, i);
		++index;
	}

	printf("\n###########################################################################################################\n");
		printf("%s",   "| i |ARG|0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n");
 	 ft_printf("%s",   "| i |ARG|0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n");
  	printf("###########################################################################################################\n");
	i = 0;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	
	i = 0;
	printf("\n###########################################################################################################\n");
	   printf("%s", "| i | pf |####|0|%+7i|1|%+04i|2|%+8.5i|3|%+-8.5i|4|%-8.5i|5|%0+8.5i|6|%08.5i|7|%0+-8.5ii|8|% +7i|9|%i|10|% +04i|11|% +8.5i|12|% +-8.5i|13|% 0+8.5i|14|% 0+-8.5i|15|%+.0i|16|%+.i|17|%+5.0i|18|%+-5.0i|19|%+-5.i|20|%-+i|21|%#+0i|22|%#.i|23|%0+-i|\n");
	ft_printf("%s", "| i | pf |####|0|%+7i|1|%+04i|2|%+8.5i|3|%+-8.5i|4|%-8.5i|5|%0+8.5i|6|%08.5i|7|%0+-8.5ii|8|% +7i|9|%i|10|% +04i|11|% +8.5i|12|% +-8.5i|13|% 0+8.5i|14|% 0+-8.5i|15|%+.0i|16|%+.i|17|%+5.0i|18|%+-5.0i|19|%+-5.i|20|%-+i|21|%#+0i|22|%#.i|23|%0+-i|\n");
  	printf("###########################################################################################################\n");
	   printf("| i | pf |0|%+7i|1|%+04i|2|%+8.5i|3|%+-8.5i|4|%-8.5i|5|%0+8.5i|6|%08.5i|7|%0+-8.5ii|8|% +7i|9|%i|10|% +04i|11|% +8.5i|12|% +-8.5i|13|% 0+8.5i|14|% 0+-8.5i|15|%+.0i|16|%+.i|17|%+5.0i|18|%+-5.0i|19|%+-5.i|20|%-+i|21|%#+0i|22|%#.i|23|%0+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+7i|1|%+04i|2|%+8.5i|3|%+-8.5i|4|%-8.5i|5|%0+8.5i|6|%08.5i|7|%0+-8.5ii|8|% +7i|9|%i|10|% +04i|11|% +8.5i|12|% +-8.5i|13|% 0+8.5i|14|% 0+-8.5i|15|%+.0i|16|%+.i|17|%+5.0i|18|%+-5.0i|19|%+-5.i|20|%-+i|21|%#+0i|22|%#.i|23|%0+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);

	i = 0;
	printf("\n###########################################################################################################\n");
		printf("%s",   "| i |ARG|0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n");
 	ft_printf("%s",   "| i |ARG|0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n");
  	printf("###########################################################################################################\n");
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 1;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -1;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 42;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 43;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 100;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 101;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 123;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 15601;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -203506530;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -7;
	   printf("| i | pf |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%+05i|1|%5i|2|%-5i|3|%+5i|4|%+-5i|5|% 5i|6|%05i|7|%5.0i|8|%5.2i|9|%-6.2i|10|%+6.2i|11|% i|12|%+ i|13|% -i|14|%.i|15|%02i|16|%i|17|%#i|18|% i|19|%-i|20|%+i|21|%+0i|22|%.i|23|%+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);

	i = 0;
	printf("\n###########################################################################################################\n");
		printf("%s",   "| i |ARG|0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n");
 	ft_printf("%s",   "| i |ARG|0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n");
  	printf("###########################################################################################################\n");
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 1;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -1;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 42;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 43;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 100;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 101;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 123;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = 15601;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -203506530;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	i = -7;
	   printf("| i | pf |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);
	ft_printf("| i | ft |0|%#+05i|1|%#5i|2|%#-5i|3|%#+5i|4|%#+-5i|5|%# 5i|6|%#05i|7|%#5.0i|8|%#5.2i|9|%#-6.2i|10|%#+6.2i|11|%# i|12|%#+ i|13|%# -i|14|%#.i|15|%#02i|16|%#i|17|%##i|18|%# i|19|%#-i|20|%#+i|21|%#+0i|22|%#.i|23|%#+-i|\n", i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i);

    return (0);
}

#if 0
int main(void)
{
	pf_i_test();
	return(0);
}
#endif
