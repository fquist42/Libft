/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_ranking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:02:56 by fquist            #+#    #+#             */
/*   Updated: 2022/01/06 01:06:12 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Iterates over stack and compares the struct variable "content"
	from the current element from ft_set_rankloop() with the compare_to element
	from ft_set_rank(). The elements will be ranked lowest to highest "content"
	no matter the index of the element itself.
*/
void	ft_set_rank(t_list **stack, t_list *current)
{
	t_list	*compare_to;

	compare_to = *stack;
	while (compare_to)
	{
		if (current->content > compare_to->content)
			current->rank++;
		compare_to = compare_to->next;
	}
}

/*
	Iterates over stack using the function ft_set_rank on every element.
*/
void	ft_set_rankloop(t_list *stack)
{
	t_list	*current;

	current = stack;
	current->rank = 0;
	while (current)
	{
		ft_set_rank(&stack, current);
		current = current->next;
	}
}

/*
	Iterates over stack looking for the highest rank in stack and returns the rank.
*/
int	ft_find_max_rank(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->rank;
	while (tmp)
	{
		if (tmp->rank > max)
			max = tmp->rank;
		tmp = tmp->next;
	}
	return (max);
}

/*
	Iterates over stack looking for the lowest rank in stack and returns the rank.
*/
int	ft_find_min_rank(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->rank;
	while (tmp)
	{
		if (tmp->rank < min)
			min = tmp->rank;
		tmp = tmp->next;
	}
	return (min);
}
