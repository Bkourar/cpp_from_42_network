NAME = The_Job_Of_Your_Dreams
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = Account.cpp tests.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp Account.hpp
	c++ $(FLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all