# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdalal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 17:35:56 by rdalal            #+#    #+#              #
#    Updated: 2024/06/03 17:35:57 by rdalal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

INCLUDES	= ft_printf.h

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

AR	= ar rcs

SRCS	= ft_printf.c ft_print_utils.c ft_printf_unsigned.c \
			ft_printf_ptr.c ft_printf_hexa.c \
			ft_itoa.c ft_strlen.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
		$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
