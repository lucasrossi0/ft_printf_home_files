# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I/libtf.h
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

# Link objects into the static library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libftprintf.a created!"

# Compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

# Clean object files
clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned!"

# Clean object files and the static library
fclean: clean
	@rm -f $(NAME)
	@echo "libftprintf.a removed!"

# Recompile everything
re: fclean all

# Phony targets to avoid conflicts with actual file names
.PHONY: all clean fclean re

