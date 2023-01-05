# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 17:21:29 by phiolive          #+#    #+#              #
#    Updated: 2022/12/15 18:50:00 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	account

OBJS =	tests.o Account.o 

SRC =	tests.cpp Account.cpp 

CC	= clang++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

PHONY:		all clean fclean re diff run
