/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:08:52 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 19:37:54 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(void *s, int c, int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, int len);
void	ft_free(void **to_free);
void	ft_free_array(char **array, bool exit, bool exit_status);
char	**ft_free_split(char **split_arr);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_newstr_mzero(size_t size);

#endif