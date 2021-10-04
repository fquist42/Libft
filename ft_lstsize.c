/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:07:13 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:55:09 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_lstsize() counts the number of elements in a list.
RETURN VALUES
	ft_lstsize() returns the count.
*/
int	ft_lstsize(t_list *lst)
{
	int	count_elements;

	count_elements = 0;
	while (lst != NULL)
	{
		count_elements++;
		lst = lst->next;
	}
	return (count_elements);
}
