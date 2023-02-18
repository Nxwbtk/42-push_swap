/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:18:31 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 23:38:30 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_same(t_stack *a)
{
	t_stack	*ptr;

	while (a && a->next)
	{
		ptr = a->next;
		while (ptr)
		{
			if (a->data == ptr->data)
			{
				ft_putstr_fd("Error\n", 2);
				free(a);
				exit(EXIT_SUCCESS);
			}
			ptr = ptr->next;
		}
		a = a->next;
	}
}
