/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:38:44 by fquist            #+#    #+#             */
/*   Updated: 2021/09/28 20:27:58 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*char_string1;
	unsigned char	*char_string2;

	i = 0;
	char_string1 = (unsigned char *) s1;
	char_string2 = (unsigned char *) s2;
	while (i < n)
	{
		if (char_string1[i] != char_string2[i])
			return (char_string1[i] - char_string2[i]);
		i++;
	}
	return (0);
}
