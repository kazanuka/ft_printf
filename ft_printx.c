#include "ft_printf.h"

int printx(int num, int base)
{
    char *set = "0123456789abcdef";
	int n;

	n = 0;
	if(num < 0)
	{
		printc('-');
		return (printx(-num,base));
	}
	
	else if(num < base)
	{
		printc(set[num]);
		return (n);
	}

	else
	{
		n += printx(num / base,base);
		n += printx(num % base,base);
		
		return (n);		
	}
}
