/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:55:16 by fquist            #+#    #+#             */
/*   Updated: 2021/09/15 19:22:21 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *s = "Hallo wie gehts";
	int start = 0;
	int len = 15;
	printf("Substring is %s\n", ft_substr(s, start, len));
	return (0);
}