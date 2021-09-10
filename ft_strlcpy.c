/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:11:13 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:41:31 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t index;
    char *destination;
    char *source;

    index = 0;
    destination = dst;
    source = (char *) src;
    while(*source && index < dstsize -1)
    {
        *destination = *source;
        destination++;
        source++;
        index++;
    }
    *destination = '\0';
    return((size_t)ft_strlen((char *) src));
}