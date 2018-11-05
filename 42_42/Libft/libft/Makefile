NAME=libft.a
SRCS=srcs/*.c
OBJECTS=*.o
HEADERS_FOLDER=/includes/

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I $(HEADERS_FOLDER) -c $(SRCS)
	ar -rcv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
