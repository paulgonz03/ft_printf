NAME = libftprintf.a
CC = cc
CFLAGS = -Wall, -Werror -Wextra
SRC = ft_printf.c ft_printstr.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar rc $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re