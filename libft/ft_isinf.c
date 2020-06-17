/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:59:41 by mg                #+#    #+#             */
/*   Updated: 2020/06/14 18:19:10 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinf(long double nbr)
{
	return (nbr == (1.0 / 0.0) || nbr == (-1.0 / 0.0));
}
