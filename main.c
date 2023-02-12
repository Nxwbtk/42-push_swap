/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/13 02:56:37 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_less_arg(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_SUCCESS);
}

t_stack	*yud_to_stack(char *argv[])
{
	int		i;
	int		j;
	char	**av;
	t_stack	*a;
	t_stack	*new;

	i = 1;
	a = NULL;
	while (argv[i])
	{
		j = 0;
		av = ft_split(argv[i], ' ');
		while (av[j])
		{
			new = ft_lst_mai(ft_atoi(av[j]));
			ft_add_back(&a, new);
			j++;
		}
		free_av(av);
		i++;
	}
	return (a);
}

void	ft_free_stack(t_stack *a)
{
	t_stack	*ptr;

	while (a)
	{
		ptr = a;
		a = a->next;
		free(ptr);
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc <= 2)
		ft_less_arg("Arguments are less than 3");
	ft_check_arg(argv);
	a = yud_to_stack(argv);
	ft_check_same(a);
	ft_get_index(a);
	ft_select_arg(a, b);
	ft_free_stack(a);
	return (0);
}
