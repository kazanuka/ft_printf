
#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*adress;

	adress = malloc(ft_strlen(s1)+1);
	if (adress == NULL)
		return (NULL);
	ft_memcpy(adress, s1, ft_strlen(s1) + 1);
	return (adress);
}
