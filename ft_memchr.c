/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:12:44 by fquist            #+#    #+#             */
/*   Updated: 2021/09/20 18:46:52 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, int n)
{
	int				i;
	unsigned char	*x;
	unsigned char	y;

	x = s;
	y = c;
	i = 0;
	while (i < n)
	{
		if (x[i] == y)
			return (x + i);
		i++;
	}
	return (NULL);
}
