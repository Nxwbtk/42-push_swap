/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:54:59 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/15 21:54:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *chnb)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	result = 0;
	count = 1;
	while (chnb[i] == ' ' || chnb[i] == '\t' || chnb[i] == '\n'
		|| chnb[i] == '\f' || chnb[i] == '\v' || chnb[i] == '\r')
		i++;
	if (chnb[i] == '-' || chnb[i] == '+')
	{
		if (chnb[i] == '-')
			count = count * -1;
		i++;
	}
	while (chnb[i] >= '0' && chnb[i] <= '9')
	{
		result = result * 10 + (chnb[i] - '0');
		i++;
	}
	return (result * count);
}
