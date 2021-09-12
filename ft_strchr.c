/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:38:06 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 17:05:57 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;
	char	*string;

	i = 0;
	res = NULL;
	string = (char *) s;
	while (i <= ft_strlen(string))
	{
		if (string[i] == c)
		{
			res = string + i;
			break ;
		}
		i++;
	}
	return (res);
}
