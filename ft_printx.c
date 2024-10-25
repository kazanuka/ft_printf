
#include "ft_printf.h"

int	printx(int num, int base)
{
	char	*set;
	int		n;

	set = ft_strdup("0123456789abcdef");
	n = 0;
	if (num < 0)
	{
		printc('-');
		return (printx(-num, base));
	}
	else if (num < base)
	{
		printc(set[num]);
		return (n);
	}
	else
	{
		n += printx(num / base, base);
		n += printx(num % base, base);
		return (n);
	}
}
