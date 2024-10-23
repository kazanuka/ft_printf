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

int printnum(int num, int base)
{
	char *set = "0123456789ABCDEF";
	int n;

	if(num < 0)
	{
		printc('-');
		return (printnum(-num,base));
	}
	
	else if(num < base)
	{
		return (printc(set[num]));
	}

	else
	{
		n += printnum(num / base,base);
		return (n + printnum(num,base));
	}



}

int printu(unsigned int d)
{

}

int printx_(int x, int base)
{

}

int printper(char c)
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
		n += printnum(va_arg(ap,void*),16);
	
	else if (c == 'd')
		n += printnum(va_arg(ap,void*),10);
	
	else if( c == 'i')
		n += printnum(va_arg(ap,void*),10);
	
	else if (c == 'u')
		n += printu(va_arg(ap,void*));
	
	else if (c == 'x')
		n += printnum(va_arg(ap,void*),16);
	
	else if(c == 'X')
		n += printx_(va_arg(ap,void*));
	
	else if(c == '%')
		n += printper(va_arg(ap,void*));

	return (n);
}

int ft_printf(const char *s, ...)
{
	int		n;
	va_list ap;
	va_start(ap,s);
	
	n = 0;
	
	while(*s)
	{
		if(*s == '%')
			n += ft_print_format(*(++s),ap);
		else
		{
			write(1,s,1);
			*s++;
		}	
	}
	va_end(ap);
	return (n);
}
