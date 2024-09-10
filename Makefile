# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libftprintf.a created!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned!"

fclean: clean
	@rm -f $(NAME)
	@echo "libftprintf.a removed!"

re: fclean all

.PHONY: all clean fclean re

