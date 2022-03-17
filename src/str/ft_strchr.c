/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:38:06 by fquist            #+#    #+#             */
/*   Updated: 2021/12/05 17:52:46 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Locate character in string.
	The ft_strchr() function locates the first occurrence of c 
	(converted to a char) in the string pointed to by s. 
	The terminating null character is considered to be part of the string;
	therefore if c is `\0', the functions locate the terminating `\0'.
RETURN VALUES
	ft_strchr() returns a pointer to the located
	character, or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*res;
	size_t	i;
	char	*str;

	i = 0;
	res = NULL;
	str = (char *) s;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char)c)
		{
			res = str + i;
			break ;
		}
		i++;
	}
	return (res);
}
