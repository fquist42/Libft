/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:13:14 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:55:59 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
pa : push a - take the first element at the top of b
and put it at the top of a. Do nothing if b is empty. The parameter "op"
determines if the functions should print its name (1) ord not (0).
*/
int	ft_pa(t_list **stack_a, t_list **stack_b, int op)
{
	t_list	*tmp;
	int		size_b;
	int		size_a;

	if (!stack_b)
		return (0);
	else
	{
		size_b = ft_lstsize(*stack_b);
		size_a = ft_lstsize(*stack_a);
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		if (op > 0)
			write(1, "pa\n", 3);
		size_b--;
		size_a++;
		return (1);
	}
}

/*
pb : push b - take the first element at the top of a
and put it at the top of b. Do nothing if a is empty. The parameter "op"
determines if the functions should print its name (1) ord not (0).
*/
int	ft_pb(t_list **stack_a, t_list **stack_b, int op)
{
	t_list	*tmp;
	int		size_a;
	int		size_b;

	if (!stack_a)
		return (0);
	else
	{
		size_a = ft_lstsize(*stack_a);
		size_b = ft_lstsize(*stack_b);
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		if (op > 0)
			write(1, "pb\n", 3);
		size_a--;
		size_b++;
		return (1);
	}
}
