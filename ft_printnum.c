/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 10:38:04 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printnum(long num, int base)
{
	char	set[17];
	int		n;

	ft_strlcpy(set, "0123456789abcdef", 17);
	n = 0;
	if (num < 0)
	{
		printc ('-');
		num = -num;
		n++;
	}
	if (num < base)
	{
		printc (set[num]);
		return (n + 1);
	}
	else
	{
		n += printnum(num / base, base);
		n += printnum(num % base, base);
		return (n);
	}
}
