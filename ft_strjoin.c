/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:46:10 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:30:45 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_strjoin() allocates (with malloc(3)) and returns a new string,
	which is the result of the concatenation of ’s1’ and ’s2’ using ft_memcpy().
RETURN VALUES
	Returns the new string or NULL if either s1 or s2 are empty or
	the allocation failed.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	newstr = malloc(len1 + len2 + 1);
	if (!newstr)
		return (NULL);
	if (newstr != NULL)
	{
		ft_memcpy(newstr, s1, len1);
		ft_memcpy(&newstr[len1], s2, len2);
		newstr[len1 + len2] = '\0';
	}
	return (newstr);
}
