/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:21:03 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:55:06 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ra : rotate a - shift up all elements of stack a by 1.
The first element becomes the last one. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_ra(t_list **stack_a, int op)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack_a && (*stack_a)->next)
	{
		last = ft_lstlast(*stack_a);
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		last->next = tmp;
		tmp->next = NULL;
		if (op > 0)
			write(1, "ra\n", 3);
		return (1);
	}
	return (0);
}

/*
rb : rotate b - shift up all elements of stack b by 1. 
The first element becomes the last one. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_rb(t_list **stack_b, int op)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack_b && (*stack_b)->next)
	{
		last = ft_lstlast(*stack_b);
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		last->next = tmp;
		tmp->next = NULL;
		if (op > 0)
			write(1, "rb\n", 3);
		return (1);
	}
	return (0);
}

/*
rr : ra and rb at the same time. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_rr(t_list **stack_a, t_list **stack_b, int op)
{
	if (stack_a && stack_b)
	{
		ft_ra(stack_a, op);
		ft_rb(stack_b, op);
		if (op > 0)
			write(1, "rr\n", 3);
		return (1);
	}
	return (0);
}
