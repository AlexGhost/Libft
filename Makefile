# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acourtin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:27:54 by acourtin          #+#    #+#              #
#    Updated: 2017/11/07 10:50:26 by acourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft
CC := gcc
CCFLAGS := -Wall -Wextra -Werror
BIN := binary

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) -c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a

clean:
	rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -rf libft.a

re: fclean $(NAME)
