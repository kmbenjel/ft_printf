# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 19:00:43 by kbenjell          #+#    #+#              #
#    Updated: 2023/02/21 17:28:39 by kbenjell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
#RM = rm -Rf
CFLAGS = -Wall -Wextra -Werror
AR = ar -r
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

all : $(NAME)

$(NAME) : $(OBJ)
	@	$(AR) $(NAME) $(OBJ)
	@	make clean
	@	echo -e "\033[32m Make: &#10004; \033[0mi"
	@	echo "\033[32m Clean: \u2714 \033[0m"

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
