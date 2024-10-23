
#include "ft_printf.h"

int ft_print_format(char c,va_list ap)
{
	int n;

	n = 0;
	if (c == 'c')
		n += printc(va_arg(ap,int));
	if (c == 's')
		n += prints(va_arg(ap,char *));
	if (c == 'p')
		n += printnum(va_arg(ap,unsigned int),16);
	if (c == 'd')
		n += printnum(va_arg(ap,int),10);
	if( c == 'i')
		n += printnum(va_arg(ap,int),10);
	if (c == 'u')
		n += printnum(va_arg(ap,unsigned int),10);
	if (c == 'x')
		n += printx(va_arg(ap,int),16);
	if(c == 'X')
		n += printnum(va_arg(ap,int),16);
    if(c == '%')
        n += printc('%');
	return (n);
}