##
## EPITECH PROJECT, 2023
## MyPrint
## File description:
## Makefile
##

RED = \033[1;31m
GREEN = \033[1;32m
WHITE = \033[0;37m
BLUE = \033[1;34m
YELLOW = \033[1;33m
BEGINL = \033[A
CLEARL = \033[2K
COL_END  = \033[0m
CLEAR_COL = \033[2K\033[A

NAME = libprint.a

SRC = ./src/my_strlen.c \
      ./src/print.c \
	  ./src/print_error.c \
	  ./src/print_char.c \
	  ./src/print_array.c \
	  ./src/print_nbr.c \
	  ./src/print_s.c \
	  ./src/args_type.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include

MAKE = make --no-print-directory

FILE = $(shell echo $(SRC) | wc -w | sed -e 's/ //g')
CURRENT_FILES = $(shell find src/ -type f -name '*.o' | wc -l | sed -e 's/ //g')
CURRENT_FILE = $(shell echo '$$(( $(CURRENT_FILES) + 1 ))')

%.o: %.c
	@$(CC) $(CFLAGS) $^ -c -o $@
	@echo -en "$(CLEARL)$(BLUE)[$(YELLOW)building$(BLUE)]$(WHITE) "
	@echo -en "$(BLUE)$(notdir $@) "
	@echo -e "$(GREEN)($(CURRENT_FILE)/$(FILE))$(WHITE)$(BEGINL)"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo -e "$(CLEARL)$(YELLOW)$(NAME) $(GREEN)✔$(WHITE)$(COL_END)"

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
