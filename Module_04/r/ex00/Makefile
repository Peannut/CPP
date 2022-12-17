NAME = Animal

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = $(SRC:.cpp=.o)

.o:.cpp
	g++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all