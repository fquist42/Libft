/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:14:42 by fquist            #+#    #+#             */
/*   Updated: 2021/09/03 15:26:41 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
#include <stdio.h>
int main()
{
    char src[5] = "67890";
    char dst[5] = "12345";
    size_t n = 1;
    printf("%s", ft_memcpy(dst, src, n));
    return 0;
}