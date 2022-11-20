# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 10:59:16 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/20 11:44:51 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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