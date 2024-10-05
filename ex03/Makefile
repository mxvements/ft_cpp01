NAME=	violence
CC=		clang++
FLAGS=	-Wall -Werror -Wextra -std=c++98

FILES=		main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HummanB.cpp
OBJ_PATH=	obj/
OBJS=		$(FILES:%.cpp=$(OBJ_PATH)%.o)

all: $(NAME)

$(NAME): $(OBJ_PATH)
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) -c $< -o  $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clea