NAME = Aaaaand..._OPEN!
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp ScavTrap.hpp ClapTrap.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all