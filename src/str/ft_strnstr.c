/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:32:04 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 18:51:29 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Locate a substring in a string.
	The ft_strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len characters
	are searched.  Characters that appear after a `\0' character are not searched.
RETURN VALUES
	If needle is an empty string, haystack is returned; if needle occurs nowhere
	in haystack, NULL is returned; otherwise a pointer to the first character of
	the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	if (ft_strlen(haystack) == 0 || len == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		temp = i;
		while (haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i - j]);
		}
		j = 0;
		i = temp + 1;
	}
	return ((void *) 0);
}
