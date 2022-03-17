/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelix <nelix@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:01 by fquist            #+#    #+#             */
/*   Updated: 2022/03/03 02:14:56 by nelix            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Checking for specified set-characters in the string to trim.
	Returns 1 if the character found is in set and NULL if not.
*/
static int	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*
DESCRIPTION
	ft_strtrim() allocates (with malloc(3)) and returns a copy of ’s1’ with the
	characters specified in ’set’ removed from the beginning and the end of the
	string.
RETURN VALUES
	Returns the trimmed string or NULL if the allocation failed.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_check_set(s1[start], set))
		start++;
	while (end > start && ft_check_set(s1[end - 1], set))
		end--;
	newstr = malloc(sizeof(*s1) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	while (start < end)
	{
		newstr[i] = s1[start];
		i++;
		start++;
	}
	newstr[i] = 0;
	return (newstr);
}
