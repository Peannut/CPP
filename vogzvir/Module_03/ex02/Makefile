# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 20:12:58 by zoukaddo          #+#    #+#              #
#    Updated: 2022/12/11 17:31:19 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98 -g

RM		= rm -rf

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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