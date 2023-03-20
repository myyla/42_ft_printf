/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:59:08 by amtouham          #+#    #+#             */
/*   Updated: 2023/03/20 15:02:42 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	percent_check(va_list *p, char c)
{
	int	len;

	len = 0;
	(c == 'c') && (len += ft_putchar(va_arg(*p, int)));
	(c == 's') && (len += ft_putstr(va_arg(*p, char *)));
	(c == 'p') && (len += write(1, "0x", 2),
	len += ft_puthex(va_arg(*p, unsigned long int), BHL));
	(c == 'd' || c == 'i') && (len += ft_putnbr(va_arg(*p, int)));
	(c == 'u') && (len += ft_putnbr(va_arg(*p, unsigned int)));
	(c == 'x') && (len += ft_puthex(va_arg(*p, unsigned int), BHL));
	(c == 'X') && (len += ft_puthex(va_arg(*p, unsigned int), BHU));
	(c == '%') && (len += ft_putchar(c));
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		len;
	int		i;

	i = -1;
	len = 0;
	va_start(p, s);
	while (s[++i])
	{
		if (s[i] != '%')
			len += write(1, &s[i], 1);
		if (len < 0)
			return (-1);
		else if (s[i] == '%' && s[i + 1])
		{
			len += percent_check(&p, s[i + 1]);
			if (len < 0)
				return (-1);
			i++;
		}
	}
	return (len);
}
