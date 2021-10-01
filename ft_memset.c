/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:05:14 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 16:21:26 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int n)
{
	int				i;
	unsigned char	*x;
	unsigned char	y;

	i = 0;
	x = b;
	y = c;
	while (n > 0)
	{
		*x = y;
		x++;
		n--;
	}
	return (b);
}
