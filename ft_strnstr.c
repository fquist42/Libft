/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:32:04 by fquist            #+#    #+#             */
/*   Updated: 2021/09/06 15:55:51 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
    int char_count = 0;

    while(s[char_count] != '\0')
    {
        char_count++;
    }
    return (char_count);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t index;
    size_t j;
    char *hs;
    char *ne;
    size_t length_hs;
    size_t length_ne;

    index = 0;
    j = 0;
    hs = (char *)haystack;
    ne = (char *)needle;
    length_hs = ft_strlen(hs);
    length_ne = ft_strlen(ne);
    if(length_ne == 0)
        return (hs);
    while (index < len)
	{
		while (j < length_ne)
		{
			if (hs[index + j] == ne[j])
				j++;
			else
				break ;
			if (j == length_ne)
				return (hs + index);
		}
		index++;
	}
	return (0);
}
int main()
{
    char *hs = "Hallo wie gehts";
    char *ne = "wie";
    size_t len = 5;
    printf("I found: %s\n",ft_strnstr(hs, ne, len));
    return (0);
}