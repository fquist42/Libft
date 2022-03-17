/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:40:51 by fquist            #+#    #+#             */
/*   Updated: 2021/11/29 23:01:08 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdlib.h>
# include <stdarg.h>

enum				e_flags
{
	e_minus,
	e_zero,
	e_hash,
	e_space,
	e_plus
};

enum				e_functions
{
	e_char,
	e_string,
	e_pointer,
	e_decimal_int,
	e_u_dec_int,
	e_u_hex_int,
	e_percentage,
	E_LENGTH
};

typedef struct s_info
{
	const char	*format;
	va_list		args;
	int			width;
	int			i;
	int			precision;
	char		flag[5];
	int			point;
	int			count;
}	t_info;

/*
**  ft_printf solution functions
*/
int		ft_printf(const char *format, ...);
void	ft_solve_char(t_info *info);
void	ft_solve_percent(t_info *info);
void	ft_solve_dec_int(t_info *info);
void	ft_solve_string(t_info *info);
void	ft_solve_uint(t_info *info);
void	ft_solve_pointer(t_info *info);
void	ft_solve_hex(t_info *info);
/*
**  ft_printf evaluating functions
*/
void	ft_eval_input(t_info *info);
void	ft_evaluate_flag(t_info *info);
void	ft_evaluate_width(t_info *info);
void	ft_evaluate_precision(t_info *info);
/*
**  ft_printf extra functions
*/
int		ft_select_format_specifier(t_info *info);
void	ft_count_putchar(char c, t_info *info);
void	ft_count_putstr(char *str, t_info *info);
void	ft_count_putnchar(char c, int n, t_info *info);
void	ft_count_putnbr(long long nbr, t_info *info);
typedef void	t_formatter(t_info *info);

#endif
