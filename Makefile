# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 18:21:35 by fquist            #+#    #+#              #
#    Updated: 2021/11/16 21:16:45 by fquist           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror

################################################################################
# SRCS CTYPE
SRCS		:= ft_is_alpha.c ft_is_ascii.c ft_is_digit.c ft_is_print.c \
			   ft_to_lower.c ft_to_upper.c ft_is_all_num.c

# SRCS MATH
SRCS		+= ft_get_numlen.c ft_get_numlen_base.c ft_get_unumlen.c \
			   ft_get_unumlen_base.c

# SRCS MEM
SRCS		+= ft_bzero.c ft_calloc.c ft_free.c ft_memchr.c ft_memcmp.c \
			   ft_memcpy.c ft_memmove.c ft_memset.c

# SRCS PUT
SRCS		+= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

# SRCS STR
SRCS		+= ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_strrchr.c ft_strlen.c \
			   ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
			   ft_strnstr.c ft_strtrim.c ft_substr.c ft_striteri.c ft_strjoin.c \
			   ft_strmapi.c

# SRCS LST
SRCS		+= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			   ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
################################################################################

SDIR		:= src
ODIR		:= obj
OBJS		:= $(addprefix $(ODIR)/, $(SRCS:.c=.o))
INCLUDES	:= -I./inc/

# COLORS
LB   		= \033[0;36m
B			= \033[0;34m
G		    = \033[0;32m
R 			= \033[0;31m
Y  			= \033[0;33m
X		    = \033[m

# **************************************************************************** #
#	SYSTEM SPECIFIC SETTINGS							   					   #
# **************************************************************************** #

UNAME_S		:= $(shell uname -s)

ifeq ($(UNAME_S), Linux)
	CFLAGS += -D LINUX -Wno-unused-result
endif

# **************************************************************************** #
#	RULES																	   #
# **************************************************************************** #

.PHONY: all $(NAME) header prep clean fclean re bonus debug release

all: $(NAME)

$(NAME): header prep $(OBJS)
	@ar -crs $(NAME) $(OBJS)
	@printf "$(G)======= $(NAME)$(X)\n"

$(ODIR)/%.o: $(SDIR)/*/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@printf "%-57b %b" "$(B)compile $(LB)$@" "$(G)[✓]$(X)\n"

header:
	@printf "%b" "###############################################\n"
	@printf "$(Y)####### $(shell echo "$(NAME)" | tr '[:lower:]' '[:upper:]')$(X)\n"

prep:
	@mkdir -p $(ODIR)

clean: header
	@$(RM) -r $(ODIR)
	@$(RM) -r *.dSYM $(SDIR)/*.dSYM $(SDIR)/$(NAME)
	@printf "%-50b %b" "$(R)clean" "$(G)[✓]$(X)\n"

fclean: header clean
	@$(RM) $(NAME)
	@printf "%-50b %b" "$(R)fclean" "$(G)[✓]$(X)\n"

re: header fclean all

bonus: all

debug: CFLAGS += -O0 -DDEBUG -g
debug: all

release: fclean
release: CFLAGS	+= -O2 -DNDEBUG
release: all