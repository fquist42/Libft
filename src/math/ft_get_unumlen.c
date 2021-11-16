/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_unumlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:44:35 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 18:48:05 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_unumlen(u_long nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
