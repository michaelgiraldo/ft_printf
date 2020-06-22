/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pf_flag_n_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 13:25:14 by mg                #+#    #+#             */
/*   Updated: 2020/06/19 12:06:14 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int pf_n_test(void)
{
	int a, b, c, d;
	printf("#######################################################################\n");
	d = printf("hello%c%n world%n\n%n", 0, &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("hello%c%n world%n\n%n", 0, &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);

	d = printf("what is happening here%c%nwere are talking for over the world%n\n%n", 0, &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("what is happening here%c%nwere are talking for over the world%n\n%n", 0, &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);

	d = printf("what is happening here%c%nwere are talking for over the world%n\n%n", '%', &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("what is happening here%c%nwere are talking for over the world%n\n%n", 0, &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);

	d = printf("what is happening here%s%nwere are talking for over the world%n\n%n", "MAKE MONEY", &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("what is happening here%s%nwere are talking for over the world%n\n%n", "MAKE MONEY", &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);

	d = printf("what is happening here%f%nwere are talking for over the world%n\n%n", 123.456, &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("what is happening here%f%nwere are talking for over the world%n\n%n", 123.456, &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	
	d = printf("what is happening here%g%nwere are talking for over the world%n\n%n", 12345.06789, &a, &b, &c);
	printf("| n | pf |%03d|%03d|%03d|%03d|\n", a, b, c, d);
	d = ft_printf("what is happening here%g%nwere are talking for over the world%n\n%n", 12345.06789, &a, &b, &c);
	ft_printf("| n | ft |%03d|%03d|%03d|%03d|\n", a, b, c, d);

	long int e;
	e = printf("hello%c%n world%s%n\n%n", 0, &a, "!", &b, &c);
	printf("| n | pf |%03ld|%03ld|%03ld|%03ld|\n", a, b, c, e);
	e = ft_printf("hello%c%n world%s%n\n%n", 0, &a, "!", &b, &c);
	ft_printf("| n | ft |%03ld|%03ld|%03ld|%03ld|\n", a, b, c, e);

	return (0);
}
