NAME = Harl_2.0
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp Harl.hpp
	c++ $(FLAGS) $(VERSION) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all
