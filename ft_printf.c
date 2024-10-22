#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int printc(char c)
{
	write(1,&c,1);
	return (1);
}

int prints(char *s)
{
	int n;

	n = 0;
	while(s)
	{
		write(1,s,1);
		s++;
		n++;
	}
	return (n);
}

int printp(int d)
{

}

int printd(int d)
{
	
}

int printi(int d)
{

}

int printu(unsigned int d)
{

}

int printx(int x)
{

}

int printx_(int x)
{

}

int printper(char c)
{

}

int printu(int p)
{

}

int ft_print_format(char c,va_list ap)
{
	int n;

	n = 0;
	if (c == 'c')
		n += printc(va_arg(ap,char));
	else if (c == 's')
		n += prints(va_arg(ap,char *));
	else if (c == 'p')
		n += printp(va_arg(ap,void*));
	else if (c == 'd')
		n += printd(va_arg(ap,void*));
	else if( c == 'i')
		n += printi(va_arg(ap,void*));
	else if (c == 'u')
		n += printu(va_arg(ap,void*));
	else if (c == 'x')
		n += printx(va_arg(ap,void*));
	else if(c == 'X')
		n += printx_(va_arg(ap,void*));
	else if(c == '%')
		n += printper(va_arg(ap,void*));

	return (n);
}

int ft_printf(const char *s, ...)
{
	va_list ap;
	va_start(ap,s);
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
