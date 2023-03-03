/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/03/04 02:09:02 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *a);

void	ft_less_arg(void)
{
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

	a = NULL;
	b = NULL;
	if (argc < 2)
		ft_less_arg();
	ft_check_arg(argv);
	a = yud_to_stack(argv);
	ft_check_same(a);
	ft_get_index(a);
	if (ft_khanad(a) == 1)
		end_program(a);
	if (check_sort(a) == 1)
		end_program(a);
	if (check_sort(a))
		end_program(a);
	ft_select_arg(&a, &b);
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
