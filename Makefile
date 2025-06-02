NAME = libftprintf.a
TEST_PROG = test_program

SRCS = ft_printf.c \
       ft_print_char.c \
       ft_print_str.c \
       ft_print_digit.c \
       ft_print_percent.c

TEST_SRC = main.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft

HEADERS = ft_printf.h


OBJS = $(SRCS:.c=.o)

TEST_OBJ = $(TEST_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(NAME) $(TEST_PROG)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

$(TEST_PROG): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJ) -L. -l:$(NAME) -L$(LIBFT_DIR) -l:$(LIBFT)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_PROG)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

run: $(TEST_PROG)
	./$(TEST_PROG)

.PHONY: all clean fclean re run
