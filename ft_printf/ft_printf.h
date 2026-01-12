/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:10:20 by misousa           #+#    #+#             */
/*   Updated: 2026/01/12 14:49:46 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long nb);
int	ft_putnbr_uns(unsigned int nb);
int	ft_putnbr_lowhex(unsigned long nb);
int	ft_putnbr_uphex(unsigned long nb);
int	ft_putptr(void *ptr);
int	ft_printf(const char *s, ...);

#endif