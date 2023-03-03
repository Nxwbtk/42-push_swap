/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:06:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/03/04 02:04:38 by bsirikam         ###   ########.fr       */
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

void	error_arg(char **av)
{
	ft_putstr_fd("Error\n", 2);
	free_av(av);
	exit(EXIT_SUCCESS);
}

void	oak(void)
{
	exit(EXIT_SUCCESS);
}

void	loop(char **av, int j)
{
	int	x;

	x = 0;
	while (av[j][x])
	{
		if (av[j][x] == '-' || av[j][x] == ' ' || ft_isdigit(av[j][x]))
		{
			if ((av[j][x] == '-' && !(av[j][x + 1])) || \
			(av[j][x] == '-' && av[j][x + 1] == '-'))
			{
				error_arg(av);
			}
			x++;
		}
		else
			error_arg(av);
	}
}

void	ft_check_arg(char *argv[])
{
	int		i;
	int		j;
	char	**av;

	i = 0;
	ft_check_argv(argv);
	if (!argv[i + 1])
		exit(EXIT_FAILURE);
	while (argv[i] && argv[i + 1])
	{
		j = 0;
		av = ft_split(argv[i + 1], ' ');
		while (av[j])
		{
			loop(av, j);
			j++;
		}
		free_av(av);
		i++;
	}
}
