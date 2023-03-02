CFLAGS := -Wall -Wextra -Werror

SRC_DIRS := ./srcs

SRC_FILES := ft_putchar.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c

SRC_OBJ := $(SRC_FILES:%.c=$(SRC_DIRS)/%.o)
INC_FLAG := -I./includes

NAME := libft.a

all:
	make libft.a

$(NAME): $(SRC_OBJ)
	ar rcs $@ $?

$(SRC_OBJ): %.o: %.c
	cc $(CFLAGS) $(INC_FLAG) -c $< -o $@

.PHONY:clean
clean:
	rm -f $(SRC_OBJ)

.PHONY:fclean
fclean:
	rm -f $(NAME)
	make clean

re:
	make fclean
	make all
