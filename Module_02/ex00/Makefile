# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 09:22:01 by zoukaddo          #+#    #+#              #
#    Updated: 2022/12/01 21:18:09 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98 

RM		= rm -rf

SRC		= main.cpp Fixed.cpp

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