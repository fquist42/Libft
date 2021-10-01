/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:46:10 by fquist            #+#    #+#             */
/*   Updated: 2021/10/01 20:02:34 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	newstr = malloc(len1 + len2 + 1);
	if (newstr != NULL)
	{
		ft_memcpy(newstr, s1, len1);
		ft_memcpy(&newstr[len1], s2, len2);
		newstr[len1 + len2] = '\0';
	}
	return (newstr);
}
