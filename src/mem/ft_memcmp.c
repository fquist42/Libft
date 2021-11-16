/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:38:44 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:55:04 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Compare byte string.
	The ft_memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.
RETURN VALUES
	The ft_memcmp() function returns zero if the two strings are identical,
	otherwise returns the difference between the first two differing bytes
	(treated as unsigned char values, so that 
	`\200' is greater than `\0', for example). Zero-length strings are 
	always identical.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*char_string1;
	unsigned char	*char_string2;

	i = 0;
	char_string1 = (unsigned char *) s1;
	char_string2 = (unsigned char *) s2;
	while (i < n)
	{
		if (char_string1[i] != char_string2[i])
			return (char_string1[i] - char_string2[i]);
		i++;
	}
	return (0);
}
