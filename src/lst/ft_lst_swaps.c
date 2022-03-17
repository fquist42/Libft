/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swaps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:02:34 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:55:23 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
sa : swap a - swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_sa(t_list **stack_a, int op)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = (*stack_a)->next;
		(*stack_a)->next = tmp;
		if (op > 0)
			write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}

/*
sb : swap b - swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_sb(t_list **stack_b, int op)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) > 1)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_b)->next;
		(*stack_b)->next = tmp;
		if (op > 0)
			write(1, "sb\n", 3);
		return (1);
	}
	return (0);
}

/*
ss : sa and sb at the same time. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_ss(t_list **stack_a, t_list **stack_b, int op)
{
	if ((ft_lstsize(*stack_a) + ft_lstsize(*stack_b)) > 2)
	{
		ft_sa(stack_a, op);
		ft_sb(stack_b, op);
		if (op > 0)
			write(1, "ss\n", 3);
		return (1);
	}
	return (0);
}
