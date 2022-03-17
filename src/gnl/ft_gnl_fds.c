/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_fds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:18:45 by fquist            #+#    #+#             */
/*   Updated: 2022/01/30 22:58:28 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../../include/modules/ft_get_next_line.h"

//returns one line (until \n) from a filedescriptor.
char	*get_next_line_fds(int fd)
{
	char		*newline;
	static char	*buff[10240];
	int			mem_size;

	if (fd < 0 || fd > 10240 || BUFFER_SIZE < 1)
		return (NULL);
	newline = NULL;
	while (gnl_strchr_len(buff[fd], '\n') < 0)
	{
		newline = gnl_calloc(BUFFER_SIZE + 1, sizeof(char));
		mem_size = read(fd, newline, BUFFER_SIZE);
		if (!newline || mem_size == -1)
		{
			gnl_free(&newline);
			return (NULL);
		}
		if (mem_size < 1)
			break ;
		buff[fd] = gnl_strjoin(buff[fd], newline);
		gnl_free(&newline);
	}
	gnl_free(&newline);
	return (gnl_eval_res(&buff[fd], mem_size));
}

// locate c in str and returns the length to c. -1 if not found.
int	gnl_strchr_len(const char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	if (c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return (i);
	}
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/*
DESCRIPTION
	The ft_calloc() function contiguously allocates enough space for count objects 
	that are size bytes of memory each and returns a pointer to the allocated 
	memory. 
	The allocated memory is filled with bytes of value zero.
RETURN VALUES
	If successful, ft_calloc() return a pointer to allocated memory. 
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/
void	*gnl_calloc(size_t count, size_t size)
{
	size_t	arrsize;
	char	*result;

	arrsize = count * size;
	result = malloc(arrsize);
	if (result == NULL)
		return (NULL);
	while (arrsize > 0)
	{
		result[arrsize - 1] = 0;
		arrsize--;
	}
	return ((void *)result);
}

// frees the string and appends NULL character to it.
void	gnl_free(char **str)
{
	if (*str)
		free(*str);
	*str = NULL;
}

// return new string after joining str parameters.
char	*gnl_strjoin(char *newline, char *buff)
{
	char	*res;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!newline)
		newline = gnl_substr("", 0, 0);
	len = gnl_sublen(i, newline) + gnl_sublen(j, buff);
	res = gnl_calloc((len + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	while (newline[i] != '\0')
	{
		res[i] = newline[i];
		i++;
	}
	while (i < len)
		res[i++] = buff[j++];
	if (newline != NULL)
		gnl_free(&newline);
	return (res);
}
