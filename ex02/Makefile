
CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := brain

##########################################################

MAIN := main.cpp

##########################################################

all :		$(NAME)

$(NAME) :	$(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -o $@


##########################################################

clean :
	$(RM) $(MAIN:%.cpp=%.o)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

