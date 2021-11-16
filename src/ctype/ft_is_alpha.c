/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:05:21 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:40:01 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Alphabetic character test.
	The ft_isalpha() function tests for any character for which isupper(3) or
	islower(3) is true.  The value of the argument must be representable as an
	unsigned char or the value of EOF.
RETURN VALUES
	The ft_isalpha() function returns zero if the character tests false and 
	returns non-zero if the character tests true.
*/
int	ft_is_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
