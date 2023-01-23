/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:46:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/24 01:44:46 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	while (s[i] && i < len)
	{
		write(1, &(s[i]), 1);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;
	char	c;
	long	nb;

	len = 0;
	nb = (long)n;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	len += ft_putchar(c);
	return (len);
}

int	ft_uint(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len += ft_uint(n / 10);
	c = (n % 10) + '0';
	len += ft_putchar(c);
	return (len);
}

int	ft_point(unsigned long p)
{
	int		len;

	len = 0;
	if (p > 15)
		len += ft_point(p / 16);
	if ((p % 16) >= 10)
		len += ft_putchar(((p % 16) - 10) + 'a');
	else
		len += ft_putchar((p % 16) + '0');
	return (len);
}
