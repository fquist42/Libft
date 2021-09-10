/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:05:14 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:40:57 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, int n)
{
    int i;
    i = 0;
    unsigned char *x = b;
    unsigned char y = c;
    while(n > 0)
    {
        *x = y;
        x++;
        n--;
    }
    return (b);
}