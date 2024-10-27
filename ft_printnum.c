/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 15:38:11 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printnum(long num, int base, char *set)
{
	int	n;

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
		n += printnum(num / base, base, set);
		n += printnum(num % base, base, set);
		return (n);
	}
}
