/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:03:13 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:54:41 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_putstr_fd() outputs the string ’s’ to the given file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i])
	{
		write (fd, &(s[i]), 1);
		i++;
	}
}
