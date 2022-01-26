# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 14:27:04 by acroisie          #+#    #+#              #
#    Updated: 2022/01/26 16:32:34 by acroisie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c \
		push_swap_sort_part1.c \
		push_swap_sort_part2.c \
		push_swap_sort_part3.c \
		push_swap_sort_part4.c \
		push_swap_sort_part5.c \
		push_swap_utils_part1.c \
		push_swap_utils_part2.c \
		sort_commands_part1.c \
		sort_commands_part2.c \
		sort_commands_part3.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB_SRCS = $(addprefix libft/,$(LIB))

OBJS = $(SRCS:.c=.o)
 
NAME = push_swap

all:	libft $(NAME)

$(NAME):	$(OBJS) libft/libft.a
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft/libft.a

%.o :	%.c push_swap.h libft/libft.h
		$(CC) -c $(CFLAGS) $< -o $@

libft:	
		$(MAKE) -C libft

clean:
		rm -f $(OBJS)
		cd libft; make clean

fclean:	clean
		rm -f $(NAME)
		cd libft; make fclean

re:	fclean	all

.PHONY: all clean fclean re libft
