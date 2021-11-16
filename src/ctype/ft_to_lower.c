/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_lower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:31:32 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:40:26 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Upper case to lower case letter conversion.
	The ft_tolower() function converts an upper-case letter to the corresponding
	lower-case letter. The argument must be representable as an unsigned char
	or the value of EOF.
RETURN VALUES
	If the argument is an upper-case letter, the ft_tolower() function returns
	the corresponding lower-case letter if there is one; otherwise, the argument
	is returned unchanged.
*/
int	ft_to_lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
