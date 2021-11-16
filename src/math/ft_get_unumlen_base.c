/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_unumlen_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:48:17 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 21:11:46 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_unumlen_base(u_long n, u_int base)
{
	int	numlen;

	numlen = 1;
	while (n / base)
	{
		numlen++;
		n /= base;
	}
	return (numlen);
}
