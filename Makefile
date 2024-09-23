NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -I/libtf.h
SRCS = ft_printf.c ft_print_numbers.c ft_print_ptr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

