# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/01/05 20:15:06 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	spells
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 
# -Wall -Wextra -Werror 
SRCS	=	main.cpp AMateria.class.cpp Ice.class.cpp Cure.class.cpp 

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	