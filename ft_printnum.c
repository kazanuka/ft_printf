
#include "ft_printf.h"

int	printnum(long num, int base)
{
	char	*set;
	int		n;

	set = ft_strdup("0123456789ABCDEF");
	n = 0;
	if (num < 0)
	{
		printc ('-');
		return (printnum(-num, base));
	}
	else if (num < base)
	{
		printc (set[num]);
		return (n);
	}
	else
	{
		n += printnum(num / base, base);
		n += printnum(num % base, base);
		return (n);
	}
}
