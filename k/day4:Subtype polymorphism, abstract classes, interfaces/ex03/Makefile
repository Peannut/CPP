NAME	= game

SRC		=	AMateria.cpp Character.cpp Cure.cpp \
			Ice.cpp  MateriaSource.cpp main.cpp

OBJ		= ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra  -Werror -std=c++98

RM		= rm -rf

all	: $(NAME)

${NAME}	: ${OBJ}
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean   :
	${RM} ${OBJ}

fclean	: clean
	${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean