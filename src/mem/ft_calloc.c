/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:31:32 by fquist            #+#    #+#             */
/*   Updated: 2022/01/07 19:17:46 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	The ft_calloc() function contiguously allocates enough space for count objects 
	that are size bytes of memory each and returns a pointer to the allocated 
	memory. 
	The allocated memory is filled with bytes of value zero.
RETURN VALUES
	If successful, ft_calloc() return a pointer to allocated memory. 
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void			*result;
	unsigned int	arrsize;

	arrsize = count * size;
	result = malloc(arrsize);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, arrsize);
	return (result);
}
