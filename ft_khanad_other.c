/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_khanad_other.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:58:01 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 04:07:54 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign(int *one, int *two, t_stack *tmp)
{
	*one = tmp->index;
	*two = tmp->next->index;
}

void	sub_if(int *one, int *two, t_stack **tmp)
{
	*one = *two;
	if ((*tmp)->next->next)
	{
		*tmp = (*tmp)->next;
		*two = (*tmp)->next->index;
	}
}

int	check_sort(t_stack *a)
{
	t_stack	*tmp;
	int		size;
	int		one;
	int		two;
	int		x;

	tmp = a;
	size = ft_khanad(a);
	assign(&one, &two, tmp);
	x = 1;
	while (tmp && tmp->next && x != size)
	{
		if (one < two)
		{
			x++;
			sub_if(&one, &two, &tmp);
		}
		else
			return (0);
	}
	return (1);
}

void	ft_throwback_a(t_stack **a, t_stack **b, int yao)
{
	while (ft_khanad(*a) != yao)
	{
		ft_pa(a, b);
	}
}

void	ft_khanad_other(t_stack **a, t_stack **b)
{
	int		x;
	int		size;
	int		j;

	x = 1;
	j = 1;
	size = ft_khanad(*a);
	while (check_sort(*a) == 0)
	{
		x = 0;
		while (x != size)
		{
			if (*a != NULL && (((*a)->index >> j) & 1) == 0)
				ft_pb(a, b);
			else
				ft_ra(a);
			x++;
		}
		ft_throwback_a(a, b, size);
		j++;
	}
}
