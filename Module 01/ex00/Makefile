# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 11:00:30 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/20 07:35:38 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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