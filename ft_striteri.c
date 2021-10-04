/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:07:16 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 18:09:32 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_striteri() applies the function f to each character of the string passed
	as argument, and passing its index as first argument. Each character is
	passed by address to f to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!(s == NULL))
	{
		while (*s != '\0')
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
