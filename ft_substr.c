/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:22:41 by fquist            #+#    #+#             */
/*   Updated: 2021/09/15 19:24:16 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_string;

	i = 0;
	sub_string = malloc(len + 1);
	if (sub_string == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	return (sub_string);
}
