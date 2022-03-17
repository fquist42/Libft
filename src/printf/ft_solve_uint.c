/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:56:07 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:21 by fquist           ###   ########.fr       */
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
	conversions.
*/

void	ft_itoa_uint_hex(unsigned long long nbr, t_info *info)
{
	if (nbr > 9)
	{
		ft_itoa_uint_hex(nbr / 10, info);
		ft_count_putchar(nbr % 10 + '0', info);
	}
	else
		ft_count_putchar(nbr + '0', info);
}

static void	handle_width_ui(t_info *info, unsigned long long n, int nl, int df)
{
	if (info->flag[e_zero] == '1' && (info->flag[e_minus] != '1' && df == 0))
	{
		if (info->point != 0)
			while (--info->width > nl)
				ft_count_putchar(' ', info);
		else
			while (--info->width > nl)
				ft_count_putchar('0', info);
	}
	else
	{
		if (info->point != 1 || n != 0)
			while (--info->width > nl + df)
				ft_count_putchar(' ', info);
		else
			while (--info->width > 0)
				ft_count_putchar(' ', info);
	}
}

static void	handle_uint(t_info *info, unsigned long long n, int nl, int dif)
{
	if (info->flag[e_minus] == '1' && (info->point != 1 || n != 0))
	{
		ft_count_putnchar('0', dif, info);
		ft_itoa_uint_hex(n, info);
	}
	if (info->width > nl)
	{
		info->width++;
		handle_width_ui(info, n, nl, dif);
	}
	if (info->flag[e_minus] != '1' && (info->point != '1' || n != 0))
	{
		ft_count_putnchar('0', dif, info);
		ft_itoa_uint_hex(n, info);
	}
}

void	ft_solve_uint(t_info *info)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					nbrlen;
	int					diff;

	nbrlen = 0;
	nbr = (unsigned int)(va_arg(info->args, long long));
	tmp = nbr;
	if (tmp == 0 && info->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		nbrlen++;
		tmp /= 10;
	}
	diff = info->precision - nbrlen;
	if (diff < 0 )
		diff = 0;
	handle_uint(info, nbr, nbrlen, diff);
}
