NAME = megaphone

DIR_OBJS = objects

OBJS = magaphone.o

SRC = megaphone.cpp

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g  -std=c++98

$(NAME): $(SRC)
		-$(CC) $(CFLAGS) $(SRC) $(HEADER) -o $(NAME)

$(OBJS): $(SRC)
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)
		$(RM) $(OBJS)

re:		fclean all

PHONY:	all clean fclean re