/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:47:27 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 20:44:48 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	int		len;

	len = strlen(dst);
	index = 0;
	while (*src && len + index < dstsize)
	{
		dst[len + index] = src[index];
		index++;
	}
	dst[dstsize - 1] = '\0';
	return (len + (size_t)strlen((char *)src));
}
