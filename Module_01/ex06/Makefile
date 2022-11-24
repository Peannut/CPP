# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 09:16:32 by zoukaddo          #+#    #+#              #
#    Updated: 2022/11/24 09:42:17 by zoukaddo         ###   ########.fr        #
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