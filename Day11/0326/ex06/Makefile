#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khou <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 17:35:45 by khou              #+#    #+#              #
#    Updated: 2018/03/27 20:37:37 by khou             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=do-op
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_atoi.c \
	srcs/main.c srcs/error.c srcs/ft_operator.c
OBJECTS=ft_putchar.o ft_putstr.o ft_putnbr.o ft_atoi.o main.o error.o ft_operator.o
HEADERS_FOLDER=includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(HEADERS_FOLDER) -c $(SRCS)
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)
