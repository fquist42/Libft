# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 18:21:35 by fquist            #+#    #+#              #
#    Updated: 2022/03/17 18:52:17 by fquist           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft

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
			   ft_memcpy.c ft_memmove.c ft_memset.c ft_newstr_mzero.c \
			   ft_free_array.c ft_free_split.c

# SRCS PUT
SRCS		+= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			   ft_putchar.c ft_putstr.c 

# SRCS STR
SRCS		+= ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_strrchr.c ft_strlen.c \
			   ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
			   ft_strnstr.c ft_strtrim.c ft_substr.c ft_striteri.c ft_strjoin.c \
			   ft_strmapi.c ft_is_space.c ft_is_sign.c ft_strcmp.c ft_strcpy.c \
			   ft_strncpy.c ft_exit_print.c ft_count_c.c

# SRCS LST
SRCS		+= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			   ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
			   ft_find_max_element.c ft_lst_swaps.c ft_lst_pushs.c ft_lst_rotates.c \
			   ft_lst_rev_rotates.c ft_lst_indexing.c ft_lst_ranking.c \
			   ft_lst_search_range.c ft_smart_rotations.c ft_free_lst.c

# SRCS PRINTF
SRCS		+= ft_count_length.c ft_eval_input.c ft_evaluate_flag.c \
			   ft_evaluate_precision.c ft_evaluate_width.c ft_printf.c \
			   ft_select_format_specifier.c ft_solve_char.c ft_solve_dec_int.c \
			   ft_solve_hex.c ft_solve_percent.c ft_solve_pointer.c ft_solve_string.c \
			   ft_solve_uint.c

# SRCS GNL
SRCS		+= ft_gnl.c ft_gnl_utils.c ft_gnl_fds.c ft_gnl_fds_utils.c
################################################################################

SDIR		:= src
ODIR		:= obj
OBJS		:= $(addprefix $(ODIR)/, $(SRCS:.c=.o))
INCLUDES	:= -I./include/

# COLORS
LB   		= \033[0;36m
B			= \033[0;34m
G		    = \033[0;32m
R 			= \033[0;31m
Y  			= \033[0;33m
X		    = \033[m
UP		    = "\033[A"
CUT 		= "\033[K"

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
	@printf $(UP)$(CUT)
	@printf "%-54b %b" "$(G)libft compiled successfully!" "$(G)[✓]$(X)\n"


$(ODIR)/%.o: $(SDIR)/*/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@printf $(UP)$(CUT)
	@printf "%-61b %b" "$(B)compiling: $(LB)$@" "$(G)[✓]$(X)\n"

header:
	@printf "$(B)====================== $(LB)$(NAME)$(B) ======================$(X)\n"

prep:
	@mkdir -p $(ODIR)

clean: 
	@$(RM) -r $(ODIR)
	@$(RM) -r *.dSYM $(SDIR)/*.dSYM $(SDIR)/$(NAME)
	@printf "%-54b %b" "$(R)libft cleaned!" "$(G)[✓]$(X)\n"

fclean: header clean
	@$(RM) $(NAME)
	@printf "%-54b %b" "$(R)libft fcleaned!" "$(G)[✓]$(X)\n"

re:  fclean all

bonus: all

debug: CFLAGS += -O0 -DDEBUG -g
debug: all

release: fclean
release: CFLAGS	+= -O2 -DNDEBUG
release: all