
CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := karen

##########################################################

MAIN := main.cpp

SRCS := Karen.cpp

OBJ_DIR := objs

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

INC := Karen.hpp

##########################################################

all :		$(NAME)

$(NAME) :	$(OBJS)
	$(CC) $(CFLAGS) $(MAIN) $^ -o $@

##########################################################

$(OBJ_DIR)/%.o : %.cpp $(INC) $(MAIN) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

##########################################################

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

