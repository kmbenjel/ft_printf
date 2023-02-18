# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 19:00:43 by kbenjell          #+#    #+#              #
#    Updated: 2023/02/18 19:18:19 by kbenjell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
RM = rm -Rf
CFLAGS = -Wall -Wextra -Werror -c
AR = ar -rcs
SRC = 	ft_atoi.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_tolower.c \
		ft_toupper.c \


OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus : $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

clean :
	$(RM) $(OBJ) 
	$(RM) $(OBJ_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all bonus
