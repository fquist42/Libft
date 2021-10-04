/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:16:15 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 17:55:14 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_lstmap() iterates the list ’lst’ and applies the function
	’f’ to the content of each element. Creates a new list resulting
	of the successive applications of the function ’f’.
	The ’del’ function is used to delete the content of an element if needed.
RETURN VALUES
	ft_lstmap() returns the new list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = 0;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		while (!new_element)
		{
			ft_lstdelone(new_element, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
