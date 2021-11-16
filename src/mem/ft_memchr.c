/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:12:44 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:55:07 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Locate byte in byte string.
	The ft_memchr() function locates the first occurrence of c 
	(converted to an unsigned char) in string s.
RETURN VALUES
	The ft_memchr() function returns a pointer to the byte located,
	or NULL if no such byte exists within n bytes.
*/
void	*ft_memchr(void *s, int c, int n)
{
	int				i;
	unsigned char	*uc_str;
	unsigned char	uc_c;

	uc_str = s;
	uc_c = c;
	i = 0;
	while (i < n)
	{
		if (uc_str[i] == uc_c)
			return (uc_str + i);
		i++;
	}
	return (NULL);
}
