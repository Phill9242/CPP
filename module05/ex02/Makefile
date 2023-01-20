# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:45:53 by phiolive          #+#    #+#              #
#    Updated: 2023/01/09 16:29:44 by phiolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	office
CXX	=	c++
RM	=	rm -f
CPPFLAGS	= -g -std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp Bureaucrat.class.cpp AForm.class.cpp PresidentialPardonForm.class.cpp RobotomyRequestForm.class.cpp ShrubberyCreationForm.class.cpp

OBJS	=	$(subst .cpp,.o,$(SRCS))

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)
	