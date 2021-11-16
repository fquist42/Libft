/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:13:14 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:23:22 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	frees memory in case of allocation failure */
static int	split_free(char **arr, int pos)
{
	while (pos >= 0)
	{
		free(arr[pos]);
		pos--;
	}
	free(arr);
	return (0);
}

/*	counts the substrings in the string s which are separated
	by the delimiter c and returns the result */
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

/*	insert and allocates the substrings using ft_substr() */
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
			return (split_free(res, arr_pos));
		while (s[str_pos] != '\0' && s[str_pos] == c)
			str_pos++;
		arr_pos++;
	}
	res[arr_pos] = 0;
	return (1);
}

/*
DESCRIPTION
	ft_split() allocates (with malloc(3)) and returns an array of strings
	obtained by splitting ’s’ using the character ’c’ as a delimiter.
	The array must be ended by a NULL pointer.
RETURN VALUES
	The array of new strings resulting from the split.
	NULL if the allocation fails.
*/
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
