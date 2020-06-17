/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_convert_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 11:06:22 by mg                #+#    #+#             */
/*   Updated: 2020/06/17 15:32:19 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_convert_pointer(va_list *ap, t_fmt *flag)
{
	void *ptr;

	ptr = va_arg(*ap, void *);
	flag->is_null = (ptr == NULL) ? 1 : 0;
	if (!flag->is_null)
	{
		flag->print = ft_itoa_base((unsigned long long int)ptr, flag->base);
		flag->is_numeric = 1;
	}
	else
	{
		flag->print = ft_strdup("(nil)");
		flag->precision = -1;
	}
	flag->pad = 0;
}

/*
** See lines 544 to 551 for typecasting gudiance
** https://git.musl-libc.org/cgit/musl/tree/src/stdio/vfprintf.c
*/

#if 0

void	pf_convert_n_count(va_list *ap, t_fmt *flag)
{
	void *ptr;

	ptr = 0;
	if (!flag->length)
		ptr = *(int *)va_arg(*ap, void *);
	else if (flag->is_char)
		ptr = *(unsigned short *)va_arg(*ap, void *);
	else if (flag->length == 'h')
		ptr = *(unsigned char *)va_arg(*ap, void *);
	else if (flag->is_llong)
		ptr = *(long long *)va_arg(*ap, void *);
	else if (flag->length == 'l')
		ptr = *(long *)va_arg(*ap, void *);
	else if (flag->length == 'j')
		ptr = *(unintmax_t)va_arg(*ap, void *);
	else if (flag->length == 'z')
		ptr = *(size_t)va_arg(*ap, void *);
	else if (flag->length == 't')
		ptr = *(ptrdiff_t *)va_arg(*ap, void *);
	flag->is_null = (ptr == NULL) ? 1 : 0;
}

#endif
