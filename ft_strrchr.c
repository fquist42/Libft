/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:55:28 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 18:54:31 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Locate character in string.
	The ft_strrchr() function locates the last occurrence of c
	(converted to a char) in the string pointed to by s. The terminating null
	character is considered to be part of the string; therefore if c is `\0',
	the functions locate the terminating `\0'.
RETURN VALUES
	ft_strrchr() returns a pointer to the located character, or NULL
	if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	size_t	i;
	char	*string;

	i = 0;
	res = NULL;
	string = (char *) s;
	while (i <= ft_strlen(string))
	{
		if (string[ft_strlen(string) - i] == (char)c)
		{
			res = string + ft_strlen(string) - i;
			break ;
		}
		i++;
	}
	return (res);
}
