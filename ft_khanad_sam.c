/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_sam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:19:57 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 05:14:39 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_var(int *nueng, int *song, int *sam, t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	*nueng = tmp->index;
	*song = tmp->next->index;
	*sam = tmp->next->next->index;
}

void	ft_khanad_sam(t_stack **a)
{
	int	nueng;
	int	song;
	int	sam;

	init_var(&nueng, &song, &sam, *a);
	if (nueng > song && sam > nueng)
		ft_sa(a);
	else if (nueng > song && song > sam)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (sam > song && nueng > sam)
		ft_ra(a);
	else if (sam > nueng && song > sam)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (sam < song && nueng < song)
		ft_rra(a);
}
