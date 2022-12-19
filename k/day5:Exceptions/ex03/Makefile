NAME	= AFrom

SRC		= Bureaucrat.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Form.cpp RobotomyRequestForm.cpp main.cpp Intern.cpp

OBJ		= ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

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
