/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:11:02 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 05:10:04 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack	*tmp;

	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = *a;
	*a = tmp;
}

void	ft_ra(t_stack **a)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = (*a);
	(*a) = (*a)->next;
	last = ft_lst_last(*a);
	last->next = tmp;
	tmp->next = NULL;
}

void	ft_rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*tmp;

	first = ft_lst_last(*a);
	tmp = *a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	first->next = (*a);
	(*a) = first;
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*a))
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = NULL;
	}
	else
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
	}
}
