/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:55:28 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 16:48:26 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
  char *string;

  i = 0;
  res = NULL;
  string = (char *) s;
  while (i <= ft_strlen(string))
  {
    if (string[ft_strlen(string) - 1 - i] == c)
    {
      res = string + ft_strlen(string) - 1 - i;
      break;
    }
    i++;
  }
  return (res);
}