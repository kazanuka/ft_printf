/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/26 12:12:44 by fkuyumcu         ###   ########.fr       */
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
		return (printnum(-num, base));
	}
	else if (num < base)
	{
		printc (set[num]);
		return (++n);
	}
	else
	{
		n += printnum(num / base, base);
		n += printnum(num % base, base);
		return (n);
	}
}
