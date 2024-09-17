# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I/libtf.h
SRCS = ft_printf.c ft_print_numbers.c
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

# Link objects into the static library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@rm -f $(OBJS)

# Clean object files and the static library
fclean: clean
	@rm -f $(NAME)

# Recompile everything
re: fclean all

# Phony targets to avoid conflicts with actual file names
.PHONY: all clean fclean re

