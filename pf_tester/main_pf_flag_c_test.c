/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_c_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 19:45:38 by mg                #+#    #+#             */
/*   Updated: 2020/06/11 13:40:48 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int pf_c_test(void)
{
	char c = '$';
	int index = 0;

	printf("\n###########################################################################################################\n");
		printf("%s",   "| c |ARG|0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n");
 	 ft_printf("%s",   "| c |ARG|0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n");
  	printf("###########################################################################################################\n");
	   printf("| c | pf |0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	ft_printf("| c | ft |0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	c = '\0';
	   printf("| c | pf |0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	ft_printf("| c | ft |0|%+05c|1|%5c|2|%-5c|3|%+5c|4|%+-5c|5|% 5c|6|%05c|7|%5.0c|8|%5.2c|9|%-6.2c|10|%+6.2c|11|% c|12|%+ c|13|% -c|14|%.c|15|%02c|16|%c|17|%#c|18|% c|19|%-c|20|%+c|21|%+0c|22|%.c|23|%+-c|\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	

	c = '0';
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c |ARG|####|1|%.*c|2|%25.*c|3|%*.*c|4|%+*.*c|5|%0*.15c|6|% *.15c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%.*c|2|%25.*c|3|%*.*c|4|%+*.*c|5|%0*.15c|6|% *.15c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c);
		ft_printf("| c | ft |#%02d#|1|%.*c|2|%25.*c|3|%*.*c|4|%+*.*c|5|%0*.15c|6|% *.15c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c);
		++index;
	}

	c = 0;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c | pf |####|1|%0.*c|2|%025.*c|3|%0*.*c|4|%+0*.*c|5|%0*.15c|6|% 0*.c|7|%-0c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%0.*c|2|%025.*c|3|%0*.*c|4|%+0*.*c|5|%0*.15c|6|% 0*.c|7|%-0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		ft_printf("| c | ft |#%02d#|1|%0.*c|2|%025.*c|3|%0*.*c|4|%+0*.*c|5|%0*.15c|6|% 0*.c|7|%-0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		++index;
	}

	c = 0;
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c | pf |####|1|%#0.*c|2|%#025.*c|3|%#0*.*c|4|%+#0*.*c|5|%#0*.15c|6|% #0*.c|7|%-#0c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%#0.*c|2|%#025.*c|3|%#0*.*c|4|%+#0*.*c|5|%#0*.15c|6|% #0*.c|7|%-#0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		ft_printf("| c | ft |#%02d#|1|%#0.*c|2|%#025.*c|3|%#0*.*c|4|%+#0*.*c|5|%#0*.15c|6|% #0*.c|7|%-#0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		++index;
	}

	c = 'x';
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c | pf |####|1|%#+0.*c|2|%#+025.*c|3|%#+0*.*c|4|%+#+0*.*c|5|%#+0*.15c|6|% #+0*.c|7|%-#+0c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%#+0.*c|2|%#+025.*c|3|%#+0*.*c|4|%+#+0*.*c|5|%#+0*.15c|6|% #+0*.c|7|%-#+0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		ft_printf("| c | ft |#%02d#|1|%#+0.*c|2|%#+025.*c|3|%#+0*.*c|4|%+#+0*.*c|5|%#+0*.15c|6|% #+0*.c|7|%-#+0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		++index;
	}

	c = '4';
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c | pf |####|1|%#-0.*c|2|%#-025.*c|3|%#-0*.*c|4|%+#-0*.*c|5|%#-0*.15c|6|% #-0*.c|7|%-#-0c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%#-0.*c|2|%#-025.*c|3|%#-0*.*c|4|%+#-0*.*c|5|%#-0*.15c|6|% #-0*.c|7|%-#-0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		ft_printf("| c | ft |#%02d#|1|%#-0.*c|2|%#-025.*c|3|%#-0*.*c|4|%+#-0*.*c|5|%#-0*.15c|6|% #-0*.c|7|%-#-0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		++index;
	}

	c = '@';
	index = 0;
	printf("\n###########################################################################################################\n");
	printf("%s", "| c | pf |####|1|%# 0.*c|2|%# 025.*c|3|%# 0*.*c|4|%+# 0*.*c|5|%# 0*.15c|6|% # 0*.c|7|%-# 0c|\n");
  	printf("###########################################################################################################\n");
	while (index < 21)
	{
		   printf("| c | pf |#%02d#|1|%# 0.*c|2|%# 025.*c|3|%# 0*.*c|4|%+# 0*.*c|5|%# 0*.15c|6|% # 0*.c|7|%-# 0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		ft_printf("| c | ft |#%02d#|1|%# 0.*c|2|%# 025.*c|3|%# 0*.*c|4|%+# 0*.*c|5|%# 0*.15c|6|% # 0*.c|7|%-# 0c|\n", index, index, c, index, c, index, index, c, index, index, c, index, c, index, c, c);
		++index;
	}
	  return (0);
}

#if 0
int main(void)
{
	pf_c_test();
	return(0);
}
#endif
