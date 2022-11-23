# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 09:51:34 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/23 09:49:27 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= main.cpp 

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