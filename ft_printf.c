#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>




int ft_print_format(char c,va_list ap)
{
	int count;

	count = 0;
	if(c == 'c')
	{
		count += printc(va_arg(ap,char));
	}
	else if(c == 'p')
	{
		count += printp(va_arg(ap,void*));
	}
	


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
	
}
