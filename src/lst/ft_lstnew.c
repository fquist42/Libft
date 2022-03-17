/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:41:33 by fquist            #+#    #+#             */
/*   Updated: 2022/01/06 01:05:40 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	ft_lstnew() allocates (with malloc(3)) and returns a new element.
	The variable ’content’ is initialized with the value of the parameter
	’content’. The variable ’next’ is initialized to NULL.
RETURN VALUES
	ft_lstnew() returns the new element.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*element_1;

	element_1 = NULL;
	element_1 = malloc(sizeof(t_list));
	if (element_1 == NULL)
		return (NULL);
	element_1->content = content;
	element_1->next = NULL;
	return (element_1);
}
