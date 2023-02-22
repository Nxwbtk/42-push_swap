/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:06:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/22 11:08:09 by bsirikam         ###   ########.fr       */
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
	ft_putstr_fd(str, 2);
	free_av(av);
	exit(EXIT_SUCCESS);
}

void	oak(void)
{
	ft_printf("No argrument.\n");
	exit(EXIT_SUCCESS);
}

void	loop(char **av, int j)
{
	int	x;
	int	minus;

	x = 0;
	minus = 0;
	while (av[j][x])
	{
		if (av[j][x] == '-' || av[j][x] == ' ' || ft_isdigit(av[j][x]))
		{
			if (av[j][x] == '-' && !av[j][x + 1])
			{
				minus++;
				if (minus > 1)
					error_arg(av, "Error\n");
			}
			x++;
		}
		else
			error_arg(av, "Error\n");
	}
}

void	ft_check_arg(char *argv[])
{
	int		i;
	int		j;
	char	**av;

	i = 0;
	if (!argv[1][0])
		oak();
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
