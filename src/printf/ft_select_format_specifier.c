/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format_specifier.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:37 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:56:55 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/modules/ft_printf.h"

int	ft_select_format_specifier(t_info *info)
{
	int	number;

	number = 0;
	if (info->format[info->i] == 'c')
		number = e_char;
	else if (info->format[info->i] == 's')
		number = e_string;
	else if (info->format[info->i] == 'p')
		number = e_pointer;
	else if (info->format[info->i] == 'd' || info->format[info->i] == 'i')
		number = e_decimal_int;
	else if (info->format[info->i] == 'u')
		number = e_u_dec_int;
	else if (info->format[info->i] == 'x' || info->format[info->i] == 'X')
		number = e_u_hex_int;
	else if (info->format[info->i] == '%')
		number = e_percentage;
	else
		ft_putstr("[Error] -> Format specifier not found. Exit.\n");
	return (number);
}
