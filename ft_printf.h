/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:06:41 by amtouham          #+#    #+#             */
/*   Updated: 2023/03/20 14:49:48 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BHL "0123456789abcdef"
# define BHU "0123456789ABCDEF"

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_puthex(unsigned long int nb, char *base);
int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);
int		ft_putnbr(long int nb);
int		ft_putstr(char *str);
int		ft_putchar(char c);

#endif