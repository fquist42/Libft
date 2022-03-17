/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:58:15 by fquist            #+#    #+#             */
/*   Updated: 2022/01/06 22:11:45 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Exit function with optional (char *print) message to the filedescriptor (fd).
	If print is NULL the function will exit with exitcode(bool status)
	without writing anything. ft_exit_print will exit with errorcode(EXIT_SUCCESS)
	when exit_status is true and errorcode(EXIT_FAILURE) if exit_status is 0.
*/
void	ft_exit_print(bool status, char *print, int fd)
{
	size_t	size;

	if (status == true)
	{
		if (print)
		{
			size = ft_strlen(print);
			write(fd, print, size);
		}
		exit(EXIT_SUCCESS);
	}
	else if (status == false)
	{
		if (print)
		{
			size = ft_strlen(print);
			write(fd, print, size);
		}
		exit(EXIT_FAILURE);
	}
	free(print);
}
