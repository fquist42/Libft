/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:33 by fquist            #+#    #+#             */
/*   Updated: 2021/09/02 18:10:58 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main()
{
    char b[17] = "das ist ein test";
    int n = 4;
    printf("%s", ft_bzero(b, n));
    return 0;
}