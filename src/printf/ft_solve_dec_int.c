/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_dec_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:19:03 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:01 by fquist           ###   ########.fr       */
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
	This gives the minimum number of digits to appear for d, i, o, u, x, and X
	conversions
*/

static void	ft_handle_width_di(t_info *info, long long n, int nl, int df)
{
	if (info->flag[e_zero] == '1' && df == 0)
	{
		if (info->point != 0)
			while (--info->width > nl)
				ft_count_putchar(' ', info);
		if (n < 0)
			ft_putchar('-');
		if (info->point == 0)
			while (--info->width > nl)
				ft_count_putchar('0', info);
	}
	else
	{
		while (--info->width > (nl + df))
			ft_count_putchar(' ', info);
		if (n < 0)
			ft_putchar('-');
	}
	ft_count_putnchar('0', df, info);
	if (info->point != 1 || n != 0)
		ft_count_putnbr(n, info);
}

static void	ft_handle_flag_di2(t_info *info, int nbr, int nbrlen, int diff)
{
	if (info->flag[e_minus] == '1')
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_count_putnchar('0', diff, info);
		if (info->point != 1 || nbr != 0)
			ft_count_putnbr(nbr, info);
		if (info->width > nbrlen)
			while (--info->width > nbrlen + diff)
				ft_count_putchar(' ', info);
	}
	else
	{
		if (info->width > nbrlen)
			ft_handle_width_di(info, nbr, nbrlen, diff);
		else
		{
			if (nbr < 0)
				ft_putchar('-');
			ft_count_putnchar('0', diff, info);
			if (info->point != 1 || nbr != 0)
				ft_count_putnbr(nbr, info);
		}
	}
}

static void	ft_handle_flag_di(t_info *info, int nbr, int nbrlen, int diff)
{
	if (info->flag[e_plus] == '1' && nbr >= 0)
	{
		info->width--;
		ft_count_putchar('+', info);
	}
	if (info->flag[e_space] == '1' && info->flag[e_plus] != '1' && nbr >= 0)
	{
		info->width--;
		ft_count_putchar(' ', info);
	}
	ft_handle_flag_di2(info, nbr, nbrlen, diff);
}

void	ft_solve_dec_int(t_info *info)
{
	long long	nbr;
	int			nbrlen;
	int			diff;

	nbr = (int)(va_arg(info->args, long long));
	nbrlen = ft_get_numlen(nbr);
	diff = info->precision - nbrlen;
	if (info->point == 1 && nbr == 0)
		nbrlen--;
	if (nbr < 0)
		nbrlen++;
	if (diff < 0)
		diff = 0;
	if (info->width > nbrlen && info->width > info->precision)
		info->width++;
	ft_handle_flag_di(info, nbr, nbrlen, diff);
}
