/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:33 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:18:36 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_bzero(void *b, int n)
{
    unsigned char *x = b;
    unsigned char y = '\0';
    while(n > 0)
    {
        *x = y;
        x++;
        n--;
    }
    return (b);
}
#include <stdio.h>
#include <string.h>
