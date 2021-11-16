/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:14 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:39:49 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

int	ft_is_alpha(int c);
int	ft_is_ascii(int c);
int	ft_is_digit(int c);
int	ft_is_print(int c);
int	ft_to_lower(int c);
int	ft_to_upper(int c);
int	ft_is_all_num(int c);

#endif