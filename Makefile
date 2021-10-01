# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 18:21:35 by fquist            #+#    #+#              #
#    Updated: 2021/10/01 17:37:12 by fquist           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	LIBFT.A

FILES	=			ft_atoi.c \
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
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_itoa.c \
					ft_striteri.c \
					ft_strmapi.c \
					
BONUS	=			ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c \

OBJS		=		$(FILES:.c=.o)

BONUSOBJS	=		$(BONUS:.c=.o)

CC			=        gcc

CFLAGS		=        -Wall -Wextra -Werror

AR			=        ar rc

RM			=		rm -f

all:		$(NAME)

bonus:		$(NAME) $(BONUSOBJS)
			$(AR) $(NAME) $(BONUSOBJS)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BONUSOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

main:
	clear
	gcc -Wall -Wextra -Werror main.c $(FILES) $(BONUS) -o test
	./test

norm:
	clear
	norminette -R CheckForbiddenSourceHeader $(FILES) $(BONUS) -o