/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:14:03 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/26 09:45:46 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			++n;
			write(1, s, 1);
			++s;
		}
	}
	va_end (ap);
	return (n);
}
