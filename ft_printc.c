#include "ft_printf.h"

int	printc(char c)
{
	write (1, &c, 1);
	return (1);
}
