/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:31:34 by fquist            #+#    #+#             */
/*   Updated: 2021/09/11 16:31:19 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	char	*string;

	string = (char *)s1;
	result = malloc(ft_strlen(string) + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, string, ft_strlen(string) + 1);
	return (result);
}
