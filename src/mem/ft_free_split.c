/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjensen <tjensen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:25:27 by tjensen           #+#    #+#             */
/*   Updated: 2021/10/21 14:16:32 by tjensen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_split(char **split_arr)
{
	size_t	i;

	if (split_arr == NULL)
		return (NULL);
	i = 0;
	while (split_arr[i] != NULL)
	{
		free(split_arr[i]);
		split_arr[i] = NULL;
		i++;
	}
	free(split_arr);
	split_arr = NULL;
	return (NULL);
}
