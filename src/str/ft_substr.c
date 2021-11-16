/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:22:41 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:32:27 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_substr() allocates (with malloc(3)) and returns a substring from the
	string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
RETURN VALUES
	Returns the substring or NULL if the allocation failed.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_calloc(1, 1));
	if (len > str_len)
		len = (str_len - start);
	sub_str = malloc(len + 1);
	if (sub_str == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
