/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:34 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 15:42:07 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long num, int base, char *set)
{
	int	n;

	n = 2;
	printc('0');
	printc('x');
	if (num < (unsigned long)base)
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
