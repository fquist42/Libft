/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:53:00 by fquist            #+#    #+#             */
/*   Updated: 2021/09/10 13:21:08 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *dest;
    char *source;

    i = 0;
    dest = dst;
    source = (char *) src;
    while(i < len)
    {
        dest[i] = source[i];
        i++;
    }
    return(dest);
}