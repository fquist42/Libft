/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:25:15 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:57:15 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

static	void	ft_itoa_p_hex(unsigned	long	long nbr, t_info *info)
{
	if (nbr > 15)
	{
		ft_itoa_p_hex(nbr / 16, info);
		ft_itoa_p_hex(nbr % 16, info);
	}
	else
	{
		if (nbr <= 9)
			ft_count_putchar(nbr + '0', info);
		else
			ft_count_putchar(nbr - 10 + 'a', info);
	}
}

static void	handle_width_pointer(t_info *info, int addrlen, int diff)
{
	if (info->width > addrlen && info->width > info->precision)
	{
		info->width++;
		if (info->flag[e_zero] == '1' && (info->flag[e_minus] != '1'
				|| diff != 0))
			while (--info->width > addrlen)
				ft_count_putchar('0', info);
		else
			while (--info->width > addrlen + diff)
				ft_count_putchar(' ', info);
	}
}

static void	handle_pointer(t_info *info, unsigned long long ad, int adl, int df)
{
	if (info->flag[e_minus] == '1' || (info->flag[e_zero] == '1' && df == 0))
	{
		ft_count_putstr("0x", info);
		ft_count_putnchar('0', df, info);
	}
	if (info->flag[e_minus] == '1' && (ad != 0 || info->point != 1))
		ft_itoa_p_hex(ad, info);
	handle_width_pointer(info, adl, df);
	if (info->flag[e_minus] != '1' && (info->flag[e_zero] != '1' || df != 0))
	{
		ft_count_putstr("0x", info);
		if (ad == 0)
			df = 1;
		ft_count_putnchar('0', df, info);
	}
	if (info->flag[e_minus] != '1' && (ad != 0 && info->point != 1))
		ft_itoa_p_hex(ad, info);
}

void	ft_solve_pointer(t_info *info)
{
	unsigned long long	addr;
	unsigned long long	tmp;
	int					addrlen;
	int					diff;

	addr = (unsigned long long)va_arg(info->args, void *);
	addrlen = 2;
	if (addr == 0 && info->point != 1)
		addrlen++;
	tmp = addr;
	while (tmp > 0)
	{
		addrlen++;
		tmp /= 16;
	}
	diff = info->precision - addrlen + 2;
	if (diff < 0)
		diff = 0;
	handle_pointer(info, addr, addrlen, diff);
}
