/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:06:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/03/19 15:03:22 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define B16x "0123456789abcdef"
# define B16X "0123456789ABCDEF"

#include <unistd.h>
#include <stdarg.h>

size_t	ft_strlen(const char *s);
int ft_putstr(char *str);
int ft_putchar(char c);
int ft_putnbr(long int nb);
int ft_puthex(unsigned long int nb, char *base);
int ft_printf(const char *s, ...);

#endif