
#include "ft_printf.h"

int	prints(char *s)
{
	int	n;

	n = 0;
	while (*s)
	{
		write(1, s, 1);
		s++;
		n++;
	}
	return (n);
}
