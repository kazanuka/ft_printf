/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:24 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 12:49:20 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printx(unsigned long num, int base)
{
	char	set[17];
	int		n;

	ft_strlcpy(set, "0123456789ABCDEF", 17);
	n = 0;

	if (num < (unsigned long)base)
	{
		printc(set[num]);
		return (n + 1);
	}
	else
	{
		n += printx(num / base, base);
		n += printx(num % base, base);
		return (n);
	}
}
