#include "ft_printf.h"

int	ft_print_format(char c, va_list ap)
{
	int	n;

	n = 0;
	if (c == 'c')
		n += printc(va_arg(ap, int));
	else if (c == 's')
		n += prints(va_arg(ap, char *));
	else if (c == 'p')
		n += ft_printp(va_arg(ap, unsigned int), 16);
	else if (c == 'd')
		n += printnum(va_arg(ap, int), 10);
	else if (c == 'i')
		n += printnum(va_arg(ap, int), 10);
	else if (c == 'u')
		n += printnum(va_arg(ap, unsigned int), 10);
	else if (c == 'x')
		n += printx(va_arg(ap, int), 16);
	else if (c == 'X')
		n += printnum(va_arg(ap, int), 16);
	else if (c == '%')
		n += printc('%');
	return (n);
}
