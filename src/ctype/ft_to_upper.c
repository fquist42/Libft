/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_upper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:26:10 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:40:31 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Lower case to upper case letter conversion.
	The ft_toupper() function converts a lower-case letter to the corresponding
	upper-case letter. The argument must be representable as an unsigned char
	or the value of EOF.
RETURN VALUES
	If the argument is a lower-case letter, the ft_toupper() function returns the
	corresponding upper-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/
int	ft_to_upper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
