CFLAGS := -Wall -Wextra -Werror

SRCS := do-op.c \
		operators.c

SRCS_O := $(SRCS:.c=.o)

NAME := do-op

$(NAME): $(SRCS_O)
	@cc $(CFLAGS) $? -o $@

$(SRCS_O): %.o:%.c
	@cc $(CFLAGS) -c $< -o $@

.PHONY: clean fclean
clean:
	@rm -f $(SRCS_O)

fclean: clean
	@rm -f $(NAME)