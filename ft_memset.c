/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:05:14 by fquist            #+#    #+#             */
/*   Updated: 2021/09/02 17:53:23 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>
#include <string.h>

int main()
{
    char b[17] = "das ist ein test";
    int c = '*';
    int n = 4;
    printf("%s", ft_memset(b, c, n));
    return 0;
}