/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:12:44 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:40:38 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(void *s, int c, int n)
{
    int i = 0;
    unsigned char *x = s;
    unsigned char y = c;
    while(n > 0)
    {
        if(x[i] == y)
        {
            return(x + i);
        }
        i++;
    }
    return(NULL);
}