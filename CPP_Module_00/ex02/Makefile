NAME= 		Account

CC=			c++

FLAGS= 		 -Wall -Werror -Wextra -std=c++98

RM= 		rm -rf

SRC_DIR=	src

OBJ_DIR=	obj

SRCS= 		$(addprefix $(SRC_DIR)/, tests.cpp Account.cpp)

OBJ=		$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

HEADERS=	-I ./includes

all:		$(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

$(NAME): 	$(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(HEADERS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
