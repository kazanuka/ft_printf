#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>






int ft_print_format(char c,va_list ap)
{
	int n;

	n = 0;
	if (c == 'c')
		n += printc(va_arg(ap,char));
	else if (c == 's')
		n += prints(va_arg(ap,char));
	else if (c == 'p')
		n += printp(va_arg(ap,void*));
	else if (c == 'd')
		n += printp(va_arg(ap,void*));
	else if( c == 'i')
		n += printp(va_arg(ap,void*));
	else if (c == 'u')
		n += printp(va_arg(ap,void*));
	else if (c == 'x')
		n += printp(va_arg(ap,void*));
	else if(c == 'X')
		n += printp(va_arg(ap,void*));
	else if(c == '%')
		n += printp(va_arg(ap,void*));


}

int ft_printf(const char *s, ...)
{
	int n;

	n = 0;
	
	while(*s)
	{
		if(*s == '%')
			n += ft_print_format(*(s++),ap);
		else
		{
			write(1,s,1);
			*s++;
		}	
	}
	return (n);
}
