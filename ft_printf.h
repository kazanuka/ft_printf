/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:13:51 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/27 09:36:46 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		printx(int x, int base);
int		printu(unsigned int d);
int		printnum(long num, int base);
int		prints(char *s);
int		printc(char c);
int		ft_print_format(char c, va_list ap);
int		ft_printp(unsigned long num, int base);

void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
#endif