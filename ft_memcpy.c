/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:14:42 by fquist            #+#    #+#             */
/*   Updated: 2021/09/10 13:21:11 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *x;
    char *y;

    i =0;
    x = dst;
    y = (char *) src;

    while(i < n)
    {
        x[i] = y[i];
        i++;
    }
    return (dst);
}