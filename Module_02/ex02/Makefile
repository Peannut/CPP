# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 09:23:06 by zoukaddo          #+#    #+#              #
#    Updated: 2022/12/13 21:58:29 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= main.cpp Fixed.cpp

OBJS	= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :	$(OBJS)
			c++ -g $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: al clean fclean re