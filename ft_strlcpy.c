/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:11:13 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 18:38:13 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Size-bounded string copying and concatenation.
	ft_strlcpy() takes the full size of the destination buffer and guarantee
	NUL-termination if there is room.  Note that room for the NUL should
	be included in dstsize. strlcpy() copies up to dstsize - 1 characters
	from the string src to dst, NUL-terminating the result if dstsize is not 0.
	If the src and dst strings overlap, the behavior is undefined.
RETURN VALUES
	strlcpy() and strlcat() functions return the total length of the string
	they tried to create.  For ft_strlcpy() that means the length of src.
	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	char	*destination;
	char	*source;

	index = 0;
	destination = dst;
	source = (char *) src;
	if (dstsize > 0)
	{
		while (*source && index < dstsize - 1)
		{
			*destination = *source;
			destination++;
			source++;
			index++;
		}
		*destination = '\0';
	}
	return (ft_strlen(src));
}
