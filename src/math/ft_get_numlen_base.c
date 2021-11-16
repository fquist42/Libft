/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numlen_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:08:13 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 21:11:57 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_numlen_base(long n, u_int base)
{
	int	numlen;

	numlen = 1;
	if (n < 0)
		numlen++;
	while (n / base)
	{
		numlen++;
		n /= base;
	}
	return (numlen);
}
