/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:32:04 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 19:23:29 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	int		j;
	char	*hs;
	char	*ne;

	index = 0;
	j = 0;
	hs = (char *)haystack;
	ne = (char *)needle;
	if (ft_strlen(ne) == 0)
		return (hs);
	while (index < len)
	{
		while (j < ft_strlen(ne))
		{
			if (hs[index + j] == ne[j])
				j++;
			else
				break ;
			if (j == ft_strlen(ne))
				return (hs + index);
		}
		index++;
	}
	return (0);
}
