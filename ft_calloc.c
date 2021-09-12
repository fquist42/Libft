/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:31:32 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 15:51:07 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	int		arrsize;

	arrsize = count * size;
	result = malloc(arrsize);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, arrsize);
	return (result);
}
