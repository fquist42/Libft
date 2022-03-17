/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:06:00 by fquist            #+#    #+#             */
/*   Updated: 2022/01/06 22:19:54 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Frees an allocated (struct s_list **list) with optional (bool exit) 
	exit function ft_exit_print. The errorcode from exit() can be defined using
	the parameter (bool exit_status). The function will exit with
	errorcode(bool exit_status). See ft_exit_print for further informations
	about parameters.
*/
void	ft_free_list(t_list **lst, bool exit, bool exit_status)
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
	lst = NULL;
	if (exit == true && exit_status == false)
		ft_exit_print(exit_status, "Error\n", 2);
	else if (exit == true && exit_status == true)
		ft_exit_print(exit_status, "Error\n", 2);
}
