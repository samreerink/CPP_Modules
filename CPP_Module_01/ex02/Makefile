NAME= 		brain

CC=			c++

FLAGS= 		-Wall -Werror -Wextra -std=c++11

RM= 		rm -rf

SRC_DIR=	src

OBJ_DIR=	obj

SRCS= 		$(addprefix $(SRC_DIR)/, main.cpp)

OBJ=		$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all:		$(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): 	$(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
