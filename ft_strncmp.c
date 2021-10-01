/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:33:36 by fquist            #+#    #+#             */
/*   Updated: 2021/10/01 17:01:15 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tc_s1;
	unsigned char	*tc_s2;

	i = 0;
	tc_s1 = (unsigned char *) s1;
	tc_s2 = (unsigned char *) s2;
	while (i < n)
	{
		if (tc_s1[i] != tc_s2[i])
			return (tc_s1[i] - tc_s2[i]);
		if (tc_s1[i] == '\0' && tc_s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
