/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:09:51 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 14:04:42 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Protection & error handling for res (no \n empty nl). Returns res/newline
  after gnl_handle_newlines().
*/
char	*gnl_eval_res(char	**newline, size_t mem_size)
{
	char	*res;

	if (*newline)
	{
		if (mem_size <= 0 && **newline == '\0')
		{
			gnl_free(&(*newline));
			return (NULL);
		}
	}
	if (gnl_strchr_len(*newline, '\n') == -1)
	{
		res = gnl_substr(*newline, 0, gnl_strchr_len(*newline, '\0'));
		gnl_free(&(*newline));
	}
	else
		res = gnl_handle_newlines(newline);
	return (res);
}

//used if newline contains only \n or multiple \n's.
char	*gnl_handle_newlines(char	**newline)
{
	char	*tmp;
	char	*res;
	size_t	nl;

	if (gnl_strchr_len(*newline, '\n') == 0)
		res = gnl_substr(*newline, 0, 1);
	else
		res = gnl_substr(*newline, 0, gnl_strchr_len(*newline, '\n') + 1);
	nl = (gnl_strchr_len(*newline, '\n') + 1);
	tmp = gnl_substr(*newline, nl, gnl_sublen(nl, *newline));
	gnl_free(newline);
	*newline = tmp;
	return (res);
}

// returns a substring (size len) from str, beginning from start.
char	*gnl_substr(char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	i2;
	char	*res;

	i = 0;
	i2 = 0;
	if (!str)
		return (NULL);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (i >= start && i2 < len)
		{
			res[i2] = str[i];
			i2++;
		}
		i++;
	}
	res[i2] = '\0';
	return (res);
}

// returns length of the rest of the string starting from i.
size_t	gnl_sublen(size_t i, char *str)
{
	while (str[i] != '\0')
		i++;
	return (i);
}
