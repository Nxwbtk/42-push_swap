/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:38:34 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/24 01:03:34 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fmt(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_uint(va_arg(args, unsigned int)));
	if (c == 'p')
	{
		count += write(1, "0x", 2);
		return (count += ft_point(va_arg(args, unsigned long)));
	}
	if (c == '%')
		return (write(1, "%", 1));
	if (c == 'x')
		return (ft_xlek(va_arg(args, unsigned int)));
	if (c == 'X')
		return (ft_xyai(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_fmt(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
