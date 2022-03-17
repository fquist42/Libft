/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:39:24 by fquist            #+#    #+#             */
/*   Updated: 2022/01/04 13:57:03 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_next_line_fds(int fd);

/*
	Utils functions
*/
int		gnl_strchr_len(const char *str, char c);
void	*gnl_calloc(size_t count, size_t size);
void	gnl_free(char **str);
char	*gnl_substr(char *str, unsigned int start, size_t len);
char	*gnl_strjoin(char *newline, char *buff);
size_t	gnl_sublen(size_t i, char *str);
char	*gnl_eval_res(char	**newline, size_t mem_size);
char	*gnl_handle_newlines(char	**newline);

#endif