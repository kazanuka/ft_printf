#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		n;
	va_list	ap;

	va_start (ap, s);
	n = 0;
	while (*s)
	{
		if (*s == '%')
		{
			n += ft_print_format (*(++s), ap);
			++s;
		}
		else
		{
			write(1, s, 1);
			++s;
		}
	}
	va_end (ap);
	return (n);
}
