/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_search_range.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 01:37:36 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 01:38:16 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Iterates over stack searching for the first element->rank within range
	"chunk" passed as an integer and returns its index.
*/
int	ft_get_chunk_first(t_list **stack, int chunk)
{
	t_list	*tmp;
	int		first;

	tmp = *stack;
	first = 0;
	while (tmp)
	{
		if (tmp->rank <= chunk)
		{
			first = tmp->index;
			break ;
		}
		tmp = tmp->next;
	}
	return (first);
}

/*
DESCRIPTION
	Iterates over stack searching for the last element->rank within range
	"chunk" passed as an integer and returns its index.
*/
int	ft_get_chunk_last(t_list **stack, int chunk)
{
	t_list	*tmp;
	int		last;

	tmp = *stack;
	last = 0;
	while (tmp)
	{
		if (tmp->rank <= chunk)
			last = tmp->index;
		tmp = tmp->next;
	}
	return (last);
}
