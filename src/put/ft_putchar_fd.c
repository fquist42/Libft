/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:51:54 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:54:53 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_putchar_fd() outputs the character ’c’ to the given file
	descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
