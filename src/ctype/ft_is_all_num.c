/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_all_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:20:35 by fquist            #+#    #+#             */
/*   Updated: 2021/11/16 19:04:29 by fquist           ###   ########.fr       */
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
int	ft_is_all_num(int c)
{
	return (ft_is_alpha(c) || ft_is_digit(c));
}
