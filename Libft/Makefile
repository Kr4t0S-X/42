NAME=libft.a
SRCS=srcs/*.c
OBJECTS=*.o
HEADERS_FOLDER=includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS_FOLDER) -c $(SRCS)
	ar -rcv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all
