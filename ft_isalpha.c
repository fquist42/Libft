/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:05:21 by fquist            #+#    #+#             */
/*   Updated: 2021/08/17 17:58:31 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{

        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
            return (1);
        else
            return (0);
}
#include <stdio.h>

 int main(void)
 {
     int c = '1';
     int a = ft_isalpha(c);
     printf("%d\n", a);
     return (0);
 }