/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:55:28 by fquist            #+#    #+#             */
/*   Updated: 2021/09/02 12:31:23 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:57:30 by fquist            #+#    #+#             */
/*   Updated: 2021/08/20 15:53:15 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *s)
{
    int char_count = 0;

    while(s[char_count] != '\0')
    {
        char_count++;
    }
    return (char_count);
}

char *ft_strrchr(const char *s, int c)
{
  char *res;
  int i;

  i = 0;
  res = NULL;
  while (s[i] != '\0')
  {
    if (s[ft_strlen(s) - 1 - i] == c)
    {
      res = (char *) s + ft_strlen(s) - 1 - i;
      break;
      //return (res);
    }
    i++;
  }
  return (res);
}

int main()
{
    printf("%s\n", ft_strrchr("Hello",'l'));
    return (0);
}