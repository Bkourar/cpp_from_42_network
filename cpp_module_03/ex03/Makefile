NAME = Aaaaand..._OPEN!
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp ClapTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp ClapTrap.hpp FragTrap.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all