# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sstench <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 17:32:10 by sstench           #+#    #+#              #
#    Updated: 2019/09/08 17:52:56 by sstench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o \
	  ft_strlen.o ft_swap.o
HEAD_FILES = ./includes
FLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC) -I $(HEAD_FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf	$(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
