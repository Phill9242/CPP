# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 14:26:34 by phiolive          #+#    #+#              #
#    Updated: 2022/12/15 14:38:06 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = notebook

DIR_OBJS = objects

OBJS = main.o contact.class.o phonebook.class.o 

SRC = main.cpp contact.class.cpp phonebook.class.cpp

CC = c++

RM = rm -rf

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re