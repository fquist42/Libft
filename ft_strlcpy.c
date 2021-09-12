/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:11:13 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 17:06:17 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	char	*destination;
	char	*source;

	index = 0;
	destination = dst;
	source = (char *) src;
	while (*source && index < dstsize - 1)
	{
		*destination = *source;
		destination++;
		source++;
		index++;
	}
	*destination = '\0';
	return ((size_t)ft_strlen((char *) src));
}
