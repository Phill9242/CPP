# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/01/14 16:17:50 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	serialize
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp Base.class.cpp ClassA.class.cpp ClassB.class.cpp ClassC.class.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	