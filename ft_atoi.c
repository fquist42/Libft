/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:57:11 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:22:50 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Convert ASCII string to integer.
	The ft_atoi() function converts the initial portion of the string 
	pointed to by str to int representation.
RETURN VALUES
	Returns the converted string.
*/
int	ft_atoi(const char *nptr)
{
	int	result;
	int	offset;
	int	sign;

	result = 0;
	offset = 0;
	sign = 1;
	while (nptr[offset] == ' ' || (nptr[offset] >= 9 && nptr[offset] <= 13))
		offset++;
	if (nptr[offset] == '-')
	{
		sign *= -1;
		offset++;
	}
	else if (nptr[offset] == '+')
		offset++;
	while (ft_isdigit(nptr[offset]))
	{
		result *= 10;
		result += nptr[offset] - '0';
		offset++;
	}
	return (result * sign);
}
