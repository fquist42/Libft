/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:38:06 by fquist            #+#    #+#             */
/*   Updated: 2021/09/29 15:31:18 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	size_t	i;
	char	*string;

	i = 0;
	res = NULL;
	string = (char *) s;
	while (i <= ft_strlen(string))
	{
		if (string[i] == (char)c)
		{
			res = string + i;
			break ;
		}
		i++;
	}
	return (res);
}
