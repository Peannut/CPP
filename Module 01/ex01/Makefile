# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 08:51:22 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/20 08:52:46 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= main.cpp Zombie.cpp zombieHorde.cpp

OBJS	= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :	$(OBJS)
			c++ $(FLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: al clean fclean re