/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:06:01 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:18 by fquist           ###   ########.fr       */
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
	
	'.' An optional precision, in the form of a period . followed by an optional
	digit string.  If the digit string is omitted, the precision is taken as zero.
	This gives the maximum number of characters to be printed from a string for s
	conversions.
*/

void	ft_handle_width_str(t_info *info, int strlen)
{
	if (info->width > strlen)
	{
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
		{
			while (info->width > strlen)
			{
				ft_count_putchar('0', info);
				info->width--;
			}
		}
		else
		{
			while (info->width > strlen)
			{
				ft_count_putchar(' ', info);
				info->width--;
			}
		}
	}
}

static void	ft_handle_str(t_info *info, char *str, int strlen)
{
	if (info->flag[e_minus] == '1' && info->point != 1)
		ft_count_putstr(str, info);
	ft_handle_width_str(info, strlen);
	if (info->flag[e_minus] != '1' && info->point != 1)
		ft_count_putstr(str, info);
	free(str);
}

void	ft_solve_string(t_info *info)
{
	int		strlen;
	char	*str;
	char	*tmp;

	tmp = va_arg(info->args, char *);
	if (tmp == NULL)
		tmp = "(null)";
	if (info->precision == 0)
	{
		str = ft_newstr_mzero(ft_strlen(tmp));
		ft_strcpy(str, tmp);
	}
	else
	{
		if (info->precision < 6 && info->precision >= 0
			&& (ft_strcmp(tmp, "(null)") == 0))
			info->precision = 0;
		str = ft_newstr_mzero(info->precision);
		ft_strncpy(str, tmp, info->precision);
	}
	if (info->point != 1)
		strlen = ft_strlen(str);
	else
		strlen = 0;
	ft_handle_str(info, str, strlen);
}
