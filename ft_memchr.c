/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:12:44 by fquist            #+#    #+#             */
/*   Updated: 2021/09/03 15:38:01 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
int main()
{
    char s[17] = "das ist ein test";
    int c = 't';
    int n = 10;
    printf("%s", ft_memchr(s, c, n));
    return 0;
}