#include "ft_printf.h"
#include <stdio.h>
int main(void)
{

	int a = ft_printf(" %d \n", -1);
	int b = printf(" %d \n", -1);
	
	printf("%d---------%d",a,b);
}