/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 19:45:38 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *a);

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

	while (a && a->next)
	{
		ptr = a;
		a = a->next;
		free(ptr);
	}
	free(a);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc < 2)
		ft_less_arg("Arguments are less than 2.");
	ft_check_arg(argv);
	a = yud_to_stack(argv);
	ft_check_same(a);
	ft_get_index(a);
	ft_select_arg(&a, &b);
	print(a);
	ft_free_stack(a);
	return (0);
}

void	print(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		ft_printf("%d -> ", tmp->data);
		tmp = tmp->next;
	}
	ft_printf("NULL\n");
}
