/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:04:01 by fquist            #+#    #+#             */
/*   Updated: 2021/09/30 18:15:44 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}




/*

Parameters 
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ to the content of each element.

*/