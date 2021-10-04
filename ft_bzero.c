/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:33 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:35:05 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	The ft_bzero() function writes n zeroed bytes to the string s. 
	If n is zero, bzero() does nothing.
*/
void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
	return (str);
}
