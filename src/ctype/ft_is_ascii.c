/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:36:15 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:40:08 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Test for ASCII character.
	The ft_isascii() function tests for an ASCII character, which is any character
	between 0 and octal 0177 inclusive.
RETURN VALUES
	The ft_isascii() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/
int	ft_is_ascii(int c)
{
	return (c >= 0 && c <= 127);
}
