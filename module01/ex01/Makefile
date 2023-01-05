# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 14:26:30 by phiolive          #+#    #+#              #
#    Updated: 2022/12/17 20:31:03 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombiehorde
CXX	=	c++
RM	=	rm -f
CPPFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp zombieHorde.cpp Zombie.class.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re:	fclean $(NAME)
	
