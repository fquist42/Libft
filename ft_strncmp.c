/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:33:36 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:41:38 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if(s1[i] == '\0' && s2[i] == '\0')
            return 0;
        i++;
    }
    return (0);
}