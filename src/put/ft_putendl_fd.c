/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:38:59 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:54:50 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_putendl_fd() outputs the string ’s’ to the given file descriptor,
	followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &(s[i]), 1);
		i++;
	}
	write(fd, "\n", 1);
}
