/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:54:02 by fquist            #+#    #+#             */
/*   Updated: 2021/08/19 15:01:13 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return (1);
    return (0);
}
#include <stdio.h>
int main(void)
{
    int c = '5';
    int a = ft_isprint(c);
    printf("%d\n", a);
    return (0);
}