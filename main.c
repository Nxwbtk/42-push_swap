/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/28 16:34:13 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_less_arg(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_SUCCESS);
}

void	yud_to_stack(char *argv[], t_stack *a)
{
	int		i;
	t_stack	*new;

	i = 2;
	while (argv[i])
	{
		new = ft_lst_mai(ft_atoi(argv[i]));
		ft_add_back(&a, new);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*a;

	if (argc <= 2)
		ft_less_arg("Arguments are less than 3");
	ft_check_arg(argv);
	a = ft_lst_mai(ft_atoi(argv[1]));
	yud_to_stack(argv, a);
	ft_check_same(a);
	t_stack	*pr = a;
	while (pr)
	{
		ft_printf("a = %d\n", pr->data);
		pr = pr->next;
	}
	t_stack	*ptr;
	while (a)
	{
		ptr = a;
		a = a->next;
		free(ptr);
	}
	return (0);
}
