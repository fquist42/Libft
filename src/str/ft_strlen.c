/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:52:37 by fquist            #+#    #+#             */
/*   Updated: 2021/12/10 21:21:42 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Find length of string.
	The ft_strlen() function computes the length of the string s.
	The function attempts to compute the length of s, but never scans beyond
	the first maxlen bytes of s.
RETURN VALUES
	The ft_strlen() function returns the number of characters that precede
	the terminating NUL character.
*/
size_t	ft_strlen(char const *s)
{
	size_t	char_count;

	char_count = 0;
	if (!s)
		return (0);
	while (s[char_count] != '\0')
		char_count++;
	return (char_count);
}
