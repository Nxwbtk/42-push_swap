/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_sie.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:06:14 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 03:23:23 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_khanad_sie(t_stack **a, t_stack **b)
{
	while (ft_khanad(*a) != 3)
	{
		if ((*a)->index == 1)
			ft_pb(a, b);
		ft_ra(a);
	}
	ft_khanad_sam(a);
	ft_pa(a, b);
}
