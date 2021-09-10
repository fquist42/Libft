/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:57:11 by fquist            #+#    #+#             */
/*   Updated: 2021/09/08 15:40:23 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    char *string;
    int result;
    int index;
    int sign;
    int base;

    string = (char *)str;
    result = 0;
    index = 0;
    sign = 1;
    base = 0;
    
    while(string[index] == ' ')
        index++;
    if(string[index] == '-' || string[index] == '+')
    {
        sign = 1 - 2 * (string[index] == '-');
        index++;
    }
    while(string[index] >= '0' && string[index] <= '9')
    {
        if(base > INT_MAX / 10 || (base == INT_MAX / 10 && string[index] - '0' > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        base = 10 * base + (string[index] - '0');
        index++;
    }
    return base * sign;
}