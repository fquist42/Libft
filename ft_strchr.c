/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:38:06 by fquist            #+#    #+#             */
/*   Updated: 2021/08/20 15:56:26 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(int c, char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            return s + i;
        i++;  
    }
    return NULL;
}

int main()
{
    printf("%s\n", ft_strchr('a', "hallo"));
    //printf("%s\n", strchr("hallo", 'a'));
    return (0);
}
