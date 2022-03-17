/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:04:38 by fquist            #+#    #+#             */
/*   Updated: 2022/01/07 14:21:34 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Frees an allocated (char **array) with optional (bool exit) exit function
	ft_exit_print. The errorcode from exit() can be defined using the parameter
	(bool exit_status). The function will exit with errorcode(bool exit_status).
	See ft_exit_print for further informations about parameters.
*/
void	ft_free_array(char **array, bool exit, bool exit_status)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	if (exit == true && exit_status == false)
		ft_exit_print(exit_status, "Error\n", 2);
	else if (exit == true && exit_status == true)
		ft_exit_print(exit_status, "Error\n", 2);
}
