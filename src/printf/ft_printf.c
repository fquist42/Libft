/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:32:48 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:47 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_info	info;

	info.i = 0;
	va_start(info.args, format);
	info.count = 0;
	info.format = format;
	while (info.format[info.i])
	{
		if (info.format[info.i] != '%')
			ft_count_putchar(info.format[info.i], &info);
		if (info.format[info.i] == '%')
		{
			info.i++;
			ft_eval_input(&info);
		}
		info.i++;
	}
	va_end(info.args);
	return (info.count);
}
