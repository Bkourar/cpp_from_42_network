NAME = a.out
INC = AForm.hpp \
	Bureaucrat.hpp \
	PresidentialPardonForm.hpp \
	RobotomyRequestForm.hpp \
	ShrubberyCreationForm.hpp
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp \
		AForm.cpp \
		RobotomyRequestForm.cpp \
		Bureaucrat.cpp \
		PresidentialPardonForm.cpp \
		ShrubberyCreationForm.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp $(INC)
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all