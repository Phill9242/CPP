# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/03/18 11:18:23 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp BitcoinExchange.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	