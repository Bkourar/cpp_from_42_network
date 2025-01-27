NAME = Moar_brainz!
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp Zombie.hpp
	c++ $(FLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all
