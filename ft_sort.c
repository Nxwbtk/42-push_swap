/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:09:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 18:29:13 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_select_arg(t_stack **a, t_stack **b)
{
	int	size;
	// t_stack *tmp;

	size = ft_khanad(*a);
	if (size == 2)
		ft_khanad_song(a);
	if (size == 3)
		ft_khanad_sam(a);
	if (size == 5)
		ft_khanad_ha(a, b);


	// tmp = a;
	// while (tmp)
	// {
	// 	ft_printf("a data after khanad sam = %d\n", tmp->data);
	// 	tmp = tmp->next;
	// }
}

// void	radix(t_stack *a, t_stack *b)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;

// }
