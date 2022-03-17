/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate_precision.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:49:04 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:34 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

void	ft_evaluate_precision(t_info *info)
{
	info->precision = 0;
	info->point = 0;
	if (info->format[info->i] == '.')
	{
		info->point = 1;
		info->i++;
		if (info->format[info->i] == '*')
		{
			info->precision = va_arg(info->args, int);
			if (info->precision < 0)
			{
				info->precision = 0;
				info->point = 0;
			}
			info->i++;
		}
		if (info->format[info->i] >= '0' && info->format[info->i] <= '9')
			info->precision = ft_atoi(&info->format[info->i]);
		while (info->format[info->i] >= '0' && info->format[info->i] <= '9')
			info->i++;
		if (info->precision > 0)
			info->point = 2;
	}
}
