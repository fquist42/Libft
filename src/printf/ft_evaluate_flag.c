/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:42:59 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:09 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

void	ft_evaluate_flag(t_info *info)
{
	info->flag[e_minus] = '0';
	info->flag[e_zero] = '0';
	info->flag[e_hash] = '0';
	info->flag[e_space] = '0';
	info->flag[e_plus] = '0';
	while (info->format[info->i] == '-' || info->format[info->i] == '0'
		|| info->format[info->i] == '#' || info->format[info->i] == ' '
		|| info->format[info->i] == '+')
	{
		if (info->format[info->i] == '-')
			info->flag[e_minus] = '1';
		if (info->format[info->i] == '0')
			info->flag[e_zero] = '1';
		if (info->format[info->i] == '#')
			info->flag[e_hash] = '1';
		if (info->format[info->i] == ' ')
			info->flag[e_space] = '1';
		if (info->format[info->i] == '+')
			info->flag[e_plus] = '1';
		info->i++;
	}
}
