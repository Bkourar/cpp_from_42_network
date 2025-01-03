NAME = The_Job_Of_Your_Dreams
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
SRC = Account.cpp tests.cpp 
OBJ = $(SRC:.cpp=.o)
RED = \033[0;31m
GREEN = \033[0;32m

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(VERSION) -o $(NAME) $(OBJ)
	@echo "$(RED) make it 100%"

%.o : %.cpp Account.hpp
	@c++ $(FLAGS) -c $< -o $@
	@printf "$(GRENE)looding #"
	@for i in 1 2; do printf "$(GREEN)###"; done
	@echo

fclean : clean
	@rm -f $(NAME)
	@echo "$(RED)clean it ####...100%\n"

clean :
	@rm -rf $(OBJ)

re : all fclean