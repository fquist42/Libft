/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:33:36 by fquist            #+#    #+#             */
/*   Updated: 2022/01/07 22:19:54 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Compare strings.
	The ft_strncmp() function compares not more than n characters.
	Because strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.	
RETURN VALUES
	ft_strncmp() returns an integer greater than, equal to, or less than 0,
	according as the string s1 is greater than, equal to, or less than
	the string s2.  The comparison is done using unsigned characters, so that
	`\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	i = 0;
	uc_s1 = (unsigned char *) s1;
	uc_s2 = (unsigned char *) s2;
	if (uc_s1 == NULL || uc_s2 == NULL)
		return (0);
	while (i < n)
	{
		if (uc_s1[i] != uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		if (uc_s1[i] == '\0' && uc_s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
