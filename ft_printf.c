/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <ivromero@student.45urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:09:31 by ivromero          #+#    #+#             */
/*   Updated: 2023/06/06 17:57:44 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putcharcnt(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

static void	ft_putstrcnt(char *s, int *count)
{
	if (s)
		while (*s)
			ft_putcharcnt(*s++, count);
	else
		ft_putstrcnt("(null)", count);
}

static void	ft_putnbrcnt(long n, int *count)
{
	if (n < 0)
	{
		ft_putcharcnt('-', count);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbrcnt(n / 10, count);
		ft_putnbrcnt(n % 10, count);
	}
	else
		ft_putcharcnt(n + '0', count);
}

static void	ft_puthexcnt(unsigned long int n, int ucase, int prefix,
		int *count)
{
	char	*str;
	char	*str_u;

	str = "0123456789abcdef";
	str_u = "0123456789ABCDEF";
	if (prefix)
		ft_putstrcnt("0x", count);
	if (n >= 16)
		ft_puthexcnt(n / 16, ucase, 0, count);
	if (n >= 16)
		ft_puthexcnt(n % 16, ucase, 0, count);
	else if (ucase)
		ft_putcharcnt(str_u[n], count);
	else
		ft_putcharcnt(str[n], count);
}


static void	ft_printconv(char c, va_list args, int *count)
{
	if (c == 'c')
		ft_putcharcnt((char)va_arg(args, int), count);
	if (c == 's')
		ft_putstrcnt(va_arg(args, char *), count);
	if (c == 'd' || c == 'i')
		ft_putnbrcnt(va_arg(args, int), count);
	if (c == 'u')
		ft_putnbrcnt(va_arg(args, unsigned int), count);
	if (c == 'x')
		ft_puthexcnt(va_arg(args, unsigned int), 0, 0, count);
	if (c == 'X')
		ft_puthexcnt(va_arg(args, unsigned int), 1, 0, count);
	if (c == '%')
		ft_putcharcnt('%', count);
	if (c == 'p')
		ft_puthexcnt(va_arg(args, unsigned long int), 0, 1, count);
}

int	ft_printf(char const *format, ...)
{
	va_list		args;
	const char	*p;
	int			count;

	if (!format)
		return (-1);
	p = format - 1;
	count = 0;
	va_start(args, format);
	while (*++p != '\0')
		if (*p == '%')
			ft_printconv(*++p, args, &count);
	else
		ft_putcharcnt(*p, &count);
	va_end(args);
	return (count);
}
