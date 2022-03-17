/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:25:56 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:12 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

/*
	'0' Zero padding.  For all conversions except n, the converted value is
	padded on the left with zeros rather than blanks.  If a precision is given
	with a numeric conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.

	'-' A negative field width flag; the converted value is to be left adjusted
	on the field boundary.  Except for n conversions, the converted value is
	padded on the right with blanks, rather than on the left with blanks or zeros.
	A - overrides a 0 if both are given.
*/

void	ft_handle_width_percent(t_info *info)
{
	if (info->width > 1)
	{
		info->width++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
			while (--info->width > 1)
				ft_count_putchar('0', info);
		else
			while (--info->width > 1)
				ft_count_putchar(' ', info);
	}
}

void	ft_solve_percent(t_info *info)
{
	if (info->flag[e_minus] == '1')
		ft_count_putchar('%', info);
	ft_handle_width_percent(info);
	if (info->flag[e_minus] != '1')
		ft_count_putchar('%', info);
}
