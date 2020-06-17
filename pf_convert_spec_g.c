/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_convert_spec_g.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 21:00:35 by mg                #+#    #+#             */
/*   Updated: 2020/06/17 15:32:03 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_convert_spec_g(long double nbr, t_fmt *flag)
{
	long double				local_ld;
	int						neg_exponent;

	neg_exponent = 0;
	local_ld = nbr;
	while (local_ld > -1 && local_ld < 1 && !flag->is_zero && --neg_exponent)
		local_ld = local_ld * 10;
	local_ld = (nbr < 0) ? nbr * -1 : nbr;
	flag->exponent = neg_exponent +
	ft_numlen_base_unsigned((unsigned long long int)local_ld, flag->base) - 1;
	if (flag->precision > flag->exponent && flag->exponent >= -4)
	{
		flag->print = ft_dtoa(nbr,
						flag->precision - (flag->exponent + 1), flag->base);
		flag->is_normalized = 0;
	}
	else
	{
		if (!neg_exponent)
			nbr = nbr / ft_pow(flag->base, flag->exponent);
		flag->print = ft_dtoa(nbr, flag->precision - 1, flag->base);
	}
	pf_check_mantissa(flag);
	pf_format_spec_g(flag);
	flag->precision = -1;
}

void	pf_check_mantissa(t_fmt *flag)
{
	char	*ptr;

	if ((ptr = ft_strchr(flag->print, '.')))
		++ptr;
	else
		return ;
	while (*ptr && flag->null_mantissa)
	{
		if (*ptr > 48 && *ptr <= 57)
			flag->null_mantissa = 0;
		++ptr;
	}
}

void	pf_format_spec_g(t_fmt *flag)
{
	char *ptr;

	if (!flag->alt && (flag->spec == 'g' || flag->spec == 'G'))
	{
		if (flag->null_mantissa)
		{
			if ((ptr = ft_strchr(flag->print, '.')))
				ft_strclr(ptr);
		}
		else
		{
			ptr = flag->print + ft_strlen(flag->print) - 1;
			while (*ptr == 48 && ptr > flag->print)
			{
				*ptr = 0;
				--ptr;
			}
		}
	}
}
