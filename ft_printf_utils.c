/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:59:05 by amtouham          #+#    #+#             */
/*   Updated: 2023/03/19 15:23:06 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_putstr(char *str)
{
	int	i;

	i = 0;
	if(!str)
		return(write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str))); 
}

int ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int ft_putnbr(long int nb)
{
	long int n;
	int ret;
	
	ret = 0;
	n = nb;
	(n < 0) && (ret += write(1, "-", 1) , n *= -1);
	(n > 9) && (ret += ft_putnbr(n / 10));
	ret += write(1, &"0123456789"[n % 10], 1);
	return(ret);
}

int ft_puthex(unsigned long int nb, char *base)
{
	int ret;

	ret = 0;
	(nb > 15) && (ret += ft_puthex(nb / 16, base));
	ret +=  write(1, &base[nb % 16], 1);
	if (ret < 0)
		return (-1);
	return(ret);
}
