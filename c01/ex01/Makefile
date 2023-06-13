NAME = zombie

SRC = main.cpp zombieHorde.cpp zombie.cpp 

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:$(SRC)
	@$(CC) $(FLAGS) -c -o $@ $<

$(NAME):$(OBJ)

	@$(CC) $(FLAGS) -c $(SRC)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:$(NAME)

clean:

	@/bin/rm -f $(OBJ)
	@/bin/rm -f *.d

fclean:clean
	@/bin/rm -rf $(NAME)
	
re:fclean all

.PHONY: all clean fclean re