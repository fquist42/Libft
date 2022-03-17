/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_indexing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:50:36 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:50:53 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Iterates over 2 lists and sets the struct variable "index" for each element
	in the lists according to its position.
*/
void	ft_set_index(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = *stack_a;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
	i = 1;
	tmp = *stack_b;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

/*
DESCRIPTION
	Compares the struct variable "content" with parameter "value" and returns
	the index of the matching element.
	Returns 0 if stack is empty or the list length if nothing matched.
*/
int	ft_get_index(t_list **stack, int *value)
{
	t_list	*tmp;
	int		i;

	if (!*stack)
		return (0);
	tmp = *stack;
	i = 1;
	while (tmp->content != (void *)value)
	{
		tmp = (tmp)->next;
		i++;
	}
	return (i);
}
