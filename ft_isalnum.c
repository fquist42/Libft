/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:20:35 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:11:44 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Alphanumeric character test.
	The ft_isalnum() function tests for any character for which ft_isalpha(3) or 
	ft_isdigit(3) is true.  The value of the argument must be representable as an 
	unsigned char or the value of EOF.
RETURN VALUES
	The ft_isalnum() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
