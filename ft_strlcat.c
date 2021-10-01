/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:47:27 by fquist            #+#    #+#             */
/*   Updated: 2021/09/28 20:28:24 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		index;
	size_t		len;

	len = ft_strlen(dst);
	index = 0;
	if (len >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[index] != '\0' && len + index < dstsize - 1)
	{
		dst[len + index] = src[index];
		index++;
	}
	dst[len + index] = '\0';
	return (len + ft_strlen(src));
}
