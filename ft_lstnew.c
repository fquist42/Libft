/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:41:33 by fquist            #+#    #+#             */
/*   Updated: 2021/09/29 15:55:59 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;
	t_list	*element_1;

	element_1 = NULL;
	element_1 = malloc(sizeof(t_list));
	if (element_1 == NULL)
		return (NULL);
	element_1->content = content;
	element_1->next = NULL;
	head = element_1;
	return (element_1);
}
