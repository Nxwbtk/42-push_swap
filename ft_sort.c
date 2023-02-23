/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:09:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/23 10:05:50 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_select_arg(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_khanad(*a);
	if (size == 2)
		ft_khanad_song(a);
	if (size == 3)
		ft_khanad_sam(a);
	if (size == 4)
		ft_khanad_sie(a, b);
	if (size == 5)
		ft_khanad_ha(a, b);
	else
		ft_khanad_other(a, b);
}
