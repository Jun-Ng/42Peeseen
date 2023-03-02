CFLAGS := -Wall -Wextra -Werror

NAME := ft_hexdump

SRC_FILES :=	hexdump.c files.c \
				display_hex_2.c display_hex.c \
			   	params.c functions.c \
				stupid_functions.c

SRC_OBJ := $(SRC_FILES:.c=.o)

.PHONY:clean fclean

all: $(NAME)

$(NAME): $(SRC_OBJ)
	cc $(CFLAGS) $(SRC_OBJ) -o $@ -I.

$(SRC_OBJ): %.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
	cc $(CFLAGS) -fsanitize=address -g $(SRC_OBJ) -o $(NAME) -I.
	make clean
