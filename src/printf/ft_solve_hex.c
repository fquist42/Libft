/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:04:47 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:09 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

void	ft_itoa_h_hex(unsigned long long n, char format, t_info *info)
{
	if (n > 15)
	{
		ft_itoa_h_hex(n / 16, format, info);
		ft_itoa_h_hex(n % 16, format, info);
	}
	else
	{
		if (n <= 9)
			ft_count_putchar(n + '0', info);
		else if (format == 'x')
			ft_count_putchar(n - 10 + 'a', info);
		else
			ft_count_putchar(n - 10 + 'A', info);
	}
}

void	ft_handle_flag_x2(t_info *info, char format, int nbr)
{
	if ((info->flag[e_hash] == '1' && info->flag[e_zero] != '1'
			&& info->point == 0 && nbr != 0))
	{
		if (format == 'x')
			ft_count_putstr("0x", info);
		if (format == 'X')
			ft_count_putstr("0X", info);
	}
}

void	ft_handle_flag_x(t_info *info, unsigned long long nbr, int nl, int dif)
{
	if (info->flag[e_minus] == '1')
	{
		info->width++;
		ft_count_putnchar('0', dif, info);
		if (info->point != 1 || nbr != 0)
			ft_itoa_h_hex(nbr, info->format[info->i], info);
		if (info->width > nl)
			while (--info->width > nl + dif)
				ft_count_putchar(' ', info);
	}
	else
	{
		info->width++;
		if (info->width > nl && (info->flag[e_zero] != '1' || info->point != 0))
			while (--info->width > nl + dif)
				ft_count_putchar(' ', info);
		if (info->width > nl && info->flag[e_zero] == '1' && info->point == 0)
			while (--info->width > nl + dif)
				ft_count_putchar('0', info);
		ft_count_putnchar('0', dif, info);
		if (info->point != 1 || nbr != 0)
			ft_itoa_h_hex(nbr, info->format[info->i], info);
	}
}

void	ft_solve_hex(t_info *info)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					nbrlen;
	int					diff;

	nbr = (unsigned int)(va_arg(info->args, unsigned long long));
	tmp = nbr;
	nbrlen = 0;
	if (nbr == 0 && info->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		nbrlen++;
		tmp /= 16;
	}
	diff = info->precision - nbrlen;
	if (diff < 0)
		diff = 0;
	ft_handle_flag_x2(info, info->format[info->i], nbr);
	ft_handle_flag_x(info, nbr, nbrlen, diff);
}
