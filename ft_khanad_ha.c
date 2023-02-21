/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_ha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:57:43 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 03:57:45 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_khanad_ha(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_khanad(*a);
	while (size != 3)
	{
		if ((*a)->index == 1 || (*a)->index == 2)
			ft_pb(a, b);
		ft_ra(a);
		size = ft_khanad(*a);
	}
	ft_khanad_sam(a);
	ft_khanad_songb(b);
	ft_sb(b);
	ft_pa(a, b);
	ft_pa(a, b);
}
