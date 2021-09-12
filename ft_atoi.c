/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:57:11 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 19:19:22 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkwhitespace(char c)
{
	if (c == ' ')
		return (0);
	if (c == '\n')
		return (0);
	if (c == '\t')
		return (0);
	if (c == '\v')
		return (0);
	if (c == '\f')
		return (0);
	if (c == '\r')
		return (0);
	else
		return (1);
}

static int	ft_atoi_rules(char *str, int i, int minus, int nbr)
{
	if ('0' <= str[i] && str[i] <= '9')
	{
		if (!('0' <= str[i + 1] && str[i + 1] <= '9'))
		{
			if (minus % 2 == 1)
				return (-1 * (str[i] - '0'));
			else
				return (str[i] - '0');
		}
		else
		{
			nbr = str[i] - '0';
			i++;
		}
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (minus % 2 == 1)
		return (-1 * nbr);
	return (nbr);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		minus;
	int		nbr;
	char	*string;

	string = (char *)str;
	i = 0;
	minus = 0;
	nbr = 0;
	while (ft_checkwhitespace(str[i]) == 0)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		i++;
	}
	while (str[i] == '0')
		i++;
	return (ft_atoi_rules(string, i, minus, nbr));
}
