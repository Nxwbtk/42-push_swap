/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_song.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:57:52 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 03:57:53 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_khanad_song(t_stack **a)
{
	int	nueng;
	int	song;

	nueng = (*a)->data;
	song = (*a)->next->data;
	if (song < nueng)
		ft_sa(a);
}

void	ft_khanad_songb(t_stack **b)
{
	int	nueng;
	int	song;

	nueng = (*b)->data;
	song = (*b)->next->data;
	if (song < nueng)
		ft_sb(b);
}
