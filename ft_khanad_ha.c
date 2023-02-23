/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_ha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:57:43 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/23 10:03:00 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rest(t_stack *tmp, t_stack **a, int count, int size)
{
	while (tmp)
	{
		if (tmp->index == 1 || tmp->index == 2)
			break ;
		count++;
		tmp = tmp->next;
	}
	if (count < size / 2)
		ft_ra(a);
	else
		ft_rra(a);
}

void	ft_khanad_ha(t_stack **a, t_stack **b)
{
	int		size;
	t_stack	*tmp;
	int		count;

	size = ft_khanad(*a);
	count = 0;
	while (size != 3)
	{
		if ((*a)->index == 1 || (*a)->index == 2)
			ft_pb(a, b);
		tmp = *a;
		count = 0;
		rest(tmp, a, count, size);
		size = ft_khanad(*a);
	}
	ft_khanad_sam(a);
	ft_khanad_songb(b);
	ft_sb(b);
	ft_pa(a, b);
	ft_pa(a, b);
}
