/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:50:31 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:59 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

/*
	Zero padding.  For all conversions except n,
	the converted value is padded on the left with zeros rather than blanks.
	
	`-' a negative field width flag; the converted value is to be left adjusted
	on the field boundary. The converted value is padded on the right with blanks,
	rather than on the left with blanks or zeros. A - overrides a 0
	if both are given.
*/
void	ft_handle_width_char(t_info *info)
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

void	ft_solve_char(t_info *info)
{
	char	c;

	c = va_arg(info->args, int);
	if (info->flag[e_minus] == '1')
		ft_count_putchar(c, info);
	ft_handle_width_char(info);
	if (info->flag[e_minus] != '1')
		ft_count_putchar(c, info);
}
