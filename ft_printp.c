#include "ft_printf.h"

int ft_printp(long num, int base)
{
    char *set;
    int n;

    *set = "0123456789ABCDEF";
    n = 0;
    printc('0');
    printc('x');
	if (num < base)
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
