# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 09:13:56 by fkuyumcu          #+#    #+#              #
#    Updated: 2024/10/26 11:05:33 by fkuyumcu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

FILES	= 	ft_print_format.c \
			ft_printc.c \
			ft_printf.c \
			ft_printnum.c \
			ft_prints.c \
			ft_printx.c \
		  	ft_printp.c \
			ft_memcpy.c \
			ft_strlen.c \
			ft_strlcpy.c \
			
CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

OFILES	= $(FILES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar -r -c $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re