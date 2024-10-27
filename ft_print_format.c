/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:14:15 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 12:52:03 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		n += ft_printp(va_arg(ap, unsigned long), 16);//bewr
	else if (c == 'd')
		n += printnum(va_arg(ap, int), 10);//caution
	else if (c == 'i')
		n += printnum(va_arg(ap, int), 10);//caution
	else if (c == 'u')
		n += printnum(va_arg(ap, unsigned int), 10);
	else if (c == 'x')
		n += printnum(va_arg(ap, unsigned int), 16);//
	else if (c == 'X')
		n += printx(va_arg(ap, unsigned int), 16);//caution
	else if (c == '%')
		n += printc('%');
	return (n);
}
