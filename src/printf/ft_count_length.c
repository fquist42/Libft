/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:00:56 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:55:55 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

void	ft_count_putchar(char c, t_info *info)
{
	write(1, &c, 1);
	info->count += 1;
}

void	ft_count_putstr(char *str, t_info *info)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_count_putchar(str[i], info);
		i++;
	}
}

void	ft_count_putnchar(char c, int n, t_info *info)
{
	while (n-- > 0)
		ft_count_putchar(c, info);
}

void	ft_count_putnbr(long long nbr, t_info *info)
{
	if (nbr < 0)
	{
		ft_count_putnbr(nbr * -1, info);
		info->count += 1;
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_count_putchar('0' + nbr, info);
	else
	{
		ft_count_putnbr(nbr / 10, info);
		ft_count_putnbr(nbr % 10, info);
	}
}
