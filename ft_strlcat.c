/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:47:27 by fquist            #+#    #+#             */
/*   Updated: 2021/09/04 15:26:47 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
    int char_count;

    char_count = 0;

    while(s[char_count] != '\0')
    {
        char_count++;
    }
    return (char_count);
}

size_t ft_strlcat(char * dst, const char *src, size_t dstsize)
{
    size_t index;
    char *destination;
    char *source;

    index = 0;
    destination = dst;
    source = (char *) src;
    while(*source && index < dstsize - 1)
    {
        *destination = (dstsize - strlen((char *)src) -1);
        destination++;
        source++;
        index++;
    }
    *destination = '\0';
    return((size_t)ft_strlen(dst)+(size_t)ft_strlen((char *)src));
}
int		main(void)
{
	char *src1 = "123456789012345678901234567890";
	char *src2 = "123456789012345678901234567890";
	char *dest1;
	char *dest2;
	char desta1[60];
	char desta2[60];

	dest1 = desta1;
	dest2 = desta2;
	strlcat(desta1, src1, 19);
	ft_strlcat(desta2, src2, 19);
	printf("strlcat  : %s\n", dest1);
	printf("strlcat   : %lu\n", strlcat(desta1, src1, 19));
	printf("ft_strlcat: %s\n", dest2);
	printf("ft_strlcat: %zu\n", ft_strlcat(desta2, src2, 19));
	return (0);
}
