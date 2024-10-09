NAME=	losers
CC=		clang++
FLAGS=	-Wall -Werror -Wextra -std=c++98 -g3

FILES=		main.cpp \
			stringReplacer.cpp 
OBJ_PATH=	obj/
OBJ=		$(FILES:%.cpp=$(OBJ_PATH)%.o)

all:$(NAME)

$(NAME): $(OBJ)
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean