# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2022/12/18 16:27:53 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
CXX	=	c++
RM	=	rm -f
CPPFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp parse.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	