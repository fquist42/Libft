/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:36:15 by fquist            #+#    #+#             */
/*   Updated: 2021/08/19 14:52:03 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}
#include <stdio.h>
int main(void)
{
    int c = "5";
    int a = ft_isascii(c);
    printf("%d\n", a);
    return (0);
}