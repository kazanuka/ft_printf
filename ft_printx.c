/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:24 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/26 11:11:18 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printx(int num, int base)
{
	char	set[17];
	int		n;

	ft_strlcpy(set, "0123456789ABCDEF", 17);
	n = 0;
	if (num < 0)
	{
		printc('-');
		return (printx(-num, base));
	}
	else if (num < base)
	{
		printc(set[num]);
		return (n);
	}
	else
	{
		n += printx(num / base, base);
		n += printx(num % base, base);
		return (n);
	}
}
