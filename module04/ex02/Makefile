# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/01/10 17:21:03 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animals
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -fpermissive
SRCS	=	main.cpp Animal.class.cpp Cat.class.cpp Dog.class.cpp Brain.class.cpp 

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	