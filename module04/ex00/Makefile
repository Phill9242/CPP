# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/01/04 22:16:40 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animals
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -Wall -Wextra -Werror 
SRCS	=	main.cpp Animal.class.cpp Cat.class.cpp Dog.class.cpp WrongAnimal.class.cpp WrongCat.class.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	