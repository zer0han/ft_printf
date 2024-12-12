# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdalal <rdalal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 17:35:56 by rdalal            #+#    #+#              #
#    Updated: 2024/12/12 20:20:10 by rdalal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

INCLUDES	= ft_printf.h

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_printf.c ft_print_utils.c ft_printf_unsigned.c \
			ft_printf_ptr.c ft_printf_hexa.c \
			ft_printf_int.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
			$(CC) $(CFLAGS) $(OBJS) -o$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
