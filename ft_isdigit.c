/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:11:48 by fquist            #+#    #+#             */
/*   Updated: 2021/08/19 14:19:39 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}
#include <stdio.h>

 int main(void)
 {
     int c = 'a';
     int a = ft_isdigit(c);
     printf("%d\n", a);
     return (0);
 }