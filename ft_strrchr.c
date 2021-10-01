/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:55:28 by fquist            #+#    #+#             */
/*   Updated: 2021/09/29 15:32:21 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
