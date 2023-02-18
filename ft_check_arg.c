/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:06:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/17 19:12:33 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_av(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

void	error_arg(char **av, char *str)
{
	ft_printf("%s", str);
	free_av(av);
	exit(EXIT_SUCCESS);
}

void	loop_check(int j, int x, char **av)
{
	while (av[j])
	{
		x = 0;
		while (av[j][x])
		{
			if (av[j][x] == '-' || av[j][x] == ' ' || ft_isdigit(av[j][x]))
				x++;
			else
				error_arg(av, "Error argrument is not number.\n");
		}
		j++;
	}
	if (j == 1 && x == 1)
		error_arg(av, "Argrument is less than 2.\n");
}

void	ft_check_arg(char *argv[])
{
	int		i;
	int		j;
	char	**av;
	int		x;

	i = 0;
	x = 0;
	if (!argv[1][0])
	{
		ft_printf("No argrument.\n");
		exit(EXIT_SUCCESS);
	}
	while (argv[i] && argv[i + 1])
	{
		j = 0;
		av = ft_split(argv[i + 1], ' ');
		loop_check(j, x, av);
		free_av(av);
		i++;
	}
}
