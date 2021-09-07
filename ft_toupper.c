/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:26:10 by fquist            #+#    #+#             */
/*   Updated: 2021/08/20 13:31:12 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c > 96 && c < 123)
    {
        c = c - 32;
        return (c);
    }
    return (0);
}

#include <stdio.h>
int main()
{
    printf("%c\n", ft_toupper('s'));
    return (0);
}