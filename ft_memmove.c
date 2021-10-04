/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:53:00 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:54:59 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* protecting case if dst > src and reversing the memmove process. */

static char	*rev_memmove(void *dst, const void *src, size_t len)
{
	while (len)
	{
		*((char *)dst + len - 1) = *((char *)src + len - 1);
		len--;
	}
	return (dst);
}

/*
DESCRIPTION
	Copy byte string.
	The ft_memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
	manner.
RETURN VALUES
	The ft_memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	if (len == 0 || (!dst && !src))
		return ((void *)dst);
	dest = dst;
	source = (char *) src;
	if (dest > source)
		rev_memmove(dest, source, len);
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
