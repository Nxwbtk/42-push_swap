/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:33:10 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 02:58:20 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*b))
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
	}
	else
	{
		if (ft_khanad(*a) == 0)
			return ;
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
	ft_printf("pb\n");
}

void	ft_sb(t_stack **b)
{
	t_stack	*temp;

	temp = (*b)->next;
	(*b)->next = (*b)->next->next;
	temp->next = (*b);
	(*b) = temp;
	ft_printf("sb\n");
}

void	ft_rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*tmp;

	first = ft_lst_last(*b);
	tmp = *b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	first->next = (*b);
	(*b) = first;
	ft_printf("rrb\n");
}

void	ft_rb(t_stack **b)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = (*b);
	(*b) = (*b)->next;
	last = ft_lst_last(*b);
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}
