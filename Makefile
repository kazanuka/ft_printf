NAME		= libftprintf.a

FILES	= 	ft_print_format.c \
			ft_printc.c \
			ft_printf.c \
			ft_printnum.c \
			ft_prints.c \
			ft_printx.c \
		  	ft_printp.c \
			ft_memcpy.c \
			ft_strdup.c \
			ft_strlen.c \
			
			
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