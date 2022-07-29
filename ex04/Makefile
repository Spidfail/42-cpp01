
CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := replace

##########################################################

MAIN := main.cpp

##########################################################

all :		$(NAME)

$(NAME) :	$(MAIN)
	$(CC) $(CFLAGS) $^ -o $@

##########################################################

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

