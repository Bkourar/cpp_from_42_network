NAME = My_Awesome_PhoneBook
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	c++ $(FLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all
