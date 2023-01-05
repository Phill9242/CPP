# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 14:26:30 by phiolive          #+#    #+#              #
#    Updated: 2022/12/17 23:04:21 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombiepointers
CXX	=	c++
RM	=	rm -f
CPPFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp 
OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	
