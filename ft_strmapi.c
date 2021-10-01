/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:19:07 by fquist            #+#    #+#             */
/*   Updated: 2021/09/27 23:27:16 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (!(s == NULL || f == NULL))
	{
		str = malloc(ft_strlen(s) + 1);
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[ft_strlen(s)] = '\0';
	}
	return (str);
}
