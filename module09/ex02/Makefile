# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/03/20 17:15:17 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp PmergeMe.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	