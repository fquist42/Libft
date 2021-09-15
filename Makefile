# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 17:49:12 by fquist            #+#    #+#              #
#    Updated: 2021/09/15 19:28:26 by fquist           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    =        libft.a

SRCS    =       	ft_atoi.c \
					ft_strlen.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_strlcpy.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_strchr.c \
					ft_strlcat.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_substr.c \

OBJS		=		$(SRCS:.c=.o)

CC			=        gcc

CFLAGS		=        -Wall -Wextra -Werror

AR			=        ar rc

RM			=		rm -f

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

main:
	clear
	gcc -Wall -Wextra -Werror main.c $(SRCS) -o test
	./test

norm:
	clear
	norminette -R CheckForbiddenSourceHeader $(SRCS) -o