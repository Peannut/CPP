# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 16:33:08 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/23 09:47:31 by zoukaddo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98 

RM		= rm -rf

SRC		= main.cpp Harl.cpp

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