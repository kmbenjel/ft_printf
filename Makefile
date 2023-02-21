# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 19:00:43 by kbenjell          #+#    #+#              #
#    Updated: 2023/02/21 20:38:18 by kbenjell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
SRC = 	ft_printf.c \
		libft/ft_itoa.c \
		libft/ft_putchar_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_strchr.c \
		libft/ft_strdup.c \
		libft/ft_strlen.c \
		libft/ft_strchr.c \
		libft/ft_tolower.c \
		libft/ft_toupper.c \
		conversion_functions/ft_print_character.c \
		conversion_functions/ft_print_decimal.c \
		conversion_functions/ft_print_hexadecimal_lowercase.c \
		conversion_functions/ft_print_hexadecimal_uppercase.c \
		conversion_functions/ft_print_percent.c \
		conversion_functions/ft_print_pointer.c \
		conversion_functions/ft_print_string.c \
		conversion_functions/ft_print_unsigned.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJ)
	@	$(AR) $(NAME) $(OBJ)
	@	echo "\033[32m make: OK \033[0m"
	@	make clean

clean:
	@	$(RM) $(OBJ)
	@	echo "\033[32m clean: OK \033[0m"

fclean: clean
	@	$(RM) $(NAME)
	@	echo "\033[32m fclean: OK \033[0m"

re: fclean $(NAME)

.PHONY: all clean fclean re
