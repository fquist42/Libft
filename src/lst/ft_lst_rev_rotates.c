/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rev_rotates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:26:35 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:57:04 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
rra : reverse rotate a - shift down all elements of stack a by 1.
The last element becomes the first one. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_rra(t_list **stack, int op)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = ft_lstlast(*stack);
	if (!*stack)
		return (0);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp2->next = *stack;
	*stack = tmp2;
	if (op > 0)
		write(1, "rra\n", 4);
	return (1);
}

/*
rrb : reverse rotate b - shift down all elements of stack b by 1.
The last element becomes the first one. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_rrb(t_list **stack, int op)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = ft_lstlast(*stack);
	if (!*stack)
		return (0);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	tmp2->next = *stack;
	*stack = tmp2;
	if (op > 0)
		write(1, "rrb\n", 4);
	return (1);
}

/*
rrr : rra and rrb at the same time. The parameter "op" determines
if the functions should print its name (1) ord not (0).
*/
int	ft_rrr(t_list **stack_a, t_list **stack_b, int op)
{
	ft_rra(stack_a, op);
	ft_rrb(stack_b, op);
	if (op > 0)
		write(1, "rrr\n", 4);
	return (1);
}
