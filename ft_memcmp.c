/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:38:44 by fquist            #+#    #+#             */
/*   Updated: 2021/09/04 10:51:26 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *char_string1;
    char *char_string2;

    i = 0;
    char_string1 = (char *) s1;
    char_string2 = (char *) s2;
    while(i < n)
    {
        if(char_string1[i] != char_string2[i])
        {
            return(char_string1[i] - char_string2[i]);
        }
        i++;
    }
    return (0);
}

int main()
{
    char s1[1] = "1";
    char s2[1] = "1";
    size_t n = 1;
    printf("%d", ft_memcmp(s1, s2, n));
    return 0;
}