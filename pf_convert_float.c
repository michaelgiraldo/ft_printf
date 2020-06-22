/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_convert_float.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:04:24 by mg                #+#    #+#             */
/*   Updated: 2020/06/21 22:19:58 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** convert float-type specificers
** converts specifiers f, F, e, E, g, G, a, A
*/

void				pf_convert_float(va_list *ap, t_fmt *flag)
{
	long double nbr;

	nbr = 0;
	pf_check_precision(flag);
	nbr = (flag->length == 'L') ?
		va_arg(*ap, long double) : va_arg(*ap, double);
	flag->is_negative = (nbr < 0) ? 1 : 0;
	flag->is_zero = (nbr == 0) ? 1 : 0;
	pf_convert_float_print(nbr, flag);
}

void				pf_check_precision(t_fmt *flag)
{
	if (flag->precision == -1)
	{
		if (flag->is_float)
			flag->precision = 6;
	}
	else if (flag->spec == 'g' || flag->spec == 'G')
	{
		if (flag->precision == 0)
			flag->precision = 1;
	}
}

static inline void	pf_convert_float_reset_flag(t_fmt *flag)
{
	flag->pad = 0;
	flag->alt = 0;
	flag->precision = -1;
}

void				pf_convert_float_print(long double nbr, t_fmt *flag)
{
	if (nbr != nbr)
	{
		pf_convert_float_reset_flag(flag);
		flag->is_nan = 1;
		flag->print = ft_signbit(nbr) ? ft_strdup("-nan") : ft_strdup("nan");
	}
	else if (ft_isinf(nbr))
	{
		pf_convert_float_reset_flag(flag);
		flag->is_inf = 1;
		flag->print = (nbr == (1.0 / 0.0)) ?
									ft_strdup("inf") : ft_strdup("-inf");
	}
	else if (flag->spec == 'e' || flag->spec == 'E')
		pf_convert_spec_e(nbr, flag);
	else if (flag->spec == 'g' || flag->spec == 'G')
		pf_convert_spec_g(nbr, flag);
	else
		flag->print = ft_dtoa(nbr, flag->precision, flag->base);
	if (flag->is_zero && !(1 / nbr > 0))
		ft_strappend_ox("-", &flag->print);
}
