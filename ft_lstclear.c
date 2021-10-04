/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:13:41 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:55:23 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_lstclear() deletes and frees the given element and every uccessor
	of that element, using the function ’del’ and free(3).
	Finally, the pointer to the list is set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
	}
	*lst = NULL;
}
