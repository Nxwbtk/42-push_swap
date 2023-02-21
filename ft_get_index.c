/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:20:33 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 02:44:30 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *a)
{
	int		min;
	t_stack	*tmp;

	tmp = a;
	min = tmp->data;
	while (tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

int	ft_more_min(int min, t_stack *a)
{
	int		more;
	t_stack	*tmp;

	more = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->data > min)
			more = tmp->data;
		tmp = tmp->next;
	}
	while (a)
	{
		if (a->data > min && a->data < more)
			more = a->data;
		a = a->next;
	}
	return (more);
}

int	ft_khanad(t_stack *a)
{
	int		i;
	t_stack	*tmp;

	if (!a)
		return (0);
	tmp = a;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_set_index(int min, t_stack *a, int i)
{
	if (min == a->data)
		a->index = i;
}

void	ft_get_index(t_stack *a)
{
	int		min;
	t_stack	*tmp;
	int		i;

	tmp = a;
	min = ft_min(a);
	while (tmp)
	{
		ft_set_index(min, tmp, 1);
		tmp = tmp->next;
	}
	i = 2;
	tmp = a;
	while (tmp && i <= ft_khanad(a))
	{
		min = ft_more_min(min, a);
		while (tmp)
		{
			ft_set_index(min, tmp, i);
			tmp = tmp->next;
		}
		tmp = a;
		i++;
	}
}
