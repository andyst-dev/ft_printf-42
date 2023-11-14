/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoll <astoll@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:23:24 by astoll            #+#    #+#             */
/*   Updated: 2023/11/14 15:32:48 by astoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(int c);
int	ft_putnbr(long long n);
int	ft_putptr(unsigned int);
int	ft_putstr(char *str);

#endif