#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *s, ...);
int printx(int x, int base);
int printu(unsigned int d);
int printnum(long num, int base);
int prints(char *s);
int printc(char c);
int ft_print_format(char c,va_list ap);
int ft_printp(long num, int base);


#endif