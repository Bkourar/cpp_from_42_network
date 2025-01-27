NAME = Unnecessary_violence
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC =HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	c++ $(FLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all
