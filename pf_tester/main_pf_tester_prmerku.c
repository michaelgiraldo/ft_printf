
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmerku <prmerku@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:48:16 by prmerku           #+#    #+#             */
/*   Updated: 2019/12/20 10:17:47 by prmerku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ft_printf.h>
//#include <stdio.h>
//
//int		main(void)
//{
//	char			*s1;
//	char			*s2;
//	char 			c;
//	int 			i;
//	int 			i_max;
//	int 			i_min;
//	unsigned int	u_max;
//
//	s1 = "";
//	s2 = "hello";
//	c = 'a';
//	i_max = 2147483647;
//	i_min = -2147483648;
//	u_max = 4294967295;
//	i = -1;
//	while (i <= 42)
//	{
//		ft_printf("ft_printf:  %u\n", i);
//		printf("printf:     %u\n", i);
//		i++;
//	}
//	ft_printf("ft_printf:  %p\n", &s1);
//	printf("printf:     %p\n", &s1);
//	ft_printf("ft_printf:  %32s\n", s2);
//	printf("printf:     %32s\n", s2);
//	ft_printf("ft_printf:  %10c\n", c);
//	printf("printf:     %10c\n", c);
//	ft_printf("ft_printf:  %%\n");
//	printf("printf:     %%\n");
//	ft_printf("ft_printf:  %i\n", i_max);
//	printf("printf:     %i\n", i_max);
//	ft_printf("ft_printf:  %i\n", i_min);
//	printf("printf:     %i\n", i_min);
//	ft_printf("ft_printf:  %d\n", i_max);
//	printf("printf:     %d\n", i_max);
//	ft_printf("ft_printf:  %d\n", i_min);
//	printf("printf:     %d\n", i_min);
//	ft_printf("ft_printf:  %u\n", u_max);
//	printf("printf:     %u\n", u_max);
//	ft_printf("ft_printf:  %x\n", 0xfffffffff);
//	printf("printf:     %x\n", 0xffffffff);
//	return (0);
//}

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int a;
	int b;

	// [-] prec == 0
	printf("[-] prec == 0\n");
	a = ft_printf("%-10c%-10.0s%-10p%-10.0d%-10.0i%-10.0u%-10.0x%-10.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%-10c%-10.0s%-10p%-10.0d%-10.0i%-10.0u%-10.0x%-10.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 74: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-] width > prec
	printf("[-] width > prec\n");
	a = ft_printf("%-10c%-10.2s%-10p%-10.2d%-10.2i%-10.2u%-10.2x%-10.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%-10c%-10.2s%-10p%-10.2d%-10.2i%-10.2u%-10.2x%-10.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 80: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-] width == prec
	printf("[-] width == prec\n");
	a = ft_printf("%-2c%-2.2s%-2p%-2.2d%-2.2i%-2.2u%-2.2x%-2.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%-2c%-2.2s%-2p%-2.2d%-2.2i%-2.2u%-2.2x%-2.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 86: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-] width < prec
	printf("[-] width < prec\n");
	a = ft_printf("%-2c%-2.10s%-2p%-2.10d%-2.10i%-2.10u%-2.10x%-2.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%-2c%-2.10s%-2p%-2.10d%-2.10i%-2.10u%-2.10x%-2.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 92: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	//[] prec == 0
	printf("[] prec == 0\n");
	a = ft_printf("%10c%10.0s%10p%10.0d%10.0i%10.0u%10.0x%10.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%10c%10.0s%10p%10.0d%10.0i%10.0u%10.0x%10.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 100: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[] width > prec
	printf("[] width > prec\n");
	a = ft_printf("%10c%10.2s%10p%10.2d%10.2i%10.2u%10.2x%10.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%10c%10.2s%10p%10.2d%10.2i%10.2u%10.2x%10.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 106: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[] width == prec
	printf("[] width == prec\n");
	a = ft_printf("%2c%2.2s%2p%2.2d%2.2i%2.2u%2.2x%2.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%2c%2.2s%2p%2.2d%2.2i%2.2u%2.2x%2.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 112: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[] width < prec
	printf("[] width < prec\n");
	a = ft_printf("%2c%2.10s%2p%2.10d%2.10i%2.10u%2.10x%2.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%2c%2.10s%2p%2.10d%2.10i%2.10u%2.10x%2.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 118: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	//[0] prec == 0
	printf("[0] prec == 0\n");
	a = ft_printf("%10c%10.0s%10p%010.0d%010.0i%010.0u%010.0x%010.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%10c%10.0s%10p%010.0d%010.0i%010.0u%010.0x%010.0X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 126: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[0] width > prec
	printf("[0] width > prec\n");
	a = ft_printf("%10c%10.2s%10p%010.2d%010.2i%010.2u%010.2x%010.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%10c%10.2s%10p%010.2d%010.2i%010.2u%010.2x%010.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 132: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[0] width == prec
	printf("[0] width == prec\n");
	a = ft_printf("%2c%02.2s%02p%02.2d%02.2i%02.2u%02.2x%02.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%2c%2.2s%2p%02.2d%02.2i%02.2u%02.2x%02.2X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 138: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//[0] width < prec
	printf("[0] width < prec\n");
	a = ft_printf("%2c%2.10s%2p%02.10d%02.10i%02.10u%02.10x%02.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	b = printf("%2c%2.10s%2p%02.10d%02.10i%02.10u%02.10x%02.10X\n", 'a', "hello", NULL, -42, 42, 42069, 123, 123);
	printf("line 144: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	// [*].[*] prec == 0
	printf("[*].[*] prec == 0\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	printf("line 152: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [*].[*] width == 0
	printf("[*].[*] width == 0\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	printf("line 158: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [*].[*] width == 0 && prec == 0
	printf("[*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	printf("line 164: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [*].[*] width == prec
	printf("[*].[*] width == prec\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	printf("line 170: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [*].[*] width > prec
	printf("[*].[*] width > prec\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	printf("line 176: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [*].[*] width < prec
	printf("[*].[*] width < prec\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	printf("line 182: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	// [-][*].[*] prec == 0
	printf("[-][*].[*] prec == 0\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	printf("line 190: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-][*].[*] width == 0
	printf("[-][*].[*] width == 0\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	printf("line 196: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-][*].[*] width == 0 && prec == 0
	printf("[-][*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	printf("line 202: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-][*].[*] width == prec
	printf("[-][*].[*] width == prec\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	printf("line 208: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-][*].[*] width > prec
	printf("[-][*].[*] width > prec\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	printf("line 214: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [-][*].[*] width < prec
	printf("[-][*].[*] width < prec\n");
	a = ft_printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	b = printf("%-*c%-*.*s%-*p%-*.*d%-*.*i%-*.*u%-*.*x%-*.*X%-*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	printf("line 220: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	// [0][*].[*] prec == 0
	printf("[0][*].[*] prec == 0\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 0, "hello", 5, NULL, 5, 0, -42, 5, 0, 42, 5, 0, 42069, 5, 0, 123, 5, 0, 123, 5, 0);
	printf("line 228: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [0][*].[*] width == 0
	printf("[0][*].[*] width == 0\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 0, 'a', 0, 5, "hello", 0, NULL, 0, 5, -42, 0, 5, 42, 0, 5, 42069, 0, 5, 123, 0, 5, 123, 0, 5);
	printf("line 234: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [0][*].[*] width == 0 && prec == 0
	printf("[0][*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	printf("line 240: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [0][*].[*] width == prec
	printf("[0][*].[*] width == prec\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	printf("line 246: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [0][*].[*] width > prec
	printf("[0][*].[*] width > prec\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 5, 1, "hello", 5, NULL, 5, 1, -42, 5, 1, 42, 5, 1, 42069, 5, 1, 123, 5, 1, 123, 5, 1);
	printf("line 252: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [0][*].[*] width < prec
	printf("[0][*].[*] width < prec\n");
	a = ft_printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	b = printf("%*c%*.*s%*p%0*.*d%0*.*i%0*.*u%0*.*x%0*.*X%0*.*%\n", 5, 'a', 1, 5, "hello", 5, NULL, 1, 5, -42, 1, 5, 42, 1, 5, 42069, 1, 5, 123, 1, 5, 123, 1, 5);
	printf("line 258: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	// [][*].[*] prec == 0 && width negative
	printf("[][*].[*] prec == 0 && width negative\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', -5, 0, "hello", -5, NULL, -5, 0, -42, -5, 0, 42, -5, 0, 42069, -5, 0, 123, -5, 0, 123, -5, 0);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', -5, 0, "hello", -5, NULL, -5, 0, -42, -5, 0, 42, -5, 0, 42069, -5, 0, 123, -5, 0, 123, -5, 0);
	printf("line 266: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width == 0 && prec negative
	printf("[][*].[*] width == 0 && prec negative\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, -5, "hello", 0, NULL, 0, -5, -42, 0, -5, 42, 0, -5, 42069, 0, -5, 123, 0, -5, 123, 0, -5);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, -5, "hello", 0, NULL, 0, -5, -42, 0, -5, 42, 0, -5, 42069, 0, -5, 123, 0, -5, 123, 0, -5);
	printf("line 272: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width == 0 && prec == 0
	printf("[][*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 0, 'a', 0, 0, "hello", 0, NULL, 0, 0, -42, 0, 0, 42, 0, 0, 42069, 0, 0, 123, 0, 0, 123, 0, 0);
	printf("line 278: %d|%d\n\n", a, b);

	// [][*].[*] width == prec && both negative
	printf("[][*].[*] width == prec && both negative\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', -5, -5, "hello", -5, NULL, -5, -5, -42, -5, -5, 42, -5, -5, 42069, -5, -5, 123, -5, -5, 123, -5, -5);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', -5, -5, "hello", -5, NULL, -5, -5, -42, -5, -5, 42, -5, -5, 42069, -5, -5, 123, -5, -5, 123, -5, -5);
	printf("line 284: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width > prec && prec negative
	printf("[][*].[*] width > prec && prec negative\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, -1, "hello", 5, NULL, 5, -1, -42, 5, -1, 42, 5, -1, 42069, 5, -1, 123, 5, -1, 123, 5, -1);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", 5, 'a', 5, -1, "hello", 5, NULL, 5, -1, -42, 5, -1, 42, 5, -1, 42069, 5, -1, 123, 5, -1, 123, 5, -1);
	printf("line 290: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width < prec && width negative
	printf("[][*].[*] width < prec && width negative\n");
	a = ft_printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', 1, -5, "hello", -5, NULL, -5, 1, -42, -5, 1, 42, -5, 1, 42069, -5, 1, 123, -5, 1, 123, -5, 1);
	b = printf("%*c%*.*s%*p%*.*d%*.*i%*.*u%*.*x%*.*X%*.*%\n", -5, 'a', 1, -5, "hello", -5, NULL, -5, 1, -42, -5, 1, 42, -5, 1, 42069, -5, 1, 123, -5, 1, 123, -5, 1);
	printf("line 296: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	printf("POSITIVE []\n");
	// [][*].[*] width == 0 && prec == 0
	printf("[][*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%*.*%|\n", 0, 0);
	b = printf("%*.*%|\n", 0, 0);
	printf("line 305: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width > prec && prec == 0
	printf("[][*].[*] width > prec && prec == 0\n");
	a = ft_printf("%*.*%|\n", 5, 0);
	b = printf("%*.*%|\n", 5, 0);
	printf("line 311: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width > prec && width == 0
	printf("[][*].[*] width < prec && width == 0\n");
	a = ft_printf("%*.*%|\n", 0, 5);
	b = printf("%*.*%|\n", 0, 5);
	printf("line 317: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width == prec
	printf("[][*].[*] width == prec\n");
	a = ft_printf("%*.*%|\n", 5, 5);
	b = printf("%*.*%|\n", 5, 5);
	printf("line 323: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width > prec
	printf("[][*].[*] width > prec\n");
	a = ft_printf("%*.*%|\n", 5, 1);
	b = printf("%*.*%|\n", 5, 1);
	printf("line 329: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width < prec
	printf("[][*].[*] width < prec\n");
	a = ft_printf("%*.*%|\n", 1, 5);
	b = printf("%*.*%|\n", 1, 5);
	printf("line 335: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");


	printf("NEGATIVE []\n");
	// [][*].[*] width == 0 && prec == 0
	printf("[][*].[*] width == 0 && prec == 0\n");
	a = ft_printf("%-*.*%|\n", 0, 0);
	b = printf("%-*.*%|\n", 0, 0);
	printf("line 343: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width negative && prec == 0
	printf("[][*].[*] width negative && prec == 0\n");
	a = ft_printf("%*.*%|\n", -5, 0);
	b = printf("%*.*%|\n", -5, 0);
	printf("line 349: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [][*].[*] width == 0 && prec negative
	printf("[][*].[*] width == 0 && prec negative\n");
	a = ft_printf("%*.*%|\n", 0, -5);
	b = printf("%*.*%|\n", 0, -5);
	printf("line 355: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("4\n");
	a = ft_printf("%*.*%|\n", -5, -5);
	b = printf("%*.*%|\n", -5, -5);
	printf("line 360: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("5\n");
	a = ft_printf("%*.*%|\n", -5, 1);
	b = printf("%*.*%|\n", -5, 1);
	printf("line 365: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("6\n");
	a = ft_printf("%*.*%|\n", 1, -5);
	b = printf("%*.*%|\n", 1, -5);
	printf("line 370: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("7\n");
	a = ft_printf("%*.*%|\n", 5, -1);
	b = printf("%*.*%|\n", 5, -1);
	printf("line 375: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("8\n");
	a = ft_printf("%*.*%|\n", -1, 5);
	b = printf("%*.*%|\n", -1, 5);
	printf("line 380: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	printf("POSITIVE [0]\n");
	printf("1\n");
	a = ft_printf("%0*.*%|\n", 0, 0);
	b = printf("%0*.*%|\n", 0, 0);
	printf("line 388: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("2\n");
	a = ft_printf("%0*.*%|\n", 5, 0);
	b = printf("%0*.*%|\n", 5, 0);
	printf("line 393: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("3\n");
	a = ft_printf("%0*.*%|\n", 0, 5);
	b = printf("%0*.*%|\n", 0, 5);
	printf("line 398: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("4\n");
	a = ft_printf("%0*.*%|\n", 5, 5);
	b = printf("%0*.*%|\n", 5, 5);
	printf("line 403: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("5\n");
	a = ft_printf("%0*.*%|\n", 5, 1);
	b = printf("%0*.*%|\n", 5, 1);
	printf("line 408: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("6\n");
	a = ft_printf("%0*.*%|\n", 1, 5);
	b = printf("%0*.*%|\n", 1, 5);
	printf("line 413: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("NEGATIVE [0]\n");
	printf("1\n");
	a = ft_printf("%-*.*%|\n", 0, 0);
	b = printf("%-*.*%|\n", 0, 0);
	printf("line 419: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("2\n");
	a = ft_printf("%0*.*%|\n", -5, 0);
	b = printf("%0*.*%|\n", -5, 0);
	printf("line 424: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("3\n");
	a = ft_printf("%0*.*%|\n", 0, -5);
	b = printf("%0*.*%|\n", 0, -5);
	printf("line 429: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("4\n");
	a = ft_printf("%0*.*%|\n", -5, -5);
	b = printf("%0*.*%|\n", -5, -5);
	printf("line 434: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("5\n");
	a = ft_printf("%0*.*%|\n", -5, 1);
	b = printf("%0*.*%|\n", -5, 1);
	printf("line 439: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("6\n");
	a = ft_printf("%0*.*%|\n", 1, -5);
	b = printf("%0*.*%|\n", 1, -5);
	printf("line 444: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("7\n");
	a = ft_printf("%0*.*%|\n", 5, -1);
	b = printf("%0*.*%|\n", 5, -1);
	printf("line 449: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("8\n");
	a = ft_printf("%0*.*%|\n", -1, 5);
	b = printf("%0*.*%|\n", -1, 5);
	printf("line 454: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	printf("POSITIVE [-]\n");
	printf("1\n");
	a = ft_printf("%-*.*%|\n", 0, 0);
	b = printf("%-*.*%|\n", 0, 0);
	printf("line 462: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("2\n");
	a = ft_printf("%-*.*%|\n", 5, 0);
	b = printf("%-*.*%|\n", 5, 0);
	printf("line 467: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("3\n");
	a = ft_printf("%-*.*%|\n", 0, 5);
	b = printf("%-*.*%|\n", 0, 5);
	printf("line 472: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("4\n");
	a = ft_printf("%-*.*%|\n", 5, 5);
	b = printf("%-*.*%|\n", 5, 5);
	printf("line 477: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("5\n");
	a = ft_printf("%-*.*%|\n", 5, 1);
	b = printf("%-*.*%|\n", 5, 1);
	printf("line 482: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("6\n");
	a = ft_printf("%-*.*%|\n", 1, 5);
	b = printf("%-*.*%|\n", 1, 5);
	printf("line 487: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("NEGATIVE [-]\n");
	printf("1\n");
	a = ft_printf("%-*.*%|\n", 0, 0);
	b = printf("%-*.*%|\n", 0, 0);
	printf("line 493: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("2\n");
	a = ft_printf("%-*.*%|\n", -5, 0);
	b = printf("%-*.*%|\n", -5, 0);
	printf("line 498: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("3\n");
	a = ft_printf("%-*.*%|\n", 0, -5);
	b = printf("%-*.*%|\n", 0, -5);
	printf("line 503: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("4\n");
	a = ft_printf("%-*.*%|\n", -5, -5);
	b = printf("%-*.*%|\n", -5, -5);
	printf("line 508: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("5\n");
	a = ft_printf("%-*.*%|\n", -5, 1);
	b = printf("%-*.*%|\n", -5, 1);
	printf("line 513: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("6\n");
	a = ft_printf("%-*.*%|\n", 1, -5);
	b = printf("%-*.*%|\n", 1, -5);
	printf("line 518: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("7\n");
	a = ft_printf("%-*.*%|\n", 5, -1);
	b = printf("%-*.*%|\n", 5, -1);
	printf("line 523: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	printf("8\n");
	a = ft_printf("%-*.*%|\n", -1, 5);
	b = printf("%-*.*%|\n", -1, 5);
	printf("line 528: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	//-------------------------------------------------------------------------

	// [--] multiple flags
	printf("[--][*].[*] width == prec\n");
	a = ft_printf("%--*c%--*.*s%--*p%--*.*d%--*.*i%--*.*u%--*.*x%--*.*X%--*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	b = printf("%--*c%--*.*s%--*p%--*.*d%--*.*i%--*.*u%--*.*x%--*.*X%--*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	printf("line 536: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	// [00] multiple flags
	printf("[00][*].[*] width == prec\n");
	a = ft_printf("%*c%*.*s%*p%00*.*d%00*.*i%00*.*u%00*.*x%00*.*X%00*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	b = printf("%*c%*.*s%*p%00*.*d%00*.*i%00*.*u%00*.*x%00*.*X%00*.*%\n", 5, 'a', 5, 5, "hello", 5, NULL, 5, 5, -42, 5, 5, 42, 5, 5, 42069, 5, 5, 123, 5, 5, 123, 5, 5);
	printf("line 542: %d|%d    %s\n\n", a, b, (a == b) ? "TRUE" : "FALSE");

	return (0);
}