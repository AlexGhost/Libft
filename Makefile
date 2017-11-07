# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acourtin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:27:54 by acourtin          #+#    #+#              #
#    Updated: 2017/11/07 18:37:16 by acourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft
CC := gcc
CCFLAGS := -Wall -Wextra -Werror
BIN := binary

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) -c srcs/ft_*.c
	ar rc libft.a ft_*.o
	ranlib libft.a

clean:
	rm -rf ft_*.o

fclean: clean
	rm -rf libft.a

re: fclean $(NAME)
