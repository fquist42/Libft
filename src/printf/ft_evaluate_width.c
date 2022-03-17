/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:00:06 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:39 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

void	ft_evaluate_width(t_info *info)
{
	info->width = 0;
	if (info->format[info->i] == '*')
	{
		info->width = va_arg(info->args, int);
		if (info->width < 0)
		{
			info->width = info->width * -1;
			info->flag[e_minus] = '1';
		}
		info->i++;
	}
	if (info->format[info->i] >= '0' && info->format[info->i] <= '9')
		info->width = ft_atoi(&info->format[info->i]);
	while (info->format[info->i] >= '0' && info->format[info->i] <= '9')
		info->i++;
}
