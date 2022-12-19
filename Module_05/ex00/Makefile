# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 05:17:43 by zoukaddo          #+#    #+#              #
#    Updated: 2022/12/19 17:10:47 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98 -g

RM		= rm -rf

SRC		= main.cpp Bureaucrat.cpp

OBJS	= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :	$(OBJS)
			c++ $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: al clean fclean re