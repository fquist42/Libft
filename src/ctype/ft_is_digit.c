/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:11:48 by fquist            #+#    #+#             */
/*   Updated: 2021/12/05 17:07:16 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Decimal-digit character test
	The ft_isdigit() function tests for a decimal digit character (0-9).
	The value of the argument must be representable as an unsigned char or
	the value of EOF.
RETURN VALUES
	The ft_isdigit() function return zero if the character tests false 
	and return non-zero if the character tests true.
*/
int	ft_is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
