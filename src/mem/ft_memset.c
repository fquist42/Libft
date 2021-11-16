/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:05:14 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:12:35 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Fill a byte string with a byte value.
	The ft_memset() function writes len bytes of value c 
	(converted to an unsigned char) to the string b.
RETURN VALUES
	The ft_memset() function returns its first argument.
*/
void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*x;
	unsigned char	y;

	i = 0;
	x = b;
	y = c;
	while (len > 0)
	{
		*x = y;
		x++;
		len--;
	}
	return (b);
}
