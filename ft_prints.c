/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:29 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/26 11:09:59 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	prints(char *s)
{
	int	n;

	n = 0;
	if (s == NULL)
	{
		prints("(null)");
		return (6);
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
		n++;
	}
	return (n);
}
