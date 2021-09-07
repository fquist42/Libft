/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:53:00 by fquist            #+#    #+#             */
/*   Updated: 2021/09/04 11:48:52 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
int main()
{
    char src[] = "abcd";
    char dst[] = "efgh";
    size_t len = 4;
    printf("Before Memmove dst = %s, src = %s\n", dst, src);
    ft_memmove(dst, src, len);
    printf("After Memmove dst = %s, src = %s\n", dst, src);
    return 0;
}