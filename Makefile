##
## EPITECH PROJECT, 2023
## MyPrint
## File description:
## Makefile
##

NAME = libprint.a

SRC = ./src/my_strlen.c \
      ./src/print.c \
	  ./src/print_error.c \
	  ./src/print_char.c \
	  ./src/print_array.c \
	  ./src/print_nbr.c \
	  ./src/print_all.c \
	  ./src/args_type.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re