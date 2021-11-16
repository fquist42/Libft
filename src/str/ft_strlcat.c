/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:47:27 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 18:34:19 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Size-bounded string copying and concatenation.
	The ft_strlcat() function appends string src to the end of dst.
	It will append at most dstsize - strlen(dst) - 1 characters.
	It will then NUL-terminate, unless dstsize is 0 or the original dst string
	was longer than dstsize.
	If the src and dst strings overlap, the behavior is undefined.
RETURN VALUES
	ft_strlcat() functions return the total length of the string
	they tried to create. The initial length of dst plus
	the length of src. If the return value is >= dstsize,
	the output string has been truncated. It is the caller's responsibility
	to handle this.
*/
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
