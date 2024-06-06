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

INCLUDES	= libftprintf.h

CC	= gcc

CFLAGS	= -Wall -Werror - Wextra

AR	= ar rcs

SRCS	= 

OBJS	= $(SRCS: .c=.o)

BONUS_SRCS	= 

BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) &(INCLUDES)
		$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
		$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
