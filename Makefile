# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 15:30:55 by mdekmak           #+#    #+#              #
#    Updated: 2025/06/07 15:30:55 by mdekmak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

LIBFTNAME=libft.a

CC=cc

FLAGS=-Wall -Wextra -Werror

LIBFTDIR=./libft

SRCS=ft_print_char.c ft_printf.c ft_print_str.c ft_print_digit.c \
	ft_print_unsigned.c ft_print_pointer.c ft_print_hex.c

OBJS=$(SRCS:.c=.o)

all: $(NAME)

makelib:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) $(NAME)

$(NAME): makelib $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFTDIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all makelib clean fclean re