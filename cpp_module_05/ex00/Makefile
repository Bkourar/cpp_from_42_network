NAME = a.out
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp Bureaucrat.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all