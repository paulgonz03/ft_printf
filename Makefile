NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c aux.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar rsc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re