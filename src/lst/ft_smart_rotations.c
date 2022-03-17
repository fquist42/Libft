/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smart_rotations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:40:57 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:51:39 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Rotates over stack looking for the lowest rank in stack while
	taking the shortest route (depending on its position (index).
*/
void	ft_rotate_to_min(t_list **stack)
{
	int		min;
	int		index;
	int		size;

	min = ft_find_min_rank(stack);
	index = ft_get_index(stack, &min);
	size = ft_lstsize(*stack);
	while (*stack && (*stack)->rank != min)
	{
		if (index > (size / 2))
			ft_rra(stack, 1);
		else
			ft_ra(stack, 1);
	}
}

/*
	Rotates over stack looking for the highest rank in stack while
	taking the shortest route (depending on its position (index).
*/
void	ft_rotate_to_max(t_list **stack)
{
	int		max;
	int		index;
	int		size;

	max = ft_find_max_rank(stack);
	index = ft_get_index(stack, &max);
	size = ft_lstsize(*stack);
	while (*stack && (*stack)->rank != max)
	{
		if (index > (size / 2))
			ft_rra(stack, 1);
		else
			ft_ra(stack, 1);
	}
}
