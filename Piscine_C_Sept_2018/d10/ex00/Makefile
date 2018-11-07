# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 02:45:58 by cghanime          #+#    #+#              #
#    Updated: 2018/09/20 03:35:00 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c
OBJECT = *.o
PATH_INCLUDES = includes/

all : $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar -rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

