/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:18:31 by bsirikam          #+#    #+#             */
/*   Updated: 2023/03/03 21:04:32 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_same(t_stack *a)
{
	t_stack	*ptr;
	t_stack	*ptr2;

	ptr2 = a;
	while (ptr2 && ptr2->next)
	{
		ptr = ptr2->next;
		while (ptr)
		{
			if (ptr2->data == ptr->data)
			{
				ft_putstr_fd("Error\n", 2);
				ft_free_stack(a);
				exit(EXIT_FAILURE);
			}
			ptr = ptr->next;
		}
		ptr2 = ptr2->next;
	}
}
