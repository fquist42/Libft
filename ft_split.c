/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:13:14 by fquist            #+#    #+#             */
/*   Updated: 2021/09/27 23:25:09 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_mem(char **arr, int pos)
{
	while (pos >= 0)
	{
		free(arr[pos]);
		pos--;
	}
	free(arr);
	return (0);
}

static int	get_count_substr(const char *s, char c)
{
	int	res;

	res = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
			s++;
		res++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (res);
}

static int	insert_str(char const *s, char c, char **res)
{
	int	str_len;
	int	str_pos;
	int	arr_pos;

	str_pos = 0;
	arr_pos = 0;
	while (s[str_pos] != '\0')
	{
		str_len = 0;
		while (s[str_pos] != '\0' && s[str_pos] != c)
		{
			str_pos++;
			str_len++;
		}
		res[arr_pos] = ft_substr(s, (str_pos - str_len), str_len);
		if (res == NULL)
			return (free_mem(res, arr_pos));
		while (s[str_pos] != '\0' && s[str_pos] == c)
			str_pos++;
		arr_pos++;
	}
	res[arr_pos] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	if (*s == '\0')
	{
		res = malloc(sizeof(char *));
		if (res == NULL)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = malloc(sizeof(char *) * (get_count_substr(s, c) + 1));
	if (res == NULL)
		return (NULL);
	if (!(insert_str(s, c, res)))
	{
		res = malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	return (res);
}
