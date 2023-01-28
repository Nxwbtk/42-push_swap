/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:40:03 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/28 15:13:31 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back(t_stack **old, t_stack *newlst)
{
	t_stack	*last;

	if (old && newlst)
	{
		if (!(*old))
			*old = newlst;
		else
		{
			last = ft_lst_last(*old);
			last->next = newlst;
		}
	}
}
